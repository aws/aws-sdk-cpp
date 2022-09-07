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

#include <aws/logs/CloudWatchLogsClient.h>
#include <aws/logs/CloudWatchLogsEndpoint.h>
#include <aws/logs/CloudWatchLogsErrorMarshaller.h>
#include <aws/logs/model/AssociateKmsKeyRequest.h>
#include <aws/logs/model/CancelExportTaskRequest.h>
#include <aws/logs/model/CreateExportTaskRequest.h>
#include <aws/logs/model/CreateLogGroupRequest.h>
#include <aws/logs/model/CreateLogStreamRequest.h>
#include <aws/logs/model/DeleteDestinationRequest.h>
#include <aws/logs/model/DeleteLogGroupRequest.h>
#include <aws/logs/model/DeleteLogStreamRequest.h>
#include <aws/logs/model/DeleteMetricFilterRequest.h>
#include <aws/logs/model/DeleteQueryDefinitionRequest.h>
#include <aws/logs/model/DeleteResourcePolicyRequest.h>
#include <aws/logs/model/DeleteRetentionPolicyRequest.h>
#include <aws/logs/model/DeleteSubscriptionFilterRequest.h>
#include <aws/logs/model/DescribeDestinationsRequest.h>
#include <aws/logs/model/DescribeExportTasksRequest.h>
#include <aws/logs/model/DescribeLogGroupsRequest.h>
#include <aws/logs/model/DescribeLogStreamsRequest.h>
#include <aws/logs/model/DescribeMetricFiltersRequest.h>
#include <aws/logs/model/DescribeQueriesRequest.h>
#include <aws/logs/model/DescribeQueryDefinitionsRequest.h>
#include <aws/logs/model/DescribeResourcePoliciesRequest.h>
#include <aws/logs/model/DescribeSubscriptionFiltersRequest.h>
#include <aws/logs/model/DisassociateKmsKeyRequest.h>
#include <aws/logs/model/FilterLogEventsRequest.h>
#include <aws/logs/model/GetLogEventsRequest.h>
#include <aws/logs/model/GetLogGroupFieldsRequest.h>
#include <aws/logs/model/GetLogRecordRequest.h>
#include <aws/logs/model/GetQueryResultsRequest.h>
#include <aws/logs/model/ListTagsLogGroupRequest.h>
#include <aws/logs/model/PutDestinationRequest.h>
#include <aws/logs/model/PutDestinationPolicyRequest.h>
#include <aws/logs/model/PutLogEventsRequest.h>
#include <aws/logs/model/PutMetricFilterRequest.h>
#include <aws/logs/model/PutQueryDefinitionRequest.h>
#include <aws/logs/model/PutResourcePolicyRequest.h>
#include <aws/logs/model/PutRetentionPolicyRequest.h>
#include <aws/logs/model/PutSubscriptionFilterRequest.h>
#include <aws/logs/model/StartQueryRequest.h>
#include <aws/logs/model/StopQueryRequest.h>
#include <aws/logs/model/TagLogGroupRequest.h>
#include <aws/logs/model/TestMetricFilterRequest.h>
#include <aws/logs/model/UntagLogGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchLogs;
using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "logs";
static const char* ALLOCATION_TAG = "CloudWatchLogsClient";

CloudWatchLogsClient::CloudWatchLogsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::~CloudWatchLogsClient()
{
}

void CloudWatchLogsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudWatch Logs");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudWatchLogsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudWatchLogsClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateKmsKeyOutcome CloudWatchLogsClient::AssociateKmsKey(const AssociateKmsKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateKmsKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateKmsKeyOutcomeCallable CloudWatchLogsClient::AssociateKmsKeyCallable(const AssociateKmsKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateKmsKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateKmsKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientAssociateKmsKeyAsyncHelper(CloudWatchLogsClient const * const clientThis, const AssociateKmsKeyRequest& request, const AssociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateKmsKey(request), context);
}

void CloudWatchLogsClient::AssociateKmsKeyAsync(const AssociateKmsKeyRequest& request, const AssociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientAssociateKmsKeyAsyncHelper( this, request, handler, context ); } );
}

