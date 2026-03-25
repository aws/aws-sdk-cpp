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
#include <aws/ecr/ECRClient.h>
#include <aws/ecr/ECREndpointProvider.h>
#include <aws/ecr/ECRErrorMarshaller.h>
#include <aws/ecr/model/BatchCheckLayerAvailabilityRequest.h>
#include <aws/ecr/model/BatchDeleteImageRequest.h>
#include <aws/ecr/model/BatchGetImageRequest.h>
#include <aws/ecr/model/BatchGetRepositoryScanningConfigurationRequest.h>
#include <aws/ecr/model/CompleteLayerUploadRequest.h>
#include <aws/ecr/model/CreatePullThroughCacheRuleRequest.h>
#include <aws/ecr/model/CreateRepositoryCreationTemplateRequest.h>
#include <aws/ecr/model/CreateRepositoryRequest.h>
#include <aws/ecr/model/DeleteLifecyclePolicyRequest.h>
#include <aws/ecr/model/DeletePullThroughCacheRuleRequest.h>
#include <aws/ecr/model/DeleteRegistryPolicyRequest.h>
#include <aws/ecr/model/DeleteRepositoryCreationTemplateRequest.h>
#include <aws/ecr/model/DeleteRepositoryPolicyRequest.h>
#include <aws/ecr/model/DeleteRepositoryRequest.h>
#include <aws/ecr/model/DeleteSigningConfigurationRequest.h>
#include <aws/ecr/model/DeregisterPullTimeUpdateExclusionRequest.h>
#include <aws/ecr/model/DescribeImageReplicationStatusRequest.h>
#include <aws/ecr/model/DescribeImageScanFindingsRequest.h>
#include <aws/ecr/model/DescribeImageSigningStatusRequest.h>
#include <aws/ecr/model/DescribeImagesRequest.h>
#include <aws/ecr/model/DescribePullThroughCacheRulesRequest.h>
#include <aws/ecr/model/DescribeRegistryRequest.h>
#include <aws/ecr/model/DescribeRepositoriesRequest.h>
#include <aws/ecr/model/DescribeRepositoryCreationTemplatesRequest.h>
#include <aws/ecr/model/GetAccountSettingRequest.h>
#include <aws/ecr/model/GetAuthorizationTokenRequest.h>
#include <aws/ecr/model/GetDownloadUrlForLayerRequest.h>
#include <aws/ecr/model/GetLifecyclePolicyPreviewRequest.h>
#include <aws/ecr/model/GetLifecyclePolicyRequest.h>
#include <aws/ecr/model/GetRegistryPolicyRequest.h>
#include <aws/ecr/model/GetRegistryScanningConfigurationRequest.h>
#include <aws/ecr/model/GetRepositoryPolicyRequest.h>
#include <aws/ecr/model/GetSigningConfigurationRequest.h>
#include <aws/ecr/model/InitiateLayerUploadRequest.h>
#include <aws/ecr/model/ListImageReferrersRequest.h>
#include <aws/ecr/model/ListImagesRequest.h>
#include <aws/ecr/model/ListPullTimeUpdateExclusionsRequest.h>
#include <aws/ecr/model/ListTagsForResourceRequest.h>
#include <aws/ecr/model/PutAccountSettingRequest.h>
#include <aws/ecr/model/PutImageRequest.h>
#include <aws/ecr/model/PutImageScanningConfigurationRequest.h>
#include <aws/ecr/model/PutImageTagMutabilityRequest.h>
#include <aws/ecr/model/PutLifecyclePolicyRequest.h>
#include <aws/ecr/model/PutRegistryPolicyRequest.h>
#include <aws/ecr/model/PutRegistryScanningConfigurationRequest.h>
#include <aws/ecr/model/PutReplicationConfigurationRequest.h>
#include <aws/ecr/model/PutSigningConfigurationRequest.h>
#include <aws/ecr/model/RegisterPullTimeUpdateExclusionRequest.h>
#include <aws/ecr/model/SetRepositoryPolicyRequest.h>
#include <aws/ecr/model/StartImageScanRequest.h>
#include <aws/ecr/model/StartLifecyclePolicyPreviewRequest.h>
#include <aws/ecr/model/TagResourceRequest.h>
#include <aws/ecr/model/UntagResourceRequest.h>
#include <aws/ecr/model/UpdateImageStorageClassRequest.h>
#include <aws/ecr/model/UpdatePullThroughCacheRuleRequest.h>
#include <aws/ecr/model/UpdateRepositoryCreationTemplateRequest.h>
#include <aws/ecr/model/UploadLayerPartRequest.h>
#include <aws/ecr/model/ValidatePullThroughCacheRuleRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ECR;
using namespace Aws::ECR::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ECR {
const char SERVICE_NAME[] = "ecr";
const char ALLOCATION_TAG[] = "ECRClient";
}  // namespace ECR
}  // namespace Aws
const char* ECRClient::GetServiceName() { return SERVICE_NAME; }
const char* ECRClient::GetAllocationTag() { return ALLOCATION_TAG; }

