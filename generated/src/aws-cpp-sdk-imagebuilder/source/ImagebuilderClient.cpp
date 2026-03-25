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
#include <aws/imagebuilder/ImagebuilderClient.h>
#include <aws/imagebuilder/ImagebuilderEndpointProvider.h>
#include <aws/imagebuilder/ImagebuilderErrorMarshaller.h>
#include <aws/imagebuilder/model/CancelImageCreationRequest.h>
#include <aws/imagebuilder/model/CancelLifecycleExecutionRequest.h>
#include <aws/imagebuilder/model/CreateComponentRequest.h>
#include <aws/imagebuilder/model/CreateContainerRecipeRequest.h>
#include <aws/imagebuilder/model/CreateDistributionConfigurationRequest.h>
#include <aws/imagebuilder/model/CreateImagePipelineRequest.h>
#include <aws/imagebuilder/model/CreateImageRecipeRequest.h>
#include <aws/imagebuilder/model/CreateImageRequest.h>
#include <aws/imagebuilder/model/CreateInfrastructureConfigurationRequest.h>
#include <aws/imagebuilder/model/CreateLifecyclePolicyRequest.h>
#include <aws/imagebuilder/model/CreateWorkflowRequest.h>
#include <aws/imagebuilder/model/DeleteComponentRequest.h>
#include <aws/imagebuilder/model/DeleteContainerRecipeRequest.h>
#include <aws/imagebuilder/model/DeleteDistributionConfigurationRequest.h>
#include <aws/imagebuilder/model/DeleteImagePipelineRequest.h>
#include <aws/imagebuilder/model/DeleteImageRecipeRequest.h>
#include <aws/imagebuilder/model/DeleteImageRequest.h>
#include <aws/imagebuilder/model/DeleteInfrastructureConfigurationRequest.h>
#include <aws/imagebuilder/model/DeleteLifecyclePolicyRequest.h>
#include <aws/imagebuilder/model/DeleteWorkflowRequest.h>
#include <aws/imagebuilder/model/DistributeImageRequest.h>
#include <aws/imagebuilder/model/GetComponentPolicyRequest.h>
#include <aws/imagebuilder/model/GetComponentRequest.h>
#include <aws/imagebuilder/model/GetContainerRecipePolicyRequest.h>
#include <aws/imagebuilder/model/GetContainerRecipeRequest.h>
#include <aws/imagebuilder/model/GetDistributionConfigurationRequest.h>
#include <aws/imagebuilder/model/GetImagePipelineRequest.h>
#include <aws/imagebuilder/model/GetImagePolicyRequest.h>
#include <aws/imagebuilder/model/GetImageRecipePolicyRequest.h>
#include <aws/imagebuilder/model/GetImageRecipeRequest.h>
#include <aws/imagebuilder/model/GetImageRequest.h>
#include <aws/imagebuilder/model/GetInfrastructureConfigurationRequest.h>
#include <aws/imagebuilder/model/GetLifecycleExecutionRequest.h>
#include <aws/imagebuilder/model/GetLifecyclePolicyRequest.h>
#include <aws/imagebuilder/model/GetMarketplaceResourceRequest.h>
#include <aws/imagebuilder/model/GetWorkflowExecutionRequest.h>
#include <aws/imagebuilder/model/GetWorkflowRequest.h>
#include <aws/imagebuilder/model/GetWorkflowStepExecutionRequest.h>
#include <aws/imagebuilder/model/ImportComponentRequest.h>
#include <aws/imagebuilder/model/ImportDiskImageRequest.h>
#include <aws/imagebuilder/model/ImportVmImageRequest.h>
#include <aws/imagebuilder/model/ListComponentBuildVersionsRequest.h>
#include <aws/imagebuilder/model/ListComponentsRequest.h>
#include <aws/imagebuilder/model/ListContainerRecipesRequest.h>
#include <aws/imagebuilder/model/ListDistributionConfigurationsRequest.h>
#include <aws/imagebuilder/model/ListImageBuildVersionsRequest.h>
#include <aws/imagebuilder/model/ListImagePackagesRequest.h>
#include <aws/imagebuilder/model/ListImagePipelineImagesRequest.h>
#include <aws/imagebuilder/model/ListImagePipelinesRequest.h>
#include <aws/imagebuilder/model/ListImageRecipesRequest.h>
#include <aws/imagebuilder/model/ListImageScanFindingAggregationsRequest.h>
#include <aws/imagebuilder/model/ListImageScanFindingsRequest.h>
#include <aws/imagebuilder/model/ListImagesRequest.h>
#include <aws/imagebuilder/model/ListInfrastructureConfigurationsRequest.h>
#include <aws/imagebuilder/model/ListLifecycleExecutionResourcesRequest.h>
#include <aws/imagebuilder/model/ListLifecycleExecutionsRequest.h>
#include <aws/imagebuilder/model/ListLifecyclePoliciesRequest.h>
#include <aws/imagebuilder/model/ListTagsForResourceRequest.h>
#include <aws/imagebuilder/model/ListWaitingWorkflowStepsRequest.h>
#include <aws/imagebuilder/model/ListWorkflowBuildVersionsRequest.h>
#include <aws/imagebuilder/model/ListWorkflowExecutionsRequest.h>
#include <aws/imagebuilder/model/ListWorkflowStepExecutionsRequest.h>
#include <aws/imagebuilder/model/ListWorkflowsRequest.h>
#include <aws/imagebuilder/model/PutComponentPolicyRequest.h>
#include <aws/imagebuilder/model/PutContainerRecipePolicyRequest.h>
#include <aws/imagebuilder/model/PutImagePolicyRequest.h>
#include <aws/imagebuilder/model/PutImageRecipePolicyRequest.h>
#include <aws/imagebuilder/model/RetryImageRequest.h>
#include <aws/imagebuilder/model/SendWorkflowStepActionRequest.h>
#include <aws/imagebuilder/model/StartImagePipelineExecutionRequest.h>
#include <aws/imagebuilder/model/StartResourceStateUpdateRequest.h>
#include <aws/imagebuilder/model/TagResourceRequest.h>
#include <aws/imagebuilder/model/UntagResourceRequest.h>
#include <aws/imagebuilder/model/UpdateDistributionConfigurationRequest.h>
#include <aws/imagebuilder/model/UpdateImagePipelineRequest.h>
#include <aws/imagebuilder/model/UpdateInfrastructureConfigurationRequest.h>
#include <aws/imagebuilder/model/UpdateLifecyclePolicyRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::imagebuilder;
using namespace Aws::imagebuilder::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace imagebuilder {
const char SERVICE_NAME[] = "imagebuilder";
const char ALLOCATION_TAG[] = "ImagebuilderClient";
}  // namespace imagebuilder
}  // namespace Aws
const char* ImagebuilderClient::GetServiceName() { return SERVICE_NAME; }
const char* ImagebuilderClient::GetAllocationTag() { return ALLOCATION_TAG; }

