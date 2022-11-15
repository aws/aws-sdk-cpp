/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/imagebuilder/ImagebuilderClient.h>
#include <aws/imagebuilder/ImagebuilderErrorMarshaller.h>
#include <aws/imagebuilder/ImagebuilderEndpointProvider.h>
#include <aws/imagebuilder/model/CancelImageCreationRequest.h>
#include <aws/imagebuilder/model/CreateComponentRequest.h>
#include <aws/imagebuilder/model/CreateContainerRecipeRequest.h>
#include <aws/imagebuilder/model/CreateDistributionConfigurationRequest.h>
#include <aws/imagebuilder/model/CreateImageRequest.h>
#include <aws/imagebuilder/model/CreateImagePipelineRequest.h>
#include <aws/imagebuilder/model/CreateImageRecipeRequest.h>
#include <aws/imagebuilder/model/CreateInfrastructureConfigurationRequest.h>
#include <aws/imagebuilder/model/DeleteComponentRequest.h>
#include <aws/imagebuilder/model/DeleteContainerRecipeRequest.h>
#include <aws/imagebuilder/model/DeleteDistributionConfigurationRequest.h>
#include <aws/imagebuilder/model/DeleteImageRequest.h>
#include <aws/imagebuilder/model/DeleteImagePipelineRequest.h>
#include <aws/imagebuilder/model/DeleteImageRecipeRequest.h>
#include <aws/imagebuilder/model/DeleteInfrastructureConfigurationRequest.h>
#include <aws/imagebuilder/model/GetComponentRequest.h>
#include <aws/imagebuilder/model/GetComponentPolicyRequest.h>
#include <aws/imagebuilder/model/GetContainerRecipeRequest.h>
#include <aws/imagebuilder/model/GetContainerRecipePolicyRequest.h>
#include <aws/imagebuilder/model/GetDistributionConfigurationRequest.h>
#include <aws/imagebuilder/model/GetImageRequest.h>
#include <aws/imagebuilder/model/GetImagePipelineRequest.h>
#include <aws/imagebuilder/model/GetImagePolicyRequest.h>
#include <aws/imagebuilder/model/GetImageRecipeRequest.h>
#include <aws/imagebuilder/model/GetImageRecipePolicyRequest.h>
#include <aws/imagebuilder/model/GetInfrastructureConfigurationRequest.h>
#include <aws/imagebuilder/model/ImportComponentRequest.h>
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
#include <aws/imagebuilder/model/ListImagesRequest.h>
#include <aws/imagebuilder/model/ListInfrastructureConfigurationsRequest.h>
#include <aws/imagebuilder/model/ListTagsForResourceRequest.h>
#include <aws/imagebuilder/model/PutComponentPolicyRequest.h>
#include <aws/imagebuilder/model/PutContainerRecipePolicyRequest.h>
#include <aws/imagebuilder/model/PutImagePolicyRequest.h>
#include <aws/imagebuilder/model/PutImageRecipePolicyRequest.h>
#include <aws/imagebuilder/model/StartImagePipelineExecutionRequest.h>
#include <aws/imagebuilder/model/TagResourceRequest.h>
#include <aws/imagebuilder/model/UntagResourceRequest.h>
#include <aws/imagebuilder/model/UpdateDistributionConfigurationRequest.h>
#include <aws/imagebuilder/model/UpdateImagePipelineRequest.h>
#include <aws/imagebuilder/model/UpdateInfrastructureConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::imagebuilder;
using namespace Aws::imagebuilder::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ImagebuilderClient::SERVICE_NAME = "imagebuilder";
const char* ImagebuilderClient::ALLOCATION_TAG = "ImagebuilderClient";