ECRClient::ECRClient(const ECR::ECRClientConfiguration& clientConfiguration, std::shared_ptr<ECREndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECRClient::ECRClient(const AWSCredentials& credentials, std::shared_ptr<ECREndpointProviderBase> endpointProvider,
                     const ECR::ECRClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECRClient::ECRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<ECREndpointProviderBase> endpointProvider, const ECR::ECRClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ECRClient::ECRClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECRClient::ECRClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ECRClient::ECRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ECRClient::~ECRClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ECREndpointProviderBase>& ECRClient::accessEndpointProvider() { return m_endpointProvider; }

void ECRClient::init(const ECR::ECRClientConfiguration& config) {
  AWSClient::SetServiceClientName("ECR");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ecr");
}

void ECRClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ECRClient::InvokeOperationOutcome ECRClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchCheckLayerAvailabilityOutcome ECRClient::BatchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest& request) const {
  return BatchCheckLayerAvailabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteImageOutcome ECRClient::BatchDeleteImage(const BatchDeleteImageRequest& request) const {
  return BatchDeleteImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetImageOutcome ECRClient::BatchGetImage(const BatchGetImageRequest& request) const {
  return BatchGetImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetRepositoryScanningConfigurationOutcome ECRClient::BatchGetRepositoryScanningConfiguration(
    const BatchGetRepositoryScanningConfigurationRequest& request) const {
  return BatchGetRepositoryScanningConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CompleteLayerUploadOutcome ECRClient::CompleteLayerUpload(const CompleteLayerUploadRequest& request) const {
  return CompleteLayerUploadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePullThroughCacheRuleOutcome ECRClient::CreatePullThroughCacheRule(const CreatePullThroughCacheRuleRequest& request) const {
  return CreatePullThroughCacheRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRepositoryOutcome ECRClient::CreateRepository(const CreateRepositoryRequest& request) const {
  return CreateRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRepositoryCreationTemplateOutcome ECRClient::CreateRepositoryCreationTemplate(
    const CreateRepositoryCreationTemplateRequest& request) const {
  return CreateRepositoryCreationTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLifecyclePolicyOutcome ECRClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const {
  return DeleteLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePullThroughCacheRuleOutcome ECRClient::DeletePullThroughCacheRule(const DeletePullThroughCacheRuleRequest& request) const {
  return DeletePullThroughCacheRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRegistryPolicyOutcome ECRClient::DeleteRegistryPolicy(const DeleteRegistryPolicyRequest& request) const {
  return DeleteRegistryPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRepositoryOutcome ECRClient::DeleteRepository(const DeleteRepositoryRequest& request) const {
  return DeleteRepositoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRepositoryCreationTemplateOutcome ECRClient::DeleteRepositoryCreationTemplate(
    const DeleteRepositoryCreationTemplateRequest& request) const {
  return DeleteRepositoryCreationTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRepositoryPolicyOutcome ECRClient::DeleteRepositoryPolicy(const DeleteRepositoryPolicyRequest& request) const {
  return DeleteRepositoryPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSigningConfigurationOutcome ECRClient::DeleteSigningConfiguration(const DeleteSigningConfigurationRequest& request) const {
  return DeleteSigningConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterPullTimeUpdateExclusionOutcome ECRClient::DeregisterPullTimeUpdateExclusion(
    const DeregisterPullTimeUpdateExclusionRequest& request) const {
  return DeregisterPullTimeUpdateExclusionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageReplicationStatusOutcome ECRClient::DescribeImageReplicationStatus(
    const DescribeImageReplicationStatusRequest& request) const {
  return DescribeImageReplicationStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageScanFindingsOutcome ECRClient::DescribeImageScanFindings(const DescribeImageScanFindingsRequest& request) const {
  return DescribeImageScanFindingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageSigningStatusOutcome ECRClient::DescribeImageSigningStatus(const DescribeImageSigningStatusRequest& request) const {
  return DescribeImageSigningStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImagesOutcome ECRClient::DescribeImages(const DescribeImagesRequest& request) const {
  return DescribeImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePullThroughCacheRulesOutcome ECRClient::DescribePullThroughCacheRules(const DescribePullThroughCacheRulesRequest& request) const {
  return DescribePullThroughCacheRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegistryOutcome ECRClient::DescribeRegistry(const DescribeRegistryRequest& request) const {
  return DescribeRegistryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRepositoriesOutcome ECRClient::DescribeRepositories(const DescribeRepositoriesRequest& request) const {
  return DescribeRepositoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRepositoryCreationTemplatesOutcome ECRClient::DescribeRepositoryCreationTemplates(
    const DescribeRepositoryCreationTemplatesRequest& request) const {
  return DescribeRepositoryCreationTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountSettingOutcome ECRClient::GetAccountSetting(const GetAccountSettingRequest& request) const {
  return GetAccountSettingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAuthorizationTokenOutcome ECRClient::GetAuthorizationToken(const GetAuthorizationTokenRequest& request) const {
  return GetAuthorizationTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDownloadUrlForLayerOutcome ECRClient::GetDownloadUrlForLayer(const GetDownloadUrlForLayerRequest& request) const {
  return GetDownloadUrlForLayerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLifecyclePolicyOutcome ECRClient::GetLifecyclePolicy(const GetLifecyclePolicyRequest& request) const {
  return GetLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLifecyclePolicyPreviewOutcome ECRClient::GetLifecyclePolicyPreview(const GetLifecyclePolicyPreviewRequest& request) const {
  return GetLifecyclePolicyPreviewOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegistryPolicyOutcome ECRClient::GetRegistryPolicy(const GetRegistryPolicyRequest& request) const {
  return GetRegistryPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegistryScanningConfigurationOutcome ECRClient::GetRegistryScanningConfiguration(
    const GetRegistryScanningConfigurationRequest& request) const {
  return GetRegistryScanningConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRepositoryPolicyOutcome ECRClient::GetRepositoryPolicy(const GetRepositoryPolicyRequest& request) const {
  return GetRepositoryPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSigningConfigurationOutcome ECRClient::GetSigningConfiguration(const GetSigningConfigurationRequest& request) const {
  return GetSigningConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InitiateLayerUploadOutcome ECRClient::InitiateLayerUpload(const InitiateLayerUploadRequest& request) const {
  return InitiateLayerUploadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImageReferrersOutcome ECRClient::ListImageReferrers(const ListImageReferrersRequest& request) const {
  return ListImageReferrersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImagesOutcome ECRClient::ListImages(const ListImagesRequest& request) const {
  return ListImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPullTimeUpdateExclusionsOutcome ECRClient::ListPullTimeUpdateExclusions(const ListPullTimeUpdateExclusionsRequest& request) const {
  return ListPullTimeUpdateExclusionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ECRClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAccountSettingOutcome ECRClient::PutAccountSetting(const PutAccountSettingRequest& request) const {
  return PutAccountSettingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutImageOutcome ECRClient::PutImage(const PutImageRequest& request) const {
  return PutImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutImageScanningConfigurationOutcome ECRClient::PutImageScanningConfiguration(const PutImageScanningConfigurationRequest& request) const {
  return PutImageScanningConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutImageTagMutabilityOutcome ECRClient::PutImageTagMutability(const PutImageTagMutabilityRequest& request) const {
  return PutImageTagMutabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLifecyclePolicyOutcome ECRClient::PutLifecyclePolicy(const PutLifecyclePolicyRequest& request) const {
  return PutLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRegistryPolicyOutcome ECRClient::PutRegistryPolicy(const PutRegistryPolicyRequest& request) const {
  return PutRegistryPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRegistryScanningConfigurationOutcome ECRClient::PutRegistryScanningConfiguration(
    const PutRegistryScanningConfigurationRequest& request) const {
  return PutRegistryScanningConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutReplicationConfigurationOutcome ECRClient::PutReplicationConfiguration(const PutReplicationConfigurationRequest& request) const {
  return PutReplicationConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutSigningConfigurationOutcome ECRClient::PutSigningConfiguration(const PutSigningConfigurationRequest& request) const {
  return PutSigningConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterPullTimeUpdateExclusionOutcome ECRClient::RegisterPullTimeUpdateExclusion(
    const RegisterPullTimeUpdateExclusionRequest& request) const {
  return RegisterPullTimeUpdateExclusionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetRepositoryPolicyOutcome ECRClient::SetRepositoryPolicy(const SetRepositoryPolicyRequest& request) const {
  return SetRepositoryPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartImageScanOutcome ECRClient::StartImageScan(const StartImageScanRequest& request) const {
  return StartImageScanOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartLifecyclePolicyPreviewOutcome ECRClient::StartLifecyclePolicyPreview(const StartLifecyclePolicyPreviewRequest& request) const {
  return StartLifecyclePolicyPreviewOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ECRClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ECRClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateImageStorageClassOutcome ECRClient::UpdateImageStorageClass(const UpdateImageStorageClassRequest& request) const {
  return UpdateImageStorageClassOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePullThroughCacheRuleOutcome ECRClient::UpdatePullThroughCacheRule(const UpdatePullThroughCacheRuleRequest& request) const {
  return UpdatePullThroughCacheRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRepositoryCreationTemplateOutcome ECRClient::UpdateRepositoryCreationTemplate(
    const UpdateRepositoryCreationTemplateRequest& request) const {
  return UpdateRepositoryCreationTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UploadLayerPartOutcome ECRClient::UploadLayerPart(const UploadLayerPartRequest& request) const {
  return UploadLayerPartOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ValidatePullThroughCacheRuleOutcome ECRClient::ValidatePullThroughCacheRule(const ValidatePullThroughCacheRuleRequest& request) const {
  return ValidatePullThroughCacheRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
