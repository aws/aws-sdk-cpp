/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/kafka/KafkaClient.h>
#include <aws/kafka/KafkaEndpoint.h>
#include <aws/kafka/KafkaErrorMarshaller.h>
#include <aws/kafka/model/BatchAssociateScramSecretRequest.h>
#include <aws/kafka/model/CreateClusterRequest.h>
#include <aws/kafka/model/CreateClusterV2Request.h>
#include <aws/kafka/model/CreateConfigurationRequest.h>
#include <aws/kafka/model/DeleteClusterRequest.h>
#include <aws/kafka/model/DeleteConfigurationRequest.h>
#include <aws/kafka/model/DescribeClusterRequest.h>
#include <aws/kafka/model/DescribeClusterV2Request.h>
#include <aws/kafka/model/DescribeClusterOperationRequest.h>
#include <aws/kafka/model/DescribeConfigurationRequest.h>
#include <aws/kafka/model/DescribeConfigurationRevisionRequest.h>
#include <aws/kafka/model/BatchDisassociateScramSecretRequest.h>
#include <aws/kafka/model/GetBootstrapBrokersRequest.h>
#include <aws/kafka/model/GetCompatibleKafkaVersionsRequest.h>
#include <aws/kafka/model/ListClusterOperationsRequest.h>
#include <aws/kafka/model/ListClustersRequest.h>
#include <aws/kafka/model/ListClustersV2Request.h>
#include <aws/kafka/model/ListConfigurationRevisionsRequest.h>
#include <aws/kafka/model/ListConfigurationsRequest.h>
#include <aws/kafka/model/ListKafkaVersionsRequest.h>
#include <aws/kafka/model/ListNodesRequest.h>
#include <aws/kafka/model/ListScramSecretsRequest.h>
#include <aws/kafka/model/ListTagsForResourceRequest.h>
#include <aws/kafka/model/RebootBrokerRequest.h>
#include <aws/kafka/model/TagResourceRequest.h>
#include <aws/kafka/model/UntagResourceRequest.h>
#include <aws/kafka/model/UpdateBrokerCountRequest.h>
#include <aws/kafka/model/UpdateBrokerTypeRequest.h>
#include <aws/kafka/model/UpdateBrokerStorageRequest.h>
#include <aws/kafka/model/UpdateConfigurationRequest.h>
#include <aws/kafka/model/UpdateConnectivityRequest.h>
#include <aws/kafka/model/UpdateClusterConfigurationRequest.h>
#include <aws/kafka/model/UpdateClusterKafkaVersionRequest.h>
#include <aws/kafka/model/UpdateMonitoringRequest.h>
#include <aws/kafka/model/UpdateSecurityRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Kafka;
using namespace Aws::Kafka::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "kafka";
static const char* ALLOCATION_TAG = "KafkaClient";

KafkaClient::KafkaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KafkaClient::KafkaClient(const AWSCredentials& credentials,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KafkaClient::KafkaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KafkaClient::~KafkaClient()
{
}

void KafkaClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kafka");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + KafkaEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void KafkaClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

BatchAssociateScramSecretOutcome KafkaClient::BatchAssociateScramSecret(const BatchAssociateScramSecretRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchAssociateScramSecret", "Required field: ClusterArn, is not set");
    return BatchAssociateScramSecretOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/scram-secrets");
  return BatchAssociateScramSecretOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateScramSecretOutcomeCallable KafkaClient::BatchAssociateScramSecretCallable(const BatchAssociateScramSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateScramSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateScramSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientBatchAssociateScramSecretAsyncHelper(KafkaClient const * const clientThis, const BatchAssociateScramSecretRequest& request, const BatchAssociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchAssociateScramSecret(request), context);
}

void KafkaClient::BatchAssociateScramSecretAsync(const BatchAssociateScramSecretRequest& request, const BatchAssociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientBatchAssociateScramSecretAsyncHelper( this, request, handler, context ); } );
}

CreateClusterOutcome KafkaClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters");
  return CreateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClusterOutcomeCallable KafkaClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientCreateClusterAsyncHelper(KafkaClient const * const clientThis, const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCluster(request), context);
}

void KafkaClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientCreateClusterAsyncHelper( this, request, handler, context ); } );
}