ImagebuilderClient::ImagebuilderClient(const imagebuilder::ImagebuilderClientConfiguration& clientConfiguration,
                                       std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ImagebuilderClient::ImagebuilderClient(const AWSCredentials& credentials,
                                       std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider,
                                       const imagebuilder::ImagebuilderClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ImagebuilderClient::ImagebuilderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider,
                                       const imagebuilder::ImagebuilderClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ImagebuilderClient::ImagebuilderClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ImagebuilderClient::ImagebuilderClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ImagebuilderClient::ImagebuilderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ImagebuilderClient::~ImagebuilderClient()
{
}

std::shared_ptr<ImagebuilderEndpointProviderBase>& ImagebuilderClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ImagebuilderClient::init(const imagebuilder::ImagebuilderClientConfiguration& config)
{
  AWSClient::SetServiceClientName("imagebuilder");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ImagebuilderClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelImageCreationOutcome ImagebuilderClient::CancelImageCreation(const CancelImageCreationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelImageCreation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelImageCreation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CancelImageCreation");
  return CancelImageCreationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelImageCreationOutcomeCallable ImagebuilderClient::CancelImageCreationCallable(const CancelImageCreationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelImageCreationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelImageCreation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::CancelImageCreationAsync(const CancelImageCreationRequest& request, const CancelImageCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelImageCreation(request), context);
    } );
}

CreateComponentOutcome ImagebuilderClient::CreateComponent(const CreateComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateComponent");
  return CreateComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateComponentOutcomeCallable ImagebuilderClient::CreateComponentCallable(const CreateComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::CreateComponentAsync(const CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateComponent(request), context);
    } );
}

CreateContainerRecipeOutcome ImagebuilderClient::CreateContainerRecipe(const CreateContainerRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContainerRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContainerRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateContainerRecipe");
  return CreateContainerRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateContainerRecipeOutcomeCallable ImagebuilderClient::CreateContainerRecipeCallable(const CreateContainerRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContainerRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContainerRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::CreateContainerRecipeAsync(const CreateContainerRecipeRequest& request, const CreateContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContainerRecipe(request), context);
    } );
}

CreateDistributionConfigurationOutcome ImagebuilderClient::CreateDistributionConfiguration(const CreateDistributionConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDistributionConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDistributionConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateDistributionConfiguration");
  return CreateDistributionConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateDistributionConfigurationOutcomeCallable ImagebuilderClient::CreateDistributionConfigurationCallable(const CreateDistributionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistributionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistributionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::CreateDistributionConfigurationAsync(const CreateDistributionConfigurationRequest& request, const CreateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDistributionConfiguration(request), context);
    } );
}

CreateImageOutcome ImagebuilderClient::CreateImage(const CreateImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateImage");
  return CreateImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateImageOutcomeCallable ImagebuilderClient::CreateImageCallable(const CreateImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::CreateImageAsync(const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateImage(request), context);
    } );
}

CreateImagePipelineOutcome ImagebuilderClient::CreateImagePipeline(const CreateImagePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImagePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImagePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateImagePipeline");
  return CreateImagePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateImagePipelineOutcomeCallable ImagebuilderClient::CreateImagePipelineCallable(const CreateImagePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImagePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImagePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::CreateImagePipelineAsync(const CreateImagePipelineRequest& request, const CreateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateImagePipeline(request), context);
    } );
}

CreateImageRecipeOutcome ImagebuilderClient::CreateImageRecipe(const CreateImageRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImageRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImageRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateImageRecipe");
  return CreateImageRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateImageRecipeOutcomeCallable ImagebuilderClient::CreateImageRecipeCallable(const CreateImageRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImageRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::CreateImageRecipeAsync(const CreateImageRecipeRequest& request, const CreateImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateImageRecipe(request), context);
    } );
}

CreateInfrastructureConfigurationOutcome ImagebuilderClient::CreateInfrastructureConfiguration(const CreateInfrastructureConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInfrastructureConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInfrastructureConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateInfrastructureConfiguration");
  return CreateInfrastructureConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateInfrastructureConfigurationOutcomeCallable ImagebuilderClient::CreateInfrastructureConfigurationCallable(const CreateInfrastructureConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInfrastructureConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInfrastructureConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::CreateInfrastructureConfigurationAsync(const CreateInfrastructureConfigurationRequest& request, const CreateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInfrastructureConfiguration(request), context);
    } );
}

DeleteComponentOutcome ImagebuilderClient::DeleteComponent(const DeleteComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ComponentBuildVersionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: ComponentBuildVersionArn, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentBuildVersionArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteComponent");
  return DeleteComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteComponentOutcomeCallable ImagebuilderClient::DeleteComponentCallable(const DeleteComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::DeleteComponentAsync(const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteComponent(request), context);
    } );
}

