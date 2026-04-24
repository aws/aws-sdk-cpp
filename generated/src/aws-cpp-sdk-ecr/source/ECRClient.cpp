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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCheckLayerAvailabilityOutcome(result.GetResultWithOwnership())
                            : BatchCheckLayerAvailabilityOutcome(std::move(result.GetError()));
}

BatchDeleteImageOutcome ECRClient::BatchDeleteImage(const BatchDeleteImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteImageOutcome(result.GetResultWithOwnership())
                            : BatchDeleteImageOutcome(std::move(result.GetError()));
}

BatchGetImageOutcome ECRClient::BatchGetImage(const BatchGetImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetImageOutcome(result.GetResultWithOwnership()) : BatchGetImageOutcome(std::move(result.GetError()));
}

BatchGetRepositoryScanningConfigurationOutcome ECRClient::BatchGetRepositoryScanningConfiguration(
    const BatchGetRepositoryScanningConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetRepositoryScanningConfigurationOutcome(result.GetResultWithOwnership())
                            : BatchGetRepositoryScanningConfigurationOutcome(std::move(result.GetError()));
}

CompleteLayerUploadOutcome ECRClient::CompleteLayerUpload(const CompleteLayerUploadRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CompleteLayerUploadOutcome(result.GetResultWithOwnership())
                            : CompleteLayerUploadOutcome(std::move(result.GetError()));
}

CreatePullThroughCacheRuleOutcome ECRClient::CreatePullThroughCacheRule(const CreatePullThroughCacheRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePullThroughCacheRuleOutcome(result.GetResultWithOwnership())
                            : CreatePullThroughCacheRuleOutcome(std::move(result.GetError()));
}

CreateRepositoryOutcome ECRClient::CreateRepository(const CreateRepositoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRepositoryOutcome(result.GetResultWithOwnership())
                            : CreateRepositoryOutcome(std::move(result.GetError()));
}

CreateRepositoryCreationTemplateOutcome ECRClient::CreateRepositoryCreationTemplate(
    const CreateRepositoryCreationTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRepositoryCreationTemplateOutcome(result.GetResultWithOwnership())
                            : CreateRepositoryCreationTemplateOutcome(std::move(result.GetError()));
}

DeleteLifecyclePolicyOutcome ECRClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteLifecyclePolicyOutcome(std::move(result.GetError()));
}

DeletePullThroughCacheRuleOutcome ECRClient::DeletePullThroughCacheRule(const DeletePullThroughCacheRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePullThroughCacheRuleOutcome(result.GetResultWithOwnership())
                            : DeletePullThroughCacheRuleOutcome(std::move(result.GetError()));
}

DeleteRegistryPolicyOutcome ECRClient::DeleteRegistryPolicy(const DeleteRegistryPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRegistryPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteRegistryPolicyOutcome(std::move(result.GetError()));
}

DeleteRepositoryOutcome ECRClient::DeleteRepository(const DeleteRepositoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRepositoryOutcome(result.GetResultWithOwnership())
                            : DeleteRepositoryOutcome(std::move(result.GetError()));
}

DeleteRepositoryCreationTemplateOutcome ECRClient::DeleteRepositoryCreationTemplate(
    const DeleteRepositoryCreationTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRepositoryCreationTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteRepositoryCreationTemplateOutcome(std::move(result.GetError()));
}

DeleteRepositoryPolicyOutcome ECRClient::DeleteRepositoryPolicy(const DeleteRepositoryPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRepositoryPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteRepositoryPolicyOutcome(std::move(result.GetError()));
}

DeleteSigningConfigurationOutcome ECRClient::DeleteSigningConfiguration(const DeleteSigningConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSigningConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteSigningConfigurationOutcome(std::move(result.GetError()));
}

DeregisterPullTimeUpdateExclusionOutcome ECRClient::DeregisterPullTimeUpdateExclusion(
    const DeregisterPullTimeUpdateExclusionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterPullTimeUpdateExclusionOutcome(result.GetResultWithOwnership())
                            : DeregisterPullTimeUpdateExclusionOutcome(std::move(result.GetError()));
}

DescribeImageReplicationStatusOutcome ECRClient::DescribeImageReplicationStatus(
    const DescribeImageReplicationStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageReplicationStatusOutcome(result.GetResultWithOwnership())
                            : DescribeImageReplicationStatusOutcome(std::move(result.GetError()));
}

DescribeImageScanFindingsOutcome ECRClient::DescribeImageScanFindings(const DescribeImageScanFindingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageScanFindingsOutcome(result.GetResultWithOwnership())
                            : DescribeImageScanFindingsOutcome(std::move(result.GetError()));
}