CancelExportTaskOutcome CloudWatchLogsClient::CancelExportTask(const CancelExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelExportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelExportTaskOutcomeCallable CloudWatchLogsClient::CancelExportTaskCallable(const CancelExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientCancelExportTaskAsyncHelper(CloudWatchLogsClient const * const clientThis, const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelExportTask(request), context);
}

void CloudWatchLogsClient::CancelExportTaskAsync(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientCancelExportTaskAsyncHelper( this, request, handler, context ); } );
}

CreateExportTaskOutcome CloudWatchLogsClient::CreateExportTask(const CreateExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateExportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExportTaskOutcomeCallable CloudWatchLogsClient::CreateExportTaskCallable(const CreateExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientCreateExportTaskAsyncHelper(CloudWatchLogsClient const * const clientThis, const CreateExportTaskRequest& request, const CreateExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateExportTask(request), context);
}

void CloudWatchLogsClient::CreateExportTaskAsync(const CreateExportTaskRequest& request, const CreateExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientCreateExportTaskAsyncHelper( this, request, handler, context ); } );
}

CreateLogGroupOutcome CloudWatchLogsClient::CreateLogGroup(const CreateLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLogGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLogGroupOutcomeCallable CloudWatchLogsClient::CreateLogGroupCallable(const CreateLogGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLogGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLogGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientCreateLogGroupAsyncHelper(CloudWatchLogsClient const * const clientThis, const CreateLogGroupRequest& request, const CreateLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLogGroup(request), context);
}

void CloudWatchLogsClient::CreateLogGroupAsync(const CreateLogGroupRequest& request, const CreateLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientCreateLogGroupAsyncHelper( this, request, handler, context ); } );
}

CreateLogStreamOutcome CloudWatchLogsClient::CreateLogStream(const CreateLogStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLogStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLogStreamOutcomeCallable CloudWatchLogsClient::CreateLogStreamCallable(const CreateLogStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLogStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLogStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientCreateLogStreamAsyncHelper(CloudWatchLogsClient const * const clientThis, const CreateLogStreamRequest& request, const CreateLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLogStream(request), context);
}

void CloudWatchLogsClient::CreateLogStreamAsync(const CreateLogStreamRequest& request, const CreateLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientCreateLogStreamAsyncHelper( this, request, handler, context ); } );
}

DeleteDestinationOutcome CloudWatchLogsClient::DeleteDestination(const DeleteDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDestinationOutcomeCallable CloudWatchLogsClient::DeleteDestinationCallable(const DeleteDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDeleteDestinationAsyncHelper(CloudWatchLogsClient const * const clientThis, const DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDestination(request), context);
}

void CloudWatchLogsClient::DeleteDestinationAsync(const DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDeleteDestinationAsyncHelper( this, request, handler, context ); } );
}

DeleteLogGroupOutcome CloudWatchLogsClient::DeleteLogGroup(const DeleteLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLogGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLogGroupOutcomeCallable CloudWatchLogsClient::DeleteLogGroupCallable(const DeleteLogGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLogGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLogGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDeleteLogGroupAsyncHelper(CloudWatchLogsClient const * const clientThis, const DeleteLogGroupRequest& request, const DeleteLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLogGroup(request), context);
}

void CloudWatchLogsClient::DeleteLogGroupAsync(const DeleteLogGroupRequest& request, const DeleteLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDeleteLogGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteLogStreamOutcome CloudWatchLogsClient::DeleteLogStream(const DeleteLogStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLogStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLogStreamOutcomeCallable CloudWatchLogsClient::DeleteLogStreamCallable(const DeleteLogStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLogStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLogStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDeleteLogStreamAsyncHelper(CloudWatchLogsClient const * const clientThis, const DeleteLogStreamRequest& request, const DeleteLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLogStream(request), context);
}

void CloudWatchLogsClient::DeleteLogStreamAsync(const DeleteLogStreamRequest& request, const DeleteLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDeleteLogStreamAsyncHelper( this, request, handler, context ); } );
}

DeleteMetricFilterOutcome CloudWatchLogsClient::DeleteMetricFilter(const DeleteMetricFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMetricFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMetricFilterOutcomeCallable CloudWatchLogsClient::DeleteMetricFilterCallable(const DeleteMetricFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMetricFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMetricFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDeleteMetricFilterAsyncHelper(CloudWatchLogsClient const * const clientThis, const DeleteMetricFilterRequest& request, const DeleteMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMetricFilter(request), context);
}

void CloudWatchLogsClient::DeleteMetricFilterAsync(const DeleteMetricFilterRequest& request, const DeleteMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDeleteMetricFilterAsyncHelper( this, request, handler, context ); } );
}

