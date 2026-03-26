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
#include <aws/greengrassv2/GreengrassV2Client.h>
#include <aws/greengrassv2/GreengrassV2EndpointProvider.h>
#include <aws/greengrassv2/GreengrassV2ErrorMarshaller.h>
#include <aws/greengrassv2/model/AssociateServiceRoleToAccountRequest.h>
#include <aws/greengrassv2/model/BatchAssociateClientDeviceWithCoreDeviceRequest.h>
#include <aws/greengrassv2/model/BatchDisassociateClientDeviceFromCoreDeviceRequest.h>
#include <aws/greengrassv2/model/CancelDeploymentRequest.h>
#include <aws/greengrassv2/model/CreateComponentVersionRequest.h>
#include <aws/greengrassv2/model/CreateDeploymentRequest.h>
#include <aws/greengrassv2/model/DeleteComponentRequest.h>
#include <aws/greengrassv2/model/DeleteCoreDeviceRequest.h>
#include <aws/greengrassv2/model/DeleteDeploymentRequest.h>
#include <aws/greengrassv2/model/DescribeComponentRequest.h>
#include <aws/greengrassv2/model/DisassociateServiceRoleFromAccountRequest.h>
#include <aws/greengrassv2/model/GetComponentRequest.h>
#include <aws/greengrassv2/model/GetComponentVersionArtifactRequest.h>
#include <aws/greengrassv2/model/GetConnectivityInfoRequest.h>
#include <aws/greengrassv2/model/GetCoreDeviceRequest.h>
#include <aws/greengrassv2/model/GetDeploymentRequest.h>
#include <aws/greengrassv2/model/GetServiceRoleForAccountRequest.h>
#include <aws/greengrassv2/model/ListClientDevicesAssociatedWithCoreDeviceRequest.h>
#include <aws/greengrassv2/model/ListComponentVersionsRequest.h>
#include <aws/greengrassv2/model/ListComponentsRequest.h>
#include <aws/greengrassv2/model/ListCoreDevicesRequest.h>
#include <aws/greengrassv2/model/ListDeploymentsRequest.h>
#include <aws/greengrassv2/model/ListEffectiveDeploymentsRequest.h>
#include <aws/greengrassv2/model/ListInstalledComponentsRequest.h>
#include <aws/greengrassv2/model/ListTagsForResourceRequest.h>
#include <aws/greengrassv2/model/ResolveComponentCandidatesRequest.h>
#include <aws/greengrassv2/model/TagResourceRequest.h>
#include <aws/greengrassv2/model/UntagResourceRequest.h>
#include <aws/greengrassv2/model/UpdateConnectivityInfoRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GreengrassV2;
using namespace Aws::GreengrassV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace GreengrassV2 {
const char SERVICE_NAME[] = "greengrass";
const char ALLOCATION_TAG[] = "GreengrassV2Client";
}  // namespace GreengrassV2
}  // namespace Aws
const char* GreengrassV2Client::GetServiceName() { return SERVICE_NAME; }
const char* GreengrassV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

