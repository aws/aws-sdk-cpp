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

#include <aws/kafkaconnect/KafkaConnectClient.h>
#include <aws/kafkaconnect/KafkaConnectEndpoint.h>
#include <aws/kafkaconnect/KafkaConnectErrorMarshaller.h>
#include <aws/kafkaconnect/model/CreateConnectorRequest.h>
#include <aws/kafkaconnect/model/CreateCustomPluginRequest.h>
#include <aws/kafkaconnect/model/CreateWorkerConfigurationRequest.h>
#include <aws/kafkaconnect/model/DeleteConnectorRequest.h>
#include <aws/kafkaconnect/model/DeleteCustomPluginRequest.h>
#include <aws/kafkaconnect/model/DescribeConnectorRequest.h>
#include <aws/kafkaconnect/model/DescribeCustomPluginRequest.h>
#include <aws/kafkaconnect/model/DescribeWorkerConfigurationRequest.h>
#include <aws/kafkaconnect/model/ListConnectorsRequest.h>
#include <aws/kafkaconnect/model/ListCustomPluginsRequest.h>
#include <aws/kafkaconnect/model/ListWorkerConfigurationsRequest.h>
#include <aws/kafkaconnect/model/UpdateConnectorRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KafkaConnect;
using namespace Aws::KafkaConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "kafkaconnect";
static const char* ALLOCATION_TAG = "KafkaConnectClient";

KafkaConnectClient::KafkaConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KafkaConnectClient::KafkaConnectClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KafkaConnectClient::KafkaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KafkaConnectClient::~KafkaConnectClient()
{
}

void KafkaConnectClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("KafkaConnect");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + KafkaConnectEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void KafkaConnectClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateConnectorOutcome KafkaConnectClient::CreateConnector(const CreateConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/connectors");
  return CreateConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectorOutcomeCallable KafkaConnectClient::CreateConnectorCallable(const CreateConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::CreateConnectorAsync(const CreateConnectorRequest& request, const CreateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConnectorAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::CreateConnectorAsyncHelper(const CreateConnectorRequest& request, const CreateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConnector(request), context);
}

CreateCustomPluginOutcome KafkaConnectClient::CreateCustomPlugin(const CreateCustomPluginRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/custom-plugins");
  return CreateCustomPluginOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomPluginOutcomeCallable KafkaConnectClient::CreateCustomPluginCallable(const CreateCustomPluginRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomPluginOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomPlugin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::CreateCustomPluginAsync(const CreateCustomPluginRequest& request, const CreateCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCustomPluginAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::CreateCustomPluginAsyncHelper(const CreateCustomPluginRequest& request, const CreateCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomPlugin(request), context);
}

CreateWorkerConfigurationOutcome KafkaConnectClient::CreateWorkerConfiguration(const CreateWorkerConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/worker-configurations");
  return CreateWorkerConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkerConfigurationOutcomeCallable KafkaConnectClient::CreateWorkerConfigurationCallable(const CreateWorkerConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkerConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkerConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::CreateWorkerConfigurationAsync(const CreateWorkerConfigurationRequest& request, const CreateWorkerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorkerConfigurationAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::CreateWorkerConfigurationAsyncHelper(const CreateWorkerConfigurationRequest& request, const CreateWorkerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorkerConfiguration(request), context);
}

DeleteConnectorOutcome KafkaConnectClient::DeleteConnector(const DeleteConnectorRequest& request) const
{
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnector", "Required field: ConnectorArn, is not set");
    return DeleteConnectorOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/connectors/");
  uri.AddPathSegment(request.GetConnectorArn());
  return DeleteConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectorOutcomeCallable KafkaConnectClient::DeleteConnectorCallable(const DeleteConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::DeleteConnectorAsync(const DeleteConnectorRequest& request, const DeleteConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConnectorAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::DeleteConnectorAsyncHelper(const DeleteConnectorRequest& request, const DeleteConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConnector(request), context);
}

DeleteCustomPluginOutcome KafkaConnectClient::DeleteCustomPlugin(const DeleteCustomPluginRequest& request) const
{
  if (!request.CustomPluginArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomPlugin", "Required field: CustomPluginArn, is not set");
    return DeleteCustomPluginOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomPluginArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/custom-plugins/");
  uri.AddPathSegment(request.GetCustomPluginArn());
  return DeleteCustomPluginOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomPluginOutcomeCallable KafkaConnectClient::DeleteCustomPluginCallable(const DeleteCustomPluginRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomPluginOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomPlugin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::DeleteCustomPluginAsync(const DeleteCustomPluginRequest& request, const DeleteCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomPluginAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::DeleteCustomPluginAsyncHelper(const DeleteCustomPluginRequest& request, const DeleteCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomPlugin(request), context);
}

DescribeConnectorOutcome KafkaConnectClient::DescribeConnector(const DescribeConnectorRequest& request) const
{
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeConnector", "Required field: ConnectorArn, is not set");
    return DescribeConnectorOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/connectors/");
  uri.AddPathSegment(request.GetConnectorArn());
  return DescribeConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectorOutcomeCallable KafkaConnectClient::DescribeConnectorCallable(const DescribeConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::DescribeConnectorAsync(const DescribeConnectorRequest& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConnectorAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::DescribeConnectorAsyncHelper(const DescribeConnectorRequest& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConnector(request), context);
}

DescribeCustomPluginOutcome KafkaConnectClient::DescribeCustomPlugin(const DescribeCustomPluginRequest& request) const
{
  if (!request.CustomPluginArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCustomPlugin", "Required field: CustomPluginArn, is not set");
    return DescribeCustomPluginOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomPluginArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/custom-plugins/");
  uri.AddPathSegment(request.GetCustomPluginArn());
  return DescribeCustomPluginOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomPluginOutcomeCallable KafkaConnectClient::DescribeCustomPluginCallable(const DescribeCustomPluginRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomPluginOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomPlugin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::DescribeCustomPluginAsync(const DescribeCustomPluginRequest& request, const DescribeCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCustomPluginAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::DescribeCustomPluginAsyncHelper(const DescribeCustomPluginRequest& request, const DescribeCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomPlugin(request), context);
}

DescribeWorkerConfigurationOutcome KafkaConnectClient::DescribeWorkerConfiguration(const DescribeWorkerConfigurationRequest& request) const
{
  if (!request.WorkerConfigurationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeWorkerConfiguration", "Required field: WorkerConfigurationArn, is not set");
    return DescribeWorkerConfigurationOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerConfigurationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/worker-configurations/");
  uri.AddPathSegment(request.GetWorkerConfigurationArn());
  return DescribeWorkerConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkerConfigurationOutcomeCallable KafkaConnectClient::DescribeWorkerConfigurationCallable(const DescribeWorkerConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkerConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkerConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::DescribeWorkerConfigurationAsync(const DescribeWorkerConfigurationRequest& request, const DescribeWorkerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkerConfigurationAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::DescribeWorkerConfigurationAsyncHelper(const DescribeWorkerConfigurationRequest& request, const DescribeWorkerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkerConfiguration(request), context);
}

ListConnectorsOutcome KafkaConnectClient::ListConnectors(const ListConnectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/connectors");
  return ListConnectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConnectorsOutcomeCallable KafkaConnectClient::ListConnectorsCallable(const ListConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::ListConnectorsAsync(const ListConnectorsRequest& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConnectorsAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::ListConnectorsAsyncHelper(const ListConnectorsRequest& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConnectors(request), context);
}

ListCustomPluginsOutcome KafkaConnectClient::ListCustomPlugins(const ListCustomPluginsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/custom-plugins");
  return ListCustomPluginsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCustomPluginsOutcomeCallable KafkaConnectClient::ListCustomPluginsCallable(const ListCustomPluginsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomPluginsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomPlugins(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::ListCustomPluginsAsync(const ListCustomPluginsRequest& request, const ListCustomPluginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCustomPluginsAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::ListCustomPluginsAsyncHelper(const ListCustomPluginsRequest& request, const ListCustomPluginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCustomPlugins(request), context);
}

ListWorkerConfigurationsOutcome KafkaConnectClient::ListWorkerConfigurations(const ListWorkerConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/worker-configurations");
  return ListWorkerConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkerConfigurationsOutcomeCallable KafkaConnectClient::ListWorkerConfigurationsCallable(const ListWorkerConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkerConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkerConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::ListWorkerConfigurationsAsync(const ListWorkerConfigurationsRequest& request, const ListWorkerConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorkerConfigurationsAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::ListWorkerConfigurationsAsyncHelper(const ListWorkerConfigurationsRequest& request, const ListWorkerConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorkerConfigurations(request), context);
}

UpdateConnectorOutcome KafkaConnectClient::UpdateConnector(const UpdateConnectorRequest& request) const
{
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConnector", "Required field: ConnectorArn, is not set");
    return UpdateConnectorOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  if (!request.CurrentVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConnector", "Required field: CurrentVersion, is not set");
    return UpdateConnectorOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CurrentVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/connectors/");
  uri.AddPathSegment(request.GetConnectorArn());
  return UpdateConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectorOutcomeCallable KafkaConnectClient::UpdateConnectorCallable(const UpdateConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KafkaConnectClient::UpdateConnectorAsync(const UpdateConnectorRequest& request, const UpdateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConnectorAsyncHelper( request, handler, context ); } );
}

void KafkaConnectClient::UpdateConnectorAsyncHelper(const UpdateConnectorRequest& request, const UpdateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConnector(request), context);
}