DeleteQueryDefinitionOutcome CloudWatchLogsClient::DeleteQueryDefinition(const DeleteQueryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteQueryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteQueryDefinitionOutcomeCallable CloudWatchLogsClient::DeleteQueryDefinitionCallable(const DeleteQueryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteQueryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQueryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDeleteQueryDefinitionAsyncHelper(CloudWatchLogsClient const * const clientThis, const DeleteQueryDefinitionRequest& request, const DeleteQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteQueryDefinition(request), context);
}

void CloudWatchLogsClient::DeleteQueryDefinitionAsync(const DeleteQueryDefinitionRequest& request, const DeleteQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDeleteQueryDefinitionAsyncHelper( this, request, handler, context ); } );
}

DeleteResourcePolicyOutcome CloudWatchLogsClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable CloudWatchLogsClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDeleteResourcePolicyAsyncHelper(CloudWatchLogsClient const * const clientThis, const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourcePolicy(request), context);
}

void CloudWatchLogsClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDeleteResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteRetentionPolicyOutcome CloudWatchLogsClient::DeleteRetentionPolicy(const DeleteRetentionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRetentionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRetentionPolicyOutcomeCallable CloudWatchLogsClient::DeleteRetentionPolicyCallable(const DeleteRetentionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRetentionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRetentionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDeleteRetentionPolicyAsyncHelper(CloudWatchLogsClient const * const clientThis, const DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRetentionPolicy(request), context);
}

void CloudWatchLogsClient::DeleteRetentionPolicyAsync(const DeleteRetentionPolicyRequest& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDeleteRetentionPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteSubscriptionFilterOutcome CloudWatchLogsClient::DeleteSubscriptionFilter(const DeleteSubscriptionFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSubscriptionFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSubscriptionFilterOutcomeCallable CloudWatchLogsClient::DeleteSubscriptionFilterCallable(const DeleteSubscriptionFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubscriptionFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSubscriptionFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDeleteSubscriptionFilterAsyncHelper(CloudWatchLogsClient const * const clientThis, const DeleteSubscriptionFilterRequest& request, const DeleteSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSubscriptionFilter(request), context);
}

void CloudWatchLogsClient::DeleteSubscriptionFilterAsync(const DeleteSubscriptionFilterRequest& request, const DeleteSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDeleteSubscriptionFilterAsyncHelper( this, request, handler, context ); } );
}

DescribeDestinationsOutcome CloudWatchLogsClient::DescribeDestinations(const DescribeDestinationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDestinationsOutcomeCallable CloudWatchLogsClient::DescribeDestinationsCallable(const DescribeDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDescribeDestinationsAsyncHelper(CloudWatchLogsClient const * const clientThis, const DescribeDestinationsRequest& request, const DescribeDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDestinations(request), context);
}

void CloudWatchLogsClient::DescribeDestinationsAsync(const DescribeDestinationsRequest& request, const DescribeDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDescribeDestinationsAsyncHelper( this, request, handler, context ); } );
}

DescribeExportTasksOutcome CloudWatchLogsClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExportTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExportTasksOutcomeCallable CloudWatchLogsClient::DescribeExportTasksCallable(const DescribeExportTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExportTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExportTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDescribeExportTasksAsyncHelper(CloudWatchLogsClient const * const clientThis, const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeExportTasks(request), context);
}

void CloudWatchLogsClient::DescribeExportTasksAsync(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDescribeExportTasksAsyncHelper( this, request, handler, context ); } );
}