ImagebuilderClient::ImagebuilderClient(const imagebuilder::ImagebuilderClientConfiguration& clientConfiguration,
                                       std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ImagebuilderClient::ImagebuilderClient(const AWSCredentials& credentials,
                                       std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider,
                                       const imagebuilder::ImagebuilderClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ImagebuilderClient::ImagebuilderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider,
                                       const imagebuilder::ImagebuilderClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ImagebuilderClient::ImagebuilderClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ImagebuilderClient::ImagebuilderClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ImagebuilderClient::ImagebuilderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ImagebuilderClient::~ImagebuilderClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ImagebuilderEndpointProviderBase>& ImagebuilderClient::accessEndpointProvider() { return m_endpointProvider; }

void ImagebuilderClient::init(const imagebuilder::ImagebuilderClientConfiguration& config) {
  AWSClient::SetServiceClientName("imagebuilder");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "imagebuilder");
}

void ImagebuilderClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ImagebuilderClient::InvokeOperationOutcome ImagebuilderClient::InvokeServiceOperation(
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

CancelImageCreationOutcome ImagebuilderClient::CancelImageCreation(const CancelImageCreationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CancelImageCreation");
  };

  return CancelImageCreationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CancelLifecycleExecutionOutcome ImagebuilderClient::CancelLifecycleExecution(const CancelLifecycleExecutionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CancelLifecycleExecution");
  };

  return CancelLifecycleExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateComponentOutcome ImagebuilderClient::CreateComponent(const CreateComponentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateComponent");
  };

  return CreateComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateContainerRecipeOutcome ImagebuilderClient::CreateContainerRecipe(const CreateContainerRecipeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateContainerRecipe");
  };

  return CreateContainerRecipeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateDistributionConfigurationOutcome ImagebuilderClient::CreateDistributionConfiguration(
    const CreateDistributionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateDistributionConfiguration");
  };

  return CreateDistributionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateImageOutcome ImagebuilderClient::CreateImage(const CreateImageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateImage");
  };

  return CreateImageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateImagePipelineOutcome ImagebuilderClient::CreateImagePipeline(const CreateImagePipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateImagePipeline");
  };

  return CreateImagePipelineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateImageRecipeOutcome ImagebuilderClient::CreateImageRecipe(const CreateImageRecipeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateImageRecipe");
  };

  return CreateImageRecipeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateInfrastructureConfigurationOutcome ImagebuilderClient::CreateInfrastructureConfiguration(
    const CreateInfrastructureConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateInfrastructureConfiguration");
  };

  return CreateInfrastructureConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateLifecyclePolicyOutcome ImagebuilderClient::CreateLifecyclePolicy(const CreateLifecyclePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLifecyclePolicy");
  };

  return CreateLifecyclePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateWorkflowOutcome ImagebuilderClient::CreateWorkflow(const CreateWorkflowRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateWorkflow");
  };

  return CreateWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeleteComponentOutcome ImagebuilderClient::DeleteComponent(const DeleteComponentRequest& request) const {
  if (!request.ComponentBuildVersionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: ComponentBuildVersionArn, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ComponentBuildVersionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteComponent");
  };

  return DeleteComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteContainerRecipeOutcome ImagebuilderClient::DeleteContainerRecipe(const DeleteContainerRecipeRequest& request) const {
  if (!request.ContainerRecipeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContainerRecipe", "Required field: ContainerRecipeArn, is not set");
    return DeleteContainerRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(
        ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContainerRecipeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteContainerRecipe");
  };

  return DeleteContainerRecipeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDistributionConfigurationOutcome ImagebuilderClient::DeleteDistributionConfiguration(
    const DeleteDistributionConfigurationRequest& request) const {
  if (!request.DistributionConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDistributionConfiguration", "Required field: DistributionConfigurationArn, is not set");
    return DeleteDistributionConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(
        ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteDistributionConfiguration");
  };

  return DeleteDistributionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteImageOutcome ImagebuilderClient::DeleteImage(const DeleteImageRequest& request) const {
  if (!request.ImageBuildVersionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImage", "Required field: ImageBuildVersionArn, is not set");
    return DeleteImageOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ImageBuildVersionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteImage");
  };

  return DeleteImageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteImagePipelineOutcome ImagebuilderClient::DeleteImagePipeline(const DeleteImagePipelineRequest& request) const {
  if (!request.ImagePipelineArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImagePipeline", "Required field: ImagePipelineArn, is not set");
    return DeleteImagePipelineOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ImagePipelineArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteImagePipeline");
  };

  return DeleteImagePipelineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteImageRecipeOutcome ImagebuilderClient::DeleteImageRecipe(const DeleteImageRecipeRequest& request) const {
  if (!request.ImageRecipeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImageRecipe", "Required field: ImageRecipeArn, is not set");
    return DeleteImageRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ImageRecipeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteImageRecipe");
  };

  return DeleteImageRecipeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInfrastructureConfigurationOutcome ImagebuilderClient::DeleteInfrastructureConfiguration(
    const DeleteInfrastructureConfigurationRequest& request) const {
  if (!request.InfrastructureConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInfrastructureConfiguration", "Required field: InfrastructureConfigurationArn, is not set");
    return DeleteInfrastructureConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(
        ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InfrastructureConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteInfrastructureConfiguration");
  };

  return DeleteInfrastructureConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteLifecyclePolicyOutcome ImagebuilderClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const {
  if (!request.LifecyclePolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLifecyclePolicy", "Required field: LifecyclePolicyArn, is not set");
    return DeleteLifecyclePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(
        ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LifecyclePolicyArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLifecyclePolicy");
  };

  return DeleteLifecyclePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkflowOutcome ImagebuilderClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const {
  if (!request.WorkflowBuildVersionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflow", "Required field: WorkflowBuildVersionArn, is not set");
    return DeleteWorkflowOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkflowBuildVersionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteWorkflow");
  };

  return DeleteWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DistributeImageOutcome ImagebuilderClient::DistributeImage(const DistributeImageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DistributeImage");
  };

  return DistributeImageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

GetComponentOutcome ImagebuilderClient::GetComponent(const GetComponentRequest& request) const {
  if (!request.ComponentBuildVersionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: ComponentBuildVersionArn, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ComponentBuildVersionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetComponent");
  };

  return GetComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetComponentPolicyOutcome ImagebuilderClient::GetComponentPolicy(const GetComponentPolicyRequest& request) const {
  if (!request.ComponentArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetComponentPolicy", "Required field: ComponentArn, is not set");
    return GetComponentPolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ComponentArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetComponentPolicy");
  };

  return GetComponentPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetContainerRecipeOutcome ImagebuilderClient::GetContainerRecipe(const GetContainerRecipeRequest& request) const {
  if (!request.ContainerRecipeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContainerRecipe", "Required field: ContainerRecipeArn, is not set");
    return GetContainerRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ContainerRecipeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetContainerRecipe");
  };

  return GetContainerRecipeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetContainerRecipePolicyOutcome ImagebuilderClient::GetContainerRecipePolicy(const GetContainerRecipePolicyRequest& request) const {
  if (!request.ContainerRecipeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContainerRecipePolicy", "Required field: ContainerRecipeArn, is not set");
    return GetContainerRecipePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(
        ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContainerRecipeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetContainerRecipePolicy");
  };

  return GetContainerRecipePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDistributionConfigurationOutcome ImagebuilderClient::GetDistributionConfiguration(
    const GetDistributionConfigurationRequest& request) const {
  if (!request.DistributionConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDistributionConfiguration", "Required field: DistributionConfigurationArn, is not set");
    return GetDistributionConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(
        ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetDistributionConfiguration");
  };

  return GetDistributionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImageOutcome ImagebuilderClient::GetImage(const GetImageRequest& request) const {
  if (!request.ImageBuildVersionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImage", "Required field: ImageBuildVersionArn, is not set");
    return GetImageOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ImageBuildVersionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetImage");
  };

  return GetImageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImagePipelineOutcome ImagebuilderClient::GetImagePipeline(const GetImagePipelineRequest& request) const {
  if (!request.ImagePipelineArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImagePipeline", "Required field: ImagePipelineArn, is not set");
    return GetImagePipelineOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ImagePipelineArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetImagePipeline");
  };

  return GetImagePipelineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImagePolicyOutcome ImagebuilderClient::GetImagePolicy(const GetImagePolicyRequest& request) const {
  if (!request.ImageArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImagePolicy", "Required field: ImageArn, is not set");
    return GetImagePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ImageArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetImagePolicy");
  };

  return GetImagePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImageRecipeOutcome ImagebuilderClient::GetImageRecipe(const GetImageRecipeRequest& request) const {
  if (!request.ImageRecipeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImageRecipe", "Required field: ImageRecipeArn, is not set");
    return GetImageRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ImageRecipeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetImageRecipe");
  };

  return GetImageRecipeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImageRecipePolicyOutcome ImagebuilderClient::GetImageRecipePolicy(const GetImageRecipePolicyRequest& request) const {
  if (!request.ImageRecipeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImageRecipePolicy", "Required field: ImageRecipeArn, is not set");
    return GetImageRecipePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ImageRecipeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetImageRecipePolicy");
  };

  return GetImageRecipePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetInfrastructureConfigurationOutcome ImagebuilderClient::GetInfrastructureConfiguration(
    const GetInfrastructureConfigurationRequest& request) const {
  if (!request.InfrastructureConfigurationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInfrastructureConfiguration", "Required field: InfrastructureConfigurationArn, is not set");
    return GetInfrastructureConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(
        ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InfrastructureConfigurationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetInfrastructureConfiguration");
  };

  return GetInfrastructureConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLifecycleExecutionOutcome ImagebuilderClient::GetLifecycleExecution(const GetLifecycleExecutionRequest& request) const {
  if (!request.LifecycleExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLifecycleExecution", "Required field: LifecycleExecutionId, is not set");
    return GetLifecycleExecutionOutcome(Aws::Client::AWSError<ImagebuilderErrors>(
        ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LifecycleExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetLifecycleExecution");
  };

  return GetLifecycleExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLifecyclePolicyOutcome ImagebuilderClient::GetLifecyclePolicy(const GetLifecyclePolicyRequest& request) const {
  if (!request.LifecyclePolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLifecyclePolicy", "Required field: LifecyclePolicyArn, is not set");
    return GetLifecyclePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [LifecyclePolicyArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetLifecyclePolicy");
  };

  return GetLifecyclePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMarketplaceResourceOutcome ImagebuilderClient::GetMarketplaceResource(const GetMarketplaceResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetMarketplaceResource");
  };

  return GetMarketplaceResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkflowOutcome ImagebuilderClient::GetWorkflow(const GetWorkflowRequest& request) const {
  if (!request.WorkflowBuildVersionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: WorkflowBuildVersionArn, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [WorkflowBuildVersionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetWorkflow");
  };

  return GetWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkflowExecutionOutcome ImagebuilderClient::GetWorkflowExecution(const GetWorkflowExecutionRequest& request) const {
  if (!request.WorkflowExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowExecution", "Required field: WorkflowExecutionId, is not set");
    return GetWorkflowExecutionOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [WorkflowExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetWorkflowExecution");
  };

  return GetWorkflowExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkflowStepExecutionOutcome ImagebuilderClient::GetWorkflowStepExecution(const GetWorkflowStepExecutionRequest& request) const {
  if (!request.StepExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowStepExecution", "Required field: StepExecutionId, is not set");
    return GetWorkflowStepExecutionOutcome(Aws::Client::AWSError<ImagebuilderErrors>(
        ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetWorkflowStepExecution");
  };

  return GetWorkflowStepExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ImportComponentOutcome ImagebuilderClient::ImportComponent(const ImportComponentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ImportComponent");
  };

  return ImportComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ImportDiskImageOutcome ImagebuilderClient::ImportDiskImage(const ImportDiskImageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ImportDiskImage");
  };

  return ImportDiskImageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ImportVmImageOutcome ImagebuilderClient::ImportVmImage(const ImportVmImageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ImportVmImage");
  };

  return ImportVmImageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ListComponentBuildVersionsOutcome ImagebuilderClient::ListComponentBuildVersions(const ListComponentBuildVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListComponentBuildVersions");
  };

  return ListComponentBuildVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListComponentsOutcome ImagebuilderClient::ListComponents(const ListComponentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListComponents");
  };

  return ListComponentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListContainerRecipesOutcome ImagebuilderClient::ListContainerRecipes(const ListContainerRecipesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListContainerRecipes");
  };

  return ListContainerRecipesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDistributionConfigurationsOutcome ImagebuilderClient::ListDistributionConfigurations(
    const ListDistributionConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListDistributionConfigurations");
  };

  return ListDistributionConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImageBuildVersionsOutcome ImagebuilderClient::ListImageBuildVersions(const ListImageBuildVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImageBuildVersions");
  };

  return ListImageBuildVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImagePackagesOutcome ImagebuilderClient::ListImagePackages(const ListImagePackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImagePackages");
  };

  return ListImagePackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImagePipelineImagesOutcome ImagebuilderClient::ListImagePipelineImages(const ListImagePipelineImagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImagePipelineImages");
  };

  return ListImagePipelineImagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImagePipelinesOutcome ImagebuilderClient::ListImagePipelines(const ListImagePipelinesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImagePipelines");
  };

  return ListImagePipelinesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImageRecipesOutcome ImagebuilderClient::ListImageRecipes(const ListImageRecipesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImageRecipes");
  };

  return ListImageRecipesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImageScanFindingAggregationsOutcome ImagebuilderClient::ListImageScanFindingAggregations(
    const ListImageScanFindingAggregationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImageScanFindingAggregations");
  };

  return ListImageScanFindingAggregationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImageScanFindingsOutcome ImagebuilderClient::ListImageScanFindings(const ListImageScanFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImageScanFindings");
  };

  return ListImageScanFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImagesOutcome ImagebuilderClient::ListImages(const ListImagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListImages");
  };

  return ListImagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInfrastructureConfigurationsOutcome ImagebuilderClient::ListInfrastructureConfigurations(
    const ListInfrastructureConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListInfrastructureConfigurations");
  };

  return ListInfrastructureConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLifecycleExecutionResourcesOutcome ImagebuilderClient::ListLifecycleExecutionResources(
    const ListLifecycleExecutionResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListLifecycleExecutionResources");
  };

  return ListLifecycleExecutionResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLifecycleExecutionsOutcome ImagebuilderClient::ListLifecycleExecutions(const ListLifecycleExecutionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListLifecycleExecutions");
  };

  return ListLifecycleExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLifecyclePoliciesOutcome ImagebuilderClient::ListLifecyclePolicies(const ListLifecyclePoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListLifecyclePolicies");
  };

  return ListLifecyclePoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ImagebuilderClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWaitingWorkflowStepsOutcome ImagebuilderClient::ListWaitingWorkflowSteps(const ListWaitingWorkflowStepsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListWaitingWorkflowSteps");
  };

  return ListWaitingWorkflowStepsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowBuildVersionsOutcome ImagebuilderClient::ListWorkflowBuildVersions(const ListWorkflowBuildVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListWorkflowBuildVersions");
  };

  return ListWorkflowBuildVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowExecutionsOutcome ImagebuilderClient::ListWorkflowExecutions(const ListWorkflowExecutionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListWorkflowExecutions");
  };

  return ListWorkflowExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowStepExecutionsOutcome ImagebuilderClient::ListWorkflowStepExecutions(const ListWorkflowStepExecutionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListWorkflowStepExecutions");
  };

  return ListWorkflowStepExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowsOutcome ImagebuilderClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListWorkflows");
  };

  return ListWorkflowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutComponentPolicyOutcome ImagebuilderClient::PutComponentPolicy(const PutComponentPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutComponentPolicy");
  };

  return PutComponentPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutContainerRecipePolicyOutcome ImagebuilderClient::PutContainerRecipePolicy(const PutContainerRecipePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutContainerRecipePolicy");
  };

  return PutContainerRecipePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutImagePolicyOutcome ImagebuilderClient::PutImagePolicy(const PutImagePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutImagePolicy");
  };

  return PutImagePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutImageRecipePolicyOutcome ImagebuilderClient::PutImageRecipePolicy(const PutImageRecipePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutImageRecipePolicy");
  };

  return PutImageRecipePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RetryImageOutcome ImagebuilderClient::RetryImage(const RetryImageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RetryImage");
  };

  return RetryImageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SendWorkflowStepActionOutcome ImagebuilderClient::SendWorkflowStepAction(const SendWorkflowStepActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/SendWorkflowStepAction");
  };

  return SendWorkflowStepActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartImagePipelineExecutionOutcome ImagebuilderClient::StartImagePipelineExecution(
    const StartImagePipelineExecutionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartImagePipelineExecution");
  };

  return StartImagePipelineExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartResourceStateUpdateOutcome ImagebuilderClient::StartResourceStateUpdate(const StartResourceStateUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartResourceStateUpdate");
  };

  return StartResourceStateUpdateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome ImagebuilderClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ImagebuilderClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateDistributionConfigurationOutcome ImagebuilderClient::UpdateDistributionConfiguration(
    const UpdateDistributionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateDistributionConfiguration");
  };

  return UpdateDistributionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateImagePipelineOutcome ImagebuilderClient::UpdateImagePipeline(const UpdateImagePipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateImagePipeline");
  };

  return UpdateImagePipelineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateInfrastructureConfigurationOutcome ImagebuilderClient::UpdateInfrastructureConfiguration(
    const UpdateInfrastructureConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateInfrastructureConfiguration");
  };

  return UpdateInfrastructureConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateLifecyclePolicyOutcome ImagebuilderClient::UpdateLifecyclePolicy(const UpdateLifecyclePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLifecyclePolicy");
  };

  return UpdateLifecyclePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