CreateClusterV2Outcome KafkaClient::CreateClusterV2(const CreateClusterV2Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/api/v2/clusters");
  return CreateClusterV2Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClusterV2OutcomeCallable KafkaClient::CreateClusterV2Callable(const CreateClusterV2Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterV2Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClusterV2(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientCreateClusterV2AsyncHelper(KafkaClient const * const clientThis, const CreateClusterV2Request& request, const CreateClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateClusterV2(request), context);
}

void KafkaClient::CreateClusterV2Async(const CreateClusterV2Request& request, const CreateClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientCreateClusterV2AsyncHelper( this, request, handler, context ); } );
}

CreateConfigurationOutcome KafkaClient::CreateConfiguration(const CreateConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/configurations");
  return CreateConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigurationOutcomeCallable KafkaClient::CreateConfigurationCallable(const CreateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientCreateConfigurationAsyncHelper(KafkaClient const * const clientThis, const CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfiguration(request), context);
}

void KafkaClient::CreateConfigurationAsync(const CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientCreateConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteClusterOutcome KafkaClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: ClusterArn, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  return DeleteClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteClusterOutcomeCallable KafkaClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientDeleteClusterAsyncHelper(KafkaClient const * const clientThis, const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCluster(request), context);
}

void KafkaClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientDeleteClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationOutcome KafkaClient::DeleteConfiguration(const DeleteConfigurationRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguration", "Required field: Arn, is not set");
    return DeleteConfigurationOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/configurations/");
  uri.AddPathSegment(request.GetArn());
  return DeleteConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationOutcomeCallable KafkaClient::DeleteConfigurationCallable(const DeleteConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientDeleteConfigurationAsyncHelper(KafkaClient const * const clientThis, const DeleteConfigurationRequest& request, const DeleteConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfiguration(request), context);
}

void KafkaClient::DeleteConfigurationAsync(const DeleteConfigurationRequest& request, const DeleteConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientDeleteConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeClusterOutcome KafkaClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCluster", "Required field: ClusterArn, is not set");
    return DescribeClusterOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  return DescribeClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeClusterOutcomeCallable KafkaClient::DescribeClusterCallable(const DescribeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientDescribeClusterAsyncHelper(KafkaClient const * const clientThis, const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCluster(request), context);
}

void KafkaClient::DescribeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientDescribeClusterAsyncHelper( this, request, handler, context ); } );
}

DescribeClusterV2Outcome KafkaClient::DescribeClusterV2(const DescribeClusterV2Request& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeClusterV2", "Required field: ClusterArn, is not set");
    return DescribeClusterV2Outcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/api/v2/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  return DescribeClusterV2Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeClusterV2OutcomeCallable KafkaClient::DescribeClusterV2Callable(const DescribeClusterV2Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterV2Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusterV2(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientDescribeClusterV2AsyncHelper(KafkaClient const * const clientThis, const DescribeClusterV2Request& request, const DescribeClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeClusterV2(request), context);
}

void KafkaClient::DescribeClusterV2Async(const DescribeClusterV2Request& request, const DescribeClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientDescribeClusterV2AsyncHelper( this, request, handler, context ); } );
}

