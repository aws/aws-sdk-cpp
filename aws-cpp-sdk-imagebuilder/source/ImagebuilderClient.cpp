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

#include <aws/imagebuilder/ImagebuilderClient.h>
#include <aws/imagebuilder/ImagebuilderEndpoint.h>
#include <aws/imagebuilder/ImagebuilderErrorMarshaller.h>
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

static const char* SERVICE_NAME = "imagebuilder";
static const char* ALLOCATION_TAG = "ImagebuilderClient";

ImagebuilderClient::ImagebuilderClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ImagebuilderClient::ImagebuilderClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ImagebuilderClient::ImagebuilderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ImagebuilderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ImagebuilderClient::~ImagebuilderClient()
{
}

void ImagebuilderClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("imagebuilder");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ImagebuilderEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ImagebuilderClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CancelImageCreationOutcome ImagebuilderClient::CancelImageCreation(const CancelImageCreationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CancelImageCreation");
  return CancelImageCreationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelImageCreationOutcomeCallable ImagebuilderClient::CancelImageCreationCallable(const CancelImageCreationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelImageCreationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelImageCreation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientCancelImageCreationAsyncHelper(ImagebuilderClient const * const clientThis, const CancelImageCreationRequest& request, const CancelImageCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelImageCreation(request), context);
}

void ImagebuilderClient::CancelImageCreationAsync(const CancelImageCreationRequest& request, const CancelImageCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientCancelImageCreationAsyncHelper( this, request, handler, context ); } );
}

CreateComponentOutcome ImagebuilderClient::CreateComponent(const CreateComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateComponent");
  return CreateComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateComponentOutcomeCallable ImagebuilderClient::CreateComponentCallable(const CreateComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientCreateComponentAsyncHelper(ImagebuilderClient const * const clientThis, const CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateComponent(request), context);
}

void ImagebuilderClient::CreateComponentAsync(const CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientCreateComponentAsyncHelper( this, request, handler, context ); } );
}

CreateContainerRecipeOutcome ImagebuilderClient::CreateContainerRecipe(const CreateContainerRecipeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateContainerRecipe");
  return CreateContainerRecipeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateContainerRecipeOutcomeCallable ImagebuilderClient::CreateContainerRecipeCallable(const CreateContainerRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContainerRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContainerRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientCreateContainerRecipeAsyncHelper(ImagebuilderClient const * const clientThis, const CreateContainerRecipeRequest& request, const CreateContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContainerRecipe(request), context);
}

void ImagebuilderClient::CreateContainerRecipeAsync(const CreateContainerRecipeRequest& request, const CreateContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientCreateContainerRecipeAsyncHelper( this, request, handler, context ); } );
}

CreateDistributionConfigurationOutcome ImagebuilderClient::CreateDistributionConfiguration(const CreateDistributionConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateDistributionConfiguration");
  return CreateDistributionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateDistributionConfigurationOutcomeCallable ImagebuilderClient::CreateDistributionConfigurationCallable(const CreateDistributionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistributionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistributionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientCreateDistributionConfigurationAsyncHelper(ImagebuilderClient const * const clientThis, const CreateDistributionConfigurationRequest& request, const CreateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDistributionConfiguration(request), context);
}

void ImagebuilderClient::CreateDistributionConfigurationAsync(const CreateDistributionConfigurationRequest& request, const CreateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientCreateDistributionConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreateImageOutcome ImagebuilderClient::CreateImage(const CreateImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateImage");
  return CreateImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateImageOutcomeCallable ImagebuilderClient::CreateImageCallable(const CreateImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientCreateImageAsyncHelper(ImagebuilderClient const * const clientThis, const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateImage(request), context);
}

void ImagebuilderClient::CreateImageAsync(const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientCreateImageAsyncHelper( this, request, handler, context ); } );
}

CreateImagePipelineOutcome ImagebuilderClient::CreateImagePipeline(const CreateImagePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateImagePipeline");
  return CreateImagePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateImagePipelineOutcomeCallable ImagebuilderClient::CreateImagePipelineCallable(const CreateImagePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImagePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImagePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientCreateImagePipelineAsyncHelper(ImagebuilderClient const * const clientThis, const CreateImagePipelineRequest& request, const CreateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateImagePipeline(request), context);
}

void ImagebuilderClient::CreateImagePipelineAsync(const CreateImagePipelineRequest& request, const CreateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientCreateImagePipelineAsyncHelper( this, request, handler, context ); } );
}