DescribeLogGroupsOutcome CloudWatchLogsClient::DescribeLogGroups(const DescribeLogGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLogGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLogGroupsOutcomeCallable CloudWatchLogsClient::DescribeLogGroupsCallable(const DescribeLogGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLogGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLogGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDescribeLogGroupsAsyncHelper(CloudWatchLogsClient const * const clientThis, const DescribeLogGroupsRequest& request, const DescribeLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLogGroups(request), context);
}

void CloudWatchLogsClient::DescribeLogGroupsAsync(const DescribeLogGroupsRequest& request, const DescribeLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDescribeLogGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeLogStreamsOutcome CloudWatchLogsClient::DescribeLogStreams(const DescribeLogStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLogStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLogStreamsOutcomeCallable CloudWatchLogsClient::DescribeLogStreamsCallable(const DescribeLogStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLogStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLogStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDescribeLogStreamsAsyncHelper(CloudWatchLogsClient const * const clientThis, const DescribeLogStreamsRequest& request, const DescribeLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLogStreams(request), context);
}

void CloudWatchLogsClient::DescribeLogStreamsAsync(const DescribeLogStreamsRequest& request, const DescribeLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDescribeLogStreamsAsyncHelper( this, request, handler, context ); } );
}

DescribeMetricFiltersOutcome CloudWatchLogsClient::DescribeMetricFilters(const DescribeMetricFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMetricFiltersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMetricFiltersOutcomeCallable CloudWatchLogsClient::DescribeMetricFiltersCallable(const DescribeMetricFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMetricFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMetricFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDescribeMetricFiltersAsyncHelper(CloudWatchLogsClient const * const clientThis, const DescribeMetricFiltersRequest& request, const DescribeMetricFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMetricFilters(request), context);
}

void CloudWatchLogsClient::DescribeMetricFiltersAsync(const DescribeMetricFiltersRequest& request, const DescribeMetricFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDescribeMetricFiltersAsyncHelper( this, request, handler, context ); } );
}

DescribeQueriesOutcome CloudWatchLogsClient::DescribeQueries(const DescribeQueriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeQueriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeQueriesOutcomeCallable CloudWatchLogsClient::DescribeQueriesCallable(const DescribeQueriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeQueriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeQueries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDescribeQueriesAsyncHelper(CloudWatchLogsClient const * const clientThis, const DescribeQueriesRequest& request, const DescribeQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeQueries(request), context);
}

void CloudWatchLogsClient::DescribeQueriesAsync(const DescribeQueriesRequest& request, const DescribeQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDescribeQueriesAsyncHelper( this, request, handler, context ); } );
}

DescribeQueryDefinitionsOutcome CloudWatchLogsClient::DescribeQueryDefinitions(const DescribeQueryDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeQueryDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeQueryDefinitionsOutcomeCallable CloudWatchLogsClient::DescribeQueryDefinitionsCallable(const DescribeQueryDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeQueryDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeQueryDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDescribeQueryDefinitionsAsyncHelper(CloudWatchLogsClient const * const clientThis, const DescribeQueryDefinitionsRequest& request, const DescribeQueryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeQueryDefinitions(request), context);
}

void CloudWatchLogsClient::DescribeQueryDefinitionsAsync(const DescribeQueryDefinitionsRequest& request, const DescribeQueryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDescribeQueryDefinitionsAsyncHelper( this, request, handler, context ); } );
}

DescribeResourcePoliciesOutcome CloudWatchLogsClient::DescribeResourcePolicies(const DescribeResourcePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeResourcePoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourcePoliciesOutcomeCallable CloudWatchLogsClient::DescribeResourcePoliciesCallable(const DescribeResourcePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourcePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourcePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDescribeResourcePoliciesAsyncHelper(CloudWatchLogsClient const * const clientThis, const DescribeResourcePoliciesRequest& request, const DescribeResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeResourcePolicies(request), context);
}

void CloudWatchLogsClient::DescribeResourcePoliciesAsync(const DescribeResourcePoliciesRequest& request, const DescribeResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDescribeResourcePoliciesAsyncHelper( this, request, handler, context ); } );
}

DescribeSubscriptionFiltersOutcome CloudWatchLogsClient::DescribeSubscriptionFilters(const DescribeSubscriptionFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSubscriptionFiltersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSubscriptionFiltersOutcomeCallable CloudWatchLogsClient::DescribeSubscriptionFiltersCallable(const DescribeSubscriptionFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubscriptionFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubscriptionFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDescribeSubscriptionFiltersAsyncHelper(CloudWatchLogsClient const * const clientThis, const DescribeSubscriptionFiltersRequest& request, const DescribeSubscriptionFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSubscriptionFilters(request), context);
}

void CloudWatchLogsClient::DescribeSubscriptionFiltersAsync(const DescribeSubscriptionFiltersRequest& request, const DescribeSubscriptionFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDescribeSubscriptionFiltersAsyncHelper( this, request, handler, context ); } );
}

