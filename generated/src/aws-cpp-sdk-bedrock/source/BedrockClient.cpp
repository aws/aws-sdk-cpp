/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/BedrockClient.h>
#include <aws/bedrock/BedrockEndpointProvider.h>
#include <aws/bedrock/BedrockErrorMarshaller.h>
#include <aws/bedrock/model/BatchDeleteEvaluationJobRequest.h>
#include <aws/bedrock/model/CancelAutomatedReasoningPolicyBuildWorkflowRequest.h>
#include <aws/bedrock/model/CreateAutomatedReasoningPolicyRequest.h>
#include <aws/bedrock/model/CreateAutomatedReasoningPolicyTestCaseRequest.h>
#include <aws/bedrock/model/CreateAutomatedReasoningPolicyVersionRequest.h>
#include <aws/bedrock/model/CreateCustomModelDeploymentRequest.h>
#include <aws/bedrock/model/CreateCustomModelRequest.h>
#include <aws/bedrock/model/CreateEvaluationJobRequest.h>
#include <aws/bedrock/model/CreateFoundationModelAgreementRequest.h>
#include <aws/bedrock/model/CreateGuardrailRequest.h>
#include <aws/bedrock/model/CreateGuardrailVersionRequest.h>
#include <aws/bedrock/model/CreateInferenceProfileRequest.h>
#include <aws/bedrock/model/CreateMarketplaceModelEndpointRequest.h>
#include <aws/bedrock/model/CreateModelCopyJobRequest.h>
#include <aws/bedrock/model/CreateModelCustomizationJobRequest.h>
#include <aws/bedrock/model/CreateModelImportJobRequest.h>
#include <aws/bedrock/model/CreateModelInvocationJobRequest.h>
#include <aws/bedrock/model/CreatePromptRouterRequest.h>
#include <aws/bedrock/model/CreateProvisionedModelThroughputRequest.h>
#include <aws/bedrock/model/DeleteAutomatedReasoningPolicyBuildWorkflowRequest.h>
#include <aws/bedrock/model/DeleteAutomatedReasoningPolicyRequest.h>
#include <aws/bedrock/model/DeleteAutomatedReasoningPolicyTestCaseRequest.h>
#include <aws/bedrock/model/DeleteCustomModelDeploymentRequest.h>
#include <aws/bedrock/model/DeleteCustomModelRequest.h>
#include <aws/bedrock/model/DeleteEnforcedGuardrailConfigurationRequest.h>
#include <aws/bedrock/model/DeleteFoundationModelAgreementRequest.h>
#include <aws/bedrock/model/DeleteGuardrailRequest.h>
#include <aws/bedrock/model/DeleteImportedModelRequest.h>
#include <aws/bedrock/model/DeleteInferenceProfileRequest.h>
#include <aws/bedrock/model/DeleteMarketplaceModelEndpointRequest.h>
#include <aws/bedrock/model/DeleteModelInvocationLoggingConfigurationRequest.h>
#include <aws/bedrock/model/DeletePromptRouterRequest.h>
#include <aws/bedrock/model/DeleteProvisionedModelThroughputRequest.h>
#include <aws/bedrock/model/DeregisterMarketplaceModelEndpointRequest.h>
#include <aws/bedrock/model/ExportAutomatedReasoningPolicyVersionRequest.h>
#include <aws/bedrock/model/GetAutomatedReasoningPolicyAnnotationsRequest.h>
#include <aws/bedrock/model/GetAutomatedReasoningPolicyBuildWorkflowRequest.h>
#include <aws/bedrock/model/GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest.h>
#include <aws/bedrock/model/GetAutomatedReasoningPolicyNextScenarioRequest.h>
#include <aws/bedrock/model/GetAutomatedReasoningPolicyRequest.h>
#include <aws/bedrock/model/GetAutomatedReasoningPolicyTestCaseRequest.h>
#include <aws/bedrock/model/GetAutomatedReasoningPolicyTestResultRequest.h>
#include <aws/bedrock/model/GetCustomModelDeploymentRequest.h>
#include <aws/bedrock/model/GetCustomModelRequest.h>
#include <aws/bedrock/model/GetEvaluationJobRequest.h>
#include <aws/bedrock/model/GetFoundationModelAvailabilityRequest.h>
#include <aws/bedrock/model/GetFoundationModelRequest.h>
#include <aws/bedrock/model/GetGuardrailRequest.h>
#include <aws/bedrock/model/GetImportedModelRequest.h>
#include <aws/bedrock/model/GetInferenceProfileRequest.h>
#include <aws/bedrock/model/GetMarketplaceModelEndpointRequest.h>
#include <aws/bedrock/model/GetModelCopyJobRequest.h>
#include <aws/bedrock/model/GetModelCustomizationJobRequest.h>
#include <aws/bedrock/model/GetModelImportJobRequest.h>
#include <aws/bedrock/model/GetModelInvocationJobRequest.h>
#include <aws/bedrock/model/GetModelInvocationLoggingConfigurationRequest.h>
#include <aws/bedrock/model/GetPromptRouterRequest.h>
#include <aws/bedrock/model/GetProvisionedModelThroughputRequest.h>
#include <aws/bedrock/model/GetUseCaseForModelAccessRequest.h>
#include <aws/bedrock/model/ListAutomatedReasoningPoliciesRequest.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyBuildWorkflowsRequest.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyTestCasesRequest.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyTestResultsRequest.h>
#include <aws/bedrock/model/ListCustomModelDeploymentsRequest.h>
#include <aws/bedrock/model/ListCustomModelsRequest.h>
#include <aws/bedrock/model/ListEnforcedGuardrailsConfigurationRequest.h>
#include <aws/bedrock/model/ListEvaluationJobsRequest.h>
#include <aws/bedrock/model/ListFoundationModelAgreementOffersRequest.h>
#include <aws/bedrock/model/ListFoundationModelsRequest.h>
#include <aws/bedrock/model/ListGuardrailsRequest.h>
#include <aws/bedrock/model/ListImportedModelsRequest.h>
#include <aws/bedrock/model/ListInferenceProfilesRequest.h>
#include <aws/bedrock/model/ListMarketplaceModelEndpointsRequest.h>
#include <aws/bedrock/model/ListModelCopyJobsRequest.h>
#include <aws/bedrock/model/ListModelCustomizationJobsRequest.h>
#include <aws/bedrock/model/ListModelImportJobsRequest.h>
#include <aws/bedrock/model/ListModelInvocationJobsRequest.h>
#include <aws/bedrock/model/ListPromptRoutersRequest.h>
#include <aws/bedrock/model/ListProvisionedModelThroughputsRequest.h>
#include <aws/bedrock/model/ListTagsForResourceRequest.h>
#include <aws/bedrock/model/PutEnforcedGuardrailConfigurationRequest.h>
#include <aws/bedrock/model/PutModelInvocationLoggingConfigurationRequest.h>
#include <aws/bedrock/model/PutUseCaseForModelAccessRequest.h>
#include <aws/bedrock/model/RegisterMarketplaceModelEndpointRequest.h>
#include <aws/bedrock/model/StartAutomatedReasoningPolicyBuildWorkflowRequest.h>
#include <aws/bedrock/model/StartAutomatedReasoningPolicyTestWorkflowRequest.h>
#include <aws/bedrock/model/StopEvaluationJobRequest.h>
#include <aws/bedrock/model/StopModelCustomizationJobRequest.h>
#include <aws/bedrock/model/StopModelInvocationJobRequest.h>
#include <aws/bedrock/model/TagResourceRequest.h>
#include <aws/bedrock/model/UntagResourceRequest.h>
#include <aws/bedrock/model/UpdateAutomatedReasoningPolicyAnnotationsRequest.h>
#include <aws/bedrock/model/UpdateAutomatedReasoningPolicyRequest.h>
#include <aws/bedrock/model/UpdateAutomatedReasoningPolicyTestCaseRequest.h>
#include <aws/bedrock/model/UpdateCustomModelDeploymentRequest.h>
#include <aws/bedrock/model/UpdateGuardrailRequest.h>
#include <aws/bedrock/model/UpdateMarketplaceModelEndpointRequest.h>
#include <aws/bedrock/model/UpdateProvisionedModelThroughputRequest.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/auth/signer-provider/BearerTokenAuthSignerProvider.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Bedrock;
using namespace Aws::Bedrock::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Bedrock {
const char ALLOCATION_TAG[] = "BedrockClient";
const char SERVICE_NAME[] = "bedrock";
}  // namespace Bedrock
}  // namespace Aws
const char* BedrockClient::GetServiceName() { return SERVICE_NAME; }
const char* BedrockClient::GetAllocationTag() { return ALLOCATION_TAG; }