DeleteContainerRecipeOutcome ImagebuilderClient::DeleteContainerRecipe(const DeleteContainerRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContainerRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContainerRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContainerRecipe", "Required field: ContainerRecipeArn, is not set");
    return DeleteContainerRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContainerRecipeArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContainerRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteContainerRecipe");
  return DeleteContainerRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteContainerRecipeOutcomeCallable ImagebuilderClient::DeleteContainerRecipeCallable(const DeleteContainerRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContainerRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContainerRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::DeleteContainerRecipeAsync(const DeleteContainerRecipeRequest& request, const DeleteContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContainerRecipe(request), context);
    } );
}

DeleteDistributionConfigurationOutcome ImagebuilderClient::DeleteDistributionConfiguration(const DeleteDistributionConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDistributionConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DistributionConfigurationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDistributionConfiguration", "Required field: DistributionConfigurationArn, is not set");
    return DeleteDistributionConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionConfigurationArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDistributionConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteDistributionConfiguration");
  return DeleteDistributionConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDistributionConfigurationOutcomeCallable ImagebuilderClient::DeleteDistributionConfigurationCallable(const DeleteDistributionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDistributionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDistributionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::DeleteDistributionConfigurationAsync(const DeleteDistributionConfigurationRequest& request, const DeleteDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDistributionConfiguration(request), context);
    } );
}

DeleteImageOutcome ImagebuilderClient::DeleteImage(const DeleteImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImageBuildVersionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImage", "Required field: ImageBuildVersionArn, is not set");
    return DeleteImageOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageBuildVersionArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteImage");
  return DeleteImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageOutcomeCallable ImagebuilderClient::DeleteImageCallable(const DeleteImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImage(request), context);
    } );
}

DeleteImagePipelineOutcome ImagebuilderClient::DeleteImagePipeline(const DeleteImagePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImagePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImagePipelineArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImagePipeline", "Required field: ImagePipelineArn, is not set");
    return DeleteImagePipelineOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImagePipelineArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImagePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteImagePipeline");
  return DeleteImagePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteImagePipelineOutcomeCallable ImagebuilderClient::DeleteImagePipelineCallable(const DeleteImagePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImagePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImagePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::DeleteImagePipelineAsync(const DeleteImagePipelineRequest& request, const DeleteImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImagePipeline(request), context);
    } );
}

DeleteImageRecipeOutcome ImagebuilderClient::DeleteImageRecipe(const DeleteImageRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImageRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImageRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImageRecipe", "Required field: ImageRecipeArn, is not set");
    return DeleteImageRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageRecipeArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImageRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteImageRecipe");
  return DeleteImageRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageRecipeOutcomeCallable ImagebuilderClient::DeleteImageRecipeCallable(const DeleteImageRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImageRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::DeleteImageRecipeAsync(const DeleteImageRecipeRequest& request, const DeleteImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImageRecipe(request), context);
    } );
}

DeleteInfrastructureConfigurationOutcome ImagebuilderClient::DeleteInfrastructureConfiguration(const DeleteInfrastructureConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInfrastructureConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InfrastructureConfigurationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInfrastructureConfiguration", "Required field: InfrastructureConfigurationArn, is not set");
    return DeleteInfrastructureConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InfrastructureConfigurationArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInfrastructureConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteInfrastructureConfiguration");
  return DeleteInfrastructureConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInfrastructureConfigurationOutcomeCallable ImagebuilderClient::DeleteInfrastructureConfigurationCallable(const DeleteInfrastructureConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInfrastructureConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInfrastructureConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::DeleteInfrastructureConfigurationAsync(const DeleteInfrastructureConfigurationRequest& request, const DeleteInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInfrastructureConfiguration(request), context);
    } );
}

GetComponentOutcome ImagebuilderClient::GetComponent(const GetComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ComponentBuildVersionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: ComponentBuildVersionArn, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentBuildVersionArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetComponent");
  return GetComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetComponentOutcomeCallable ImagebuilderClient::GetComponentCallable(const GetComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetComponentAsync(const GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetComponent(request), context);
    } );
}