DisassociateKmsKeyOutcome CloudWatchLogsClient::DisassociateKmsKey(const DisassociateKmsKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateKmsKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateKmsKeyOutcomeCallable CloudWatchLogsClient::DisassociateKmsKeyCallable(const DisassociateKmsKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateKmsKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateKmsKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientDisassociateKmsKeyAsyncHelper(CloudWatchLogsClient const * const clientThis, const DisassociateKmsKeyRequest& request, const DisassociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateKmsKey(request), context);
}

void CloudWatchLogsClient::DisassociateKmsKeyAsync(const DisassociateKmsKeyRequest& request, const DisassociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientDisassociateKmsKeyAsyncHelper( this, request, handler, context ); } );
}

FilterLogEventsOutcome CloudWatchLogsClient::FilterLogEvents(const FilterLogEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return FilterLogEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

FilterLogEventsOutcomeCallable CloudWatchLogsClient::FilterLogEventsCallable(const FilterLogEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FilterLogEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FilterLogEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientFilterLogEventsAsyncHelper(CloudWatchLogsClient const * const clientThis, const FilterLogEventsRequest& request, const FilterLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FilterLogEvents(request), context);
}

void CloudWatchLogsClient::FilterLogEventsAsync(const FilterLogEventsRequest& request, const FilterLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientFilterLogEventsAsyncHelper( this, request, handler, context ); } );
}

GetLogEventsOutcome CloudWatchLogsClient::GetLogEvents(const GetLogEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLogEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLogEventsOutcomeCallable CloudWatchLogsClient::GetLogEventsCallable(const GetLogEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLogEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLogEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientGetLogEventsAsyncHelper(CloudWatchLogsClient const * const clientThis, const GetLogEventsRequest& request, const GetLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLogEvents(request), context);
}

void CloudWatchLogsClient::GetLogEventsAsync(const GetLogEventsRequest& request, const GetLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientGetLogEventsAsyncHelper( this, request, handler, context ); } );
}

GetLogGroupFieldsOutcome CloudWatchLogsClient::GetLogGroupFields(const GetLogGroupFieldsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLogGroupFieldsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLogGroupFieldsOutcomeCallable CloudWatchLogsClient::GetLogGroupFieldsCallable(const GetLogGroupFieldsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLogGroupFieldsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLogGroupFields(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientGetLogGroupFieldsAsyncHelper(CloudWatchLogsClient const * const clientThis, const GetLogGroupFieldsRequest& request, const GetLogGroupFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLogGroupFields(request), context);
}

void CloudWatchLogsClient::GetLogGroupFieldsAsync(const GetLogGroupFieldsRequest& request, const GetLogGroupFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientGetLogGroupFieldsAsyncHelper( this, request, handler, context ); } );
}

GetLogRecordOutcome CloudWatchLogsClient::GetLogRecord(const GetLogRecordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLogRecordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLogRecordOutcomeCallable CloudWatchLogsClient::GetLogRecordCallable(const GetLogRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLogRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLogRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientGetLogRecordAsyncHelper(CloudWatchLogsClient const * const clientThis, const GetLogRecordRequest& request, const GetLogRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLogRecord(request), context);
}

void CloudWatchLogsClient::GetLogRecordAsync(const GetLogRecordRequest& request, const GetLogRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientGetLogRecordAsyncHelper( this, request, handler, context ); } );
}

GetQueryResultsOutcome CloudWatchLogsClient::GetQueryResults(const GetQueryResultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetQueryResultsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQueryResultsOutcomeCallable CloudWatchLogsClient::GetQueryResultsCallable(const GetQueryResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientGetQueryResultsAsyncHelper(CloudWatchLogsClient const * const clientThis, const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQueryResults(request), context);
}

void CloudWatchLogsClient::GetQueryResultsAsync(const GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientGetQueryResultsAsyncHelper( this, request, handler, context ); } );
}