BedrockClient::BedrockClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                             std::shared_ptr<BedrockEndpointProviderBase> endpointProvider,
                             const Bedrock::BedrockClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
              {smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption.schemeId,
               smithy::BearerTokenAuthScheme{Aws::MakeShared<smithy::AwsBearerTokenIdentityResolver>(ALLOCATION_TAG, bearerTokenProvider),
                                             GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockClient::BedrockClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
              {smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption.schemeId,
               smithy::BearerTokenAuthScheme{Aws::MakeShared<smithy::AwsBearerTokenIdentityResolver>(ALLOCATION_TAG, bearerTokenProvider),
                                             GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockClient::BedrockClient(const Bedrock::BedrockClientConfiguration& clientConfiguration,
                             std::shared_ptr<BedrockEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
              {smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption.schemeId,
               smithy::BearerTokenAuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

BedrockClient::BedrockClient(const AWSCredentials& credentials, std::shared_ptr<BedrockEndpointProviderBase> endpointProvider,
                             const Bedrock::BedrockClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockClient::BedrockClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<BedrockEndpointProviderBase> endpointProvider,
                             const Bedrock::BedrockClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

/* Legacy constructors due deprecation */
BedrockClient::BedrockClient(const Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(
                                           ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                       GetServiceName(), clientConfiguration.region}},
              {smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption.schemeId,
               smithy::BearerTokenAuthScheme{Aws::MakeShared<smithy::AwsBearerTokenIdentityResolver>(ALLOCATION_TAG), GetServiceName(),
                                             clientConfiguration.region}},
          }) {}

BedrockClient::BedrockClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockClient::BedrockClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}
/* End of legacy constructors due deprecation */

BedrockClient::~BedrockClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BedrockEndpointProviderBase>& BedrockClient::accessEndpointProvider() { return m_endpointProvider; }

void BedrockClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BatchDeleteEvaluationJobOutcome BedrockClient::BatchDeleteEvaluationJob(const BatchDeleteEvaluationJobRequest& request) const {
  AWS_OPERATION_GUARD(BatchDeleteEvaluationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteEvaluationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchDeleteEvaluationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDeleteEvaluationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDeleteEvaluationJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDeleteEvaluationJobOutcome>(
      [&]() -> BatchDeleteEvaluationJobOutcome {
        return BatchDeleteEvaluationJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                      Aws::Http::HttpMethod::HTTP_POST,
                                                                      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                        resolvedEndpoint.AddPathSegments("/evaluation-jobs/batch-delete");
                                                                      }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelAutomatedReasoningPolicyBuildWorkflowOutcome BedrockClient::CancelAutomatedReasoningPolicyBuildWorkflow(
    const CancelAutomatedReasoningPolicyBuildWorkflowRequest& request) const {
  AWS_OPERATION_GUARD(CancelAutomatedReasoningPolicyBuildWorkflow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelAutomatedReasoningPolicyBuildWorkflow, CoreErrors,
                          CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelAutomatedReasoningPolicyBuildWorkflow", "Required field: PolicyArn, is not set");
    return CancelAutomatedReasoningPolicyBuildWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelAutomatedReasoningPolicyBuildWorkflow", "Required field: BuildWorkflowId, is not set");
    return CancelAutomatedReasoningPolicyBuildWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelAutomatedReasoningPolicyBuildWorkflow, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelAutomatedReasoningPolicyBuildWorkflow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelAutomatedReasoningPolicyBuildWorkflow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelAutomatedReasoningPolicyBuildWorkflowOutcome>(
      [&]() -> CancelAutomatedReasoningPolicyBuildWorkflowOutcome {
        return CancelAutomatedReasoningPolicyBuildWorkflowOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows/");
                                     resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
                                     resolvedEndpoint.AddPathSegments("/cancel");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAutomatedReasoningPolicyOutcome BedrockClient::CreateAutomatedReasoningPolicy(
    const CreateAutomatedReasoningPolicyRequest& request) const {
  AWS_OPERATION_GUARD(CreateAutomatedReasoningPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAutomatedReasoningPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAutomatedReasoningPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAutomatedReasoningPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAutomatedReasoningPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAutomatedReasoningPolicyOutcome>(
      [&]() -> CreateAutomatedReasoningPolicyOutcome {
        return CreateAutomatedReasoningPolicyOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAutomatedReasoningPolicyTestCaseOutcome BedrockClient::CreateAutomatedReasoningPolicyTestCase(
    const CreateAutomatedReasoningPolicyTestCaseRequest& request) const {
  AWS_OPERATION_GUARD(CreateAutomatedReasoningPolicyTestCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAutomatedReasoningPolicyTestCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAutomatedReasoningPolicyTestCase", "Required field: PolicyArn, is not set");
    return CreateAutomatedReasoningPolicyTestCaseOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAutomatedReasoningPolicyTestCase, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAutomatedReasoningPolicyTestCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAutomatedReasoningPolicyTestCase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAutomatedReasoningPolicyTestCaseOutcome>(
      [&]() -> CreateAutomatedReasoningPolicyTestCaseOutcome {
        return CreateAutomatedReasoningPolicyTestCaseOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/test-cases");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAutomatedReasoningPolicyVersionOutcome BedrockClient::CreateAutomatedReasoningPolicyVersion(
    const CreateAutomatedReasoningPolicyVersionRequest& request) const {
  AWS_OPERATION_GUARD(CreateAutomatedReasoningPolicyVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAutomatedReasoningPolicyVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAutomatedReasoningPolicyVersion", "Required field: PolicyArn, is not set");
    return CreateAutomatedReasoningPolicyVersionOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAutomatedReasoningPolicyVersion, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAutomatedReasoningPolicyVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAutomatedReasoningPolicyVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAutomatedReasoningPolicyVersionOutcome>(
      [&]() -> CreateAutomatedReasoningPolicyVersionOutcome {
        return CreateAutomatedReasoningPolicyVersionOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/versions");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCustomModelOutcome BedrockClient::CreateCustomModel(const CreateCustomModelRequest& request) const {
  AWS_OPERATION_GUARD(CreateCustomModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateCustomModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateCustomModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateCustomModel",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateCustomModelOutcome>(
      [&]() -> CreateCustomModelOutcome {
        return CreateCustomModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                               [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                 resolvedEndpoint.AddPathSegments("/custom-models/create-custom-model");
                                                               }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCustomModelDeploymentOutcome BedrockClient::CreateCustomModelDeployment(const CreateCustomModelDeploymentRequest& request) const {
  AWS_OPERATION_GUARD(CreateCustomModelDeployment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomModelDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateCustomModelDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateCustomModelDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateCustomModelDeployment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateCustomModelDeploymentOutcome>(
      [&]() -> CreateCustomModelDeploymentOutcome {
        return CreateCustomModelDeploymentOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/model-customization/custom-model-deployments");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEvaluationJobOutcome BedrockClient::CreateEvaluationJob(const CreateEvaluationJobRequest& request) const {
  AWS_OPERATION_GUARD(CreateEvaluationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEvaluationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateEvaluationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEvaluationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEvaluationJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEvaluationJobOutcome>(
      [&]() -> CreateEvaluationJobOutcome {
        return CreateEvaluationJobOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/evaluation-jobs"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFoundationModelAgreementOutcome BedrockClient::CreateFoundationModelAgreement(
    const CreateFoundationModelAgreementRequest& request) const {
  AWS_OPERATION_GUARD(CreateFoundationModelAgreement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFoundationModelAgreement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateFoundationModelAgreement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFoundationModelAgreement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFoundationModelAgreement",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFoundationModelAgreementOutcome>(
      [&]() -> CreateFoundationModelAgreementOutcome {
        return CreateFoundationModelAgreementOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/create-foundation-model-agreement");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateGuardrailOutcome BedrockClient::CreateGuardrail(const CreateGuardrailRequest& request) const {
  AWS_OPERATION_GUARD(CreateGuardrail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGuardrail",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGuardrailOutcome>(
      [&]() -> CreateGuardrailOutcome {
        return CreateGuardrailOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/guardrails"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateGuardrailVersionOutcome BedrockClient::CreateGuardrailVersion(const CreateGuardrailVersionRequest& request) const {
  AWS_OPERATION_GUARD(CreateGuardrailVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGuardrailVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GuardrailIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGuardrailVersion", "Required field: GuardrailIdentifier, is not set");
    return CreateGuardrailVersionOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [GuardrailIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateGuardrailVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGuardrailVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGuardrailVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGuardrailVersionOutcome>(
      [&]() -> CreateGuardrailVersionOutcome {
        return CreateGuardrailVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                    Aws::Http::HttpMethod::HTTP_POST,
                                                                    [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                      resolvedEndpoint.AddPathSegments("/guardrails/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetGuardrailIdentifier());
                                                                    }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateInferenceProfileOutcome BedrockClient::CreateInferenceProfile(const CreateInferenceProfileRequest& request) const {
  AWS_OPERATION_GUARD(CreateInferenceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInferenceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateInferenceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateInferenceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateInferenceProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateInferenceProfileOutcome>(
      [&]() -> CreateInferenceProfileOutcome {
        return CreateInferenceProfileOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/inference-profiles"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMarketplaceModelEndpointOutcome BedrockClient::CreateMarketplaceModelEndpoint(
    const CreateMarketplaceModelEndpointRequest& request) const {
  AWS_OPERATION_GUARD(CreateMarketplaceModelEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMarketplaceModelEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMarketplaceModelEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMarketplaceModelEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMarketplaceModelEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMarketplaceModelEndpointOutcome>(
      [&]() -> CreateMarketplaceModelEndpointOutcome {
        return CreateMarketplaceModelEndpointOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateModelCopyJobOutcome BedrockClient::CreateModelCopyJob(const CreateModelCopyJobRequest& request) const {
  AWS_OPERATION_GUARD(CreateModelCopyJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelCopyJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateModelCopyJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateModelCopyJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateModelCopyJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateModelCopyJobOutcome>(
      [&]() -> CreateModelCopyJobOutcome {
        return CreateModelCopyJobOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/model-copy-jobs"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateModelCustomizationJobOutcome BedrockClient::CreateModelCustomizationJob(const CreateModelCustomizationJobRequest& request) const {
  AWS_OPERATION_GUARD(CreateModelCustomizationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelCustomizationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateModelCustomizationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateModelCustomizationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateModelCustomizationJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateModelCustomizationJobOutcome>(
      [&]() -> CreateModelCustomizationJobOutcome {
        return CreateModelCustomizationJobOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/model-customization-jobs"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateModelImportJobOutcome BedrockClient::CreateModelImportJob(const CreateModelImportJobRequest& request) const {
  AWS_OPERATION_GUARD(CreateModelImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateModelImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateModelImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateModelImportJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateModelImportJobOutcome>(
      [&]() -> CreateModelImportJobOutcome {
        return CreateModelImportJobOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/model-import-jobs"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateModelInvocationJobOutcome BedrockClient::CreateModelInvocationJob(const CreateModelInvocationJobRequest& request) const {
  AWS_OPERATION_GUARD(CreateModelInvocationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelInvocationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateModelInvocationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateModelInvocationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateModelInvocationJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateModelInvocationJobOutcome>(
      [&]() -> CreateModelInvocationJobOutcome {
        return CreateModelInvocationJobOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/model-invocation-job"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePromptRouterOutcome BedrockClient::CreatePromptRouter(const CreatePromptRouterRequest& request) const {
  AWS_OPERATION_GUARD(CreatePromptRouter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePromptRouter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreatePromptRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePromptRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePromptRouter",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePromptRouterOutcome>(
      [&]() -> CreatePromptRouterOutcome {
        return CreatePromptRouterOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/prompt-routers"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateProvisionedModelThroughputOutcome BedrockClient::CreateProvisionedModelThroughput(
    const CreateProvisionedModelThroughputRequest& request) const {
  AWS_OPERATION_GUARD(CreateProvisionedModelThroughput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProvisionedModelThroughput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateProvisionedModelThroughput, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProvisionedModelThroughput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProvisionedModelThroughput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProvisionedModelThroughputOutcome>(
      [&]() -> CreateProvisionedModelThroughputOutcome {
        return CreateProvisionedModelThroughputOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/provisioned-model-throughput");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAutomatedReasoningPolicyOutcome BedrockClient::DeleteAutomatedReasoningPolicy(
    const DeleteAutomatedReasoningPolicyRequest& request) const {
  AWS_OPERATION_GUARD(DeleteAutomatedReasoningPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAutomatedReasoningPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAutomatedReasoningPolicy", "Required field: PolicyArn, is not set");
    return DeleteAutomatedReasoningPolicyOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [PolicyArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAutomatedReasoningPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAutomatedReasoningPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAutomatedReasoningPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAutomatedReasoningPolicyOutcome>(
      [&]() -> DeleteAutomatedReasoningPolicyOutcome {
        return DeleteAutomatedReasoningPolicyOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAutomatedReasoningPolicyBuildWorkflowOutcome BedrockClient::DeleteAutomatedReasoningPolicyBuildWorkflow(
    const DeleteAutomatedReasoningPolicyBuildWorkflowRequest& request) const {
  AWS_OPERATION_GUARD(DeleteAutomatedReasoningPolicyBuildWorkflow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAutomatedReasoningPolicyBuildWorkflow, CoreErrors,
                          CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAutomatedReasoningPolicyBuildWorkflow", "Required field: PolicyArn, is not set");
    return DeleteAutomatedReasoningPolicyBuildWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAutomatedReasoningPolicyBuildWorkflow", "Required field: BuildWorkflowId, is not set");
    return DeleteAutomatedReasoningPolicyBuildWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowId]", false));
  }
  if (!request.LastUpdatedAtHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAutomatedReasoningPolicyBuildWorkflow", "Required field: LastUpdatedAt, is not set");
    return DeleteAutomatedReasoningPolicyBuildWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LastUpdatedAt]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAutomatedReasoningPolicyBuildWorkflow, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAutomatedReasoningPolicyBuildWorkflow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAutomatedReasoningPolicyBuildWorkflow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAutomatedReasoningPolicyBuildWorkflowOutcome>(
      [&]() -> DeleteAutomatedReasoningPolicyBuildWorkflowOutcome {
        return DeleteAutomatedReasoningPolicyBuildWorkflowOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows/");
                                     resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAutomatedReasoningPolicyTestCaseOutcome BedrockClient::DeleteAutomatedReasoningPolicyTestCase(
    const DeleteAutomatedReasoningPolicyTestCaseRequest& request) const {
  AWS_OPERATION_GUARD(DeleteAutomatedReasoningPolicyTestCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAutomatedReasoningPolicyTestCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAutomatedReasoningPolicyTestCase", "Required field: PolicyArn, is not set");
    return DeleteAutomatedReasoningPolicyTestCaseOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.TestCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAutomatedReasoningPolicyTestCase", "Required field: TestCaseId, is not set");
    return DeleteAutomatedReasoningPolicyTestCaseOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestCaseId]", false));
  }
  if (!request.LastUpdatedAtHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAutomatedReasoningPolicyTestCase", "Required field: LastUpdatedAt, is not set");
    return DeleteAutomatedReasoningPolicyTestCaseOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LastUpdatedAt]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAutomatedReasoningPolicyTestCase, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAutomatedReasoningPolicyTestCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAutomatedReasoningPolicyTestCase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAutomatedReasoningPolicyTestCaseOutcome>(
      [&]() -> DeleteAutomatedReasoningPolicyTestCaseOutcome {
        return DeleteAutomatedReasoningPolicyTestCaseOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/test-cases/");
                                     resolvedEndpoint.AddPathSegment(request.GetTestCaseId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCustomModelOutcome BedrockClient::DeleteCustomModel(const DeleteCustomModelRequest& request) const {
  AWS_OPERATION_GUARD(DeleteCustomModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomModel", "Required field: ModelIdentifier, is not set");
    return DeleteCustomModelOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ModelIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteCustomModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteCustomModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteCustomModel",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteCustomModelOutcome>(
      [&]() -> DeleteCustomModelOutcome {
        return DeleteCustomModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                               Aws::Http::HttpMethod::HTTP_DELETE,
                                                               [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                 resolvedEndpoint.AddPathSegments("/custom-models/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetModelIdentifier());
                                                               }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCustomModelDeploymentOutcome BedrockClient::DeleteCustomModelDeployment(const DeleteCustomModelDeploymentRequest& request) const {
  AWS_OPERATION_GUARD(DeleteCustomModelDeployment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomModelDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CustomModelDeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomModelDeployment", "Required field: CustomModelDeploymentIdentifier, is not set");
    return DeleteCustomModelDeploymentOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomModelDeploymentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteCustomModelDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteCustomModelDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteCustomModelDeployment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteCustomModelDeploymentOutcome>(
      [&]() -> DeleteCustomModelDeploymentOutcome {
        return DeleteCustomModelDeploymentOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/model-customization/custom-model-deployments/");
                                     resolvedEndpoint.AddPathSegment(request.GetCustomModelDeploymentIdentifier());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEnforcedGuardrailConfigurationOutcome BedrockClient::DeleteEnforcedGuardrailConfiguration(
    const DeleteEnforcedGuardrailConfigurationRequest& request) const {
  AWS_OPERATION_GUARD(DeleteEnforcedGuardrailConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEnforcedGuardrailConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnforcedGuardrailConfiguration", "Required field: ConfigId, is not set");
    return DeleteEnforcedGuardrailConfigurationOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteEnforcedGuardrailConfiguration, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEnforcedGuardrailConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEnforcedGuardrailConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEnforcedGuardrailConfigurationOutcome>(
      [&]() -> DeleteEnforcedGuardrailConfigurationOutcome {
        return DeleteEnforcedGuardrailConfigurationOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/enforcedGuardrailsConfiguration/");
                                     resolvedEndpoint.AddPathSegment(request.GetConfigId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFoundationModelAgreementOutcome BedrockClient::DeleteFoundationModelAgreement(
    const DeleteFoundationModelAgreementRequest& request) const {
  AWS_OPERATION_GUARD(DeleteFoundationModelAgreement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFoundationModelAgreement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteFoundationModelAgreement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFoundationModelAgreement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFoundationModelAgreement",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFoundationModelAgreementOutcome>(
      [&]() -> DeleteFoundationModelAgreementOutcome {
        return DeleteFoundationModelAgreementOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/delete-foundation-model-agreement");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteGuardrailOutcome BedrockClient::DeleteGuardrail(const DeleteGuardrailRequest& request) const {
  AWS_OPERATION_GUARD(DeleteGuardrail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GuardrailIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGuardrail", "Required field: GuardrailIdentifier, is not set");
    return DeleteGuardrailOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [GuardrailIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteGuardrail",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteGuardrailOutcome>(
      [&]() -> DeleteGuardrailOutcome {
        return DeleteGuardrailOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/guardrails/");
                                                               resolvedEndpoint.AddPathSegment(request.GetGuardrailIdentifier());
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteImportedModelOutcome BedrockClient::DeleteImportedModel(const DeleteImportedModelRequest& request) const {
  AWS_OPERATION_GUARD(DeleteImportedModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImportedModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImportedModel", "Required field: ModelIdentifier, is not set");
    return DeleteImportedModelOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ModelIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteImportedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteImportedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteImportedModel",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteImportedModelOutcome>(
      [&]() -> DeleteImportedModelOutcome {
        return DeleteImportedModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                 Aws::Http::HttpMethod::HTTP_DELETE,
                                                                 [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                   resolvedEndpoint.AddPathSegments("/imported-models/");
                                                                   resolvedEndpoint.AddPathSegment(request.GetModelIdentifier());
                                                                 }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteInferenceProfileOutcome BedrockClient::DeleteInferenceProfile(const DeleteInferenceProfileRequest& request) const {
  AWS_OPERATION_GUARD(DeleteInferenceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInferenceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InferenceProfileIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInferenceProfile", "Required field: InferenceProfileIdentifier, is not set");
    return DeleteInferenceProfileOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InferenceProfileIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteInferenceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteInferenceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteInferenceProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteInferenceProfileOutcome>(
      [&]() -> DeleteInferenceProfileOutcome {
        return DeleteInferenceProfileOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/inference-profiles/");
                                     resolvedEndpoint.AddPathSegment(request.GetInferenceProfileIdentifier());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMarketplaceModelEndpointOutcome BedrockClient::DeleteMarketplaceModelEndpoint(
    const DeleteMarketplaceModelEndpointRequest& request) const {
  AWS_OPERATION_GUARD(DeleteMarketplaceModelEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMarketplaceModelEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMarketplaceModelEndpoint", "Required field: EndpointArn, is not set");
    return DeleteMarketplaceModelEndpointOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [EndpointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMarketplaceModelEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMarketplaceModelEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMarketplaceModelEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMarketplaceModelEndpointOutcome>(
      [&]() -> DeleteMarketplaceModelEndpointOutcome {
        return DeleteMarketplaceModelEndpointOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints/");
                                     resolvedEndpoint.AddPathSegment(request.GetEndpointArn());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteModelInvocationLoggingConfigurationOutcome BedrockClient::DeleteModelInvocationLoggingConfiguration(
    const DeleteModelInvocationLoggingConfigurationRequest& request) const {
  AWS_OPERATION_GUARD(DeleteModelInvocationLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModelInvocationLoggingConfiguration, CoreErrors,
                          CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteModelInvocationLoggingConfiguration, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteModelInvocationLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteModelInvocationLoggingConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteModelInvocationLoggingConfigurationOutcome>(
      [&]() -> DeleteModelInvocationLoggingConfigurationOutcome {
        return DeleteModelInvocationLoggingConfigurationOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/logging/modelinvocations"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePromptRouterOutcome BedrockClient::DeletePromptRouter(const DeletePromptRouterRequest& request) const {
  AWS_OPERATION_GUARD(DeletePromptRouter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePromptRouter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PromptRouterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePromptRouter", "Required field: PromptRouterArn, is not set");
    return DeletePromptRouterOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PromptRouterArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeletePromptRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePromptRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeletePromptRouter",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePromptRouterOutcome>(
      [&]() -> DeletePromptRouterOutcome {
        return DeletePromptRouterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                Aws::Http::HttpMethod::HTTP_DELETE,
                                                                [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                  resolvedEndpoint.AddPathSegments("/prompt-routers/");
                                                                  resolvedEndpoint.AddPathSegment(request.GetPromptRouterArn());
                                                                }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteProvisionedModelThroughputOutcome BedrockClient::DeleteProvisionedModelThroughput(
    const DeleteProvisionedModelThroughputRequest& request) const {
  AWS_OPERATION_GUARD(DeleteProvisionedModelThroughput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProvisionedModelThroughput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProvisionedModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProvisionedModelThroughput", "Required field: ProvisionedModelId, is not set");
    return DeleteProvisionedModelThroughputOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProvisionedModelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteProvisionedModelThroughput, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteProvisionedModelThroughput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteProvisionedModelThroughput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteProvisionedModelThroughputOutcome>(
      [&]() -> DeleteProvisionedModelThroughputOutcome {
        return DeleteProvisionedModelThroughputOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/provisioned-model-throughput/");
                                     resolvedEndpoint.AddPathSegment(request.GetProvisionedModelId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeregisterMarketplaceModelEndpointOutcome BedrockClient::DeregisterMarketplaceModelEndpoint(
    const DeregisterMarketplaceModelEndpointRequest& request) const {
  AWS_OPERATION_GUARD(DeregisterMarketplaceModelEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterMarketplaceModelEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterMarketplaceModelEndpoint", "Required field: EndpointArn, is not set");
    return DeregisterMarketplaceModelEndpointOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeregisterMarketplaceModelEndpoint, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeregisterMarketplaceModelEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeregisterMarketplaceModelEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeregisterMarketplaceModelEndpointOutcome>(
      [&]() -> DeregisterMarketplaceModelEndpointOutcome {
        return DeregisterMarketplaceModelEndpointOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints/");
                                     resolvedEndpoint.AddPathSegment(request.GetEndpointArn());
                                     resolvedEndpoint.AddPathSegments("/registration");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExportAutomatedReasoningPolicyVersionOutcome BedrockClient::ExportAutomatedReasoningPolicyVersion(
    const ExportAutomatedReasoningPolicyVersionRequest& request) const {
  AWS_OPERATION_GUARD(ExportAutomatedReasoningPolicyVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportAutomatedReasoningPolicyVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportAutomatedReasoningPolicyVersion", "Required field: PolicyArn, is not set");
    return ExportAutomatedReasoningPolicyVersionOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ExportAutomatedReasoningPolicyVersion, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExportAutomatedReasoningPolicyVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExportAutomatedReasoningPolicyVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExportAutomatedReasoningPolicyVersionOutcome>(
      [&]() -> ExportAutomatedReasoningPolicyVersionOutcome {
        return ExportAutomatedReasoningPolicyVersionOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/export");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAutomatedReasoningPolicyOutcome BedrockClient::GetAutomatedReasoningPolicy(const GetAutomatedReasoningPolicyRequest& request) const {
  AWS_OPERATION_GUARD(GetAutomatedReasoningPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutomatedReasoningPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicy", "Required field: PolicyArn, is not set");
    return GetAutomatedReasoningPolicyOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [PolicyArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAutomatedReasoningPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAutomatedReasoningPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAutomatedReasoningPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAutomatedReasoningPolicyOutcome>(
      [&]() -> GetAutomatedReasoningPolicyOutcome {
        return GetAutomatedReasoningPolicyOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAutomatedReasoningPolicyAnnotationsOutcome BedrockClient::GetAutomatedReasoningPolicyAnnotations(
    const GetAutomatedReasoningPolicyAnnotationsRequest& request) const {
  AWS_OPERATION_GUARD(GetAutomatedReasoningPolicyAnnotations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutomatedReasoningPolicyAnnotations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyAnnotations", "Required field: PolicyArn, is not set");
    return GetAutomatedReasoningPolicyAnnotationsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyAnnotations", "Required field: BuildWorkflowId, is not set");
    return GetAutomatedReasoningPolicyAnnotationsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAutomatedReasoningPolicyAnnotations, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAutomatedReasoningPolicyAnnotations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAutomatedReasoningPolicyAnnotations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAutomatedReasoningPolicyAnnotationsOutcome>(
      [&]() -> GetAutomatedReasoningPolicyAnnotationsOutcome {
        return GetAutomatedReasoningPolicyAnnotationsOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows/");
                                     resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
                                     resolvedEndpoint.AddPathSegments("/annotations");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAutomatedReasoningPolicyBuildWorkflowOutcome BedrockClient::GetAutomatedReasoningPolicyBuildWorkflow(
    const GetAutomatedReasoningPolicyBuildWorkflowRequest& request) const {
  AWS_OPERATION_GUARD(GetAutomatedReasoningPolicyBuildWorkflow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutomatedReasoningPolicyBuildWorkflow, CoreErrors,
                          CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyBuildWorkflow", "Required field: PolicyArn, is not set");
    return GetAutomatedReasoningPolicyBuildWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyBuildWorkflow", "Required field: BuildWorkflowId, is not set");
    return GetAutomatedReasoningPolicyBuildWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAutomatedReasoningPolicyBuildWorkflow, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAutomatedReasoningPolicyBuildWorkflow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAutomatedReasoningPolicyBuildWorkflow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAutomatedReasoningPolicyBuildWorkflowOutcome>(
      [&]() -> GetAutomatedReasoningPolicyBuildWorkflowOutcome {
        return GetAutomatedReasoningPolicyBuildWorkflowOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows/");
                                     resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome BedrockClient::GetAutomatedReasoningPolicyBuildWorkflowResultAssets(
    const GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest& request) const {
  AWS_OPERATION_GUARD(GetAutomatedReasoningPolicyBuildWorkflowResultAssets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutomatedReasoningPolicyBuildWorkflowResultAssets, CoreErrors,
                          CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyBuildWorkflowResultAssets", "Required field: PolicyArn, is not set");
    return GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyBuildWorkflowResultAssets", "Required field: BuildWorkflowId, is not set");
    return GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowId]", false));
  }
  if (!request.AssetTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyBuildWorkflowResultAssets", "Required field: AssetType, is not set");
    return GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAutomatedReasoningPolicyBuildWorkflowResultAssets, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAutomatedReasoningPolicyBuildWorkflowResultAssets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAutomatedReasoningPolicyBuildWorkflowResultAssets",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome>(
      [&]() -> GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome {
        return GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows/");
                                     resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
                                     resolvedEndpoint.AddPathSegments("/result-assets");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAutomatedReasoningPolicyNextScenarioOutcome BedrockClient::GetAutomatedReasoningPolicyNextScenario(
    const GetAutomatedReasoningPolicyNextScenarioRequest& request) const {
  AWS_OPERATION_GUARD(GetAutomatedReasoningPolicyNextScenario);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutomatedReasoningPolicyNextScenario, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyNextScenario", "Required field: PolicyArn, is not set");
    return GetAutomatedReasoningPolicyNextScenarioOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyNextScenario", "Required field: BuildWorkflowId, is not set");
    return GetAutomatedReasoningPolicyNextScenarioOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAutomatedReasoningPolicyNextScenario, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAutomatedReasoningPolicyNextScenario, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAutomatedReasoningPolicyNextScenario",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAutomatedReasoningPolicyNextScenarioOutcome>(
      [&]() -> GetAutomatedReasoningPolicyNextScenarioOutcome {
        return GetAutomatedReasoningPolicyNextScenarioOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows/");
                                     resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
                                     resolvedEndpoint.AddPathSegments("/scenarios");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAutomatedReasoningPolicyTestCaseOutcome BedrockClient::GetAutomatedReasoningPolicyTestCase(
    const GetAutomatedReasoningPolicyTestCaseRequest& request) const {
  AWS_OPERATION_GUARD(GetAutomatedReasoningPolicyTestCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutomatedReasoningPolicyTestCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyTestCase", "Required field: PolicyArn, is not set");
    return GetAutomatedReasoningPolicyTestCaseOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.TestCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyTestCase", "Required field: TestCaseId, is not set");
    return GetAutomatedReasoningPolicyTestCaseOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestCaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAutomatedReasoningPolicyTestCase, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAutomatedReasoningPolicyTestCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAutomatedReasoningPolicyTestCase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAutomatedReasoningPolicyTestCaseOutcome>(
      [&]() -> GetAutomatedReasoningPolicyTestCaseOutcome {
        return GetAutomatedReasoningPolicyTestCaseOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/test-cases/");
                                     resolvedEndpoint.AddPathSegment(request.GetTestCaseId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAutomatedReasoningPolicyTestResultOutcome BedrockClient::GetAutomatedReasoningPolicyTestResult(
    const GetAutomatedReasoningPolicyTestResultRequest& request) const {
  AWS_OPERATION_GUARD(GetAutomatedReasoningPolicyTestResult);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutomatedReasoningPolicyTestResult, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyTestResult", "Required field: PolicyArn, is not set");
    return GetAutomatedReasoningPolicyTestResultOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyTestResult", "Required field: BuildWorkflowId, is not set");
    return GetAutomatedReasoningPolicyTestResultOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowId]", false));
  }
  if (!request.TestCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicyTestResult", "Required field: TestCaseId, is not set");
    return GetAutomatedReasoningPolicyTestResultOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestCaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAutomatedReasoningPolicyTestResult, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAutomatedReasoningPolicyTestResult, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAutomatedReasoningPolicyTestResult",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAutomatedReasoningPolicyTestResultOutcome>(
      [&]() -> GetAutomatedReasoningPolicyTestResultOutcome {
        return GetAutomatedReasoningPolicyTestResultOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows/");
                                     resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
                                     resolvedEndpoint.AddPathSegments("/test-cases/");
                                     resolvedEndpoint.AddPathSegment(request.GetTestCaseId());
                                     resolvedEndpoint.AddPathSegments("/test-results");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCustomModelOutcome BedrockClient::GetCustomModel(const GetCustomModelRequest& request) const {
  AWS_OPERATION_GUARD(GetCustomModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCustomModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCustomModel", "Required field: ModelIdentifier, is not set");
    return GetCustomModelOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ModelIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCustomModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCustomModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCustomModel",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCustomModelOutcome>(
      [&]() -> GetCustomModelOutcome {
        return GetCustomModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                              resolvedEndpoint.AddPathSegments("/custom-models/");
                                                              resolvedEndpoint.AddPathSegment(request.GetModelIdentifier());
                                                            }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCustomModelDeploymentOutcome BedrockClient::GetCustomModelDeployment(const GetCustomModelDeploymentRequest& request) const {
  AWS_OPERATION_GUARD(GetCustomModelDeployment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCustomModelDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CustomModelDeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCustomModelDeployment", "Required field: CustomModelDeploymentIdentifier, is not set");
    return GetCustomModelDeploymentOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomModelDeploymentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCustomModelDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCustomModelDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCustomModelDeployment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCustomModelDeploymentOutcome>(
      [&]() -> GetCustomModelDeploymentOutcome {
        return GetCustomModelDeploymentOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/model-customization/custom-model-deployments/");
                                     resolvedEndpoint.AddPathSegment(request.GetCustomModelDeploymentIdentifier());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEvaluationJobOutcome BedrockClient::GetEvaluationJob(const GetEvaluationJobRequest& request) const {
  AWS_OPERATION_GUARD(GetEvaluationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEvaluationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvaluationJob", "Required field: JobIdentifier, is not set");
    return GetEvaluationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [JobIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEvaluationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEvaluationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEvaluationJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEvaluationJobOutcome>(
      [&]() -> GetEvaluationJobOutcome {
        return GetEvaluationJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/evaluation-jobs/");
                                                                resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFoundationModelOutcome BedrockClient::GetFoundationModel(const GetFoundationModelRequest& request) const {
  AWS_OPERATION_GUARD(GetFoundationModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFoundationModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFoundationModel", "Required field: ModelIdentifier, is not set");
    return GetFoundationModelOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ModelIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetFoundationModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFoundationModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFoundationModel",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFoundationModelOutcome>(
      [&]() -> GetFoundationModelOutcome {
        return GetFoundationModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                                [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                  resolvedEndpoint.AddPathSegments("/foundation-models/");
                                                                  resolvedEndpoint.AddPathSegment(request.GetModelIdentifier());
                                                                }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFoundationModelAvailabilityOutcome BedrockClient::GetFoundationModelAvailability(
    const GetFoundationModelAvailabilityRequest& request) const {
  AWS_OPERATION_GUARD(GetFoundationModelAvailability);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFoundationModelAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFoundationModelAvailability", "Required field: ModelId, is not set");
    return GetFoundationModelAvailabilityOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [ModelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetFoundationModelAvailability, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFoundationModelAvailability, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFoundationModelAvailability",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFoundationModelAvailabilityOutcome>(
      [&]() -> GetFoundationModelAvailabilityOutcome {
        return GetFoundationModelAvailabilityOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/foundation-model-availability/");
                                     resolvedEndpoint.AddPathSegment(request.GetModelId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetGuardrailOutcome BedrockClient::GetGuardrail(const GetGuardrailRequest& request) const {
  AWS_OPERATION_GUARD(GetGuardrail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GuardrailIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGuardrail", "Required field: GuardrailIdentifier, is not set");
    return GetGuardrailOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [GuardrailIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGuardrail",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGuardrailOutcome>(
      [&]() -> GetGuardrailOutcome {
        return GetGuardrailOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                          [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                            resolvedEndpoint.AddPathSegments("/guardrails/");
                                                            resolvedEndpoint.AddPathSegment(request.GetGuardrailIdentifier());
                                                          }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetImportedModelOutcome BedrockClient::GetImportedModel(const GetImportedModelRequest& request) const {
  AWS_OPERATION_GUARD(GetImportedModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImportedModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportedModel", "Required field: ModelIdentifier, is not set");
    return GetImportedModelOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ModelIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetImportedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetImportedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetImportedModel",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetImportedModelOutcome>(
      [&]() -> GetImportedModelOutcome {
        return GetImportedModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/imported-models/");
                                                                resolvedEndpoint.AddPathSegment(request.GetModelIdentifier());
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetInferenceProfileOutcome BedrockClient::GetInferenceProfile(const GetInferenceProfileRequest& request) const {
  AWS_OPERATION_GUARD(GetInferenceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInferenceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InferenceProfileIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInferenceProfile", "Required field: InferenceProfileIdentifier, is not set");
    return GetInferenceProfileOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InferenceProfileIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetInferenceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetInferenceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetInferenceProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetInferenceProfileOutcome>(
      [&]() -> GetInferenceProfileOutcome {
        return GetInferenceProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                                 [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                   resolvedEndpoint.AddPathSegments("/inference-profiles/");
                                                                   resolvedEndpoint.AddPathSegment(request.GetInferenceProfileIdentifier());
                                                                 }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMarketplaceModelEndpointOutcome BedrockClient::GetMarketplaceModelEndpoint(const GetMarketplaceModelEndpointRequest& request) const {
  AWS_OPERATION_GUARD(GetMarketplaceModelEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMarketplaceModelEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMarketplaceModelEndpoint", "Required field: EndpointArn, is not set");
    return GetMarketplaceModelEndpointOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EndpointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMarketplaceModelEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMarketplaceModelEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMarketplaceModelEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMarketplaceModelEndpointOutcome>(
      [&]() -> GetMarketplaceModelEndpointOutcome {
        return GetMarketplaceModelEndpointOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints/");
                                     resolvedEndpoint.AddPathSegment(request.GetEndpointArn());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetModelCopyJobOutcome BedrockClient::GetModelCopyJob(const GetModelCopyJobRequest& request) const {
  AWS_OPERATION_GUARD(GetModelCopyJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModelCopyJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelCopyJob", "Required field: JobArn, is not set");
    return GetModelCopyJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [JobArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetModelCopyJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetModelCopyJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetModelCopyJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetModelCopyJobOutcome>(
      [&]() -> GetModelCopyJobOutcome {
        return GetModelCopyJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/model-copy-jobs/");
                                                               resolvedEndpoint.AddPathSegment(request.GetJobArn());
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetModelCustomizationJobOutcome BedrockClient::GetModelCustomizationJob(const GetModelCustomizationJobRequest& request) const {
  AWS_OPERATION_GUARD(GetModelCustomizationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModelCustomizationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelCustomizationJob", "Required field: JobIdentifier, is not set");
    return GetModelCustomizationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [JobIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetModelCustomizationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetModelCustomizationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetModelCustomizationJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetModelCustomizationJobOutcome>(
      [&]() -> GetModelCustomizationJobOutcome {
        return GetModelCustomizationJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                      Aws::Http::HttpMethod::HTTP_GET,
                                                                      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                        resolvedEndpoint.AddPathSegments("/model-customization-jobs/");
                                                                        resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
                                                                      }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetModelImportJobOutcome BedrockClient::GetModelImportJob(const GetModelImportJobRequest& request) const {
  AWS_OPERATION_GUARD(GetModelImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModelImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelImportJob", "Required field: JobIdentifier, is not set");
    return GetModelImportJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [JobIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetModelImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetModelImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetModelImportJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetModelImportJobOutcome>(
      [&]() -> GetModelImportJobOutcome {
        return GetModelImportJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                               [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                 resolvedEndpoint.AddPathSegments("/model-import-jobs/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
                                                               }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetModelInvocationJobOutcome BedrockClient::GetModelInvocationJob(const GetModelInvocationJobRequest& request) const {
  AWS_OPERATION_GUARD(GetModelInvocationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModelInvocationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelInvocationJob", "Required field: JobIdentifier, is not set");
    return GetModelInvocationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [JobIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetModelInvocationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetModelInvocationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetModelInvocationJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetModelInvocationJobOutcome>(
      [&]() -> GetModelInvocationJobOutcome {
        return GetModelInvocationJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                   Aws::Http::HttpMethod::HTTP_GET,
                                                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                     resolvedEndpoint.AddPathSegments("/model-invocation-job/");
                                                                     resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
                                                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetModelInvocationLoggingConfigurationOutcome BedrockClient::GetModelInvocationLoggingConfiguration(
    const GetModelInvocationLoggingConfigurationRequest& request) const {
  AWS_OPERATION_GUARD(GetModelInvocationLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModelInvocationLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetModelInvocationLoggingConfiguration, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetModelInvocationLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetModelInvocationLoggingConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetModelInvocationLoggingConfigurationOutcome>(
      [&]() -> GetModelInvocationLoggingConfigurationOutcome {
        return GetModelInvocationLoggingConfigurationOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/logging/modelinvocations"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPromptRouterOutcome BedrockClient::GetPromptRouter(const GetPromptRouterRequest& request) const {
  AWS_OPERATION_GUARD(GetPromptRouter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPromptRouter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PromptRouterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPromptRouter", "Required field: PromptRouterArn, is not set");
    return GetPromptRouterOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [PromptRouterArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPromptRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPromptRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPromptRouter",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPromptRouterOutcome>(
      [&]() -> GetPromptRouterOutcome {
        return GetPromptRouterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/prompt-routers/");
                                                               resolvedEndpoint.AddPathSegment(request.GetPromptRouterArn());
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetProvisionedModelThroughputOutcome BedrockClient::GetProvisionedModelThroughput(
    const GetProvisionedModelThroughputRequest& request) const {
  AWS_OPERATION_GUARD(GetProvisionedModelThroughput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProvisionedModelThroughput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProvisionedModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProvisionedModelThroughput", "Required field: ProvisionedModelId, is not set");
    return GetProvisionedModelThroughputOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [ProvisionedModelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetProvisionedModelThroughput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProvisionedModelThroughput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProvisionedModelThroughput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProvisionedModelThroughputOutcome>(
      [&]() -> GetProvisionedModelThroughputOutcome {
        return GetProvisionedModelThroughputOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/provisioned-model-throughput/");
                                     resolvedEndpoint.AddPathSegment(request.GetProvisionedModelId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUseCaseForModelAccessOutcome BedrockClient::GetUseCaseForModelAccess(const GetUseCaseForModelAccessRequest& request) const {
  AWS_OPERATION_GUARD(GetUseCaseForModelAccess);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUseCaseForModelAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetUseCaseForModelAccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUseCaseForModelAccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUseCaseForModelAccess",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUseCaseForModelAccessOutcome>(
      [&]() -> GetUseCaseForModelAccessOutcome {
        return GetUseCaseForModelAccessOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/use-case-for-model-access"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAutomatedReasoningPoliciesOutcome BedrockClient::ListAutomatedReasoningPolicies(
    const ListAutomatedReasoningPoliciesRequest& request) const {
  AWS_OPERATION_GUARD(ListAutomatedReasoningPolicies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAutomatedReasoningPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAutomatedReasoningPolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAutomatedReasoningPolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAutomatedReasoningPolicies",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAutomatedReasoningPoliciesOutcome>(
      [&]() -> ListAutomatedReasoningPoliciesOutcome {
        return ListAutomatedReasoningPoliciesOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAutomatedReasoningPolicyBuildWorkflowsOutcome BedrockClient::ListAutomatedReasoningPolicyBuildWorkflows(
    const ListAutomatedReasoningPolicyBuildWorkflowsRequest& request) const {
  AWS_OPERATION_GUARD(ListAutomatedReasoningPolicyBuildWorkflows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAutomatedReasoningPolicyBuildWorkflows, CoreErrors,
                          CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAutomatedReasoningPolicyBuildWorkflows", "Required field: PolicyArn, is not set");
    return ListAutomatedReasoningPolicyBuildWorkflowsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAutomatedReasoningPolicyBuildWorkflows, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAutomatedReasoningPolicyBuildWorkflows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAutomatedReasoningPolicyBuildWorkflows",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAutomatedReasoningPolicyBuildWorkflowsOutcome>(
      [&]() -> ListAutomatedReasoningPolicyBuildWorkflowsOutcome {
        return ListAutomatedReasoningPolicyBuildWorkflowsOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAutomatedReasoningPolicyTestCasesOutcome BedrockClient::ListAutomatedReasoningPolicyTestCases(
    const ListAutomatedReasoningPolicyTestCasesRequest& request) const {
  AWS_OPERATION_GUARD(ListAutomatedReasoningPolicyTestCases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAutomatedReasoningPolicyTestCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAutomatedReasoningPolicyTestCases", "Required field: PolicyArn, is not set");
    return ListAutomatedReasoningPolicyTestCasesOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAutomatedReasoningPolicyTestCases, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAutomatedReasoningPolicyTestCases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAutomatedReasoningPolicyTestCases",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAutomatedReasoningPolicyTestCasesOutcome>(
      [&]() -> ListAutomatedReasoningPolicyTestCasesOutcome {
        return ListAutomatedReasoningPolicyTestCasesOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/test-cases");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAutomatedReasoningPolicyTestResultsOutcome BedrockClient::ListAutomatedReasoningPolicyTestResults(
    const ListAutomatedReasoningPolicyTestResultsRequest& request) const {
  AWS_OPERATION_GUARD(ListAutomatedReasoningPolicyTestResults);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAutomatedReasoningPolicyTestResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAutomatedReasoningPolicyTestResults", "Required field: PolicyArn, is not set");
    return ListAutomatedReasoningPolicyTestResultsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAutomatedReasoningPolicyTestResults", "Required field: BuildWorkflowId, is not set");
    return ListAutomatedReasoningPolicyTestResultsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAutomatedReasoningPolicyTestResults, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAutomatedReasoningPolicyTestResults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAutomatedReasoningPolicyTestResults",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAutomatedReasoningPolicyTestResultsOutcome>(
      [&]() -> ListAutomatedReasoningPolicyTestResultsOutcome {
        return ListAutomatedReasoningPolicyTestResultsOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows/");
                                     resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
                                     resolvedEndpoint.AddPathSegments("/test-results");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCustomModelDeploymentsOutcome BedrockClient::ListCustomModelDeployments(const ListCustomModelDeploymentsRequest& request) const {
  AWS_OPERATION_GUARD(ListCustomModelDeployments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomModelDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCustomModelDeployments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCustomModelDeployments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCustomModelDeployments",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCustomModelDeploymentsOutcome>(
      [&]() -> ListCustomModelDeploymentsOutcome {
        return ListCustomModelDeploymentsOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/model-customization/custom-model-deployments");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCustomModelsOutcome BedrockClient::ListCustomModels(const ListCustomModelsRequest& request) const {
  AWS_OPERATION_GUARD(ListCustomModels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCustomModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCustomModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCustomModels",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCustomModelsOutcome>(
      [&]() -> ListCustomModelsOutcome {
        return ListCustomModelsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/custom-models"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEnforcedGuardrailsConfigurationOutcome BedrockClient::ListEnforcedGuardrailsConfiguration(
    const ListEnforcedGuardrailsConfigurationRequest& request) const {
  AWS_OPERATION_GUARD(ListEnforcedGuardrailsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEnforcedGuardrailsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEnforcedGuardrailsConfiguration, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnforcedGuardrailsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnforcedGuardrailsConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnforcedGuardrailsConfigurationOutcome>(
      [&]() -> ListEnforcedGuardrailsConfigurationOutcome {
        return ListEnforcedGuardrailsConfigurationOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/enforcedGuardrailsConfiguration");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEvaluationJobsOutcome BedrockClient::ListEvaluationJobs(const ListEvaluationJobsRequest& request) const {
  AWS_OPERATION_GUARD(ListEvaluationJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEvaluationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEvaluationJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEvaluationJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEvaluationJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEvaluationJobsOutcome>(
      [&]() -> ListEvaluationJobsOutcome {
        return ListEvaluationJobsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/evaluation-jobs"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFoundationModelAgreementOffersOutcome BedrockClient::ListFoundationModelAgreementOffers(
    const ListFoundationModelAgreementOffersRequest& request) const {
  AWS_OPERATION_GUARD(ListFoundationModelAgreementOffers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFoundationModelAgreementOffers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFoundationModelAgreementOffers", "Required field: ModelId, is not set");
    return ListFoundationModelAgreementOffersOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFoundationModelAgreementOffers, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFoundationModelAgreementOffers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFoundationModelAgreementOffers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFoundationModelAgreementOffersOutcome>(
      [&]() -> ListFoundationModelAgreementOffersOutcome {
        return ListFoundationModelAgreementOffersOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/list-foundation-model-agreement-offers/");
                                     resolvedEndpoint.AddPathSegment(request.GetModelId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFoundationModelsOutcome BedrockClient::ListFoundationModels(const ListFoundationModelsRequest& request) const {
  AWS_OPERATION_GUARD(ListFoundationModels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFoundationModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFoundationModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFoundationModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFoundationModels",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFoundationModelsOutcome>(
      [&]() -> ListFoundationModelsOutcome {
        return ListFoundationModelsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/foundation-models"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListGuardrailsOutcome BedrockClient::ListGuardrails(const ListGuardrailsRequest& request) const {
  AWS_OPERATION_GUARD(ListGuardrails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGuardrails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListGuardrails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListGuardrails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListGuardrails",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListGuardrailsOutcome>(
      [&]() -> ListGuardrailsOutcome {
        return ListGuardrailsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/guardrails"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListImportedModelsOutcome BedrockClient::ListImportedModels(const ListImportedModelsRequest& request) const {
  AWS_OPERATION_GUARD(ListImportedModels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImportedModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListImportedModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListImportedModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListImportedModels",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListImportedModelsOutcome>(
      [&]() -> ListImportedModelsOutcome {
        return ListImportedModelsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/imported-models"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInferenceProfilesOutcome BedrockClient::ListInferenceProfiles(const ListInferenceProfilesRequest& request) const {
  AWS_OPERATION_GUARD(ListInferenceProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInferenceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListInferenceProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInferenceProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInferenceProfiles",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInferenceProfilesOutcome>(
      [&]() -> ListInferenceProfilesOutcome {
        return ListInferenceProfilesOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/inference-profiles"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMarketplaceModelEndpointsOutcome BedrockClient::ListMarketplaceModelEndpoints(
    const ListMarketplaceModelEndpointsRequest& request) const {
  AWS_OPERATION_GUARD(ListMarketplaceModelEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMarketplaceModelEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMarketplaceModelEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMarketplaceModelEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMarketplaceModelEndpoints",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMarketplaceModelEndpointsOutcome>(
      [&]() -> ListMarketplaceModelEndpointsOutcome {
        return ListMarketplaceModelEndpointsOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelCopyJobsOutcome BedrockClient::ListModelCopyJobs(const ListModelCopyJobsRequest& request) const {
  AWS_OPERATION_GUARD(ListModelCopyJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelCopyJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListModelCopyJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelCopyJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelCopyJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelCopyJobsOutcome>(
      [&]() -> ListModelCopyJobsOutcome {
        return ListModelCopyJobsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/model-copy-jobs"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelCustomizationJobsOutcome BedrockClient::ListModelCustomizationJobs(const ListModelCustomizationJobsRequest& request) const {
  AWS_OPERATION_GUARD(ListModelCustomizationJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelCustomizationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListModelCustomizationJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelCustomizationJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelCustomizationJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelCustomizationJobsOutcome>(
      [&]() -> ListModelCustomizationJobsOutcome {
        return ListModelCustomizationJobsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/model-customization-jobs"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelImportJobsOutcome BedrockClient::ListModelImportJobs(const ListModelImportJobsRequest& request) const {
  AWS_OPERATION_GUARD(ListModelImportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListModelImportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelImportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelImportJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelImportJobsOutcome>(
      [&]() -> ListModelImportJobsOutcome {
        return ListModelImportJobsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/model-import-jobs"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelInvocationJobsOutcome BedrockClient::ListModelInvocationJobs(const ListModelInvocationJobsRequest& request) const {
  AWS_OPERATION_GUARD(ListModelInvocationJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelInvocationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListModelInvocationJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelInvocationJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelInvocationJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelInvocationJobsOutcome>(
      [&]() -> ListModelInvocationJobsOutcome {
        return ListModelInvocationJobsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/model-invocation-jobs"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPromptRoutersOutcome BedrockClient::ListPromptRouters(const ListPromptRoutersRequest& request) const {
  AWS_OPERATION_GUARD(ListPromptRouters);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPromptRouters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPromptRouters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPromptRouters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPromptRouters",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPromptRoutersOutcome>(
      [&]() -> ListPromptRoutersOutcome {
        return ListPromptRoutersOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/prompt-routers"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProvisionedModelThroughputsOutcome BedrockClient::ListProvisionedModelThroughputs(
    const ListProvisionedModelThroughputsRequest& request) const {
  AWS_OPERATION_GUARD(ListProvisionedModelThroughputs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProvisionedModelThroughputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProvisionedModelThroughputs, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProvisionedModelThroughputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProvisionedModelThroughputs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProvisionedModelThroughputsOutcome>(
      [&]() -> ListProvisionedModelThroughputsOutcome {
        return ListProvisionedModelThroughputsOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/provisioned-model-throughputs");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome BedrockClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
      [&]() -> ListTagsForResourceOutcome {
        return ListTagsForResourceOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/listTagsForResource"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutEnforcedGuardrailConfigurationOutcome BedrockClient::PutEnforcedGuardrailConfiguration(
    const PutEnforcedGuardrailConfigurationRequest& request) const {
  AWS_OPERATION_GUARD(PutEnforcedGuardrailConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEnforcedGuardrailConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutEnforcedGuardrailConfiguration, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutEnforcedGuardrailConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutEnforcedGuardrailConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutEnforcedGuardrailConfigurationOutcome>(
      [&]() -> PutEnforcedGuardrailConfigurationOutcome {
        return PutEnforcedGuardrailConfigurationOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/enforcedGuardrailsConfiguration");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutModelInvocationLoggingConfigurationOutcome BedrockClient::PutModelInvocationLoggingConfiguration(
    const PutModelInvocationLoggingConfigurationRequest& request) const {
  AWS_OPERATION_GUARD(PutModelInvocationLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutModelInvocationLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutModelInvocationLoggingConfiguration, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutModelInvocationLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutModelInvocationLoggingConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutModelInvocationLoggingConfigurationOutcome>(
      [&]() -> PutModelInvocationLoggingConfigurationOutcome {
        return PutModelInvocationLoggingConfigurationOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/logging/modelinvocations"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutUseCaseForModelAccessOutcome BedrockClient::PutUseCaseForModelAccess(const PutUseCaseForModelAccessRequest& request) const {
  AWS_OPERATION_GUARD(PutUseCaseForModelAccess);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutUseCaseForModelAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutUseCaseForModelAccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutUseCaseForModelAccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutUseCaseForModelAccess",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutUseCaseForModelAccessOutcome>(
      [&]() -> PutUseCaseForModelAccessOutcome {
        return PutUseCaseForModelAccessOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/use-case-for-model-access"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterMarketplaceModelEndpointOutcome BedrockClient::RegisterMarketplaceModelEndpoint(
    const RegisterMarketplaceModelEndpointRequest& request) const {
  AWS_OPERATION_GUARD(RegisterMarketplaceModelEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterMarketplaceModelEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterMarketplaceModelEndpoint", "Required field: EndpointIdentifier, is not set");
    return RegisterMarketplaceModelEndpointOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RegisterMarketplaceModelEndpoint, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RegisterMarketplaceModelEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RegisterMarketplaceModelEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RegisterMarketplaceModelEndpointOutcome>(
      [&]() -> RegisterMarketplaceModelEndpointOutcome {
        return RegisterMarketplaceModelEndpointOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints/");
                                     resolvedEndpoint.AddPathSegment(request.GetEndpointIdentifier());
                                     resolvedEndpoint.AddPathSegments("/registration");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartAutomatedReasoningPolicyBuildWorkflowOutcome BedrockClient::StartAutomatedReasoningPolicyBuildWorkflow(
    const StartAutomatedReasoningPolicyBuildWorkflowRequest& request) const {
  AWS_OPERATION_GUARD(StartAutomatedReasoningPolicyBuildWorkflow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAutomatedReasoningPolicyBuildWorkflow, CoreErrors,
                          CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAutomatedReasoningPolicyBuildWorkflow", "Required field: PolicyArn, is not set");
    return StartAutomatedReasoningPolicyBuildWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAutomatedReasoningPolicyBuildWorkflow", "Required field: BuildWorkflowType, is not set");
    return StartAutomatedReasoningPolicyBuildWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartAutomatedReasoningPolicyBuildWorkflow, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartAutomatedReasoningPolicyBuildWorkflow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartAutomatedReasoningPolicyBuildWorkflow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartAutomatedReasoningPolicyBuildWorkflowOutcome>(
      [&]() -> StartAutomatedReasoningPolicyBuildWorkflowOutcome {
        return StartAutomatedReasoningPolicyBuildWorkflowOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
              resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
              resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
              resolvedEndpoint.AddPathSegments("/build-workflows/");
              resolvedEndpoint.AddPathSegment(
                  AutomatedReasoningPolicyBuildWorkflowTypeMapper::GetNameForAutomatedReasoningPolicyBuildWorkflowType(
                      request.GetBuildWorkflowType()));
              resolvedEndpoint.AddPathSegments("/start");
            }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartAutomatedReasoningPolicyTestWorkflowOutcome BedrockClient::StartAutomatedReasoningPolicyTestWorkflow(
    const StartAutomatedReasoningPolicyTestWorkflowRequest& request) const {
  AWS_OPERATION_GUARD(StartAutomatedReasoningPolicyTestWorkflow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAutomatedReasoningPolicyTestWorkflow, CoreErrors,
                          CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAutomatedReasoningPolicyTestWorkflow", "Required field: PolicyArn, is not set");
    return StartAutomatedReasoningPolicyTestWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAutomatedReasoningPolicyTestWorkflow", "Required field: BuildWorkflowId, is not set");
    return StartAutomatedReasoningPolicyTestWorkflowOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartAutomatedReasoningPolicyTestWorkflow, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartAutomatedReasoningPolicyTestWorkflow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartAutomatedReasoningPolicyTestWorkflow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartAutomatedReasoningPolicyTestWorkflowOutcome>(
      [&]() -> StartAutomatedReasoningPolicyTestWorkflowOutcome {
        return StartAutomatedReasoningPolicyTestWorkflowOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows/");
                                     resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
                                     resolvedEndpoint.AddPathSegments("/test-workflows");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopEvaluationJobOutcome BedrockClient::StopEvaluationJob(const StopEvaluationJobRequest& request) const {
  AWS_OPERATION_GUARD(StopEvaluationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopEvaluationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopEvaluationJob", "Required field: JobIdentifier, is not set");
    return StopEvaluationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [JobIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopEvaluationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopEvaluationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopEvaluationJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopEvaluationJobOutcome>(
      [&]() -> StopEvaluationJobOutcome {
        return StopEvaluationJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                               [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                 resolvedEndpoint.AddPathSegments("/evaluation-job/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
                                                                 resolvedEndpoint.AddPathSegments("/stop");
                                                               }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopModelCustomizationJobOutcome BedrockClient::StopModelCustomizationJob(const StopModelCustomizationJobRequest& request) const {
  AWS_OPERATION_GUARD(StopModelCustomizationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopModelCustomizationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopModelCustomizationJob", "Required field: JobIdentifier, is not set");
    return StopModelCustomizationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [JobIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopModelCustomizationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopModelCustomizationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopModelCustomizationJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopModelCustomizationJobOutcome>(
      [&]() -> StopModelCustomizationJobOutcome {
        return StopModelCustomizationJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                       Aws::Http::HttpMethod::HTTP_POST,
                                                                       [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                         resolvedEndpoint.AddPathSegments("/model-customization-jobs/");
                                                                         resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
                                                                         resolvedEndpoint.AddPathSegments("/stop");
                                                                       }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopModelInvocationJobOutcome BedrockClient::StopModelInvocationJob(const StopModelInvocationJobRequest& request) const {
  AWS_OPERATION_GUARD(StopModelInvocationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopModelInvocationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopModelInvocationJob", "Required field: JobIdentifier, is not set");
    return StopModelInvocationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [JobIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopModelInvocationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopModelInvocationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopModelInvocationJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopModelInvocationJobOutcome>(
      [&]() -> StopModelInvocationJobOutcome {
        return StopModelInvocationJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                    Aws::Http::HttpMethod::HTTP_POST,
                                                                    [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                      resolvedEndpoint.AddPathSegments("/model-invocation-job/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
                                                                      resolvedEndpoint.AddPathSegments("/stop");
                                                                    }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome BedrockClient::TagResource(const TagResourceRequest& request) const {
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
      [&]() -> TagResourceOutcome {
        return TagResourceOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/tagResource"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome BedrockClient::UntagResource(const UntagResourceRequest& request) const {
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
      [&]() -> UntagResourceOutcome {
        return UntagResourceOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/untagResource"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAutomatedReasoningPolicyOutcome BedrockClient::UpdateAutomatedReasoningPolicy(
    const UpdateAutomatedReasoningPolicyRequest& request) const {
  AWS_OPERATION_GUARD(UpdateAutomatedReasoningPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAutomatedReasoningPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAutomatedReasoningPolicy", "Required field: PolicyArn, is not set");
    return UpdateAutomatedReasoningPolicyOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [PolicyArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAutomatedReasoningPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAutomatedReasoningPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAutomatedReasoningPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAutomatedReasoningPolicyOutcome>(
      [&]() -> UpdateAutomatedReasoningPolicyOutcome {
        return UpdateAutomatedReasoningPolicyOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAutomatedReasoningPolicyAnnotationsOutcome BedrockClient::UpdateAutomatedReasoningPolicyAnnotations(
    const UpdateAutomatedReasoningPolicyAnnotationsRequest& request) const {
  AWS_OPERATION_GUARD(UpdateAutomatedReasoningPolicyAnnotations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAutomatedReasoningPolicyAnnotations, CoreErrors,
                          CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAutomatedReasoningPolicyAnnotations", "Required field: PolicyArn, is not set");
    return UpdateAutomatedReasoningPolicyAnnotationsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.BuildWorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAutomatedReasoningPolicyAnnotations", "Required field: BuildWorkflowId, is not set");
    return UpdateAutomatedReasoningPolicyAnnotationsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BuildWorkflowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAutomatedReasoningPolicyAnnotations, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAutomatedReasoningPolicyAnnotations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAutomatedReasoningPolicyAnnotations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAutomatedReasoningPolicyAnnotationsOutcome>(
      [&]() -> UpdateAutomatedReasoningPolicyAnnotationsOutcome {
        return UpdateAutomatedReasoningPolicyAnnotationsOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/build-workflows/");
                                     resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
                                     resolvedEndpoint.AddPathSegments("/annotations");
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAutomatedReasoningPolicyTestCaseOutcome BedrockClient::UpdateAutomatedReasoningPolicyTestCase(
    const UpdateAutomatedReasoningPolicyTestCaseRequest& request) const {
  AWS_OPERATION_GUARD(UpdateAutomatedReasoningPolicyTestCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAutomatedReasoningPolicyTestCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAutomatedReasoningPolicyTestCase", "Required field: PolicyArn, is not set");
    return UpdateAutomatedReasoningPolicyTestCaseOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  if (!request.TestCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAutomatedReasoningPolicyTestCase", "Required field: TestCaseId, is not set");
    return UpdateAutomatedReasoningPolicyTestCaseOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TestCaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAutomatedReasoningPolicyTestCase, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAutomatedReasoningPolicyTestCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAutomatedReasoningPolicyTestCase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAutomatedReasoningPolicyTestCaseOutcome>(
      [&]() -> UpdateAutomatedReasoningPolicyTestCaseOutcome {
        return UpdateAutomatedReasoningPolicyTestCaseOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
                                     resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
                                     resolvedEndpoint.AddPathSegments("/test-cases/");
                                     resolvedEndpoint.AddPathSegment(request.GetTestCaseId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateCustomModelDeploymentOutcome BedrockClient::UpdateCustomModelDeployment(const UpdateCustomModelDeploymentRequest& request) const {
  AWS_OPERATION_GUARD(UpdateCustomModelDeployment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCustomModelDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CustomModelDeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCustomModelDeployment", "Required field: CustomModelDeploymentIdentifier, is not set");
    return UpdateCustomModelDeploymentOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomModelDeploymentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateCustomModelDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCustomModelDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCustomModelDeployment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateCustomModelDeploymentOutcome>(
      [&]() -> UpdateCustomModelDeploymentOutcome {
        return UpdateCustomModelDeploymentOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/model-customization/custom-model-deployments/");
                                     resolvedEndpoint.AddPathSegment(request.GetCustomModelDeploymentIdentifier());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGuardrailOutcome BedrockClient::UpdateGuardrail(const UpdateGuardrailRequest& request) const {
  AWS_OPERATION_GUARD(UpdateGuardrail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GuardrailIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGuardrail", "Required field: GuardrailIdentifier, is not set");
    return UpdateGuardrailOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [GuardrailIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGuardrail",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGuardrailOutcome>(
      [&]() -> UpdateGuardrailOutcome {
        return UpdateGuardrailOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/guardrails/");
                                                               resolvedEndpoint.AddPathSegment(request.GetGuardrailIdentifier());
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMarketplaceModelEndpointOutcome BedrockClient::UpdateMarketplaceModelEndpoint(
    const UpdateMarketplaceModelEndpointRequest& request) const {
  AWS_OPERATION_GUARD(UpdateMarketplaceModelEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMarketplaceModelEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMarketplaceModelEndpoint", "Required field: EndpointArn, is not set");
    return UpdateMarketplaceModelEndpointOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [EndpointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMarketplaceModelEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMarketplaceModelEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMarketplaceModelEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMarketplaceModelEndpointOutcome>(
      [&]() -> UpdateMarketplaceModelEndpointOutcome {
        return UpdateMarketplaceModelEndpointOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints/");
                                     resolvedEndpoint.AddPathSegment(request.GetEndpointArn());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateProvisionedModelThroughputOutcome BedrockClient::UpdateProvisionedModelThroughput(
    const UpdateProvisionedModelThroughputRequest& request) const {
  AWS_OPERATION_GUARD(UpdateProvisionedModelThroughput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProvisionedModelThroughput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProvisionedModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProvisionedModelThroughput", "Required field: ProvisionedModelId, is not set");
    return UpdateProvisionedModelThroughputOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProvisionedModelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateProvisionedModelThroughput, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateProvisionedModelThroughput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateProvisionedModelThroughput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateProvisionedModelThroughputOutcome>(
      [&]() -> UpdateProvisionedModelThroughputOutcome {
        return UpdateProvisionedModelThroughputOutcome(
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/provisioned-model-throughput/");
                                     resolvedEndpoint.AddPathSegment(request.GetProvisionedModelId());
                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