DescribeImageSigningStatusOutcome ECRClient::DescribeImageSigningStatus(const DescribeImageSigningStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageSigningStatusOutcome(result.GetResultWithOwnership())
                            : DescribeImageSigningStatusOutcome(std::move(result.GetError()));
}

DescribeImagesOutcome ECRClient::DescribeImages(const DescribeImagesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImagesOutcome(result.GetResultWithOwnership()) : DescribeImagesOutcome(std::move(result.GetError()));
}

DescribePullThroughCacheRulesOutcome ECRClient::DescribePullThroughCacheRules(const DescribePullThroughCacheRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePullThroughCacheRulesOutcome(result.GetResultWithOwnership())
                            : DescribePullThroughCacheRulesOutcome(std::move(result.GetError()));
}

DescribeRegistryOutcome ECRClient::DescribeRegistry(const DescribeRegistryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegistryOutcome(result.GetResultWithOwnership())
                            : DescribeRegistryOutcome(std::move(result.GetError()));
}

DescribeRepositoriesOutcome ECRClient::DescribeRepositories(const DescribeRepositoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRepositoriesOutcome(result.GetResultWithOwnership())
                            : DescribeRepositoriesOutcome(std::move(result.GetError()));
}

DescribeRepositoryCreationTemplatesOutcome ECRClient::DescribeRepositoryCreationTemplates(
    const DescribeRepositoryCreationTemplatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRepositoryCreationTemplatesOutcome(result.GetResultWithOwnership())
                            : DescribeRepositoryCreationTemplatesOutcome(std::move(result.GetError()));
}

GetAccountSettingOutcome ECRClient::GetAccountSetting(const GetAccountSettingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccountSettingOutcome(result.GetResultWithOwnership())
                            : GetAccountSettingOutcome(std::move(result.GetError()));
}

GetAuthorizationTokenOutcome ECRClient::GetAuthorizationToken(const GetAuthorizationTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAuthorizationTokenOutcome(result.GetResultWithOwnership())
                            : GetAuthorizationTokenOutcome(std::move(result.GetError()));
}

GetDownloadUrlForLayerOutcome ECRClient::GetDownloadUrlForLayer(const GetDownloadUrlForLayerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDownloadUrlForLayerOutcome(result.GetResultWithOwnership())
                            : GetDownloadUrlForLayerOutcome(std::move(result.GetError()));
}

GetLifecyclePolicyOutcome ECRClient::GetLifecyclePolicy(const GetLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : GetLifecyclePolicyOutcome(std::move(result.GetError()));
}

GetLifecyclePolicyPreviewOutcome ECRClient::GetLifecyclePolicyPreview(const GetLifecyclePolicyPreviewRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLifecyclePolicyPreviewOutcome(result.GetResultWithOwnership())
                            : GetLifecyclePolicyPreviewOutcome(std::move(result.GetError()));
}

GetRegistryPolicyOutcome ECRClient::GetRegistryPolicy(const GetRegistryPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRegistryPolicyOutcome(result.GetResultWithOwnership())
                            : GetRegistryPolicyOutcome(std::move(result.GetError()));
}

GetRegistryScanningConfigurationOutcome ECRClient::GetRegistryScanningConfiguration(
    const GetRegistryScanningConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRegistryScanningConfigurationOutcome(result.GetResultWithOwnership())
                            : GetRegistryScanningConfigurationOutcome(std::move(result.GetError()));
}

GetRepositoryPolicyOutcome ECRClient::GetRepositoryPolicy(const GetRepositoryPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRepositoryPolicyOutcome(result.GetResultWithOwnership())
                            : GetRepositoryPolicyOutcome(std::move(result.GetError()));
}

GetSigningConfigurationOutcome ECRClient::GetSigningConfiguration(const GetSigningConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSigningConfigurationOutcome(result.GetResultWithOwnership())
                            : GetSigningConfigurationOutcome(std::move(result.GetError()));
}

InitiateLayerUploadOutcome ECRClient::InitiateLayerUpload(const InitiateLayerUploadRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InitiateLayerUploadOutcome(result.GetResultWithOwnership())
                            : InitiateLayerUploadOutcome(std::move(result.GetError()));
}

ListImageReferrersOutcome ECRClient::ListImageReferrers(const ListImageReferrersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImageReferrersOutcome(result.GetResultWithOwnership())
                            : ListImageReferrersOutcome(std::move(result.GetError()));
}

ListImagesOutcome ECRClient::ListImages(const ListImagesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImagesOutcome(result.GetResultWithOwnership()) : ListImagesOutcome(std::move(result.GetError()));
}