GetComponentPolicyOutcome ImagebuilderClient::GetComponentPolicy(const GetComponentPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetComponentPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ComponentArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponentPolicy", "Required field: ComponentArn, is not set");
    return GetComponentPolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetComponentPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetComponentPolicy");
  return GetComponentPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetComponentPolicyOutcomeCallable ImagebuilderClient::GetComponentPolicyCallable(const GetComponentPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComponentPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComponentPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetComponentPolicyAsync(const GetComponentPolicyRequest& request, const GetComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetComponentPolicy(request), context);
    } );
}

GetContainerRecipeOutcome ImagebuilderClient::GetContainerRecipe(const GetContainerRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContainerRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContainerRecipe", "Required field: ContainerRecipeArn, is not set");
    return GetContainerRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContainerRecipeArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetContainerRecipe");
  return GetContainerRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContainerRecipeOutcomeCallable ImagebuilderClient::GetContainerRecipeCallable(const GetContainerRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetContainerRecipeAsync(const GetContainerRecipeRequest& request, const GetContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContainerRecipe(request), context);
    } );
}

GetContainerRecipePolicyOutcome ImagebuilderClient::GetContainerRecipePolicy(const GetContainerRecipePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerRecipePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContainerRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContainerRecipePolicy", "Required field: ContainerRecipeArn, is not set");
    return GetContainerRecipePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContainerRecipeArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerRecipePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetContainerRecipePolicy");
  return GetContainerRecipePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContainerRecipePolicyOutcomeCallable ImagebuilderClient::GetContainerRecipePolicyCallable(const GetContainerRecipePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerRecipePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerRecipePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetContainerRecipePolicyAsync(const GetContainerRecipePolicyRequest& request, const GetContainerRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContainerRecipePolicy(request), context);
    } );
}

GetDistributionConfigurationOutcome ImagebuilderClient::GetDistributionConfiguration(const GetDistributionConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistributionConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DistributionConfigurationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDistributionConfiguration", "Required field: DistributionConfigurationArn, is not set");
    return GetDistributionConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionConfigurationArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistributionConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetDistributionConfiguration");
  return GetDistributionConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDistributionConfigurationOutcomeCallable ImagebuilderClient::GetDistributionConfigurationCallable(const GetDistributionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetDistributionConfigurationAsync(const GetDistributionConfigurationRequest& request, const GetDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDistributionConfiguration(request), context);
    } );
}

GetImageOutcome ImagebuilderClient::GetImage(const GetImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImageBuildVersionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImage", "Required field: ImageBuildVersionArn, is not set");
    return GetImageOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageBuildVersionArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetImage");
  return GetImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImageOutcomeCallable ImagebuilderClient::GetImageCallable(const GetImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetImageAsync(const GetImageRequest& request, const GetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImage(request), context);
    } );
}

GetImagePipelineOutcome ImagebuilderClient::GetImagePipeline(const GetImagePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImagePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImagePipelineArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImagePipeline", "Required field: ImagePipelineArn, is not set");
    return GetImagePipelineOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImagePipelineArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImagePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetImagePipeline");
  return GetImagePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImagePipelineOutcomeCallable ImagebuilderClient::GetImagePipelineCallable(const GetImagePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImagePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImagePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetImagePipelineAsync(const GetImagePipelineRequest& request, const GetImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImagePipeline(request), context);
    } );
}

GetImagePolicyOutcome ImagebuilderClient::GetImagePolicy(const GetImagePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImagePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImageArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImagePolicy", "Required field: ImageArn, is not set");
    return GetImagePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImagePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetImagePolicy");
  return GetImagePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImagePolicyOutcomeCallable ImagebuilderClient::GetImagePolicyCallable(const GetImagePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImagePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImagePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetImagePolicyAsync(const GetImagePolicyRequest& request, const GetImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImagePolicy(request), context);
    } );
}