CreateImageRecipeOutcome ImagebuilderClient::CreateImageRecipe(const CreateImageRecipeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateImageRecipe");
  return CreateImageRecipeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateImageRecipeOutcomeCallable ImagebuilderClient::CreateImageRecipeCallable(const CreateImageRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImageRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientCreateImageRecipeAsyncHelper(ImagebuilderClient const * const clientThis, const CreateImageRecipeRequest& request, const CreateImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateImageRecipe(request), context);
}

void ImagebuilderClient::CreateImageRecipeAsync(const CreateImageRecipeRequest& request, const CreateImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientCreateImageRecipeAsyncHelper( this, request, handler, context ); } );
}

CreateInfrastructureConfigurationOutcome ImagebuilderClient::CreateInfrastructureConfiguration(const CreateInfrastructureConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateInfrastructureConfiguration");
  return CreateInfrastructureConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateInfrastructureConfigurationOutcomeCallable ImagebuilderClient::CreateInfrastructureConfigurationCallable(const CreateInfrastructureConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInfrastructureConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInfrastructureConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientCreateInfrastructureConfigurationAsyncHelper(ImagebuilderClient const * const clientThis, const CreateInfrastructureConfigurationRequest& request, const CreateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInfrastructureConfiguration(request), context);
}

void ImagebuilderClient::CreateInfrastructureConfigurationAsync(const CreateInfrastructureConfigurationRequest& request, const CreateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientCreateInfrastructureConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteComponentOutcome ImagebuilderClient::DeleteComponent(const DeleteComponentRequest& request) const
{
  if (!request.ComponentBuildVersionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: ComponentBuildVersionArn, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentBuildVersionArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteComponent");
  return DeleteComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteComponentOutcomeCallable ImagebuilderClient::DeleteComponentCallable(const DeleteComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientDeleteComponentAsyncHelper(ImagebuilderClient const * const clientThis, const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteComponent(request), context);
}

void ImagebuilderClient::DeleteComponentAsync(const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientDeleteComponentAsyncHelper( this, request, handler, context ); } );
}

DeleteContainerRecipeOutcome ImagebuilderClient::DeleteContainerRecipe(const DeleteContainerRecipeRequest& request) const
{
  if (!request.ContainerRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContainerRecipe", "Required field: ContainerRecipeArn, is not set");
    return DeleteContainerRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContainerRecipeArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteContainerRecipe");
  return DeleteContainerRecipeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteContainerRecipeOutcomeCallable ImagebuilderClient::DeleteContainerRecipeCallable(const DeleteContainerRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContainerRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContainerRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientDeleteContainerRecipeAsyncHelper(ImagebuilderClient const * const clientThis, const DeleteContainerRecipeRequest& request, const DeleteContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContainerRecipe(request), context);
}

void ImagebuilderClient::DeleteContainerRecipeAsync(const DeleteContainerRecipeRequest& request, const DeleteContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientDeleteContainerRecipeAsyncHelper( this, request, handler, context ); } );
}

DeleteDistributionConfigurationOutcome ImagebuilderClient::DeleteDistributionConfiguration(const DeleteDistributionConfigurationRequest& request) const
{
  if (!request.DistributionConfigurationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDistributionConfiguration", "Required field: DistributionConfigurationArn, is not set");
    return DeleteDistributionConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionConfigurationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteDistributionConfiguration");
  return DeleteDistributionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDistributionConfigurationOutcomeCallable ImagebuilderClient::DeleteDistributionConfigurationCallable(const DeleteDistributionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDistributionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDistributionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientDeleteDistributionConfigurationAsyncHelper(ImagebuilderClient const * const clientThis, const DeleteDistributionConfigurationRequest& request, const DeleteDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDistributionConfiguration(request), context);
}

void ImagebuilderClient::DeleteDistributionConfigurationAsync(const DeleteDistributionConfigurationRequest& request, const DeleteDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientDeleteDistributionConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteImageOutcome ImagebuilderClient::DeleteImage(const DeleteImageRequest& request) const
{
  if (!request.ImageBuildVersionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImage", "Required field: ImageBuildVersionArn, is not set");
    return DeleteImageOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageBuildVersionArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteImage");
  return DeleteImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageOutcomeCallable ImagebuilderClient::DeleteImageCallable(const DeleteImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientDeleteImageAsyncHelper(ImagebuilderClient const * const clientThis, const DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteImage(request), context);
}

void ImagebuilderClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientDeleteImageAsyncHelper( this, request, handler, context ); } );
}

DeleteImagePipelineOutcome ImagebuilderClient::DeleteImagePipeline(const DeleteImagePipelineRequest& request) const
{
  if (!request.ImagePipelineArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImagePipeline", "Required field: ImagePipelineArn, is not set");
    return DeleteImagePipelineOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImagePipelineArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteImagePipeline");
  return DeleteImagePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteImagePipelineOutcomeCallable ImagebuilderClient::DeleteImagePipelineCallable(const DeleteImagePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImagePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImagePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientDeleteImagePipelineAsyncHelper(ImagebuilderClient const * const clientThis, const DeleteImagePipelineRequest& request, const DeleteImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteImagePipeline(request), context);
}

void ImagebuilderClient::DeleteImagePipelineAsync(const DeleteImagePipelineRequest& request, const DeleteImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientDeleteImagePipelineAsyncHelper( this, request, handler, context ); } );
}

DeleteImageRecipeOutcome ImagebuilderClient::DeleteImageRecipe(const DeleteImageRecipeRequest& request) const
{
  if (!request.ImageRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImageRecipe", "Required field: ImageRecipeArn, is not set");
    return DeleteImageRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageRecipeArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteImageRecipe");
  return DeleteImageRecipeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageRecipeOutcomeCallable ImagebuilderClient::DeleteImageRecipeCallable(const DeleteImageRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImageRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientDeleteImageRecipeAsyncHelper(ImagebuilderClient const * const clientThis, const DeleteImageRecipeRequest& request, const DeleteImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteImageRecipe(request), context);
}

void ImagebuilderClient::DeleteImageRecipeAsync(const DeleteImageRecipeRequest& request, const DeleteImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientDeleteImageRecipeAsyncHelper( this, request, handler, context ); } );
}

DeleteInfrastructureConfigurationOutcome ImagebuilderClient::DeleteInfrastructureConfiguration(const DeleteInfrastructureConfigurationRequest& request) const
{
  if (!request.InfrastructureConfigurationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInfrastructureConfiguration", "Required field: InfrastructureConfigurationArn, is not set");
    return DeleteInfrastructureConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InfrastructureConfigurationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteInfrastructureConfiguration");
  return DeleteInfrastructureConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInfrastructureConfigurationOutcomeCallable ImagebuilderClient::DeleteInfrastructureConfigurationCallable(const DeleteInfrastructureConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInfrastructureConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInfrastructureConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientDeleteInfrastructureConfigurationAsyncHelper(ImagebuilderClient const * const clientThis, const DeleteInfrastructureConfigurationRequest& request, const DeleteInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInfrastructureConfiguration(request), context);
}

void ImagebuilderClient::DeleteInfrastructureConfigurationAsync(const DeleteInfrastructureConfigurationRequest& request, const DeleteInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientDeleteInfrastructureConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetComponentOutcome ImagebuilderClient::GetComponent(const GetComponentRequest& request) const
{
  if (!request.ComponentBuildVersionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: ComponentBuildVersionArn, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentBuildVersionArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetComponent");
  return GetComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetComponentOutcomeCallable ImagebuilderClient::GetComponentCallable(const GetComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetComponentAsyncHelper(ImagebuilderClient const * const clientThis, const GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetComponent(request), context);
}

void ImagebuilderClient::GetComponentAsync(const GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetComponentAsyncHelper( this, request, handler, context ); } );
}

GetComponentPolicyOutcome ImagebuilderClient::GetComponentPolicy(const GetComponentPolicyRequest& request) const
{
  if (!request.ComponentArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponentPolicy", "Required field: ComponentArn, is not set");
    return GetComponentPolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetComponentPolicy");
  return GetComponentPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetComponentPolicyOutcomeCallable ImagebuilderClient::GetComponentPolicyCallable(const GetComponentPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComponentPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComponentPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetComponentPolicyAsyncHelper(ImagebuilderClient const * const clientThis, const GetComponentPolicyRequest& request, const GetComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetComponentPolicy(request), context);
}

void ImagebuilderClient::GetComponentPolicyAsync(const GetComponentPolicyRequest& request, const GetComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetComponentPolicyAsyncHelper( this, request, handler, context ); } );
}

GetContainerRecipeOutcome ImagebuilderClient::GetContainerRecipe(const GetContainerRecipeRequest& request) const
{
  if (!request.ContainerRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContainerRecipe", "Required field: ContainerRecipeArn, is not set");
    return GetContainerRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContainerRecipeArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetContainerRecipe");
  return GetContainerRecipeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContainerRecipeOutcomeCallable ImagebuilderClient::GetContainerRecipeCallable(const GetContainerRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetContainerRecipeAsyncHelper(ImagebuilderClient const * const clientThis, const GetContainerRecipeRequest& request, const GetContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContainerRecipe(request), context);
}

void ImagebuilderClient::GetContainerRecipeAsync(const GetContainerRecipeRequest& request, const GetContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetContainerRecipeAsyncHelper( this, request, handler, context ); } );
}

GetContainerRecipePolicyOutcome ImagebuilderClient::GetContainerRecipePolicy(const GetContainerRecipePolicyRequest& request) const
{
  if (!request.ContainerRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContainerRecipePolicy", "Required field: ContainerRecipeArn, is not set");
    return GetContainerRecipePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContainerRecipeArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetContainerRecipePolicy");
  return GetContainerRecipePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContainerRecipePolicyOutcomeCallable ImagebuilderClient::GetContainerRecipePolicyCallable(const GetContainerRecipePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerRecipePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerRecipePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetContainerRecipePolicyAsyncHelper(ImagebuilderClient const * const clientThis, const GetContainerRecipePolicyRequest& request, const GetContainerRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContainerRecipePolicy(request), context);
}

void ImagebuilderClient::GetContainerRecipePolicyAsync(const GetContainerRecipePolicyRequest& request, const GetContainerRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetContainerRecipePolicyAsyncHelper( this, request, handler, context ); } );
}

GetDistributionConfigurationOutcome ImagebuilderClient::GetDistributionConfiguration(const GetDistributionConfigurationRequest& request) const
{
  if (!request.DistributionConfigurationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDistributionConfiguration", "Required field: DistributionConfigurationArn, is not set");
    return GetDistributionConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionConfigurationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetDistributionConfiguration");
  return GetDistributionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDistributionConfigurationOutcomeCallable ImagebuilderClient::GetDistributionConfigurationCallable(const GetDistributionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetDistributionConfigurationAsyncHelper(ImagebuilderClient const * const clientThis, const GetDistributionConfigurationRequest& request, const GetDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDistributionConfiguration(request), context);
}

void ImagebuilderClient::GetDistributionConfigurationAsync(const GetDistributionConfigurationRequest& request, const GetDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetDistributionConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetImageOutcome ImagebuilderClient::GetImage(const GetImageRequest& request) const
{
  if (!request.ImageBuildVersionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImage", "Required field: ImageBuildVersionArn, is not set");
    return GetImageOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageBuildVersionArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetImage");
  return GetImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImageOutcomeCallable ImagebuilderClient::GetImageCallable(const GetImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetImageAsyncHelper(ImagebuilderClient const * const clientThis, const GetImageRequest& request, const GetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetImage(request), context);
}

void ImagebuilderClient::GetImageAsync(const GetImageRequest& request, const GetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetImageAsyncHelper( this, request, handler, context ); } );
}

GetImagePipelineOutcome ImagebuilderClient::GetImagePipeline(const GetImagePipelineRequest& request) const
{
  if (!request.ImagePipelineArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImagePipeline", "Required field: ImagePipelineArn, is not set");
    return GetImagePipelineOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImagePipelineArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetImagePipeline");
  return GetImagePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImagePipelineOutcomeCallable ImagebuilderClient::GetImagePipelineCallable(const GetImagePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImagePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImagePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetImagePipelineAsyncHelper(ImagebuilderClient const * const clientThis, const GetImagePipelineRequest& request, const GetImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetImagePipeline(request), context);
}

void ImagebuilderClient::GetImagePipelineAsync(const GetImagePipelineRequest& request, const GetImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetImagePipelineAsyncHelper( this, request, handler, context ); } );
}

GetImagePolicyOutcome ImagebuilderClient::GetImagePolicy(const GetImagePolicyRequest& request) const
{
  if (!request.ImageArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImagePolicy", "Required field: ImageArn, is not set");
    return GetImagePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetImagePolicy");
  return GetImagePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImagePolicyOutcomeCallable ImagebuilderClient::GetImagePolicyCallable(const GetImagePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImagePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImagePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetImagePolicyAsyncHelper(ImagebuilderClient const * const clientThis, const GetImagePolicyRequest& request, const GetImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetImagePolicy(request), context);
}

void ImagebuilderClient::GetImagePolicyAsync(const GetImagePolicyRequest& request, const GetImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetImagePolicyAsyncHelper( this, request, handler, context ); } );
}

GetImageRecipeOutcome ImagebuilderClient::GetImageRecipe(const GetImageRecipeRequest& request) const
{
  if (!request.ImageRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImageRecipe", "Required field: ImageRecipeArn, is not set");
    return GetImageRecipeOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageRecipeArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetImageRecipe");
  return GetImageRecipeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImageRecipeOutcomeCallable ImagebuilderClient::GetImageRecipeCallable(const GetImageRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImageRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImageRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetImageRecipeAsyncHelper(ImagebuilderClient const * const clientThis, const GetImageRecipeRequest& request, const GetImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetImageRecipe(request), context);
}

void ImagebuilderClient::GetImageRecipeAsync(const GetImageRecipeRequest& request, const GetImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetImageRecipeAsyncHelper( this, request, handler, context ); } );
}

GetImageRecipePolicyOutcome ImagebuilderClient::GetImageRecipePolicy(const GetImageRecipePolicyRequest& request) const
{
  if (!request.ImageRecipeArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImageRecipePolicy", "Required field: ImageRecipeArn, is not set");
    return GetImageRecipePolicyOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageRecipeArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetImageRecipePolicy");
  return GetImageRecipePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImageRecipePolicyOutcomeCallable ImagebuilderClient::GetImageRecipePolicyCallable(const GetImageRecipePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImageRecipePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImageRecipePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetImageRecipePolicyAsyncHelper(ImagebuilderClient const * const clientThis, const GetImageRecipePolicyRequest& request, const GetImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetImageRecipePolicy(request), context);
}

void ImagebuilderClient::GetImageRecipePolicyAsync(const GetImageRecipePolicyRequest& request, const GetImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetImageRecipePolicyAsyncHelper( this, request, handler, context ); } );
}

GetInfrastructureConfigurationOutcome ImagebuilderClient::GetInfrastructureConfiguration(const GetInfrastructureConfigurationRequest& request) const
{
  if (!request.InfrastructureConfigurationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInfrastructureConfiguration", "Required field: InfrastructureConfigurationArn, is not set");
    return GetInfrastructureConfigurationOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InfrastructureConfigurationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetInfrastructureConfiguration");
  return GetInfrastructureConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInfrastructureConfigurationOutcomeCallable ImagebuilderClient::GetInfrastructureConfigurationCallable(const GetInfrastructureConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInfrastructureConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInfrastructureConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientGetInfrastructureConfigurationAsyncHelper(ImagebuilderClient const * const clientThis, const GetInfrastructureConfigurationRequest& request, const GetInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInfrastructureConfiguration(request), context);
}

void ImagebuilderClient::GetInfrastructureConfigurationAsync(const GetInfrastructureConfigurationRequest& request, const GetInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientGetInfrastructureConfigurationAsyncHelper( this, request, handler, context ); } );
}

ImportComponentOutcome ImagebuilderClient::ImportComponent(const ImportComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ImportComponent");
  return ImportComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ImportComponentOutcomeCallable ImagebuilderClient::ImportComponentCallable(const ImportComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientImportComponentAsyncHelper(ImagebuilderClient const * const clientThis, const ImportComponentRequest& request, const ImportComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportComponent(request), context);
}

void ImagebuilderClient::ImportComponentAsync(const ImportComponentRequest& request, const ImportComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientImportComponentAsyncHelper( this, request, handler, context ); } );
}

ImportVmImageOutcome ImagebuilderClient::ImportVmImage(const ImportVmImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ImportVmImage");
  return ImportVmImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ImportVmImageOutcomeCallable ImagebuilderClient::ImportVmImageCallable(const ImportVmImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportVmImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportVmImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientImportVmImageAsyncHelper(ImagebuilderClient const * const clientThis, const ImportVmImageRequest& request, const ImportVmImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportVmImage(request), context);
}

void ImagebuilderClient::ImportVmImageAsync(const ImportVmImageRequest& request, const ImportVmImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientImportVmImageAsyncHelper( this, request, handler, context ); } );
}

ListComponentBuildVersionsOutcome ImagebuilderClient::ListComponentBuildVersions(const ListComponentBuildVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListComponentBuildVersions");
  return ListComponentBuildVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComponentBuildVersionsOutcomeCallable ImagebuilderClient::ListComponentBuildVersionsCallable(const ListComponentBuildVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentBuildVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponentBuildVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListComponentBuildVersionsAsyncHelper(ImagebuilderClient const * const clientThis, const ListComponentBuildVersionsRequest& request, const ListComponentBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListComponentBuildVersions(request), context);
}

void ImagebuilderClient::ListComponentBuildVersionsAsync(const ListComponentBuildVersionsRequest& request, const ListComponentBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListComponentBuildVersionsAsyncHelper( this, request, handler, context ); } );
}

ListComponentsOutcome ImagebuilderClient::ListComponents(const ListComponentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListComponents");
  return ListComponentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComponentsOutcomeCallable ImagebuilderClient::ListComponentsCallable(const ListComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListComponentsAsyncHelper(ImagebuilderClient const * const clientThis, const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListComponents(request), context);
}

void ImagebuilderClient::ListComponentsAsync(const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListComponentsAsyncHelper( this, request, handler, context ); } );
}

ListContainerRecipesOutcome ImagebuilderClient::ListContainerRecipes(const ListContainerRecipesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListContainerRecipes");
  return ListContainerRecipesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContainerRecipesOutcomeCallable ImagebuilderClient::ListContainerRecipesCallable(const ListContainerRecipesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContainerRecipesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContainerRecipes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListContainerRecipesAsyncHelper(ImagebuilderClient const * const clientThis, const ListContainerRecipesRequest& request, const ListContainerRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContainerRecipes(request), context);
}

void ImagebuilderClient::ListContainerRecipesAsync(const ListContainerRecipesRequest& request, const ListContainerRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListContainerRecipesAsyncHelper( this, request, handler, context ); } );
}

ListDistributionConfigurationsOutcome ImagebuilderClient::ListDistributionConfigurations(const ListDistributionConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListDistributionConfigurations");
  return ListDistributionConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDistributionConfigurationsOutcomeCallable ImagebuilderClient::ListDistributionConfigurationsCallable(const ListDistributionConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListDistributionConfigurationsAsyncHelper(ImagebuilderClient const * const clientThis, const ListDistributionConfigurationsRequest& request, const ListDistributionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDistributionConfigurations(request), context);
}

void ImagebuilderClient::ListDistributionConfigurationsAsync(const ListDistributionConfigurationsRequest& request, const ListDistributionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListDistributionConfigurationsAsyncHelper( this, request, handler, context ); } );
}

ListImageBuildVersionsOutcome ImagebuilderClient::ListImageBuildVersions(const ListImageBuildVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListImageBuildVersions");
  return ListImageBuildVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImageBuildVersionsOutcomeCallable ImagebuilderClient::ListImageBuildVersionsCallable(const ListImageBuildVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImageBuildVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImageBuildVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListImageBuildVersionsAsyncHelper(ImagebuilderClient const * const clientThis, const ListImageBuildVersionsRequest& request, const ListImageBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImageBuildVersions(request), context);
}

void ImagebuilderClient::ListImageBuildVersionsAsync(const ListImageBuildVersionsRequest& request, const ListImageBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListImageBuildVersionsAsyncHelper( this, request, handler, context ); } );
}

ListImagePackagesOutcome ImagebuilderClient::ListImagePackages(const ListImagePackagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListImagePackages");
  return ListImagePackagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagePackagesOutcomeCallable ImagebuilderClient::ListImagePackagesCallable(const ListImagePackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagePackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImagePackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListImagePackagesAsyncHelper(ImagebuilderClient const * const clientThis, const ListImagePackagesRequest& request, const ListImagePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImagePackages(request), context);
}

void ImagebuilderClient::ListImagePackagesAsync(const ListImagePackagesRequest& request, const ListImagePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListImagePackagesAsyncHelper( this, request, handler, context ); } );
}

ListImagePipelineImagesOutcome ImagebuilderClient::ListImagePipelineImages(const ListImagePipelineImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListImagePipelineImages");
  return ListImagePipelineImagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagePipelineImagesOutcomeCallable ImagebuilderClient::ListImagePipelineImagesCallable(const ListImagePipelineImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagePipelineImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImagePipelineImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListImagePipelineImagesAsyncHelper(ImagebuilderClient const * const clientThis, const ListImagePipelineImagesRequest& request, const ListImagePipelineImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImagePipelineImages(request), context);
}

void ImagebuilderClient::ListImagePipelineImagesAsync(const ListImagePipelineImagesRequest& request, const ListImagePipelineImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListImagePipelineImagesAsyncHelper( this, request, handler, context ); } );
}

ListImagePipelinesOutcome ImagebuilderClient::ListImagePipelines(const ListImagePipelinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListImagePipelines");
  return ListImagePipelinesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagePipelinesOutcomeCallable ImagebuilderClient::ListImagePipelinesCallable(const ListImagePipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagePipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImagePipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListImagePipelinesAsyncHelper(ImagebuilderClient const * const clientThis, const ListImagePipelinesRequest& request, const ListImagePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImagePipelines(request), context);
}

void ImagebuilderClient::ListImagePipelinesAsync(const ListImagePipelinesRequest& request, const ListImagePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListImagePipelinesAsyncHelper( this, request, handler, context ); } );
}

