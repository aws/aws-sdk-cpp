/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/kafkaconnect/KafkaConnectClient.h>
#include <aws/kafkaconnect/KafkaConnectEndpointProvider.h>
#include <aws/kafkaconnect/KafkaConnectErrorMarshaller.h>
#include <aws/kafkaconnect/model/CreateConnectorRequest.h>
#include <aws/kafkaconnect/model/CreateCustomPluginRequest.h>
#include <aws/kafkaconnect/model/CreateWorkerConfigurationRequest.h>
#include <aws/kafkaconnect/model/DeleteConnectorRequest.h>
#include <aws/kafkaconnect/model/DeleteCustomPluginRequest.h>
#include <aws/kafkaconnect/model/DeleteWorkerConfigurationRequest.h>
#include <aws/kafkaconnect/model/DescribeConnectorOperationRequest.h>
#include <aws/kafkaconnect/model/DescribeConnectorRequest.h>
#include <aws/kafkaconnect/model/DescribeCustomPluginRequest.h>
#include <aws/kafkaconnect/model/DescribeWorkerConfigurationRequest.h>
#include <aws/kafkaconnect/model/ListConnectorOperationsRequest.h>
#include <aws/kafkaconnect/model/ListConnectorsRequest.h>
#include <aws/kafkaconnect/model/ListCustomPluginsRequest.h>
#include <aws/kafkaconnect/model/ListTagsForResourceRequest.h>
#include <aws/kafkaconnect/model/ListWorkerConfigurationsRequest.h>
#include <aws/kafkaconnect/model/TagResourceRequest.h>
#include <aws/kafkaconnect/model/UntagResourceRequest.h>
#include <aws/kafkaconnect/model/UpdateConnectorRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KafkaConnect;
using namespace Aws::KafkaConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace KafkaConnect {
const char SERVICE_NAME[] = "kafkaconnect";
const char ALLOCATION_TAG[] = "KafkaConnectClient";
}  // namespace KafkaConnect
}  // namespace Aws
const char* KafkaConnectClient::GetServiceName() { return SERVICE_NAME; }
const char* KafkaConnectClient::GetAllocationTag() { return ALLOCATION_TAG; }

KafkaConnectClient::KafkaConnectClient(const KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration,
                                       std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KafkaConnectClient::KafkaConnectClient(const AWSCredentials& credentials,
                                       std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider,
                                       const KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KafkaConnectClient::KafkaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider,
                                       const KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
KafkaConnectClient::KafkaConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KafkaConnectClient::KafkaConnectClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KafkaConnectClient::KafkaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
KafkaConnectClient::~KafkaConnectClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<KafkaConnectEndpointProviderBase>& KafkaConnectClient::accessEndpointProvider() { return m_endpointProvider; }

void KafkaConnectClient::init(const KafkaConnect::KafkaConnectClientConfiguration& config) {
  AWSClient::SetServiceClientName("KafkaConnect");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "kafkaconnect");
}

void KafkaConnectClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
KafkaConnectClient::InvokeOperationOutcome KafkaConnectClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateConnectorOutcome KafkaConnectClient::CreateConnector(const CreateConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors");
  };

  return CreateConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomPluginOutcome KafkaConnectClient::CreateCustomPlugin(const CreateCustomPluginRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/custom-plugins");
  };

  return CreateCustomPluginOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkerConfigurationOutcome KafkaConnectClient::CreateWorkerConfiguration(const CreateWorkerConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/worker-configurations");
  };

  return CreateWorkerConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectorOutcome KafkaConnectClient::DeleteConnector(const DeleteConnectorRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnector", "Required field: ConnectorArn, is not set");
    return DeleteConnectorOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ConnectorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  };

  return DeleteConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCustomPluginOutcome KafkaConnectClient::DeleteCustomPlugin(const DeleteCustomPluginRequest& request) const {
  if (!request.CustomPluginArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomPlugin", "Required field: CustomPluginArn, is not set");
    return DeleteCustomPluginOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [CustomPluginArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/custom-plugins/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCustomPluginArn());
  };

  return DeleteCustomPluginOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkerConfigurationOutcome KafkaConnectClient::DeleteWorkerConfiguration(const DeleteWorkerConfigurationRequest& request) const {
  if (!request.WorkerConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkerConfiguration", "Required field: WorkerConfigurationArn, is not set");
    return DeleteWorkerConfigurationOutcome(Aws::Client::AWSError<KafkaConnectErrors>(
        KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/worker-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerConfigurationArn());
  };

  return DeleteWorkerConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeConnectorOutcome KafkaConnectClient::DescribeConnector(const DescribeConnectorRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeConnector", "Required field: ConnectorArn, is not set");
    return DescribeConnectorOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ConnectorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  };

  return DescribeConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeConnectorOperationOutcome KafkaConnectClient::DescribeConnectorOperation(const DescribeConnectorOperationRequest& request) const {
  if (!request.ConnectorOperationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeConnectorOperation", "Required field: ConnectorOperationArn, is not set");
    return DescribeConnectorOperationOutcome(Aws::Client::AWSError<KafkaConnectErrors>(
        KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorOperationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectorOperations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorOperationArn());
  };

  return DescribeConnectorOperationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeCustomPluginOutcome KafkaConnectClient::DescribeCustomPlugin(const DescribeCustomPluginRequest& request) const {
  if (!request.CustomPluginArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCustomPlugin", "Required field: CustomPluginArn, is not set");
    return DescribeCustomPluginOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [CustomPluginArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/custom-plugins/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCustomPluginArn());
  };

  return DescribeCustomPluginOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeWorkerConfigurationOutcome KafkaConnectClient::DescribeWorkerConfiguration(
    const DescribeWorkerConfigurationRequest& request) const {
  if (!request.WorkerConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkerConfiguration", "Required field: WorkerConfigurationArn, is not set");
    return DescribeWorkerConfigurationOutcome(Aws::Client::AWSError<KafkaConnectErrors>(
        KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/worker-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerConfigurationArn());
  };

  return DescribeWorkerConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConnectorOperationsOutcome KafkaConnectClient::ListConnectorOperations(const ListConnectorOperationsRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConnectorOperations", "Required field: ConnectorArn, is not set");
    return ListConnectorOperationsOutcome(Aws::Client::AWSError<KafkaConnectErrors>(
        KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/operations");
  };

  return ListConnectorOperationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConnectorsOutcome KafkaConnectClient::ListConnectors(const ListConnectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors");
  };

  return ListConnectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCustomPluginsOutcome KafkaConnectClient::ListCustomPlugins(const ListCustomPluginsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/custom-plugins");
  };

  return ListCustomPluginsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome KafkaConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkerConfigurationsOutcome KafkaConnectClient::ListWorkerConfigurations(const ListWorkerConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/worker-configurations");
  };

  return ListWorkerConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

TagResourceOutcome KafkaConnectClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome KafkaConnectClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateConnectorOutcome KafkaConnectClient::UpdateConnector(const UpdateConnectorRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnector", "Required field: ConnectorArn, is not set");
    return UpdateConnectorOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ConnectorArn]", false));
  }
  if (!request.CurrentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnector", "Required field: CurrentVersion, is not set");
    return UpdateConnectorOutcome(Aws::Client::AWSError<KafkaConnectErrors>(KafkaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [CurrentVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  };

  return UpdateConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
