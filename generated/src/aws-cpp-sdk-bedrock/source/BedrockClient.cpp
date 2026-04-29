/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/BedrockAwsBearerTokenIdentityResolver.h>
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
#include <aws/bedrock/model/DeleteResourcePolicyRequest.h>
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
#include <aws/bedrock/model/GetResourcePolicyRequest.h>
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
#include <aws/bedrock/model/PutResourcePolicyRequest.h>
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

BedrockClient::BedrockClient(
    const Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<smithy::SigV4AuthScheme, smithy::BearerTokenAuthScheme>> authSchemeMap,
    std::shared_ptr<BedrockEndpointProviderBase> endpointProvider, const Bedrock::BedrockClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          authSchemeMap) {}

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
               smithy::BearerTokenAuthScheme{Aws::MakeShared<BedrockAwsBearerTokenIdentityResolver>(
                                                 "BearerTokenAuthScheme", clientConfiguration.credentialProviderConfig),
                                             GetServiceName(), clientConfiguration.region}},
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
          {{smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
            smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                    GetServiceName(), clientConfiguration.region}},
           {smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption.schemeId,
            smithy::BearerTokenAuthScheme{Aws::MakeShared<BedrockAwsBearerTokenIdentityResolver>(
                                              "BearerTokenAuthScheme", clientConfiguration.credentialProviderConfig),
                                          GetServiceName(), clientConfiguration.region}}}) {}

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
BedrockClient::BedrockClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
              {smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption.schemeId,
               smithy::BearerTokenAuthScheme{Aws::MakeShared<BedrockAwsBearerTokenIdentityResolver>(
                                                 "BearerTokenAuthScheme", clientConfiguration.credentialProviderConfig),
                                             GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockClient::BedrockClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
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
              {smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption.schemeId,
               smithy::BearerTokenAuthScheme{Aws::MakeShared<BedrockAwsBearerTokenIdentityResolver>(
                                                 "BearerTokenAuthScheme", clientConfiguration.credentialProviderConfig),
                                             GetServiceName(), clientConfiguration.region}},

          }) {}

BedrockClient::BedrockClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<BedrockEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption})),
          {{smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
            smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                    GetServiceName(), clientConfiguration.region}},
           {smithy::BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption.schemeId,
            smithy::BearerTokenAuthScheme{Aws::MakeShared<BedrockAwsBearerTokenIdentityResolver>(
                                              "BearerTokenAuthScheme", clientConfiguration.credentialProviderConfig),
                                          GetServiceName(), clientConfiguration.region}}}) {}
/* End of legacy constructors due deprecation */

BedrockClient::~BedrockClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BedrockEndpointProviderBase>& BedrockClient::accessEndpointProvider() { return m_endpointProvider; }

void BedrockClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BedrockClient::InvokeOperationOutcome BedrockClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::AWSEndpoint&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_clientConfiguration.telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(serviceName, {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto result = MakeRequestDeserialize(&request, operationName, httpMethod,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolveUri(resolvedEndpoint); });
        return result.IsSuccess() ? InvokeOperationOutcome(result.GetResultWithOwnership())
                                  : InvokeOperationOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
BatchDeleteEvaluationJobOutcome BedrockClient::BatchDeleteEvaluationJob(const BatchDeleteEvaluationJobRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/evaluation-jobs/batch-delete"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteEvaluationJobOutcome(result.GetResultWithOwnership())
                            : BatchDeleteEvaluationJobOutcome(std::move(result.GetError()));
}
CancelAutomatedReasoningPolicyBuildWorkflowOutcome BedrockClient::CancelAutomatedReasoningPolicyBuildWorkflow(
    const CancelAutomatedReasoningPolicyBuildWorkflowRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
        resolvedEndpoint.AddPathSegments("/cancel");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelAutomatedReasoningPolicyBuildWorkflowOutcome(result.GetResultWithOwnership())
                            : CancelAutomatedReasoningPolicyBuildWorkflowOutcome(std::move(result.GetError()));
}
CreateAutomatedReasoningPolicyOutcome BedrockClient::CreateAutomatedReasoningPolicy(
    const CreateAutomatedReasoningPolicyRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/automated-reasoning-policies"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAutomatedReasoningPolicyOutcome(result.GetResultWithOwnership())
                            : CreateAutomatedReasoningPolicyOutcome(std::move(result.GetError()));
}
CreateAutomatedReasoningPolicyTestCaseOutcome BedrockClient::CreateAutomatedReasoningPolicyTestCase(
    const CreateAutomatedReasoningPolicyTestCaseRequest& request) const {
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAutomatedReasoningPolicyTestCase", "Required field: PolicyArn, is not set");
    return CreateAutomatedReasoningPolicyTestCaseOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/test-cases");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAutomatedReasoningPolicyTestCaseOutcome(result.GetResultWithOwnership())
                            : CreateAutomatedReasoningPolicyTestCaseOutcome(std::move(result.GetError()));
}
CreateAutomatedReasoningPolicyVersionOutcome BedrockClient::CreateAutomatedReasoningPolicyVersion(
    const CreateAutomatedReasoningPolicyVersionRequest& request) const {
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAutomatedReasoningPolicyVersion", "Required field: PolicyArn, is not set");
    return CreateAutomatedReasoningPolicyVersionOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/versions");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAutomatedReasoningPolicyVersionOutcome(result.GetResultWithOwnership())
                            : CreateAutomatedReasoningPolicyVersionOutcome(std::move(result.GetError()));
}
CreateCustomModelOutcome BedrockClient::CreateCustomModel(const CreateCustomModelRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/custom-models/create-custom-model"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCustomModelOutcome(result.GetResultWithOwnership())
                            : CreateCustomModelOutcome(std::move(result.GetError()));
}
CreateCustomModelDeploymentOutcome BedrockClient::CreateCustomModelDeployment(const CreateCustomModelDeploymentRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-customization/custom-model-deployments");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCustomModelDeploymentOutcome(result.GetResultWithOwnership())
                            : CreateCustomModelDeploymentOutcome(std::move(result.GetError()));
}
CreateEvaluationJobOutcome BedrockClient::CreateEvaluationJob(const CreateEvaluationJobRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/evaluation-jobs"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEvaluationJobOutcome(result.GetResultWithOwnership())
                            : CreateEvaluationJobOutcome(std::move(result.GetError()));
}
CreateFoundationModelAgreementOutcome BedrockClient::CreateFoundationModelAgreement(
    const CreateFoundationModelAgreementRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/create-foundation-model-agreement"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFoundationModelAgreementOutcome(result.GetResultWithOwnership())
                            : CreateFoundationModelAgreementOutcome(std::move(result.GetError()));
}
CreateGuardrailOutcome BedrockClient::CreateGuardrail(const CreateGuardrailRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/guardrails"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGuardrailOutcome(result.GetResultWithOwnership())
                            : CreateGuardrailOutcome(std::move(result.GetError()));
}
CreateGuardrailVersionOutcome BedrockClient::CreateGuardrailVersion(const CreateGuardrailVersionRequest& request) const {
  if (!request.GuardrailIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGuardrailVersion", "Required field: GuardrailIdentifier, is not set");
    return CreateGuardrailVersionOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [GuardrailIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/guardrails/");
        resolvedEndpoint.AddPathSegment(request.GetGuardrailIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGuardrailVersionOutcome(result.GetResultWithOwnership())
                            : CreateGuardrailVersionOutcome(std::move(result.GetError()));
}
CreateInferenceProfileOutcome BedrockClient::CreateInferenceProfile(const CreateInferenceProfileRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/inference-profiles"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInferenceProfileOutcome(result.GetResultWithOwnership())
                            : CreateInferenceProfileOutcome(std::move(result.GetError()));
}
CreateMarketplaceModelEndpointOutcome BedrockClient::CreateMarketplaceModelEndpoint(
    const CreateMarketplaceModelEndpointRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMarketplaceModelEndpointOutcome(result.GetResultWithOwnership())
                            : CreateMarketplaceModelEndpointOutcome(std::move(result.GetError()));
}
CreateModelCopyJobOutcome BedrockClient::CreateModelCopyJob(const CreateModelCopyJobRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/model-copy-jobs"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelCopyJobOutcome(result.GetResultWithOwnership())
                            : CreateModelCopyJobOutcome(std::move(result.GetError()));
}
CreateModelCustomizationJobOutcome BedrockClient::CreateModelCustomizationJob(const CreateModelCustomizationJobRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/model-customization-jobs"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelCustomizationJobOutcome(result.GetResultWithOwnership())
                            : CreateModelCustomizationJobOutcome(std::move(result.GetError()));
}
CreateModelImportJobOutcome BedrockClient::CreateModelImportJob(const CreateModelImportJobRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/model-import-jobs"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelImportJobOutcome(result.GetResultWithOwnership())
                            : CreateModelImportJobOutcome(std::move(result.GetError()));
}
CreateModelInvocationJobOutcome BedrockClient::CreateModelInvocationJob(const CreateModelInvocationJobRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/model-invocation-job"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelInvocationJobOutcome(result.GetResultWithOwnership())
                            : CreateModelInvocationJobOutcome(std::move(result.GetError()));
}
CreatePromptRouterOutcome BedrockClient::CreatePromptRouter(const CreatePromptRouterRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/prompt-routers"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePromptRouterOutcome(result.GetResultWithOwnership())
                            : CreatePromptRouterOutcome(std::move(result.GetError()));
}
CreateProvisionedModelThroughputOutcome BedrockClient::CreateProvisionedModelThroughput(
    const CreateProvisionedModelThroughputRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/provisioned-model-throughput"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProvisionedModelThroughputOutcome(result.GetResultWithOwnership())
                            : CreateProvisionedModelThroughputOutcome(std::move(result.GetError()));
}
DeleteAutomatedReasoningPolicyOutcome BedrockClient::DeleteAutomatedReasoningPolicy(
    const DeleteAutomatedReasoningPolicyRequest& request) const {
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAutomatedReasoningPolicy", "Required field: PolicyArn, is not set");
    return DeleteAutomatedReasoningPolicyOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [PolicyArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAutomatedReasoningPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteAutomatedReasoningPolicyOutcome(std::move(result.GetError()));
}
DeleteAutomatedReasoningPolicyBuildWorkflowOutcome BedrockClient::DeleteAutomatedReasoningPolicyBuildWorkflow(
    const DeleteAutomatedReasoningPolicyBuildWorkflowRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAutomatedReasoningPolicyBuildWorkflowOutcome(result.GetResultWithOwnership())
                            : DeleteAutomatedReasoningPolicyBuildWorkflowOutcome(std::move(result.GetError()));
}
DeleteAutomatedReasoningPolicyTestCaseOutcome BedrockClient::DeleteAutomatedReasoningPolicyTestCase(
    const DeleteAutomatedReasoningPolicyTestCaseRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/test-cases/");
        resolvedEndpoint.AddPathSegment(request.GetTestCaseId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAutomatedReasoningPolicyTestCaseOutcome(result.GetResultWithOwnership())
                            : DeleteAutomatedReasoningPolicyTestCaseOutcome(std::move(result.GetError()));
}
DeleteCustomModelOutcome BedrockClient::DeleteCustomModel(const DeleteCustomModelRequest& request) const {
  if (!request.ModelIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomModel", "Required field: ModelIdentifier, is not set");
    return DeleteCustomModelOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ModelIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/custom-models/");
        resolvedEndpoint.AddPathSegment(request.GetModelIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCustomModelOutcome(result.GetResultWithOwnership())
                            : DeleteCustomModelOutcome(std::move(result.GetError()));
}
DeleteCustomModelDeploymentOutcome BedrockClient::DeleteCustomModelDeployment(const DeleteCustomModelDeploymentRequest& request) const {
  if (!request.CustomModelDeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomModelDeployment", "Required field: CustomModelDeploymentIdentifier, is not set");
    return DeleteCustomModelDeploymentOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomModelDeploymentIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-customization/custom-model-deployments/");
        resolvedEndpoint.AddPathSegment(request.GetCustomModelDeploymentIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCustomModelDeploymentOutcome(result.GetResultWithOwnership())
                            : DeleteCustomModelDeploymentOutcome(std::move(result.GetError()));
}
DeleteEnforcedGuardrailConfigurationOutcome BedrockClient::DeleteEnforcedGuardrailConfiguration(
    const DeleteEnforcedGuardrailConfigurationRequest& request) const {
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnforcedGuardrailConfiguration", "Required field: ConfigId, is not set");
    return DeleteEnforcedGuardrailConfigurationOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/enforcedGuardrailsConfiguration/");
        resolvedEndpoint.AddPathSegment(request.GetConfigId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEnforcedGuardrailConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteEnforcedGuardrailConfigurationOutcome(std::move(result.GetError()));
}
DeleteFoundationModelAgreementOutcome BedrockClient::DeleteFoundationModelAgreement(
    const DeleteFoundationModelAgreementRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/delete-foundation-model-agreement"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFoundationModelAgreementOutcome(result.GetResultWithOwnership())
                            : DeleteFoundationModelAgreementOutcome(std::move(result.GetError()));
}
DeleteGuardrailOutcome BedrockClient::DeleteGuardrail(const DeleteGuardrailRequest& request) const {
  if (!request.GuardrailIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGuardrail", "Required field: GuardrailIdentifier, is not set");
    return DeleteGuardrailOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [GuardrailIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/guardrails/");
        resolvedEndpoint.AddPathSegment(request.GetGuardrailIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGuardrailOutcome(result.GetResultWithOwnership())
                            : DeleteGuardrailOutcome(std::move(result.GetError()));
}
DeleteImportedModelOutcome BedrockClient::DeleteImportedModel(const DeleteImportedModelRequest& request) const {
  if (!request.ModelIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImportedModel", "Required field: ModelIdentifier, is not set");
    return DeleteImportedModelOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ModelIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/imported-models/");
        resolvedEndpoint.AddPathSegment(request.GetModelIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteImportedModelOutcome(result.GetResultWithOwnership())
                            : DeleteImportedModelOutcome(std::move(result.GetError()));
}
DeleteInferenceProfileOutcome BedrockClient::DeleteInferenceProfile(const DeleteInferenceProfileRequest& request) const {
  if (!request.InferenceProfileIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInferenceProfile", "Required field: InferenceProfileIdentifier, is not set");
    return DeleteInferenceProfileOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InferenceProfileIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/inference-profiles/");
        resolvedEndpoint.AddPathSegment(request.GetInferenceProfileIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteInferenceProfileOutcome(result.GetResultWithOwnership())
                            : DeleteInferenceProfileOutcome(std::move(result.GetError()));
}
DeleteMarketplaceModelEndpointOutcome BedrockClient::DeleteMarketplaceModelEndpoint(
    const DeleteMarketplaceModelEndpointRequest& request) const {
  if (!request.EndpointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMarketplaceModelEndpoint", "Required field: EndpointArn, is not set");
    return DeleteMarketplaceModelEndpointOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [EndpointArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints/");
        resolvedEndpoint.AddPathSegment(request.GetEndpointArn());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMarketplaceModelEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteMarketplaceModelEndpointOutcome(std::move(result.GetError()));
}
DeleteModelInvocationLoggingConfigurationOutcome BedrockClient::DeleteModelInvocationLoggingConfiguration(
    const DeleteModelInvocationLoggingConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/logging/modelinvocations"); },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteModelInvocationLoggingConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteModelInvocationLoggingConfigurationOutcome(std::move(result.GetError()));
}
DeletePromptRouterOutcome BedrockClient::DeletePromptRouter(const DeletePromptRouterRequest& request) const {
  if (!request.PromptRouterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePromptRouter", "Required field: PromptRouterArn, is not set");
    return DeletePromptRouterOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PromptRouterArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/prompt-routers/");
        resolvedEndpoint.AddPathSegment(request.GetPromptRouterArn());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePromptRouterOutcome(result.GetResultWithOwnership())
                            : DeletePromptRouterOutcome(std::move(result.GetError()));
}
DeleteProvisionedModelThroughputOutcome BedrockClient::DeleteProvisionedModelThroughput(
    const DeleteProvisionedModelThroughputRequest& request) const {
  if (!request.ProvisionedModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProvisionedModelThroughput", "Required field: ProvisionedModelId, is not set");
    return DeleteProvisionedModelThroughputOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProvisionedModelId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/provisioned-model-throughput/");
        resolvedEndpoint.AddPathSegment(request.GetProvisionedModelId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProvisionedModelThroughputOutcome(result.GetResultWithOwnership())
                            : DeleteProvisionedModelThroughputOutcome(std::move(result.GetError()));
}
DeleteResourcePolicyOutcome BedrockClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/resource-policy/");
        resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}
DeregisterMarketplaceModelEndpointOutcome BedrockClient::DeregisterMarketplaceModelEndpoint(
    const DeregisterMarketplaceModelEndpointRequest& request) const {
  if (!request.EndpointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterMarketplaceModelEndpoint", "Required field: EndpointArn, is not set");
    return DeregisterMarketplaceModelEndpointOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints/");
        resolvedEndpoint.AddPathSegment(request.GetEndpointArn());
        resolvedEndpoint.AddPathSegments("/registration");
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeregisterMarketplaceModelEndpointOutcome(result.GetResultWithOwnership())
                            : DeregisterMarketplaceModelEndpointOutcome(std::move(result.GetError()));
}
ExportAutomatedReasoningPolicyVersionOutcome BedrockClient::ExportAutomatedReasoningPolicyVersion(
    const ExportAutomatedReasoningPolicyVersionRequest& request) const {
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportAutomatedReasoningPolicyVersion", "Required field: PolicyArn, is not set");
    return ExportAutomatedReasoningPolicyVersionOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/export");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ExportAutomatedReasoningPolicyVersionOutcome(result.GetResultWithOwnership())
                            : ExportAutomatedReasoningPolicyVersionOutcome(std::move(result.GetError()));
}
GetAutomatedReasoningPolicyOutcome BedrockClient::GetAutomatedReasoningPolicy(const GetAutomatedReasoningPolicyRequest& request) const {
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAutomatedReasoningPolicy", "Required field: PolicyArn, is not set");
    return GetAutomatedReasoningPolicyOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [PolicyArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAutomatedReasoningPolicyOutcome(result.GetResultWithOwnership())
                            : GetAutomatedReasoningPolicyOutcome(std::move(result.GetError()));
}
GetAutomatedReasoningPolicyAnnotationsOutcome BedrockClient::GetAutomatedReasoningPolicyAnnotations(
    const GetAutomatedReasoningPolicyAnnotationsRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
        resolvedEndpoint.AddPathSegments("/annotations");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAutomatedReasoningPolicyAnnotationsOutcome(result.GetResultWithOwnership())
                            : GetAutomatedReasoningPolicyAnnotationsOutcome(std::move(result.GetError()));
}
GetAutomatedReasoningPolicyBuildWorkflowOutcome BedrockClient::GetAutomatedReasoningPolicyBuildWorkflow(
    const GetAutomatedReasoningPolicyBuildWorkflowRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAutomatedReasoningPolicyBuildWorkflowOutcome(result.GetResultWithOwnership())
                            : GetAutomatedReasoningPolicyBuildWorkflowOutcome(std::move(result.GetError()));
}
GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome BedrockClient::GetAutomatedReasoningPolicyBuildWorkflowResultAssets(
    const GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
        resolvedEndpoint.AddPathSegments("/result-assets");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome(result.GetResultWithOwnership())
                            : GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome(std::move(result.GetError()));
}
GetAutomatedReasoningPolicyNextScenarioOutcome BedrockClient::GetAutomatedReasoningPolicyNextScenario(
    const GetAutomatedReasoningPolicyNextScenarioRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
        resolvedEndpoint.AddPathSegments("/scenarios");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAutomatedReasoningPolicyNextScenarioOutcome(result.GetResultWithOwnership())
                            : GetAutomatedReasoningPolicyNextScenarioOutcome(std::move(result.GetError()));
}
GetAutomatedReasoningPolicyTestCaseOutcome BedrockClient::GetAutomatedReasoningPolicyTestCase(
    const GetAutomatedReasoningPolicyTestCaseRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/test-cases/");
        resolvedEndpoint.AddPathSegment(request.GetTestCaseId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAutomatedReasoningPolicyTestCaseOutcome(result.GetResultWithOwnership())
                            : GetAutomatedReasoningPolicyTestCaseOutcome(std::move(result.GetError()));
}
GetAutomatedReasoningPolicyTestResultOutcome BedrockClient::GetAutomatedReasoningPolicyTestResult(
    const GetAutomatedReasoningPolicyTestResultRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
        resolvedEndpoint.AddPathSegments("/test-cases/");
        resolvedEndpoint.AddPathSegment(request.GetTestCaseId());
        resolvedEndpoint.AddPathSegments("/test-results");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAutomatedReasoningPolicyTestResultOutcome(result.GetResultWithOwnership())
                            : GetAutomatedReasoningPolicyTestResultOutcome(std::move(result.GetError()));
}
GetCustomModelOutcome BedrockClient::GetCustomModel(const GetCustomModelRequest& request) const {
  if (!request.ModelIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCustomModel", "Required field: ModelIdentifier, is not set");
    return GetCustomModelOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ModelIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/custom-models/");
        resolvedEndpoint.AddPathSegment(request.GetModelIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCustomModelOutcome(result.GetResultWithOwnership()) : GetCustomModelOutcome(std::move(result.GetError()));
}
GetCustomModelDeploymentOutcome BedrockClient::GetCustomModelDeployment(const GetCustomModelDeploymentRequest& request) const {
  if (!request.CustomModelDeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCustomModelDeployment", "Required field: CustomModelDeploymentIdentifier, is not set");
    return GetCustomModelDeploymentOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomModelDeploymentIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-customization/custom-model-deployments/");
        resolvedEndpoint.AddPathSegment(request.GetCustomModelDeploymentIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCustomModelDeploymentOutcome(result.GetResultWithOwnership())
                            : GetCustomModelDeploymentOutcome(std::move(result.GetError()));
}
GetEvaluationJobOutcome BedrockClient::GetEvaluationJob(const GetEvaluationJobRequest& request) const {
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvaluationJob", "Required field: JobIdentifier, is not set");
    return GetEvaluationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [JobIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/evaluation-jobs/");
        resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEvaluationJobOutcome(result.GetResultWithOwnership())
                            : GetEvaluationJobOutcome(std::move(result.GetError()));
}
GetFoundationModelOutcome BedrockClient::GetFoundationModel(const GetFoundationModelRequest& request) const {
  if (!request.ModelIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFoundationModel", "Required field: ModelIdentifier, is not set");
    return GetFoundationModelOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ModelIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/foundation-models/");
        resolvedEndpoint.AddPathSegment(request.GetModelIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFoundationModelOutcome(result.GetResultWithOwnership())
                            : GetFoundationModelOutcome(std::move(result.GetError()));
}
GetFoundationModelAvailabilityOutcome BedrockClient::GetFoundationModelAvailability(
    const GetFoundationModelAvailabilityRequest& request) const {
  if (!request.ModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFoundationModelAvailability", "Required field: ModelId, is not set");
    return GetFoundationModelAvailabilityOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [ModelId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/foundation-model-availability/");
        resolvedEndpoint.AddPathSegment(request.GetModelId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFoundationModelAvailabilityOutcome(result.GetResultWithOwnership())
                            : GetFoundationModelAvailabilityOutcome(std::move(result.GetError()));
}
GetGuardrailOutcome BedrockClient::GetGuardrail(const GetGuardrailRequest& request) const {
  if (!request.GuardrailIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGuardrail", "Required field: GuardrailIdentifier, is not set");
    return GetGuardrailOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [GuardrailIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/guardrails/");
        resolvedEndpoint.AddPathSegment(request.GetGuardrailIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGuardrailOutcome(result.GetResultWithOwnership()) : GetGuardrailOutcome(std::move(result.GetError()));
}
GetImportedModelOutcome BedrockClient::GetImportedModel(const GetImportedModelRequest& request) const {
  if (!request.ModelIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportedModel", "Required field: ModelIdentifier, is not set");
    return GetImportedModelOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ModelIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/imported-models/");
        resolvedEndpoint.AddPathSegment(request.GetModelIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetImportedModelOutcome(result.GetResultWithOwnership())
                            : GetImportedModelOutcome(std::move(result.GetError()));
}
GetInferenceProfileOutcome BedrockClient::GetInferenceProfile(const GetInferenceProfileRequest& request) const {
  if (!request.InferenceProfileIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInferenceProfile", "Required field: InferenceProfileIdentifier, is not set");
    return GetInferenceProfileOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InferenceProfileIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/inference-profiles/");
        resolvedEndpoint.AddPathSegment(request.GetInferenceProfileIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetInferenceProfileOutcome(result.GetResultWithOwnership())
                            : GetInferenceProfileOutcome(std::move(result.GetError()));
}
GetMarketplaceModelEndpointOutcome BedrockClient::GetMarketplaceModelEndpoint(const GetMarketplaceModelEndpointRequest& request) const {
  if (!request.EndpointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMarketplaceModelEndpoint", "Required field: EndpointArn, is not set");
    return GetMarketplaceModelEndpointOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EndpointArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints/");
        resolvedEndpoint.AddPathSegment(request.GetEndpointArn());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMarketplaceModelEndpointOutcome(result.GetResultWithOwnership())
                            : GetMarketplaceModelEndpointOutcome(std::move(result.GetError()));
}
GetModelCopyJobOutcome BedrockClient::GetModelCopyJob(const GetModelCopyJobRequest& request) const {
  if (!request.JobArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelCopyJob", "Required field: JobArn, is not set");
    return GetModelCopyJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [JobArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-copy-jobs/");
        resolvedEndpoint.AddPathSegment(request.GetJobArn());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetModelCopyJobOutcome(result.GetResultWithOwnership())
                            : GetModelCopyJobOutcome(std::move(result.GetError()));
}
GetModelCustomizationJobOutcome BedrockClient::GetModelCustomizationJob(const GetModelCustomizationJobRequest& request) const {
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelCustomizationJob", "Required field: JobIdentifier, is not set");
    return GetModelCustomizationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [JobIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-customization-jobs/");
        resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetModelCustomizationJobOutcome(result.GetResultWithOwnership())
                            : GetModelCustomizationJobOutcome(std::move(result.GetError()));
}
GetModelImportJobOutcome BedrockClient::GetModelImportJob(const GetModelImportJobRequest& request) const {
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelImportJob", "Required field: JobIdentifier, is not set");
    return GetModelImportJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [JobIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-import-jobs/");
        resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetModelImportJobOutcome(result.GetResultWithOwnership())
                            : GetModelImportJobOutcome(std::move(result.GetError()));
}
GetModelInvocationJobOutcome BedrockClient::GetModelInvocationJob(const GetModelInvocationJobRequest& request) const {
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetModelInvocationJob", "Required field: JobIdentifier, is not set");
    return GetModelInvocationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [JobIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-invocation-job/");
        resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetModelInvocationJobOutcome(result.GetResultWithOwnership())
                            : GetModelInvocationJobOutcome(std::move(result.GetError()));
}
GetModelInvocationLoggingConfigurationOutcome BedrockClient::GetModelInvocationLoggingConfiguration(
    const GetModelInvocationLoggingConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/logging/modelinvocations"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetModelInvocationLoggingConfigurationOutcome(result.GetResultWithOwnership())
                            : GetModelInvocationLoggingConfigurationOutcome(std::move(result.GetError()));
}
GetPromptRouterOutcome BedrockClient::GetPromptRouter(const GetPromptRouterRequest& request) const {
  if (!request.PromptRouterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPromptRouter", "Required field: PromptRouterArn, is not set");
    return GetPromptRouterOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [PromptRouterArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/prompt-routers/");
        resolvedEndpoint.AddPathSegment(request.GetPromptRouterArn());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPromptRouterOutcome(result.GetResultWithOwnership())
                            : GetPromptRouterOutcome(std::move(result.GetError()));
}
GetProvisionedModelThroughputOutcome BedrockClient::GetProvisionedModelThroughput(
    const GetProvisionedModelThroughputRequest& request) const {
  if (!request.ProvisionedModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProvisionedModelThroughput", "Required field: ProvisionedModelId, is not set");
    return GetProvisionedModelThroughputOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [ProvisionedModelId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/provisioned-model-throughput/");
        resolvedEndpoint.AddPathSegment(request.GetProvisionedModelId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProvisionedModelThroughputOutcome(result.GetResultWithOwnership())
                            : GetProvisionedModelThroughputOutcome(std::move(result.GetError()));
}
GetResourcePolicyOutcome BedrockClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/resource-policy/");
        resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}
GetUseCaseForModelAccessOutcome BedrockClient::GetUseCaseForModelAccess(const GetUseCaseForModelAccessRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/use-case-for-model-access"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetUseCaseForModelAccessOutcome(result.GetResultWithOwnership())
                            : GetUseCaseForModelAccessOutcome(std::move(result.GetError()));
}
ListAutomatedReasoningPoliciesOutcome BedrockClient::ListAutomatedReasoningPolicies(
    const ListAutomatedReasoningPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/automated-reasoning-policies"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAutomatedReasoningPoliciesOutcome(result.GetResultWithOwnership())
                            : ListAutomatedReasoningPoliciesOutcome(std::move(result.GetError()));
}
ListAutomatedReasoningPolicyBuildWorkflowsOutcome BedrockClient::ListAutomatedReasoningPolicyBuildWorkflows(
    const ListAutomatedReasoningPolicyBuildWorkflowsRequest& request) const {
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAutomatedReasoningPolicyBuildWorkflows", "Required field: PolicyArn, is not set");
    return ListAutomatedReasoningPolicyBuildWorkflowsOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAutomatedReasoningPolicyBuildWorkflowsOutcome(result.GetResultWithOwnership())
                            : ListAutomatedReasoningPolicyBuildWorkflowsOutcome(std::move(result.GetError()));
}
ListAutomatedReasoningPolicyTestCasesOutcome BedrockClient::ListAutomatedReasoningPolicyTestCases(
    const ListAutomatedReasoningPolicyTestCasesRequest& request) const {
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAutomatedReasoningPolicyTestCases", "Required field: PolicyArn, is not set");
    return ListAutomatedReasoningPolicyTestCasesOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/test-cases");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAutomatedReasoningPolicyTestCasesOutcome(result.GetResultWithOwnership())
                            : ListAutomatedReasoningPolicyTestCasesOutcome(std::move(result.GetError()));
}
ListAutomatedReasoningPolicyTestResultsOutcome BedrockClient::ListAutomatedReasoningPolicyTestResults(
    const ListAutomatedReasoningPolicyTestResultsRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
        resolvedEndpoint.AddPathSegments("/test-results");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAutomatedReasoningPolicyTestResultsOutcome(result.GetResultWithOwnership())
                            : ListAutomatedReasoningPolicyTestResultsOutcome(std::move(result.GetError()));
}
ListCustomModelDeploymentsOutcome BedrockClient::ListCustomModelDeployments(const ListCustomModelDeploymentsRequest& request) const {
  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-customization/custom-model-deployments");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCustomModelDeploymentsOutcome(result.GetResultWithOwnership())
                            : ListCustomModelDeploymentsOutcome(std::move(result.GetError()));
}
ListCustomModelsOutcome BedrockClient::ListCustomModels(const ListCustomModelsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/custom-models"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCustomModelsOutcome(result.GetResultWithOwnership())
                            : ListCustomModelsOutcome(std::move(result.GetError()));
}
ListEnforcedGuardrailsConfigurationOutcome BedrockClient::ListEnforcedGuardrailsConfiguration(
    const ListEnforcedGuardrailsConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/enforcedGuardrailsConfiguration"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEnforcedGuardrailsConfigurationOutcome(result.GetResultWithOwnership())
                            : ListEnforcedGuardrailsConfigurationOutcome(std::move(result.GetError()));
}
ListEvaluationJobsOutcome BedrockClient::ListEvaluationJobs(const ListEvaluationJobsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/evaluation-jobs"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEvaluationJobsOutcome(result.GetResultWithOwnership())
                            : ListEvaluationJobsOutcome(std::move(result.GetError()));
}
ListFoundationModelAgreementOffersOutcome BedrockClient::ListFoundationModelAgreementOffers(
    const ListFoundationModelAgreementOffersRequest& request) const {
  if (!request.ModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFoundationModelAgreementOffers", "Required field: ModelId, is not set");
    return ListFoundationModelAgreementOffersOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/list-foundation-model-agreement-offers/");
        resolvedEndpoint.AddPathSegment(request.GetModelId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFoundationModelAgreementOffersOutcome(result.GetResultWithOwnership())
                            : ListFoundationModelAgreementOffersOutcome(std::move(result.GetError()));
}
ListFoundationModelsOutcome BedrockClient::ListFoundationModels(const ListFoundationModelsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/foundation-models"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFoundationModelsOutcome(result.GetResultWithOwnership())
                            : ListFoundationModelsOutcome(std::move(result.GetError()));
}
ListGuardrailsOutcome BedrockClient::ListGuardrails(const ListGuardrailsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/guardrails"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGuardrailsOutcome(result.GetResultWithOwnership()) : ListGuardrailsOutcome(std::move(result.GetError()));
}
ListImportedModelsOutcome BedrockClient::ListImportedModels(const ListImportedModelsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/imported-models"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListImportedModelsOutcome(result.GetResultWithOwnership())
                            : ListImportedModelsOutcome(std::move(result.GetError()));
}
ListInferenceProfilesOutcome BedrockClient::ListInferenceProfiles(const ListInferenceProfilesRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/inference-profiles"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInferenceProfilesOutcome(result.GetResultWithOwnership())
                            : ListInferenceProfilesOutcome(std::move(result.GetError()));
}
ListMarketplaceModelEndpointsOutcome BedrockClient::ListMarketplaceModelEndpoints(
    const ListMarketplaceModelEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMarketplaceModelEndpointsOutcome(result.GetResultWithOwnership())
                            : ListMarketplaceModelEndpointsOutcome(std::move(result.GetError()));
}
ListModelCopyJobsOutcome BedrockClient::ListModelCopyJobs(const ListModelCopyJobsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/model-copy-jobs"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListModelCopyJobsOutcome(result.GetResultWithOwnership())
                            : ListModelCopyJobsOutcome(std::move(result.GetError()));
}
ListModelCustomizationJobsOutcome BedrockClient::ListModelCustomizationJobs(const ListModelCustomizationJobsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/model-customization-jobs"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListModelCustomizationJobsOutcome(result.GetResultWithOwnership())
                            : ListModelCustomizationJobsOutcome(std::move(result.GetError()));
}
ListModelImportJobsOutcome BedrockClient::ListModelImportJobs(const ListModelImportJobsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/model-import-jobs"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListModelImportJobsOutcome(result.GetResultWithOwnership())
                            : ListModelImportJobsOutcome(std::move(result.GetError()));
}
ListModelInvocationJobsOutcome BedrockClient::ListModelInvocationJobs(const ListModelInvocationJobsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/model-invocation-jobs"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListModelInvocationJobsOutcome(result.GetResultWithOwnership())
                            : ListModelInvocationJobsOutcome(std::move(result.GetError()));
}
ListPromptRoutersOutcome BedrockClient::ListPromptRouters(const ListPromptRoutersRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/prompt-routers"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPromptRoutersOutcome(result.GetResultWithOwnership())
                            : ListPromptRoutersOutcome(std::move(result.GetError()));
}
ListProvisionedModelThroughputsOutcome BedrockClient::ListProvisionedModelThroughputs(
    const ListProvisionedModelThroughputsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/provisioned-model-throughputs"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProvisionedModelThroughputsOutcome(result.GetResultWithOwnership())
                            : ListProvisionedModelThroughputsOutcome(std::move(result.GetError()));
}
ListTagsForResourceOutcome BedrockClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/listTagsForResource"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}
PutEnforcedGuardrailConfigurationOutcome BedrockClient::PutEnforcedGuardrailConfiguration(
    const PutEnforcedGuardrailConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/enforcedGuardrailsConfiguration"); },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutEnforcedGuardrailConfigurationOutcome(result.GetResultWithOwnership())
                            : PutEnforcedGuardrailConfigurationOutcome(std::move(result.GetError()));
}
PutModelInvocationLoggingConfigurationOutcome BedrockClient::PutModelInvocationLoggingConfiguration(
    const PutModelInvocationLoggingConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/logging/modelinvocations"); },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutModelInvocationLoggingConfigurationOutcome(result.GetResultWithOwnership())
                            : PutModelInvocationLoggingConfigurationOutcome(std::move(result.GetError()));
}
PutResourcePolicyOutcome BedrockClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/resource-policy"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}
PutUseCaseForModelAccessOutcome BedrockClient::PutUseCaseForModelAccess(const PutUseCaseForModelAccessRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/use-case-for-model-access"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutUseCaseForModelAccessOutcome(result.GetResultWithOwnership())
                            : PutUseCaseForModelAccessOutcome(std::move(result.GetError()));
}
RegisterMarketplaceModelEndpointOutcome BedrockClient::RegisterMarketplaceModelEndpoint(
    const RegisterMarketplaceModelEndpointRequest& request) const {
  if (!request.EndpointIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterMarketplaceModelEndpoint", "Required field: EndpointIdentifier, is not set");
    return RegisterMarketplaceModelEndpointOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints/");
        resolvedEndpoint.AddPathSegment(request.GetEndpointIdentifier());
        resolvedEndpoint.AddPathSegments("/registration");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterMarketplaceModelEndpointOutcome(result.GetResultWithOwnership())
                            : RegisterMarketplaceModelEndpointOutcome(std::move(result.GetError()));
}
StartAutomatedReasoningPolicyBuildWorkflowOutcome BedrockClient::StartAutomatedReasoningPolicyBuildWorkflow(
    const StartAutomatedReasoningPolicyBuildWorkflowRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(
            AutomatedReasoningPolicyBuildWorkflowTypeMapper::GetNameForAutomatedReasoningPolicyBuildWorkflowType(
                request.GetBuildWorkflowType()));
        resolvedEndpoint.AddPathSegments("/start");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAutomatedReasoningPolicyBuildWorkflowOutcome(result.GetResultWithOwnership())
                            : StartAutomatedReasoningPolicyBuildWorkflowOutcome(std::move(result.GetError()));
}
StartAutomatedReasoningPolicyTestWorkflowOutcome BedrockClient::StartAutomatedReasoningPolicyTestWorkflow(
    const StartAutomatedReasoningPolicyTestWorkflowRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
        resolvedEndpoint.AddPathSegments("/test-workflows");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAutomatedReasoningPolicyTestWorkflowOutcome(result.GetResultWithOwnership())
                            : StartAutomatedReasoningPolicyTestWorkflowOutcome(std::move(result.GetError()));
}
StopEvaluationJobOutcome BedrockClient::StopEvaluationJob(const StopEvaluationJobRequest& request) const {
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopEvaluationJob", "Required field: JobIdentifier, is not set");
    return StopEvaluationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [JobIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/evaluation-job/");
        resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
        resolvedEndpoint.AddPathSegments("/stop");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopEvaluationJobOutcome(result.GetResultWithOwnership())
                            : StopEvaluationJobOutcome(std::move(result.GetError()));
}
StopModelCustomizationJobOutcome BedrockClient::StopModelCustomizationJob(const StopModelCustomizationJobRequest& request) const {
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopModelCustomizationJob", "Required field: JobIdentifier, is not set");
    return StopModelCustomizationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [JobIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-customization-jobs/");
        resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
        resolvedEndpoint.AddPathSegments("/stop");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopModelCustomizationJobOutcome(result.GetResultWithOwnership())
                            : StopModelCustomizationJobOutcome(std::move(result.GetError()));
}
StopModelInvocationJobOutcome BedrockClient::StopModelInvocationJob(const StopModelInvocationJobRequest& request) const {
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopModelInvocationJob", "Required field: JobIdentifier, is not set");
    return StopModelInvocationJobOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [JobIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-invocation-job/");
        resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
        resolvedEndpoint.AddPathSegments("/stop");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopModelInvocationJobOutcome(result.GetResultWithOwnership())
                            : StopModelInvocationJobOutcome(std::move(result.GetError()));
}
TagResourceOutcome BedrockClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/tagResource"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}
UntagResourceOutcome BedrockClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/untagResource"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
UpdateAutomatedReasoningPolicyOutcome BedrockClient::UpdateAutomatedReasoningPolicy(
    const UpdateAutomatedReasoningPolicyRequest& request) const {
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAutomatedReasoningPolicy", "Required field: PolicyArn, is not set");
    return UpdateAutomatedReasoningPolicyOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [PolicyArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
      },
      Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAutomatedReasoningPolicyOutcome(result.GetResultWithOwnership())
                            : UpdateAutomatedReasoningPolicyOutcome(std::move(result.GetError()));
}
UpdateAutomatedReasoningPolicyAnnotationsOutcome BedrockClient::UpdateAutomatedReasoningPolicyAnnotations(
    const UpdateAutomatedReasoningPolicyAnnotationsRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/build-workflows/");
        resolvedEndpoint.AddPathSegment(request.GetBuildWorkflowId());
        resolvedEndpoint.AddPathSegments("/annotations");
      },
      Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAutomatedReasoningPolicyAnnotationsOutcome(result.GetResultWithOwnership())
                            : UpdateAutomatedReasoningPolicyAnnotationsOutcome(std::move(result.GetError()));
}
UpdateAutomatedReasoningPolicyTestCaseOutcome BedrockClient::UpdateAutomatedReasoningPolicyTestCase(
    const UpdateAutomatedReasoningPolicyTestCaseRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/automated-reasoning-policies/");
        resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
        resolvedEndpoint.AddPathSegments("/test-cases/");
        resolvedEndpoint.AddPathSegment(request.GetTestCaseId());
      },
      Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAutomatedReasoningPolicyTestCaseOutcome(result.GetResultWithOwnership())
                            : UpdateAutomatedReasoningPolicyTestCaseOutcome(std::move(result.GetError()));
}
UpdateCustomModelDeploymentOutcome BedrockClient::UpdateCustomModelDeployment(const UpdateCustomModelDeploymentRequest& request) const {
  if (!request.CustomModelDeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCustomModelDeployment", "Required field: CustomModelDeploymentIdentifier, is not set");
    return UpdateCustomModelDeploymentOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomModelDeploymentIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/model-customization/custom-model-deployments/");
        resolvedEndpoint.AddPathSegment(request.GetCustomModelDeploymentIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateCustomModelDeploymentOutcome(result.GetResultWithOwnership())
                            : UpdateCustomModelDeploymentOutcome(std::move(result.GetError()));
}
UpdateGuardrailOutcome BedrockClient::UpdateGuardrail(const UpdateGuardrailRequest& request) const {
  if (!request.GuardrailIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGuardrail", "Required field: GuardrailIdentifier, is not set");
    return UpdateGuardrailOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [GuardrailIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/guardrails/");
        resolvedEndpoint.AddPathSegment(request.GetGuardrailIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateGuardrailOutcome(result.GetResultWithOwnership())
                            : UpdateGuardrailOutcome(std::move(result.GetError()));
}
UpdateMarketplaceModelEndpointOutcome BedrockClient::UpdateMarketplaceModelEndpoint(
    const UpdateMarketplaceModelEndpointRequest& request) const {
  if (!request.EndpointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMarketplaceModelEndpoint", "Required field: EndpointArn, is not set");
    return UpdateMarketplaceModelEndpointOutcome(Aws::Client::AWSError<BedrockErrors>(BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [EndpointArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/marketplace-model/endpoints/");
        resolvedEndpoint.AddPathSegment(request.GetEndpointArn());
      },
      Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateMarketplaceModelEndpointOutcome(result.GetResultWithOwnership())
                            : UpdateMarketplaceModelEndpointOutcome(std::move(result.GetError()));
}
UpdateProvisionedModelThroughputOutcome BedrockClient::UpdateProvisionedModelThroughput(
    const UpdateProvisionedModelThroughputRequest& request) const {
  if (!request.ProvisionedModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProvisionedModelThroughput", "Required field: ProvisionedModelId, is not set");
    return UpdateProvisionedModelThroughputOutcome(Aws::Client::AWSError<BedrockErrors>(
        BedrockErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProvisionedModelId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/provisioned-model-throughput/");
        resolvedEndpoint.AddPathSegment(request.GetProvisionedModelId());
      },
      Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateProvisionedModelThroughputOutcome(result.GetResultWithOwnership())
                            : UpdateProvisionedModelThroughputOutcome(std::move(result.GetError()));
}