ListImageRecipesOutcome ImagebuilderClient::ListImageRecipes(const ListImageRecipesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListImageRecipes");
  return ListImageRecipesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImageRecipesOutcomeCallable ImagebuilderClient::ListImageRecipesCallable(const ListImageRecipesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImageRecipesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImageRecipes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListImageRecipesAsyncHelper(ImagebuilderClient const * const clientThis, const ListImageRecipesRequest& request, const ListImageRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImageRecipes(request), context);
}

void ImagebuilderClient::ListImageRecipesAsync(const ListImageRecipesRequest& request, const ListImageRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListImageRecipesAsyncHelper( this, request, handler, context ); } );
}

ListImagesOutcome ImagebuilderClient::ListImages(const ListImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListImages");
  return ListImagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagesOutcomeCallable ImagebuilderClient::ListImagesCallable(const ListImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListImagesAsyncHelper(ImagebuilderClient const * const clientThis, const ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImages(request), context);
}

void ImagebuilderClient::ListImagesAsync(const ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListImagesAsyncHelper( this, request, handler, context ); } );
}

ListInfrastructureConfigurationsOutcome ImagebuilderClient::ListInfrastructureConfigurations(const ListInfrastructureConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListInfrastructureConfigurations");
  return ListInfrastructureConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInfrastructureConfigurationsOutcomeCallable ImagebuilderClient::ListInfrastructureConfigurationsCallable(const ListInfrastructureConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInfrastructureConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInfrastructureConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListInfrastructureConfigurationsAsyncHelper(ImagebuilderClient const * const clientThis, const ListInfrastructureConfigurationsRequest& request, const ListInfrastructureConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInfrastructureConfigurations(request), context);
}

void ImagebuilderClient::ListInfrastructureConfigurationsAsync(const ListInfrastructureConfigurationsRequest& request, const ListInfrastructureConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListInfrastructureConfigurationsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ImagebuilderClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ImagebuilderClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientListTagsForResourceAsyncHelper(ImagebuilderClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ImagebuilderClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutComponentPolicyOutcome ImagebuilderClient::PutComponentPolicy(const PutComponentPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/PutComponentPolicy");
  return PutComponentPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutComponentPolicyOutcomeCallable ImagebuilderClient::PutComponentPolicyCallable(const PutComponentPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutComponentPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutComponentPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientPutComponentPolicyAsyncHelper(ImagebuilderClient const * const clientThis, const PutComponentPolicyRequest& request, const PutComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutComponentPolicy(request), context);
}

void ImagebuilderClient::PutComponentPolicyAsync(const PutComponentPolicyRequest& request, const PutComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientPutComponentPolicyAsyncHelper( this, request, handler, context ); } );
}

PutContainerRecipePolicyOutcome ImagebuilderClient::PutContainerRecipePolicy(const PutContainerRecipePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/PutContainerRecipePolicy");
  return PutContainerRecipePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutContainerRecipePolicyOutcomeCallable ImagebuilderClient::PutContainerRecipePolicyCallable(const PutContainerRecipePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutContainerRecipePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutContainerRecipePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientPutContainerRecipePolicyAsyncHelper(ImagebuilderClient const * const clientThis, const PutContainerRecipePolicyRequest& request, const PutContainerRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutContainerRecipePolicy(request), context);
}

void ImagebuilderClient::PutContainerRecipePolicyAsync(const PutContainerRecipePolicyRequest& request, const PutContainerRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientPutContainerRecipePolicyAsyncHelper( this, request, handler, context ); } );
}

PutImagePolicyOutcome ImagebuilderClient::PutImagePolicy(const PutImagePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/PutImagePolicy");
  return PutImagePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutImagePolicyOutcomeCallable ImagebuilderClient::PutImagePolicyCallable(const PutImagePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutImagePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutImagePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientPutImagePolicyAsyncHelper(ImagebuilderClient const * const clientThis, const PutImagePolicyRequest& request, const PutImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutImagePolicy(request), context);
}

void ImagebuilderClient::PutImagePolicyAsync(const PutImagePolicyRequest& request, const PutImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientPutImagePolicyAsyncHelper( this, request, handler, context ); } );
}

