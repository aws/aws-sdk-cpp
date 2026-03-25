/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/AccessAnalyzerClient.h>
#include <aws/accessanalyzer/AccessAnalyzerEndpointProvider.h>
#include <aws/accessanalyzer/AccessAnalyzerErrorMarshaller.h>
#include <aws/accessanalyzer/model/ApplyArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/CancelPolicyGenerationRequest.h>
#include <aws/accessanalyzer/model/CheckAccessNotGrantedRequest.h>
#include <aws/accessanalyzer/model/CheckNoNewAccessRequest.h>
#include <aws/accessanalyzer/model/CheckNoPublicAccessRequest.h>
#include <aws/accessanalyzer/model/CreateAccessPreviewRequest.h>
#include <aws/accessanalyzer/model/CreateAnalyzerRequest.h>
#include <aws/accessanalyzer/model/CreateArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/DeleteAnalyzerRequest.h>
#include <aws/accessanalyzer/model/DeleteArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/GenerateFindingRecommendationRequest.h>
#include <aws/accessanalyzer/model/GetAccessPreviewRequest.h>
#include <aws/accessanalyzer/model/GetAnalyzedResourceRequest.h>
#include <aws/accessanalyzer/model/GetAnalyzerRequest.h>
#include <aws/accessanalyzer/model/GetArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/GetFindingRecommendationRequest.h>
#include <aws/accessanalyzer/model/GetFindingRequest.h>
#include <aws/accessanalyzer/model/GetFindingV2Request.h>
#include <aws/accessanalyzer/model/GetFindingsStatisticsRequest.h>
#include <aws/accessanalyzer/model/GetGeneratedPolicyRequest.h>
#include <aws/accessanalyzer/model/ListAccessPreviewFindingsRequest.h>
#include <aws/accessanalyzer/model/ListAccessPreviewsRequest.h>
#include <aws/accessanalyzer/model/ListAnalyzedResourcesRequest.h>
#include <aws/accessanalyzer/model/ListAnalyzersRequest.h>
#include <aws/accessanalyzer/model/ListArchiveRulesRequest.h>
#include <aws/accessanalyzer/model/ListFindingsRequest.h>
#include <aws/accessanalyzer/model/ListFindingsV2Request.h>
#include <aws/accessanalyzer/model/ListPolicyGenerationsRequest.h>
#include <aws/accessanalyzer/model/ListTagsForResourceRequest.h>
#include <aws/accessanalyzer/model/StartPolicyGenerationRequest.h>
#include <aws/accessanalyzer/model/StartResourceScanRequest.h>
#include <aws/accessanalyzer/model/TagResourceRequest.h>
#include <aws/accessanalyzer/model/UntagResourceRequest.h>
#include <aws/accessanalyzer/model/UpdateAnalyzerRequest.h>
#include <aws/accessanalyzer/model/UpdateArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/UpdateFindingsRequest.h>
#include <aws/accessanalyzer/model/ValidatePolicyRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AccessAnalyzer;
using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AccessAnalyzer {
const char SERVICE_NAME[] = "access-analyzer";
const char ALLOCATION_TAG[] = "AccessAnalyzerClient";
}  // namespace AccessAnalyzer
}  // namespace Aws
const char* AccessAnalyzerClient::GetServiceName() { return SERVICE_NAME; }
const char* AccessAnalyzerClient::GetAllocationTag() { return ALLOCATION_TAG; }