ListTagsLogGroupOutcome CloudWatchLogsClient::ListTagsLogGroup(const ListTagsLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsLogGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsLogGroupOutcomeCallable CloudWatchLogsClient::ListTagsLogGroupCallable(const ListTagsLogGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsLogGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsLogGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientListTagsLogGroupAsyncHelper(CloudWatchLogsClient const * const clientThis, const ListTagsLogGroupRequest& request, const ListTagsLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsLogGroup(request), context);
}

void CloudWatchLogsClient::ListTagsLogGroupAsync(const ListTagsLogGroupRequest& request, const ListTagsLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientListTagsLogGroupAsyncHelper( this, request, handler, context ); } );
}

PutDestinationOutcome CloudWatchLogsClient::PutDestination(const PutDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDestinationOutcomeCallable CloudWatchLogsClient::PutDestinationCallable(const PutDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientPutDestinationAsyncHelper(CloudWatchLogsClient const * const clientThis, const PutDestinationRequest& request, const PutDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDestination(request), context);
}

void CloudWatchLogsClient::PutDestinationAsync(const PutDestinationRequest& request, const PutDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientPutDestinationAsyncHelper( this, request, handler, context ); } );
}

PutDestinationPolicyOutcome CloudWatchLogsClient::PutDestinationPolicy(const PutDestinationPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutDestinationPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDestinationPolicyOutcomeCallable CloudWatchLogsClient::PutDestinationPolicyCallable(const PutDestinationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDestinationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDestinationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientPutDestinationPolicyAsyncHelper(CloudWatchLogsClient const * const clientThis, const PutDestinationPolicyRequest& request, const PutDestinationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDestinationPolicy(request), context);
}

void CloudWatchLogsClient::PutDestinationPolicyAsync(const PutDestinationPolicyRequest& request, const PutDestinationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientPutDestinationPolicyAsyncHelper( this, request, handler, context ); } );
}

PutLogEventsOutcome CloudWatchLogsClient::PutLogEvents(const PutLogEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutLogEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLogEventsOutcomeCallable CloudWatchLogsClient::PutLogEventsCallable(const PutLogEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLogEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLogEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientPutLogEventsAsyncHelper(CloudWatchLogsClient const * const clientThis, const PutLogEventsRequest& request, const PutLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutLogEvents(request), context);
}

void CloudWatchLogsClient::PutLogEventsAsync(const PutLogEventsRequest& request, const PutLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientPutLogEventsAsyncHelper( this, request, handler, context ); } );
}

PutMetricFilterOutcome CloudWatchLogsClient::PutMetricFilter(const PutMetricFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutMetricFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutMetricFilterOutcomeCallable CloudWatchLogsClient::PutMetricFilterCallable(const PutMetricFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetricFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetricFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientPutMetricFilterAsyncHelper(CloudWatchLogsClient const * const clientThis, const PutMetricFilterRequest& request, const PutMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutMetricFilter(request), context);
}

void CloudWatchLogsClient::PutMetricFilterAsync(const PutMetricFilterRequest& request, const PutMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientPutMetricFilterAsyncHelper( this, request, handler, context ); } );
}

PutQueryDefinitionOutcome CloudWatchLogsClient::PutQueryDefinition(const PutQueryDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutQueryDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutQueryDefinitionOutcomeCallable CloudWatchLogsClient::PutQueryDefinitionCallable(const PutQueryDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutQueryDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutQueryDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientPutQueryDefinitionAsyncHelper(CloudWatchLogsClient const * const clientThis, const PutQueryDefinitionRequest& request, const PutQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutQueryDefinition(request), context);
}

void CloudWatchLogsClient::PutQueryDefinitionAsync(const PutQueryDefinitionRequest& request, const PutQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientPutQueryDefinitionAsyncHelper( this, request, handler, context ); } );
}

PutResourcePolicyOutcome CloudWatchLogsClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable CloudWatchLogsClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientPutResourcePolicyAsyncHelper(CloudWatchLogsClient const * const clientThis, const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutResourcePolicy(request), context);
}

void CloudWatchLogsClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientPutResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