GetImageRecipeOutcome ImagebuilderClient::GetImageRecipe(const GetImageRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImageRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImageRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImageRecipe", "Required field: ImageRecipeArn, is not set");
    return GetImageRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageRecipeArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImageRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetImageRecipe");
  return GetImageRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImageRecipeOutcomeCallable ImagebuilderClient::GetImageRecipeCallable(const GetImageRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImageRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImageRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetImageRecipeAsync(const GetImageRecipeRequest& request, const GetImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImageRecipe(request), context);
    } );
}

GetImageRecipePolicyOutcome ImagebuilderClient::GetImageRecipePolicy(const GetImageRecipePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImageRecipePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImageRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImageRecipePolicy", "Required field: ImageRecipeArn, is not set");
    return GetImageRecipePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageRecipeArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImageRecipePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetImageRecipePolicy");
  return GetImageRecipePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImageRecipePolicyOutcomeCallable ImagebuilderClient::GetImageRecipePolicyCallable(const GetImageRecipePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImageRecipePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImageRecipePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetImageRecipePolicyAsync(const GetImageRecipePolicyRequest& request, const GetImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImageRecipePolicy(request), context);
    } );
}

GetInfrastructureConfigurationOutcome ImagebuilderClient::GetInfrastructureConfiguration(const GetInfrastructureConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInfrastructureConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InfrastructureConfigurationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInfrastructureConfiguration", "Required field: InfrastructureConfigurationArn, is not set");
    return GetInfrastructureConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InfrastructureConfigurationArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInfrastructureConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetInfrastructureConfiguration");
  return GetInfrastructureConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInfrastructureConfigurationOutcomeCallable ImagebuilderClient::GetInfrastructureConfigurationCallable(const GetInfrastructureConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInfrastructureConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInfrastructureConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::GetInfrastructureConfigurationAsync(const GetInfrastructureConfigurationRequest& request, const GetInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInfrastructureConfiguration(request), context);
    } );
}

ImportComponentOutcome ImagebuilderClient::ImportComponent(const ImportComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ImportComponent");
  return ImportComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ImportComponentOutcomeCallable ImagebuilderClient::ImportComponentCallable(const ImportComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ImportComponentAsync(const ImportComponentRequest& request, const ImportComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportComponent(request), context);
    } );
}

ImportVmImageOutcome ImagebuilderClient::ImportVmImage(const ImportVmImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportVmImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportVmImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ImportVmImage");
  return ImportVmImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ImportVmImageOutcomeCallable ImagebuilderClient::ImportVmImageCallable(const ImportVmImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportVmImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportVmImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ImportVmImageAsync(const ImportVmImageRequest& request, const ImportVmImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportVmImage(request), context);
    } );
}

ListComponentBuildVersionsOutcome ImagebuilderClient::ListComponentBuildVersions(const ListComponentBuildVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListComponentBuildVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListComponentBuildVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListComponentBuildVersions");
  return ListComponentBuildVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComponentBuildVersionsOutcomeCallable ImagebuilderClient::ListComponentBuildVersionsCallable(const ListComponentBuildVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentBuildVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponentBuildVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListComponentBuildVersionsAsync(const ListComponentBuildVersionsRequest& request, const ListComponentBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListComponentBuildVersions(request), context);
    } );
}

ListComponentsOutcome ImagebuilderClient::ListComponents(const ListComponentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListComponents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListComponents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListComponents");
  return ListComponentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComponentsOutcomeCallable ImagebuilderClient::ListComponentsCallable(const ListComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListComponentsAsync(const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListComponents(request), context);
    } );
}

ListContainerRecipesOutcome ImagebuilderClient::ListContainerRecipes(const ListContainerRecipesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContainerRecipes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContainerRecipes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListContainerRecipes");
  return ListContainerRecipesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContainerRecipesOutcomeCallable ImagebuilderClient::ListContainerRecipesCallable(const ListContainerRecipesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContainerRecipesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContainerRecipes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListContainerRecipesAsync(const ListContainerRecipesRequest& request, const ListContainerRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListContainerRecipes(request), context);
    } );
}