DescribeClusterOperationOutcome KafkaClient::DescribeClusterOperation(const DescribeClusterOperationRequest& request) const
{
  if (!request.ClusterOperationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeClusterOperation", "Required field: ClusterOperationArn, is not set");
    return DescribeClusterOperationOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterOperationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/operations/");
  uri.AddPathSegment(request.GetClusterOperationArn());
  return DescribeClusterOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeClusterOperationOutcomeCallable KafkaClient::DescribeClusterOperationCallable(const DescribeClusterOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClusterOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientDescribeClusterOperationAsyncHelper(KafkaClient const * const clientThis, const DescribeClusterOperationRequest& request, const DescribeClusterOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeClusterOperation(request), context);
}

void KafkaClient::DescribeClusterOperationAsync(const DescribeClusterOperationRequest& request, const DescribeClusterOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientDescribeClusterOperationAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigurationOutcome KafkaClient::DescribeConfiguration(const DescribeConfigurationRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeConfiguration", "Required field: Arn, is not set");
    return DescribeConfigurationOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/configurations/");
  uri.AddPathSegment(request.GetArn());
  return DescribeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigurationOutcomeCallable KafkaClient::DescribeConfigurationCallable(const DescribeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientDescribeConfigurationAsyncHelper(KafkaClient const * const clientThis, const DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfiguration(request), context);
}

void KafkaClient::DescribeConfigurationAsync(const DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientDescribeConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigurationRevisionOutcome KafkaClient::DescribeConfigurationRevision(const DescribeConfigurationRevisionRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeConfigurationRevision", "Required field: Arn, is not set");
    return DescribeConfigurationRevisionOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.RevisionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeConfigurationRevision", "Required field: Revision, is not set");
    return DescribeConfigurationRevisionOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Revision]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/configurations/");
  uri.AddPathSegment(request.GetArn());
  uri.AddPathSegments("/revisions/");
  uri.AddPathSegment(request.GetRevision());
  return DescribeConfigurationRevisionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigurationRevisionOutcomeCallable KafkaClient::DescribeConfigurationRevisionCallable(const DescribeConfigurationRevisionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientDescribeConfigurationRevisionAsyncHelper(KafkaClient const * const clientThis, const DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigurationRevision(request), context);
}

void KafkaClient::DescribeConfigurationRevisionAsync(const DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientDescribeConfigurationRevisionAsyncHelper( this, request, handler, context ); } );
}

BatchDisassociateScramSecretOutcome KafkaClient::BatchDisassociateScramSecret(const BatchDisassociateScramSecretRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDisassociateScramSecret", "Required field: ClusterArn, is not set");
    return BatchDisassociateScramSecretOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/scram-secrets");
  return BatchDisassociateScramSecretOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateScramSecretOutcomeCallable KafkaClient::BatchDisassociateScramSecretCallable(const BatchDisassociateScramSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateScramSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateScramSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientBatchDisassociateScramSecretAsyncHelper(KafkaClient const * const clientThis, const BatchDisassociateScramSecretRequest& request, const BatchDisassociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDisassociateScramSecret(request), context);
}

void KafkaClient::BatchDisassociateScramSecretAsync(const BatchDisassociateScramSecretRequest& request, const BatchDisassociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientBatchDisassociateScramSecretAsyncHelper( this, request, handler, context ); } );
}

GetBootstrapBrokersOutcome KafkaClient::GetBootstrapBrokers(const GetBootstrapBrokersRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBootstrapBrokers", "Required field: ClusterArn, is not set");
    return GetBootstrapBrokersOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/bootstrap-brokers");
  return GetBootstrapBrokersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBootstrapBrokersOutcomeCallable KafkaClient::GetBootstrapBrokersCallable(const GetBootstrapBrokersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBootstrapBrokersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBootstrapBrokers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientGetBootstrapBrokersAsyncHelper(KafkaClient const * const clientThis, const GetBootstrapBrokersRequest& request, const GetBootstrapBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBootstrapBrokers(request), context);
}

void KafkaClient::GetBootstrapBrokersAsync(const GetBootstrapBrokersRequest& request, const GetBootstrapBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientGetBootstrapBrokersAsyncHelper( this, request, handler, context ); } );
}

GetCompatibleKafkaVersionsOutcome KafkaClient::GetCompatibleKafkaVersions(const GetCompatibleKafkaVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/compatible-kafka-versions");
  return GetCompatibleKafkaVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCompatibleKafkaVersionsOutcomeCallable KafkaClient::GetCompatibleKafkaVersionsCallable(const GetCompatibleKafkaVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCompatibleKafkaVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCompatibleKafkaVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientGetCompatibleKafkaVersionsAsyncHelper(KafkaClient const * const clientThis, const GetCompatibleKafkaVersionsRequest& request, const GetCompatibleKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCompatibleKafkaVersions(request), context);
}

void KafkaClient::GetCompatibleKafkaVersionsAsync(const GetCompatibleKafkaVersionsRequest& request, const GetCompatibleKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientGetCompatibleKafkaVersionsAsyncHelper( this, request, handler, context ); } );
}