PutRetentionPolicyOutcome CloudWatchLogsClient::PutRetentionPolicy(const PutRetentionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRetentionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRetentionPolicyOutcomeCallable CloudWatchLogsClient::PutRetentionPolicyCallable(const PutRetentionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRetentionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRetentionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientPutRetentionPolicyAsyncHelper(CloudWatchLogsClient const * const clientThis, const PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRetentionPolicy(request), context);
}

void CloudWatchLogsClient::PutRetentionPolicyAsync(const PutRetentionPolicyRequest& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientPutRetentionPolicyAsyncHelper( this, request, handler, context ); } );
}

PutSubscriptionFilterOutcome CloudWatchLogsClient::PutSubscriptionFilter(const PutSubscriptionFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutSubscriptionFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutSubscriptionFilterOutcomeCallable CloudWatchLogsClient::PutSubscriptionFilterCallable(const PutSubscriptionFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSubscriptionFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSubscriptionFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientPutSubscriptionFilterAsyncHelper(CloudWatchLogsClient const * const clientThis, const PutSubscriptionFilterRequest& request, const PutSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutSubscriptionFilter(request), context);
}

void CloudWatchLogsClient::PutSubscriptionFilterAsync(const PutSubscriptionFilterRequest& request, const PutSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientPutSubscriptionFilterAsyncHelper( this, request, handler, context ); } );
}

StartQueryOutcome CloudWatchLogsClient::StartQuery(const StartQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartQueryOutcomeCallable CloudWatchLogsClient::StartQueryCallable(const StartQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientStartQueryAsyncHelper(CloudWatchLogsClient const * const clientThis, const StartQueryRequest& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartQuery(request), context);
}

void CloudWatchLogsClient::StartQueryAsync(const StartQueryRequest& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientStartQueryAsyncHelper( this, request, handler, context ); } );
}

StopQueryOutcome CloudWatchLogsClient::StopQuery(const StopQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopQueryOutcomeCallable CloudWatchLogsClient::StopQueryCallable(const StopQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientStopQueryAsyncHelper(CloudWatchLogsClient const * const clientThis, const StopQueryRequest& request, const StopQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopQuery(request), context);
}

void CloudWatchLogsClient::StopQueryAsync(const StopQueryRequest& request, const StopQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientStopQueryAsyncHelper( this, request, handler, context ); } );
}

TagLogGroupOutcome CloudWatchLogsClient::TagLogGroup(const TagLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagLogGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagLogGroupOutcomeCallable CloudWatchLogsClient::TagLogGroupCallable(const TagLogGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagLogGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagLogGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientTagLogGroupAsyncHelper(CloudWatchLogsClient const * const clientThis, const TagLogGroupRequest& request, const TagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagLogGroup(request), context);
}

void CloudWatchLogsClient::TagLogGroupAsync(const TagLogGroupRequest& request, const TagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientTagLogGroupAsyncHelper( this, request, handler, context ); } );
}

TestMetricFilterOutcome CloudWatchLogsClient::TestMetricFilter(const TestMetricFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestMetricFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestMetricFilterOutcomeCallable CloudWatchLogsClient::TestMetricFilterCallable(const TestMetricFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestMetricFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestMetricFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientTestMetricFilterAsyncHelper(CloudWatchLogsClient const * const clientThis, const TestMetricFilterRequest& request, const TestMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestMetricFilter(request), context);
}

void CloudWatchLogsClient::TestMetricFilterAsync(const TestMetricFilterRequest& request, const TestMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientTestMetricFilterAsyncHelper( this, request, handler, context ); } );
}

UntagLogGroupOutcome CloudWatchLogsClient::UntagLogGroup(const UntagLogGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagLogGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagLogGroupOutcomeCallable CloudWatchLogsClient::UntagLogGroupCallable(const UntagLogGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagLogGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagLogGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchLogsClientUntagLogGroupAsyncHelper(CloudWatchLogsClient const * const clientThis, const UntagLogGroupRequest& request, const UntagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagLogGroup(request), context);
}

void CloudWatchLogsClient::UntagLogGroupAsync(const UntagLogGroupRequest& request, const UntagLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchLogsClientUntagLogGroupAsyncHelper( this, request, handler, context ); } );
}