ListDistributionConfigurationsOutcome ImagebuilderClient::ListDistributionConfigurations(const ListDistributionConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributionConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributionConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListDistributionConfigurations");
  return ListDistributionConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDistributionConfigurationsOutcomeCallable ImagebuilderClient::ListDistributionConfigurationsCallable(const ListDistributionConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListDistributionConfigurationsAsync(const ListDistributionConfigurationsRequest& request, const ListDistributionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDistributionConfigurations(request), context);
    } );
}

ListImageBuildVersionsOutcome ImagebuilderClient::ListImageBuildVersions(const ListImageBuildVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImageBuildVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImageBuildVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListImageBuildVersions");
  return ListImageBuildVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImageBuildVersionsOutcomeCallable ImagebuilderClient::ListImageBuildVersionsCallable(const ListImageBuildVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImageBuildVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImageBuildVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListImageBuildVersionsAsync(const ListImageBuildVersionsRequest& request, const ListImageBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImageBuildVersions(request), context);
    } );
}

ListImagePackagesOutcome ImagebuilderClient::ListImagePackages(const ListImagePackagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImagePackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImagePackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListImagePackages");
  return ListImagePackagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagePackagesOutcomeCallable ImagebuilderClient::ListImagePackagesCallable(const ListImagePackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagePackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImagePackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListImagePackagesAsync(const ListImagePackagesRequest& request, const ListImagePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImagePackages(request), context);
    } );
}

ListImagePipelineImagesOutcome ImagebuilderClient::ListImagePipelineImages(const ListImagePipelineImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImagePipelineImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImagePipelineImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListImagePipelineImages");
  return ListImagePipelineImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagePipelineImagesOutcomeCallable ImagebuilderClient::ListImagePipelineImagesCallable(const ListImagePipelineImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagePipelineImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImagePipelineImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListImagePipelineImagesAsync(const ListImagePipelineImagesRequest& request, const ListImagePipelineImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImagePipelineImages(request), context);
    } );
}

ListImagePipelinesOutcome ImagebuilderClient::ListImagePipelines(const ListImagePipelinesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImagePipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImagePipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListImagePipelines");
  return ListImagePipelinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagePipelinesOutcomeCallable ImagebuilderClient::ListImagePipelinesCallable(const ListImagePipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagePipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImagePipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListImagePipelinesAsync(const ListImagePipelinesRequest& request, const ListImagePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImagePipelines(request), context);
    } );
}

ListImageRecipesOutcome ImagebuilderClient::ListImageRecipes(const ListImageRecipesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImageRecipes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImageRecipes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListImageRecipes");
  return ListImageRecipesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImageRecipesOutcomeCallable ImagebuilderClient::ListImageRecipesCallable(const ListImageRecipesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImageRecipesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImageRecipes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListImageRecipesAsync(const ListImageRecipesRequest& request, const ListImageRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImageRecipes(request), context);
    } );
}

ListImagesOutcome ImagebuilderClient::ListImages(const ListImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListImages");
  return ListImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagesOutcomeCallable ImagebuilderClient::ListImagesCallable(const ListImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListImagesAsync(const ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImages(request), context);
    } );
}

ListInfrastructureConfigurationsOutcome ImagebuilderClient::ListInfrastructureConfigurations(const ListInfrastructureConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInfrastructureConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInfrastructureConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListInfrastructureConfigurations");
  return ListInfrastructureConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInfrastructureConfigurationsOutcomeCallable ImagebuilderClient::ListInfrastructureConfigurationsCallable(const ListInfrastructureConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInfrastructureConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInfrastructureConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListInfrastructureConfigurationsAsync(const ListInfrastructureConfigurationsRequest& request, const ListInfrastructureConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInfrastructureConfigurations(request), context);
    } );
}

ListTagsForResourceOutcome ImagebuilderClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ImagebuilderClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutComponentPolicyOutcome ImagebuilderClient::PutComponentPolicy(const PutComponentPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutComponentPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutComponentPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/PutComponentPolicy");
  return PutComponentPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutComponentPolicyOutcomeCallable ImagebuilderClient::PutComponentPolicyCallable(const PutComponentPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutComponentPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutComponentPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::PutComponentPolicyAsync(const PutComponentPolicyRequest& request, const PutComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutComponentPolicy(request), context);
    } );
}