ListClusterOperationsOutcome KafkaClient::ListClusterOperations(const ListClusterOperationsRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListClusterOperations", "Required field: ClusterArn, is not set");
    return ListClusterOperationsOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/operations");
  return ListClusterOperationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListClusterOperationsOutcomeCallable KafkaClient::ListClusterOperationsCallable(const ListClusterOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClusterOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusterOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientListClusterOperationsAsyncHelper(KafkaClient const * const clientThis, const ListClusterOperationsRequest& request, const ListClusterOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClusterOperations(request), context);
}

void KafkaClient::ListClusterOperationsAsync(const ListClusterOperationsRequest& request, const ListClusterOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientListClusterOperationsAsyncHelper( this, request, handler, context ); } );
}

ListClustersOutcome KafkaClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters");
  return ListClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListClustersOutcomeCallable KafkaClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientListClustersAsyncHelper(KafkaClient const * const clientThis, const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClusters(request), context);
}

void KafkaClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientListClustersAsyncHelper( this, request, handler, context ); } );
}

ListClustersV2Outcome KafkaClient::ListClustersV2(const ListClustersV2Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/api/v2/clusters");
  return ListClustersV2Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListClustersV2OutcomeCallable KafkaClient::ListClustersV2Callable(const ListClustersV2Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersV2Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClustersV2(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientListClustersV2AsyncHelper(KafkaClient const * const clientThis, const ListClustersV2Request& request, const ListClustersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClustersV2(request), context);
}

void KafkaClient::ListClustersV2Async(const ListClustersV2Request& request, const ListClustersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientListClustersV2AsyncHelper( this, request, handler, context ); } );
}

ListConfigurationRevisionsOutcome KafkaClient::ListConfigurationRevisions(const ListConfigurationRevisionsRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConfigurationRevisions", "Required field: Arn, is not set");
    return ListConfigurationRevisionsOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/configurations/");
  uri.AddPathSegment(request.GetArn());
  uri.AddPathSegments("/revisions");
  return ListConfigurationRevisionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationRevisionsOutcomeCallable KafkaClient::ListConfigurationRevisionsCallable(const ListConfigurationRevisionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurationRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientListConfigurationRevisionsAsyncHelper(KafkaClient const * const clientThis, const ListConfigurationRevisionsRequest& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConfigurationRevisions(request), context);
}

void KafkaClient::ListConfigurationRevisionsAsync(const ListConfigurationRevisionsRequest& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientListConfigurationRevisionsAsyncHelper( this, request, handler, context ); } );
}

ListConfigurationsOutcome KafkaClient::ListConfigurations(const ListConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/configurations");
  return ListConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationsOutcomeCallable KafkaClient::ListConfigurationsCallable(const ListConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientListConfigurationsAsyncHelper(KafkaClient const * const clientThis, const ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConfigurations(request), context);
}

void KafkaClient::ListConfigurationsAsync(const ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientListConfigurationsAsyncHelper( this, request, handler, context ); } );
}

ListKafkaVersionsOutcome KafkaClient::ListKafkaVersions(const ListKafkaVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/kafka-versions");
  return ListKafkaVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListKafkaVersionsOutcomeCallable KafkaClient::ListKafkaVersionsCallable(const ListKafkaVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKafkaVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKafkaVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientListKafkaVersionsAsyncHelper(KafkaClient const * const clientThis, const ListKafkaVersionsRequest& request, const ListKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListKafkaVersions(request), context);
}

void KafkaClient::ListKafkaVersionsAsync(const ListKafkaVersionsRequest& request, const ListKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientListKafkaVersionsAsyncHelper( this, request, handler, context ); } );
}

ListNodesOutcome KafkaClient::ListNodes(const ListNodesRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNodes", "Required field: ClusterArn, is not set");
    return ListNodesOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/nodes");
  return ListNodesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNodesOutcomeCallable KafkaClient::ListNodesCallable(const ListNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientListNodesAsyncHelper(KafkaClient const * const clientThis, const ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNodes(request), context);
}

void KafkaClient::ListNodesAsync(const ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientListNodesAsyncHelper( this, request, handler, context ); } );
}

