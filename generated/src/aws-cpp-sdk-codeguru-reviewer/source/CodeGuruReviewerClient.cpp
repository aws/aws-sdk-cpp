/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/CodeGuruReviewerClient.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerEndpointProvider.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerErrorMarshaller.h>
#include <aws/codeguru-reviewer/model/AssociateRepositoryRequest.h>
#include <aws/codeguru-reviewer/model/CreateCodeReviewRequest.h>
#include <aws/codeguru-reviewer/model/DescribeCodeReviewRequest.h>
#include <aws/codeguru-reviewer/model/DescribeRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/DescribeRepositoryAssociationRequest.h>
#include <aws/codeguru-reviewer/model/DisassociateRepositoryRequest.h>
#include <aws/codeguru-reviewer/model/ListCodeReviewsRequest.h>
#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsRequest.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsRequest.h>
#include <aws/codeguru-reviewer/model/ListTagsForResourceRequest.h>
#include <aws/codeguru-reviewer/model/PutRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/TagResourceRequest.h>
#include <aws/codeguru-reviewer/model/UntagResourceRequest.h>
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
using namespace Aws::CodeGuruReviewer;
using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CodeGuruReviewer {
const char SERVICE_NAME[] = "codeguru-reviewer";
const char ALLOCATION_TAG[] = "CodeGuruReviewerClient";
}  // namespace CodeGuruReviewer
}  // namespace Aws
const char* CodeGuruReviewerClient::GetServiceName() { return SERVICE_NAME; }
const char* CodeGuruReviewerClient::GetAllocationTag() { return ALLOCATION_TAG; }

CodeGuruReviewerClient::CodeGuruReviewerClient(const CodeGuruReviewer::CodeGuruReviewerClientConfiguration& clientConfiguration,
                                               std::shared_ptr<CodeGuruReviewerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeGuruReviewerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const AWSCredentials& credentials,
                                               std::shared_ptr<CodeGuruReviewerEndpointProviderBase> endpointProvider,
                                               const CodeGuruReviewer::CodeGuruReviewerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeGuruReviewerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<CodeGuruReviewerEndpointProviderBase> endpointProvider,
                                               const CodeGuruReviewer::CodeGuruReviewerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeGuruReviewerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CodeGuruReviewerClient::CodeGuruReviewerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeGuruReviewerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeGuruReviewerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeGuruReviewerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CodeGuruReviewerClient::~CodeGuruReviewerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CodeGuruReviewerEndpointProviderBase>& CodeGuruReviewerClient::accessEndpointProvider() { return m_endpointProvider; }

void CodeGuruReviewerClient::init(const CodeGuruReviewer::CodeGuruReviewerClientConfiguration& config) {
  AWSClient::SetServiceClientName("CodeGuru Reviewer");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "codeguru-reviewer");
}

void CodeGuruReviewerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CodeGuruReviewerClient::InvokeOperationOutcome CodeGuruReviewerClient::InvokeServiceOperation(
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

AssociateRepositoryOutcome CodeGuruReviewerClient::AssociateRepository(const AssociateRepositoryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return AssociateRepositoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCodeReviewOutcome CodeGuruReviewerClient::CreateCodeReview(const CreateCodeReviewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codereviews");
  };

  return CreateCodeReviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCodeReviewOutcome CodeGuruReviewerClient::DescribeCodeReview(const DescribeCodeReviewRequest& request) const {
  if (!request.CodeReviewArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCodeReview", "Required field: CodeReviewArn, is not set");
    return DescribeCodeReviewOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codereviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeReviewArn());
  };

  return DescribeCodeReviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRecommendationFeedbackOutcome CodeGuruReviewerClient::DescribeRecommendationFeedback(
    const DescribeRecommendationFeedbackRequest& request) const {
  if (!request.CodeReviewArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRecommendationFeedback", "Required field: CodeReviewArn, is not set");
    return DescribeRecommendationFeedbackOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }
  if (!request.RecommendationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRecommendationFeedback", "Required field: RecommendationId, is not set");
    return DescribeRecommendationFeedbackOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommendationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeReviewArn());
  };

  return DescribeRecommendationFeedbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRepositoryAssociationOutcome CodeGuruReviewerClient::DescribeRepositoryAssociation(
    const DescribeRepositoryAssociationRequest& request) const {
  if (!request.AssociationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRepositoryAssociation", "Required field: AssociationArn, is not set");
    return DescribeRepositoryAssociationOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationArn());
  };

  return DescribeRepositoryAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisassociateRepositoryOutcome CodeGuruReviewerClient::DisassociateRepository(const DisassociateRepositoryRequest& request) const {
  if (!request.AssociationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateRepository", "Required field: AssociationArn, is not set");
    return DisassociateRepositoryOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationArn());
  };

  return DisassociateRepositoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ListCodeReviewsOutcome CodeGuruReviewerClient::ListCodeReviews(const ListCodeReviewsRequest& request) const {
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCodeReviews", "Required field: Type, is not set");
    return ListCodeReviewsOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codereviews");
  };

  return ListCodeReviewsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecommendationFeedbackOutcome CodeGuruReviewerClient::ListRecommendationFeedback(
    const ListRecommendationFeedbackRequest& request) const {
  if (!request.CodeReviewArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecommendationFeedback", "Required field: CodeReviewArn, is not set");
    return ListRecommendationFeedbackOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeReviewArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/RecommendationFeedback");
  };

  return ListRecommendationFeedbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecommendationsOutcome CodeGuruReviewerClient::ListRecommendations(const ListRecommendationsRequest& request) const {
  if (!request.CodeReviewArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecommendations", "Required field: CodeReviewArn, is not set");
    return ListRecommendationsOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codereviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeReviewArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/Recommendations");
  };

  return ListRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRepositoryAssociationsOutcome CodeGuruReviewerClient::ListRepositoryAssociations(
    const ListRepositoryAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return ListRepositoryAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome CodeGuruReviewerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutRecommendationFeedbackOutcome CodeGuruReviewerClient::PutRecommendationFeedback(const PutRecommendationFeedbackRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  };

  return PutRecommendationFeedbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome CodeGuruReviewerClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CodeGuruReviewerClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(
        CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}