AccessAnalyzerClient::AccessAnalyzerClient(const AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration,
                                           std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AccessAnalyzerClient::AccessAnalyzerClient(const AWSCredentials& credentials,
                                           std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider,
                                           const AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AccessAnalyzerClient::AccessAnalyzerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider,
                                           const AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AccessAnalyzerClient::AccessAnalyzerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AccessAnalyzerClient::AccessAnalyzerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AccessAnalyzerClient::AccessAnalyzerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AccessAnalyzerClient::~AccessAnalyzerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AccessAnalyzerEndpointProviderBase>& AccessAnalyzerClient::accessEndpointProvider() { return m_endpointProvider; }

void AccessAnalyzerClient::init(const AccessAnalyzer::AccessAnalyzerClientConfiguration& config) {
  AWSClient::SetServiceClientName("AccessAnalyzer");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "access-analyzer");
}

void AccessAnalyzerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AccessAnalyzerClient::InvokeOperationOutcome AccessAnalyzerClient::InvokeServiceOperation(
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

ApplyArchiveRuleOutcome AccessAnalyzerClient::ApplyArchiveRule(const ApplyArchiveRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule");
  };

  return ApplyArchiveRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CancelPolicyGenerationOutcome AccessAnalyzerClient::CancelPolicyGeneration(const CancelPolicyGenerationRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelPolicyGeneration", "Required field: JobId, is not set");
    return CancelPolicyGenerationOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/generation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return CancelPolicyGenerationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CheckAccessNotGrantedOutcome AccessAnalyzerClient::CheckAccessNotGranted(const CheckAccessNotGrantedRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/check-access-not-granted");
  };

  return CheckAccessNotGrantedOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CheckNoNewAccessOutcome AccessAnalyzerClient::CheckNoNewAccess(const CheckNoNewAccessRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/check-no-new-access");
  };

  return CheckNoNewAccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CheckNoPublicAccessOutcome AccessAnalyzerClient::CheckNoPublicAccess(const CheckNoPublicAccessRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/check-no-public-access");
  };

  return CheckNoPublicAccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAccessPreviewOutcome AccessAnalyzerClient::CreateAccessPreview(const CreateAccessPreviewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-preview");
  };

  return CreateAccessPreviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateAnalyzerOutcome AccessAnalyzerClient::CreateAnalyzer(const CreateAnalyzerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer");
  };

  return CreateAnalyzerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateArchiveRuleOutcome AccessAnalyzerClient::CreateArchiveRule(const CreateArchiveRuleRequest& request) const {
  if (!request.AnalyzerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateArchiveRule", "Required field: AnalyzerName, is not set");
    return CreateArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule");
  };

  return CreateArchiveRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeleteAnalyzerOutcome AccessAnalyzerClient::DeleteAnalyzer(const DeleteAnalyzerRequest& request) const {
  if (!request.AnalyzerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnalyzer", "Required field: AnalyzerName, is not set");
    return DeleteAnalyzerOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AnalyzerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
  };

  return DeleteAnalyzerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteArchiveRuleOutcome AccessAnalyzerClient::DeleteArchiveRule(const DeleteArchiveRuleRequest& request) const {
  if (!request.AnalyzerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteArchiveRule", "Required field: AnalyzerName, is not set");
    return DeleteArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  if (!request.RuleNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteArchiveRule", "Required field: RuleName, is not set");
    return DeleteArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
  };

  return DeleteArchiveRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GenerateFindingRecommendationOutcome AccessAnalyzerClient::GenerateFindingRecommendation(
    const GenerateFindingRecommendationRequest& request) const {
  if (!request.AnalyzerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GenerateFindingRecommendation", "Required field: AnalyzerArn, is not set");
    return GenerateFindingRecommendationOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GenerateFindingRecommendation", "Required field: Id, is not set");
    return GenerateFindingRecommendationOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommendation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GenerateFindingRecommendationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccessPreviewOutcome AccessAnalyzerClient::GetAccessPreview(const GetAccessPreviewRequest& request) const {
  if (!request.AccessPreviewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPreview", "Required field: AccessPreviewId, is not set");
    return GetAccessPreviewOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AccessPreviewId]", false));
  }
  if (!request.AnalyzerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPreview", "Required field: AnalyzerArn, is not set");
    return GetAccessPreviewOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AnalyzerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-preview/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPreviewId());
  };

  return GetAccessPreviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAnalyzedResourceOutcome AccessAnalyzerClient::GetAnalyzedResource(const GetAnalyzedResourceRequest& request) const {
  if (!request.AnalyzerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnalyzedResource", "Required field: AnalyzerArn, is not set");
    return GetAnalyzedResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnalyzedResource", "Required field: ResourceArn, is not set");
    return GetAnalyzedResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzed-resource");
  };

  return GetAnalyzedResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAnalyzerOutcome AccessAnalyzerClient::GetAnalyzer(const GetAnalyzerRequest& request) const {
  if (!request.AnalyzerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnalyzer", "Required field: AnalyzerName, is not set");
    return GetAnalyzerOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AnalyzerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
  };

  return GetAnalyzerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetArchiveRuleOutcome AccessAnalyzerClient::GetArchiveRule(const GetArchiveRuleRequest& request) const {
  if (!request.AnalyzerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetArchiveRule", "Required field: AnalyzerName, is not set");
    return GetArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AnalyzerName]", false));
  }
  if (!request.RuleNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetArchiveRule", "Required field: RuleName, is not set");
    return GetArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [RuleName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
  };

  return GetArchiveRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFindingOutcome AccessAnalyzerClient::GetFinding(const GetFindingRequest& request) const {
  if (!request.AnalyzerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFinding", "Required field: AnalyzerArn, is not set");
    return GetFindingOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AnalyzerArn]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFinding", "Required field: Id, is not set");
    return GetFindingOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/finding/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetFindingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFindingRecommendationOutcome AccessAnalyzerClient::GetFindingRecommendation(const GetFindingRecommendationRequest& request) const {
  if (!request.AnalyzerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFindingRecommendation", "Required field: AnalyzerArn, is not set");
    return GetFindingRecommendationOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFindingRecommendation", "Required field: Id, is not set");
    return GetFindingRecommendationOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommendation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetFindingRecommendationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFindingV2Outcome AccessAnalyzerClient::GetFindingV2(const GetFindingV2Request& request) const {
  if (!request.AnalyzerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFindingV2", "Required field: AnalyzerArn, is not set");
    return GetFindingV2Outcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AnalyzerArn]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFindingV2", "Required field: Id, is not set");
    return GetFindingV2Outcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingv2/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetFindingV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFindingsStatisticsOutcome AccessAnalyzerClient::GetFindingsStatistics(const GetFindingsStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/findings/statistics");
  };

  return GetFindingsStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGeneratedPolicyOutcome AccessAnalyzerClient::GetGeneratedPolicy(const GetGeneratedPolicyRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGeneratedPolicy", "Required field: JobId, is not set");
    return GetGeneratedPolicyOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/generation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetGeneratedPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAccessPreviewFindingsOutcome AccessAnalyzerClient::ListAccessPreviewFindings(const ListAccessPreviewFindingsRequest& request) const {
  if (!request.AccessPreviewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessPreviewFindings", "Required field: AccessPreviewId, is not set");
    return ListAccessPreviewFindingsOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessPreviewId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-preview/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPreviewId());
  };

  return ListAccessPreviewFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccessPreviewsOutcome AccessAnalyzerClient::ListAccessPreviews(const ListAccessPreviewsRequest& request) const {
  if (!request.AnalyzerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessPreviews", "Required field: AnalyzerArn, is not set");
    return ListAccessPreviewsOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-preview");
  };

  return ListAccessPreviewsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAnalyzedResourcesOutcome AccessAnalyzerClient::ListAnalyzedResources(const ListAnalyzedResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzed-resource");
  };

  return ListAnalyzedResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAnalyzersOutcome AccessAnalyzerClient::ListAnalyzers(const ListAnalyzersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer");
  };

  return ListAnalyzersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListArchiveRulesOutcome AccessAnalyzerClient::ListArchiveRules(const ListArchiveRulesRequest& request) const {
  if (!request.AnalyzerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListArchiveRules", "Required field: AnalyzerName, is not set");
    return ListArchiveRulesOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AnalyzerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule");
  };

  return ListArchiveRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFindingsOutcome AccessAnalyzerClient::ListFindings(const ListFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/finding");
  };

  return ListFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFindingsV2Outcome AccessAnalyzerClient::ListFindingsV2(const ListFindingsV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingv2");
  };

  return ListFindingsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPolicyGenerationsOutcome AccessAnalyzerClient::ListPolicyGenerations(const ListPolicyGenerationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/generation");
  };

  return ListPolicyGenerationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome AccessAnalyzerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartPolicyGenerationOutcome AccessAnalyzerClient::StartPolicyGeneration(const StartPolicyGenerationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/generation");
  };

  return StartPolicyGenerationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartResourceScanOutcome AccessAnalyzerClient::StartResourceScan(const StartResourceScanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource/scan");
  };

  return StartResourceScanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome AccessAnalyzerClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome AccessAnalyzerClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAnalyzerOutcome AccessAnalyzerClient::UpdateAnalyzer(const UpdateAnalyzerRequest& request) const {
  if (!request.AnalyzerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnalyzer", "Required field: AnalyzerName, is not set");
    return UpdateAnalyzerOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AnalyzerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
  };

  return UpdateAnalyzerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateArchiveRuleOutcome AccessAnalyzerClient::UpdateArchiveRule(const UpdateArchiveRuleRequest& request) const {
  if (!request.AnalyzerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateArchiveRule", "Required field: AnalyzerName, is not set");
    return UpdateArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  if (!request.RuleNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateArchiveRule", "Required field: RuleName, is not set");
    return UpdateArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(
        AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
  };

  return UpdateArchiveRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFindingsOutcome AccessAnalyzerClient::UpdateFindings(const UpdateFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/finding");
  };

  return UpdateFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ValidatePolicyOutcome AccessAnalyzerClient::ValidatePolicy(const ValidatePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/validation");
  };

  return ValidatePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
