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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/kafkaconnect/KafkaConnectClient.h>
#include <aws/kafkaconnect/KafkaConnectErrorMarshaller.h>
#include <aws/kafkaconnect/KafkaConnectEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* KafkaConnectClient::SERVICE_NAME = "kafkaconnect";
const char* KafkaConnectClient::ALLOCATION_TAG = "KafkaConnectClient";

KafkaConnectClient::KafkaConnectClient(const KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration,
                                       std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KafkaConnectClient::KafkaConnectClient(const AWSCredentials& credentials,
                                       std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider,
                                       const KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KafkaConnectClient::KafkaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider,
                                       const KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  KafkaConnectClient::KafkaConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KafkaConnectClient::KafkaConnectClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KafkaConnectClient::KafkaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
KafkaConnectClient::~KafkaConnectClient()
{
}

std::shared_ptr<KafkaConnectEndpointProviderBase>& KafkaConnectClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void KafkaConnectClient::init(const KafkaConnect::KafkaConnectClientConfiguration& config)
{
  AWSClient::SetServiceClientName("KafkaConnect");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void KafkaConnectClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateConnectorOutcome KafkaConnectClient::CreateConnector(const CreateConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors");
  return CreateConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConnector(request), context);
    } );
}

CreateCustomPluginOutcome KafkaConnectClient::CreateCustomPlugin(const CreateCustomPluginRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomPlugin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomPlugin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/custom-plugins");
  return CreateCustomPluginOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomPlugin(request), context);
    } );
}

CreateWorkerConfigurationOutcome KafkaConnectClient::CreateWorkerConfiguration(const CreateWorkerConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/worker-configurations");
  return CreateWorkerConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkerConfiguration(request), context);
    } );
}

DeleteConnectorOutcome KafkaConnectClient::DeleteConnector(const DeleteConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnector", "Required field: ConnectorArn, is not set");
    return DeleteConnectorOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  return DeleteConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConnector(request), context);
    } );
}

DeleteCustomPluginOutcome KafkaConnectClient::DeleteCustomPlugin(const DeleteCustomPluginRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomPlugin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CustomPluginArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomPlugin", "Required field: CustomPluginArn, is not set");
    return DeleteCustomPluginOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomPluginArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomPlugin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/custom-plugins/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCustomPluginArn());
  return DeleteCustomPluginOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomPlugin(request), context);
    } );
}

DescribeConnectorOutcome KafkaConnectClient::DescribeConnector(const DescribeConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeConnector", "Required field: ConnectorArn, is not set");
    return DescribeConnectorOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  return DescribeConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeConnector(request), context);
    } );
}

DescribeCustomPluginOutcome KafkaConnectClient::DescribeCustomPlugin(const DescribeCustomPluginRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCustomPlugin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CustomPluginArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCustomPlugin", "Required field: CustomPluginArn, is not set");
    return DescribeCustomPluginOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomPluginArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomPlugin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/custom-plugins/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCustomPluginArn());
  return DescribeCustomPluginOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCustomPlugin(request), context);
    } );
}

DescribeWorkerConfigurationOutcome KafkaConnectClient::DescribeWorkerConfiguration(const DescribeWorkerConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkerConfigurationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeWorkerConfiguration", "Required field: WorkerConfigurationArn, is not set");
    return DescribeWorkerConfigurationOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerConfigurationArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/worker-configurations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerConfigurationArn());
  return DescribeWorkerConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWorkerConfiguration(request), context);
    } );
}

ListConnectorsOutcome KafkaConnectClient::ListConnectors(const ListConnectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors");
  return ListConnectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListConnectors(request), context);
    } );
}

ListCustomPluginsOutcome KafkaConnectClient::ListCustomPlugins(const ListCustomPluginsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomPlugins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomPlugins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/custom-plugins");
  return ListCustomPluginsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomPlugins(request), context);
    } );
}

ListWorkerConfigurationsOutcome KafkaConnectClient::ListWorkerConfigurations(const ListWorkerConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkerConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkerConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/worker-configurations");
  return ListWorkerConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkerConfigurations(request), context);
    } );
}

UpdateConnectorOutcome KafkaConnectClient::UpdateConnector(const UpdateConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  return UpdateConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateConnector(request), context);
    } );
}