GreengrassV2Client::GreengrassV2Client(const GreengrassV2::GreengrassV2ClientConfiguration& clientConfiguration,
                                       std::shared_ptr<GreengrassV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GreengrassV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GreengrassV2Client::GreengrassV2Client(const AWSCredentials& credentials,
                                       std::shared_ptr<GreengrassV2EndpointProviderBase> endpointProvider,
                                       const GreengrassV2::GreengrassV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GreengrassV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GreengrassV2Client::GreengrassV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<GreengrassV2EndpointProviderBase> endpointProvider,
                                       const GreengrassV2::GreengrassV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GreengrassV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GreengrassV2Client::GreengrassV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GreengrassV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GreengrassV2Client::GreengrassV2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GreengrassV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GreengrassV2Client::GreengrassV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GreengrassV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GreengrassV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
GreengrassV2Client::~GreengrassV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<GreengrassV2EndpointProviderBase>& GreengrassV2Client::accessEndpointProvider() { return m_endpointProvider; }

void GreengrassV2Client::init(const GreengrassV2::GreengrassV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("GreengrassV2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "greengrass");
}

void GreengrassV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
GreengrassV2Client::InvokeOperationOutcome GreengrassV2Client::InvokeServiceOperation(
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

AssociateServiceRoleToAccountOutcome GreengrassV2Client::AssociateServiceRoleToAccount(
    const AssociateServiceRoleToAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  };

  return AssociateServiceRoleToAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

BatchAssociateClientDeviceWithCoreDeviceOutcome GreengrassV2Client::BatchAssociateClientDeviceWithCoreDevice(
    const BatchAssociateClientDeviceWithCoreDeviceRequest& request) const {
  if (!request.CoreDeviceThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchAssociateClientDeviceWithCoreDevice", "Required field: CoreDeviceThingName, is not set");
    return BatchAssociateClientDeviceWithCoreDeviceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(
        GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/coreDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDeviceThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associateClientDevices");
  };

  return BatchAssociateClientDeviceWithCoreDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDisassociateClientDeviceFromCoreDeviceOutcome GreengrassV2Client::BatchDisassociateClientDeviceFromCoreDevice(
    const BatchDisassociateClientDeviceFromCoreDeviceRequest& request) const {
  if (!request.CoreDeviceThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDisassociateClientDeviceFromCoreDevice", "Required field: CoreDeviceThingName, is not set");
    return BatchDisassociateClientDeviceFromCoreDeviceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(
        GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/coreDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDeviceThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociateClientDevices");
  };

  return BatchDisassociateClientDeviceFromCoreDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelDeploymentOutcome GreengrassV2Client::CancelDeployment(const CancelDeploymentRequest& request) const {
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelDeployment", "Required field: DeploymentId, is not set");
    return CancelDeploymentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  return CancelDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateComponentVersionOutcome GreengrassV2Client::CreateComponentVersion(const CreateComponentVersionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/createComponentVersion");
  };

  return CreateComponentVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeploymentOutcome GreengrassV2Client::CreateDeployment(const CreateDeploymentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/deployments");
  };

  return CreateDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteComponentOutcome GreengrassV2Client::DeleteComponent(const DeleteComponentRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: Arn, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/components/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DeleteComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCoreDeviceOutcome GreengrassV2Client::DeleteCoreDevice(const DeleteCoreDeviceRequest& request) const {
  if (!request.CoreDeviceThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCoreDevice", "Required field: CoreDeviceThingName, is not set");
    return DeleteCoreDeviceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CoreDeviceThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/coreDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDeviceThingName());
  };

  return DeleteCoreDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDeploymentOutcome GreengrassV2Client::DeleteDeployment(const DeleteDeploymentRequest& request) const {
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: DeploymentId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
  };

  return DeleteDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeComponentOutcome GreengrassV2Client::DescribeComponent(const DescribeComponentRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeComponent", "Required field: Arn, is not set");
    return DescribeComponentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/components/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
  };

  return DescribeComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisassociateServiceRoleFromAccountOutcome GreengrassV2Client::DisassociateServiceRoleFromAccount(
    const DisassociateServiceRoleFromAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  };

  return DisassociateServiceRoleFromAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetComponentOutcome GreengrassV2Client::GetComponent(const GetComponentRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: Arn, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/components/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return GetComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetComponentVersionArtifactOutcome GreengrassV2Client::GetComponentVersionArtifact(
    const GetComponentVersionArtifactRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetComponentVersionArtifact", "Required field: Arn, is not set");
    return GetComponentVersionArtifactOutcome(Aws::Client::AWSError<GreengrassV2Errors>(
        GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.ArtifactNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetComponentVersionArtifact", "Required field: ArtifactName, is not set");
    return GetComponentVersionArtifactOutcome(Aws::Client::AWSError<GreengrassV2Errors>(
        GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ArtifactName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/components/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/artifacts/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetArtifactName());
  };

  return GetComponentVersionArtifactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConnectivityInfoOutcome GreengrassV2Client::GetConnectivityInfo(const GetConnectivityInfoRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectivityInfo", "Required field: ThingName, is not set");
    return GetConnectivityInfoOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectivityInfo");
  };

  return GetConnectivityInfoOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCoreDeviceOutcome GreengrassV2Client::GetCoreDevice(const GetCoreDeviceRequest& request) const {
  if (!request.CoreDeviceThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoreDevice", "Required field: CoreDeviceThingName, is not set");
    return GetCoreDeviceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [CoreDeviceThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/coreDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDeviceThingName());
  };

  return GetCoreDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeploymentOutcome GreengrassV2Client::GetDeployment(const GetDeploymentRequest& request) const {
  if (!request.DeploymentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DeploymentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentId());
  };

  return GetDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServiceRoleForAccountOutcome GreengrassV2Client::GetServiceRoleForAccount(const GetServiceRoleForAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/servicerole");
  };

  return GetServiceRoleForAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClientDevicesAssociatedWithCoreDeviceOutcome GreengrassV2Client::ListClientDevicesAssociatedWithCoreDevice(
    const ListClientDevicesAssociatedWithCoreDeviceRequest& request) const {
  if (!request.CoreDeviceThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListClientDevicesAssociatedWithCoreDevice", "Required field: CoreDeviceThingName, is not set");
    return ListClientDevicesAssociatedWithCoreDeviceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(
        GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/coreDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDeviceThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associatedClientDevices");
  };

  return ListClientDevicesAssociatedWithCoreDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListComponentVersionsOutcome GreengrassV2Client::ListComponentVersions(const ListComponentVersionsRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListComponentVersions", "Required field: Arn, is not set");
    return ListComponentVersionsOutcome(Aws::Client::AWSError<GreengrassV2Errors>(
        GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/components/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListComponentVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListComponentsOutcome GreengrassV2Client::ListComponents(const ListComponentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/components");
  };

  return ListComponentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCoreDevicesOutcome GreengrassV2Client::ListCoreDevices(const ListCoreDevicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/coreDevices");
  };

  return ListCoreDevicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDeploymentsOutcome GreengrassV2Client::ListDeployments(const ListDeploymentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/deployments");
  };

  return ListDeploymentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEffectiveDeploymentsOutcome GreengrassV2Client::ListEffectiveDeployments(const ListEffectiveDeploymentsRequest& request) const {
  if (!request.CoreDeviceThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEffectiveDeployments", "Required field: CoreDeviceThingName, is not set");
    return ListEffectiveDeploymentsOutcome(Aws::Client::AWSError<GreengrassV2Errors>(
        GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/coreDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDeviceThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/effectiveDeployments");
  };

  return ListEffectiveDeploymentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInstalledComponentsOutcome GreengrassV2Client::ListInstalledComponents(const ListInstalledComponentsRequest& request) const {
  if (!request.CoreDeviceThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInstalledComponents", "Required field: CoreDeviceThingName, is not set");
    return ListInstalledComponentsOutcome(Aws::Client::AWSError<GreengrassV2Errors>(
        GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreDeviceThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/coreDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreDeviceThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/installedComponents");
  };

  return ListInstalledComponentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome GreengrassV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ResolveComponentCandidatesOutcome GreengrassV2Client::ResolveComponentCandidates(const ResolveComponentCandidatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/v2/resolveComponentCandidates");
  };

  return ResolveComponentCandidatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome GreengrassV2Client::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome GreengrassV2Client::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GreengrassV2Errors>(GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateConnectivityInfoOutcome GreengrassV2Client::UpdateConnectivityInfo(const UpdateConnectivityInfoRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnectivityInfo", "Required field: ThingName, is not set");
    return UpdateConnectivityInfoOutcome(Aws::Client::AWSError<GreengrassV2Errors>(
        GreengrassV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/greengrass/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectivityInfo");
  };

  return UpdateConnectivityInfoOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