PutContainerRecipePolicyOutcome ImagebuilderClient::PutContainerRecipePolicy(const PutContainerRecipePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutContainerRecipePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutContainerRecipePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/PutContainerRecipePolicy");
  return PutContainerRecipePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutContainerRecipePolicyOutcomeCallable ImagebuilderClient::PutContainerRecipePolicyCallable(const PutContainerRecipePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutContainerRecipePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutContainerRecipePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::PutContainerRecipePolicyAsync(const PutContainerRecipePolicyRequest& request, const PutContainerRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutContainerRecipePolicy(request), context);
    } );
}

PutImagePolicyOutcome ImagebuilderClient::PutImagePolicy(const PutImagePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutImagePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutImagePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/PutImagePolicy");
  return PutImagePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutImagePolicyOutcomeCallable ImagebuilderClient::PutImagePolicyCallable(const PutImagePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutImagePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutImagePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::PutImagePolicyAsync(const PutImagePolicyRequest& request, const PutImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutImagePolicy(request), context);
    } );
}

PutImageRecipePolicyOutcome ImagebuilderClient::PutImageRecipePolicy(const PutImageRecipePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutImageRecipePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutImageRecipePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/PutImageRecipePolicy");
  return PutImageRecipePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutImageRecipePolicyOutcomeCallable ImagebuilderClient::PutImageRecipePolicyCallable(const PutImageRecipePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutImageRecipePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutImageRecipePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::PutImageRecipePolicyAsync(const PutImageRecipePolicyRequest& request, const PutImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutImageRecipePolicy(request), context);
    } );
}

StartImagePipelineExecutionOutcome ImagebuilderClient::StartImagePipelineExecution(const StartImagePipelineExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartImagePipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartImagePipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/StartImagePipelineExecution");
  return StartImagePipelineExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartImagePipelineExecutionOutcomeCallable ImagebuilderClient::StartImagePipelineExecutionCallable(const StartImagePipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImagePipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImagePipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::StartImagePipelineExecutionAsync(const StartImagePipelineExecutionRequest& request, const StartImagePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartImagePipelineExecution(request), context);
    } );
}

TagResourceOutcome ImagebuilderClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ImagebuilderClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ImagebuilderClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ImagebuilderClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDistributionConfigurationOutcome ImagebuilderClient::UpdateDistributionConfiguration(const UpdateDistributionConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDistributionConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDistributionConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateDistributionConfiguration");
  return UpdateDistributionConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDistributionConfigurationOutcomeCallable ImagebuilderClient::UpdateDistributionConfigurationCallable(const UpdateDistributionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistributionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistributionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::UpdateDistributionConfigurationAsync(const UpdateDistributionConfigurationRequest& request, const UpdateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDistributionConfiguration(request), context);
    } );
}

UpdateImagePipelineOutcome ImagebuilderClient::UpdateImagePipeline(const UpdateImagePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateImagePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateImagePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateImagePipeline");
  return UpdateImagePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateImagePipelineOutcomeCallable ImagebuilderClient::UpdateImagePipelineCallable(const UpdateImagePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateImagePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateImagePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::UpdateImagePipelineAsync(const UpdateImagePipelineRequest& request, const UpdateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateImagePipeline(request), context);
    } );
}

UpdateInfrastructureConfigurationOutcome ImagebuilderClient::UpdateInfrastructureConfiguration(const UpdateInfrastructureConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInfrastructureConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInfrastructureConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateInfrastructureConfiguration");
  return UpdateInfrastructureConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateInfrastructureConfigurationOutcomeCallable ImagebuilderClient::UpdateInfrastructureConfigurationCallable(const UpdateInfrastructureConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInfrastructureConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInfrastructureConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClient::UpdateInfrastructureConfigurationAsync(const UpdateInfrastructureConfigurationRequest& request, const UpdateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateInfrastructureConfiguration(request), context);
    } );
}

