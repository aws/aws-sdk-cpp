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
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsClient.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsEndpointProvider.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsErrorMarshaller.h>
#include <aws/license-manager-user-subscriptions/model/AssociateUserRequest.h>
#include <aws/license-manager-user-subscriptions/model/CreateLicenseServerEndpointRequest.h>
#include <aws/license-manager-user-subscriptions/model/DeleteLicenseServerEndpointRequest.h>
#include <aws/license-manager-user-subscriptions/model/DeregisterIdentityProviderRequest.h>
#include <aws/license-manager-user-subscriptions/model/DisassociateUserRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListIdentityProvidersRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListLicenseServerEndpointsRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListProductSubscriptionsRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListTagsForResourceRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsRequest.h>
#include <aws/license-manager-user-subscriptions/model/RegisterIdentityProviderRequest.h>
#include <aws/license-manager-user-subscriptions/model/StartProductSubscriptionRequest.h>
#include <aws/license-manager-user-subscriptions/model/StopProductSubscriptionRequest.h>
#include <aws/license-manager-user-subscriptions/model/TagResourceRequest.h>
#include <aws/license-manager-user-subscriptions/model/UntagResourceRequest.h>
#include <aws/license-manager-user-subscriptions/model/UpdateIdentityProviderSettingsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LicenseManagerUserSubscriptions;
using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LicenseManagerUserSubscriptions {
const char SERVICE_NAME[] = "license-manager-user-subscriptions";
const char ALLOCATION_TAG[] = "LicenseManagerUserSubscriptionsClient";
}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
const char* LicenseManagerUserSubscriptionsClient::GetServiceName() { return SERVICE_NAME; }
const char* LicenseManagerUserSubscriptionsClient::GetAllocationTag() { return ALLOCATION_TAG; }

LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(
    const LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration,
    std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerUserSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LicenseManagerUserSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(
    const AWSCredentials& credentials, std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> endpointProvider,
    const LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerUserSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LicenseManagerUserSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> endpointProvider,
    const LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerUserSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LicenseManagerUserSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerUserSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LicenseManagerUserSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(const AWSCredentials& credentials,
                                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerUserSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LicenseManagerUserSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerUserSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LicenseManagerUserSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LicenseManagerUserSubscriptionsClient::~LicenseManagerUserSubscriptionsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase>& LicenseManagerUserSubscriptionsClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void LicenseManagerUserSubscriptionsClient::init(
    const LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration& config) {
  AWSClient::SetServiceClientName("License Manager User Subscriptions");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "license-manager-user-subscriptions");
}

void LicenseManagerUserSubscriptionsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LicenseManagerUserSubscriptionsClient::InvokeOperationOutcome LicenseManagerUserSubscriptionsClient::InvokeServiceOperation(
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

AssociateUserOutcome LicenseManagerUserSubscriptionsClient::AssociateUser(const AssociateUserRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user/AssociateUser");
  };

  return AssociateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLicenseServerEndpointOutcome LicenseManagerUserSubscriptionsClient::CreateLicenseServerEndpoint(
    const CreateLicenseServerEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/license-server/CreateLicenseServerEndpoint");
  };

  return CreateLicenseServerEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLicenseServerEndpointOutcome LicenseManagerUserSubscriptionsClient::DeleteLicenseServerEndpoint(
    const DeleteLicenseServerEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/license-server/DeleteLicenseServerEndpoint");
  };

  return DeleteLicenseServerEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterIdentityProviderOutcome LicenseManagerUserSubscriptionsClient::DeregisterIdentityProvider(
    const DeregisterIdentityProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-provider/DeregisterIdentityProvider");
  };

  return DeregisterIdentityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateUserOutcome LicenseManagerUserSubscriptionsClient::DisassociateUser(const DisassociateUserRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user/DisassociateUser");
  };

  return DisassociateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIdentityProvidersOutcome LicenseManagerUserSubscriptionsClient::ListIdentityProviders(
    const ListIdentityProvidersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-provider/ListIdentityProviders");
  };

  return ListIdentityProvidersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInstancesOutcome LicenseManagerUserSubscriptionsClient::ListInstances(const ListInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/ListInstances");
  };

  return ListInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLicenseServerEndpointsOutcome LicenseManagerUserSubscriptionsClient::ListLicenseServerEndpoints(
    const ListLicenseServerEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/license-server/ListLicenseServerEndpoints");
  };

  return ListLicenseServerEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProductSubscriptionsOutcome LicenseManagerUserSubscriptionsClient::ListProductSubscriptions(
    const ListProductSubscriptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user/ListProductSubscriptions");
  };

  return ListProductSubscriptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome LicenseManagerUserSubscriptionsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LicenseManagerUserSubscriptionsErrors>(
        LicenseManagerUserSubscriptionsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUserAssociationsOutcome LicenseManagerUserSubscriptionsClient::ListUserAssociations(const ListUserAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user/ListUserAssociations");
  };

  return ListUserAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterIdentityProviderOutcome LicenseManagerUserSubscriptionsClient::RegisterIdentityProvider(
    const RegisterIdentityProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-provider/RegisterIdentityProvider");
  };

  return RegisterIdentityProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartProductSubscriptionOutcome LicenseManagerUserSubscriptionsClient::StartProductSubscription(
    const StartProductSubscriptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user/StartProductSubscription");
  };

  return StartProductSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopProductSubscriptionOutcome LicenseManagerUserSubscriptionsClient::StopProductSubscription(
    const StopProductSubscriptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user/StopProductSubscription");
  };

  return StopProductSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome LicenseManagerUserSubscriptionsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LicenseManagerUserSubscriptionsErrors>(
        LicenseManagerUserSubscriptionsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UntagResourceOutcome LicenseManagerUserSubscriptionsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LicenseManagerUserSubscriptionsErrors>(
        LicenseManagerUserSubscriptionsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LicenseManagerUserSubscriptionsErrors>(
        LicenseManagerUserSubscriptionsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateIdentityProviderSettingsOutcome LicenseManagerUserSubscriptionsClient::UpdateIdentityProviderSettings(
    const UpdateIdentityProviderSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-provider/UpdateIdentityProviderSettings");
  };

  return UpdateIdentityProviderSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