ListScramSecretsOutcome KafkaClient::ListScramSecrets(const ListScramSecretsRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListScramSecrets", "Required field: ClusterArn, is not set");
    return ListScramSecretsOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/scram-secrets");
  return ListScramSecretsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListScramSecretsOutcomeCallable KafkaClient::ListScramSecretsCallable(const ListScramSecretsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListScramSecretsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListScramSecrets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientListScramSecretsAsyncHelper(KafkaClient const * const clientThis, const ListScramSecretsRequest& request, const ListScramSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListScramSecrets(request), context);
}

void KafkaClient::ListScramSecretsAsync(const ListScramSecretsRequest& request, const ListScramSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientListScramSecretsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome KafkaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable KafkaClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientListTagsForResourceAsyncHelper(KafkaClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void KafkaClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

RebootBrokerOutcome KafkaClient::RebootBroker(const RebootBrokerRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RebootBroker", "Required field: ClusterArn, is not set");
    return RebootBrokerOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/reboot-broker");
  return RebootBrokerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RebootBrokerOutcomeCallable KafkaClient::RebootBrokerCallable(const RebootBrokerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootBrokerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootBroker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientRebootBrokerAsyncHelper(KafkaClient const * const clientThis, const RebootBrokerRequest& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootBroker(request), context);
}

void KafkaClient::RebootBrokerAsync(const RebootBrokerRequest& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientRebootBrokerAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome KafkaClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable KafkaClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientTagResourceAsyncHelper(KafkaClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void KafkaClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome KafkaClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable KafkaClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientUntagResourceAsyncHelper(KafkaClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void KafkaClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateBrokerCountOutcome KafkaClient::UpdateBrokerCount(const UpdateBrokerCountRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrokerCount", "Required field: ClusterArn, is not set");
    return UpdateBrokerCountOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/nodes/count");
  return UpdateBrokerCountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateBrokerCountOutcomeCallable KafkaClient::UpdateBrokerCountCallable(const UpdateBrokerCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBrokerCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBrokerCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientUpdateBrokerCountAsyncHelper(KafkaClient const * const clientThis, const UpdateBrokerCountRequest& request, const UpdateBrokerCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBrokerCount(request), context);
}

void KafkaClient::UpdateBrokerCountAsync(const UpdateBrokerCountRequest& request, const UpdateBrokerCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientUpdateBrokerCountAsyncHelper( this, request, handler, context ); } );
}

UpdateBrokerTypeOutcome KafkaClient::UpdateBrokerType(const UpdateBrokerTypeRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrokerType", "Required field: ClusterArn, is not set");
    return UpdateBrokerTypeOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/nodes/type");
  return UpdateBrokerTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateBrokerTypeOutcomeCallable KafkaClient::UpdateBrokerTypeCallable(const UpdateBrokerTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBrokerTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBrokerType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientUpdateBrokerTypeAsyncHelper(KafkaClient const * const clientThis, const UpdateBrokerTypeRequest& request, const UpdateBrokerTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBrokerType(request), context);
}

void KafkaClient::UpdateBrokerTypeAsync(const UpdateBrokerTypeRequest& request, const UpdateBrokerTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientUpdateBrokerTypeAsyncHelper( this, request, handler, context ); } );
}

UpdateBrokerStorageOutcome KafkaClient::UpdateBrokerStorage(const UpdateBrokerStorageRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrokerStorage", "Required field: ClusterArn, is not set");
    return UpdateBrokerStorageOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/nodes/storage");
  return UpdateBrokerStorageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateBrokerStorageOutcomeCallable KafkaClient::UpdateBrokerStorageCallable(const UpdateBrokerStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBrokerStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBrokerStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientUpdateBrokerStorageAsyncHelper(KafkaClient const * const clientThis, const UpdateBrokerStorageRequest& request, const UpdateBrokerStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBrokerStorage(request), context);
}

void KafkaClient::UpdateBrokerStorageAsync(const UpdateBrokerStorageRequest& request, const UpdateBrokerStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientUpdateBrokerStorageAsyncHelper( this, request, handler, context ); } );
}

UpdateConfigurationOutcome KafkaClient::UpdateConfiguration(const UpdateConfigurationRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguration", "Required field: Arn, is not set");
    return UpdateConfigurationOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/configurations/");
  uri.AddPathSegment(request.GetArn());
  return UpdateConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfigurationOutcomeCallable KafkaClient::UpdateConfigurationCallable(const UpdateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientUpdateConfigurationAsyncHelper(KafkaClient const * const clientThis, const UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConfiguration(request), context);
}

void KafkaClient::UpdateConfigurationAsync(const UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientUpdateConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateConnectivityOutcome KafkaClient::UpdateConnectivity(const UpdateConnectivityRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConnectivity", "Required field: ClusterArn, is not set");
    return UpdateConnectivityOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/connectivity");
  return UpdateConnectivityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectivityOutcomeCallable KafkaClient::UpdateConnectivityCallable(const UpdateConnectivityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectivityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnectivity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientUpdateConnectivityAsyncHelper(KafkaClient const * const clientThis, const UpdateConnectivityRequest& request, const UpdateConnectivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConnectivity(request), context);
}

void KafkaClient::UpdateConnectivityAsync(const UpdateConnectivityRequest& request, const UpdateConnectivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientUpdateConnectivityAsyncHelper( this, request, handler, context ); } );
}

UpdateClusterConfigurationOutcome KafkaClient::UpdateClusterConfiguration(const UpdateClusterConfigurationRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClusterConfiguration", "Required field: ClusterArn, is not set");
    return UpdateClusterConfigurationOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/configuration");
  return UpdateClusterConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterConfigurationOutcomeCallable KafkaClient::UpdateClusterConfigurationCallable(const UpdateClusterConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClusterConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientUpdateClusterConfigurationAsyncHelper(KafkaClient const * const clientThis, const UpdateClusterConfigurationRequest& request, const UpdateClusterConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateClusterConfiguration(request), context);
}

void KafkaClient::UpdateClusterConfigurationAsync(const UpdateClusterConfigurationRequest& request, const UpdateClusterConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientUpdateClusterConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateClusterKafkaVersionOutcome KafkaClient::UpdateClusterKafkaVersion(const UpdateClusterKafkaVersionRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClusterKafkaVersion", "Required field: ClusterArn, is not set");
    return UpdateClusterKafkaVersionOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/version");
  return UpdateClusterKafkaVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterKafkaVersionOutcomeCallable KafkaClient::UpdateClusterKafkaVersionCallable(const UpdateClusterKafkaVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterKafkaVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClusterKafkaVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientUpdateClusterKafkaVersionAsyncHelper(KafkaClient const * const clientThis, const UpdateClusterKafkaVersionRequest& request, const UpdateClusterKafkaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateClusterKafkaVersion(request), context);
}

void KafkaClient::UpdateClusterKafkaVersionAsync(const UpdateClusterKafkaVersionRequest& request, const UpdateClusterKafkaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientUpdateClusterKafkaVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateMonitoringOutcome KafkaClient::UpdateMonitoring(const UpdateMonitoringRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMonitoring", "Required field: ClusterArn, is not set");
    return UpdateMonitoringOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/monitoring");
  return UpdateMonitoringOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateMonitoringOutcomeCallable KafkaClient::UpdateMonitoringCallable(const UpdateMonitoringRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMonitoringOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMonitoring(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientUpdateMonitoringAsyncHelper(KafkaClient const * const clientThis, const UpdateMonitoringRequest& request, const UpdateMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMonitoring(request), context);
}

void KafkaClient::UpdateMonitoringAsync(const UpdateMonitoringRequest& request, const UpdateMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientUpdateMonitoringAsyncHelper( this, request, handler, context ); } );
}

UpdateSecurityOutcome KafkaClient::UpdateSecurity(const UpdateSecurityRequest& request) const
{
  if (!request.ClusterArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSecurity", "Required field: ClusterArn, is not set");
    return UpdateSecurityOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/clusters/");
  uri.AddPathSegment(request.GetClusterArn());
  uri.AddPathSegments("/security");
  return UpdateSecurityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecurityOutcomeCallable KafkaClient::UpdateSecurityCallable(const UpdateSecurityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecurityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecurity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaClientUpdateSecurityAsyncHelper(KafkaClient const * const clientThis, const UpdateSecurityRequest& request, const UpdateSecurityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSecurity(request), context);
}

void KafkaClient::UpdateSecurityAsync(const UpdateSecurityRequest& request, const UpdateSecurityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KafkaClientUpdateSecurityAsyncHelper( this, request, handler, context ); } );
}