ListPullTimeUpdateExclusionsOutcome ECRClient::ListPullTimeUpdateExclusions(const ListPullTimeUpdateExclusionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPullTimeUpdateExclusionsOutcome(result.GetResultWithOwnership())
                            : ListPullTimeUpdateExclusionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ECRClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutAccountSettingOutcome ECRClient::PutAccountSetting(const PutAccountSettingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutAccountSettingOutcome(result.GetResultWithOwnership())
                            : PutAccountSettingOutcome(std::move(result.GetError()));
}

PutImageOutcome ECRClient::PutImage(const PutImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutImageOutcome(result.GetResultWithOwnership()) : PutImageOutcome(std::move(result.GetError()));
}

PutImageScanningConfigurationOutcome ECRClient::PutImageScanningConfiguration(const PutImageScanningConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutImageScanningConfigurationOutcome(result.GetResultWithOwnership())
                            : PutImageScanningConfigurationOutcome(std::move(result.GetError()));
}

PutImageTagMutabilityOutcome ECRClient::PutImageTagMutability(const PutImageTagMutabilityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutImageTagMutabilityOutcome(result.GetResultWithOwnership())
                            : PutImageTagMutabilityOutcome(std::move(result.GetError()));
}

PutLifecyclePolicyOutcome ECRClient::PutLifecyclePolicy(const PutLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : PutLifecyclePolicyOutcome(std::move(result.GetError()));
}

PutRegistryPolicyOutcome ECRClient::PutRegistryPolicy(const PutRegistryPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRegistryPolicyOutcome(result.GetResultWithOwnership())
                            : PutRegistryPolicyOutcome(std::move(result.GetError()));
}

PutRegistryScanningConfigurationOutcome ECRClient::PutRegistryScanningConfiguration(
    const PutRegistryScanningConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRegistryScanningConfigurationOutcome(result.GetResultWithOwnership())
                            : PutRegistryScanningConfigurationOutcome(std::move(result.GetError()));
}

PutReplicationConfigurationOutcome ECRClient::PutReplicationConfiguration(const PutReplicationConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutReplicationConfigurationOutcome(result.GetResultWithOwnership())
                            : PutReplicationConfigurationOutcome(std::move(result.GetError()));
}

PutSigningConfigurationOutcome ECRClient::PutSigningConfiguration(const PutSigningConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutSigningConfigurationOutcome(result.GetResultWithOwnership())
                            : PutSigningConfigurationOutcome(std::move(result.GetError()));
}

RegisterPullTimeUpdateExclusionOutcome ECRClient::RegisterPullTimeUpdateExclusion(
    const RegisterPullTimeUpdateExclusionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterPullTimeUpdateExclusionOutcome(result.GetResultWithOwnership())
                            : RegisterPullTimeUpdateExclusionOutcome(std::move(result.GetError()));
}

SetRepositoryPolicyOutcome ECRClient::SetRepositoryPolicy(const SetRepositoryPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetRepositoryPolicyOutcome(result.GetResultWithOwnership())
                            : SetRepositoryPolicyOutcome(std::move(result.GetError()));
}

StartImageScanOutcome ECRClient::StartImageScan(const StartImageScanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartImageScanOutcome(result.GetResultWithOwnership()) : StartImageScanOutcome(std::move(result.GetError()));
}

StartLifecyclePolicyPreviewOutcome ECRClient::StartLifecyclePolicyPreview(const StartLifecyclePolicyPreviewRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartLifecyclePolicyPreviewOutcome(result.GetResultWithOwnership())
                            : StartLifecyclePolicyPreviewOutcome(std::move(result.GetError()));
}

TagResourceOutcome ECRClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ECRClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateImageStorageClassOutcome ECRClient::UpdateImageStorageClass(const UpdateImageStorageClassRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateImageStorageClassOutcome(result.GetResultWithOwnership())
                            : UpdateImageStorageClassOutcome(std::move(result.GetError()));
}

UpdatePullThroughCacheRuleOutcome ECRClient::UpdatePullThroughCacheRule(const UpdatePullThroughCacheRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePullThroughCacheRuleOutcome(result.GetResultWithOwnership())
                            : UpdatePullThroughCacheRuleOutcome(std::move(result.GetError()));
}

UpdateRepositoryCreationTemplateOutcome ECRClient::UpdateRepositoryCreationTemplate(
    const UpdateRepositoryCreationTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRepositoryCreationTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateRepositoryCreationTemplateOutcome(std::move(result.GetError()));
}

UploadLayerPartOutcome ECRClient::UploadLayerPart(const UploadLayerPartRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UploadLayerPartOutcome(result.GetResultWithOwnership())
                            : UploadLayerPartOutcome(std::move(result.GetError()));
}

ValidatePullThroughCacheRuleOutcome ECRClient::ValidatePullThroughCacheRule(const ValidatePullThroughCacheRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ValidatePullThroughCacheRuleOutcome(result.GetResultWithOwnership())
                            : ValidatePullThroughCacheRuleOutcome(std::move(result.GetError()));
}