PutImageRecipePolicyOutcome ImagebuilderClient::PutImageRecipePolicy(const PutImageRecipePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/PutImageRecipePolicy");
  return PutImageRecipePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutImageRecipePolicyOutcomeCallable ImagebuilderClient::PutImageRecipePolicyCallable(const PutImageRecipePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutImageRecipePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutImageRecipePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientPutImageRecipePolicyAsyncHelper(ImagebuilderClient const * const clientThis, const PutImageRecipePolicyRequest& request, const PutImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutImageRecipePolicy(request), context);
}

void ImagebuilderClient::PutImageRecipePolicyAsync(const PutImageRecipePolicyRequest& request, const PutImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientPutImageRecipePolicyAsyncHelper( this, request, handler, context ); } );
}

StartImagePipelineExecutionOutcome ImagebuilderClient::StartImagePipelineExecution(const StartImagePipelineExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/StartImagePipelineExecution");
  return StartImagePipelineExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartImagePipelineExecutionOutcomeCallable ImagebuilderClient::StartImagePipelineExecutionCallable(const StartImagePipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImagePipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImagePipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientStartImagePipelineExecutionAsyncHelper(ImagebuilderClient const * const clientThis, const StartImagePipelineExecutionRequest& request, const StartImagePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartImagePipelineExecution(request), context);
}

void ImagebuilderClient::StartImagePipelineExecutionAsync(const StartImagePipelineExecutionRequest& request, const StartImagePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientStartImagePipelineExecutionAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome ImagebuilderClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ImagebuilderErrors>(ImagebuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ImagebuilderClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientTagResourceAsyncHelper(ImagebuilderClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ImagebuilderClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome ImagebuilderClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ImagebuilderClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientUntagResourceAsyncHelper(ImagebuilderClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ImagebuilderClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDistributionConfigurationOutcome ImagebuilderClient::UpdateDistributionConfiguration(const UpdateDistributionConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateDistributionConfiguration");
  return UpdateDistributionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDistributionConfigurationOutcomeCallable ImagebuilderClient::UpdateDistributionConfigurationCallable(const UpdateDistributionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistributionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistributionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientUpdateDistributionConfigurationAsyncHelper(ImagebuilderClient const * const clientThis, const UpdateDistributionConfigurationRequest& request, const UpdateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDistributionConfiguration(request), context);
}

void ImagebuilderClient::UpdateDistributionConfigurationAsync(const UpdateDistributionConfigurationRequest& request, const UpdateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientUpdateDistributionConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateImagePipelineOutcome ImagebuilderClient::UpdateImagePipeline(const UpdateImagePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateImagePipeline");
  return UpdateImagePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateImagePipelineOutcomeCallable ImagebuilderClient::UpdateImagePipelineCallable(const UpdateImagePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateImagePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateImagePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientUpdateImagePipelineAsyncHelper(ImagebuilderClient const * const clientThis, const UpdateImagePipelineRequest& request, const UpdateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateImagePipeline(request), context);
}

void ImagebuilderClient::UpdateImagePipelineAsync(const UpdateImagePipelineRequest& request, const UpdateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientUpdateImagePipelineAsyncHelper( this, request, handler, context ); } );
}

UpdateInfrastructureConfigurationOutcome ImagebuilderClient::UpdateInfrastructureConfiguration(const UpdateInfrastructureConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateInfrastructureConfiguration");
  return UpdateInfrastructureConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateInfrastructureConfigurationOutcomeCallable ImagebuilderClient::UpdateInfrastructureConfigurationCallable(const UpdateInfrastructureConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInfrastructureConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInfrastructureConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ImagebuilderClientUpdateInfrastructureConfigurationAsyncHelper(ImagebuilderClient const * const clientThis, const UpdateInfrastructureConfigurationRequest& request, const UpdateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInfrastructureConfiguration(request), context);
}

void ImagebuilderClient::UpdateInfrastructureConfigurationAsync(const UpdateInfrastructureConfigurationRequest& request, const UpdateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ImagebuilderClientUpdateInfrastructureConfigurationAsyncHelper( this, request, handler, context ); } );
}

