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
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsClient.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsEndpointProvider.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsErrorMarshaller.h>
#include <aws/license-manager-linux-subscriptions/model/DeregisterSubscriptionProviderRequest.h>
#include <aws/license-manager-linux-subscriptions/model/GetRegisteredSubscriptionProviderRequest.h>
#include <aws/license-manager-linux-subscriptions/model/GetServiceSettingsRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionInstancesRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionsRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListRegisteredSubscriptionProvidersRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListTagsForResourceRequest.h>
#include <aws/license-manager-linux-subscriptions/model/RegisterSubscriptionProviderRequest.h>
#include <aws/license-manager-linux-subscriptions/model/TagResourceRequest.h>
#include <aws/license-manager-linux-subscriptions/model/UntagResourceRequest.h>
#include <aws/license-manager-linux-subscriptions/model/UpdateServiceSettingsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LicenseManagerLinuxSubscriptions;
using namespace Aws::LicenseManagerLinuxSubscriptions::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {
const char SERVICE_NAME[] = "license-manager-linux-subscriptions";
const char ALLOCATION_TAG[] = "LicenseManagerLinuxSubscriptionsClient";
}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws
const char* LicenseManagerLinuxSubscriptionsClient::GetServiceName() { return SERVICE_NAME; }
const char* LicenseManagerLinuxSubscriptionsClient::GetAllocationTag() { return ALLOCATION_TAG; }

LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(
    const LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration,
    std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(
    const AWSCredentials& credentials, std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider,
    const LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider,
    const LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(const AWSCredentials& credentials,
                                                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LicenseManagerLinuxSubscriptionsClient::~LicenseManagerLinuxSubscriptionsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase>& LicenseManagerLinuxSubscriptionsClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void LicenseManagerLinuxSubscriptionsClient::init(
    const LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& config) {
  AWSClient::SetServiceClientName("License Manager Linux Subscriptions");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "license-manager-linux-subscriptions");
}

void LicenseManagerLinuxSubscriptionsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LicenseManagerLinuxSubscriptionsClient::InvokeOperationOutcome LicenseManagerLinuxSubscriptionsClient::InvokeServiceOperation(
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

DeregisterSubscriptionProviderOutcome LicenseManagerLinuxSubscriptionsClient::DeregisterSubscriptionProvider(
    const DeregisterSubscriptionProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/DeregisterSubscriptionProvider");
  };

  return DeregisterSubscriptionProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegisteredSubscriptionProviderOutcome LicenseManagerLinuxSubscriptionsClient::GetRegisteredSubscriptionProvider(
    const GetRegisteredSubscriptionProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/GetRegisteredSubscriptionProvider");
  };

  return GetRegisteredSubscriptionProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetServiceSettingsOutcome LicenseManagerLinuxSubscriptionsClient::GetServiceSettings(const GetServiceSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/GetServiceSettings");
  };

  return GetServiceSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLinuxSubscriptionInstancesOutcome LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptionInstances(
    const ListLinuxSubscriptionInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/ListLinuxSubscriptionInstances");
  };

  return ListLinuxSubscriptionInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLinuxSubscriptionsOutcome LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptions(
    const ListLinuxSubscriptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/ListLinuxSubscriptions");
  };

  return ListLinuxSubscriptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRegisteredSubscriptionProvidersOutcome LicenseManagerLinuxSubscriptionsClient::ListRegisteredSubscriptionProviders(
    const ListRegisteredSubscriptionProvidersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/ListRegisteredSubscriptionProviders");
  };

  return ListRegisteredSubscriptionProvidersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome LicenseManagerLinuxSubscriptionsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LicenseManagerLinuxSubscriptionsErrors>(
        LicenseManagerLinuxSubscriptionsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RegisterSubscriptionProviderOutcome LicenseManagerLinuxSubscriptionsClient::RegisterSubscriptionProvider(
    const RegisterSubscriptionProviderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/RegisterSubscriptionProvider");
  };

  return RegisterSubscriptionProviderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome LicenseManagerLinuxSubscriptionsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LicenseManagerLinuxSubscriptionsErrors>(
        LicenseManagerLinuxSubscriptionsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UntagResourceOutcome LicenseManagerLinuxSubscriptionsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LicenseManagerLinuxSubscriptionsErrors>(
        LicenseManagerLinuxSubscriptionsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LicenseManagerLinuxSubscriptionsErrors>(
        LicenseManagerLinuxSubscriptionsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateServiceSettingsOutcome LicenseManagerLinuxSubscriptionsClient::UpdateServiceSettings(
    const UpdateServiceSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/UpdateServiceSettings");
  };

  return UpdateServiceSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
