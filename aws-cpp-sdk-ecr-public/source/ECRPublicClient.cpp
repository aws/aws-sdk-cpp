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

#include <aws/ecr-public/ECRPublicClient.h>
#include <aws/ecr-public/ECRPublicEndpoint.h>
#include <aws/ecr-public/ECRPublicErrorMarshaller.h>
#include <aws/ecr-public/model/BatchCheckLayerAvailabilityRequest.h>
#include <aws/ecr-public/model/BatchDeleteImageRequest.h>
#include <aws/ecr-public/model/CompleteLayerUploadRequest.h>
#include <aws/ecr-public/model/CreateRepositoryRequest.h>
#include <aws/ecr-public/model/DeleteRepositoryRequest.h>
#include <aws/ecr-public/model/DeleteRepositoryPolicyRequest.h>
#include <aws/ecr-public/model/DescribeImageTagsRequest.h>
#include <aws/ecr-public/model/DescribeImagesRequest.h>
#include <aws/ecr-public/model/DescribeRegistriesRequest.h>
#include <aws/ecr-public/model/DescribeRepositoriesRequest.h>
#include <aws/ecr-public/model/GetAuthorizationTokenRequest.h>
#include <aws/ecr-public/model/GetRegistryCatalogDataRequest.h>
#include <aws/ecr-public/model/GetRepositoryCatalogDataRequest.h>
#include <aws/ecr-public/model/GetRepositoryPolicyRequest.h>
#include <aws/ecr-public/model/InitiateLayerUploadRequest.h>
#include <aws/ecr-public/model/ListTagsForResourceRequest.h>
#include <aws/ecr-public/model/PutImageRequest.h>
#include <aws/ecr-public/model/PutRegistryCatalogDataRequest.h>
#include <aws/ecr-public/model/PutRepositoryCatalogDataRequest.h>
#include <aws/ecr-public/model/SetRepositoryPolicyRequest.h>
#include <aws/ecr-public/model/TagResourceRequest.h>
#include <aws/ecr-public/model/UntagResourceRequest.h>
#include <aws/ecr-public/model/UploadLayerPartRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ECRPublic;
using namespace Aws::ECRPublic::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ecr-public";
static const char* ALLOCATION_TAG = "ECRPublicClient";

ECRPublicClient::ECRPublicClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECRPublicErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECRPublicClient::ECRPublicClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECRPublicErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECRPublicClient::ECRPublicClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECRPublicErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECRPublicClient::~ECRPublicClient()
{
}

void ECRPublicClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ECR PUBLIC");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ECRPublicEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ECRPublicClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchCheckLayerAvailabilityOutcome ECRPublicClient::BatchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchCheckLayerAvailabilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCheckLayerAvailabilityOutcomeCallable ECRPublicClient::BatchCheckLayerAvailabilityCallable(const BatchCheckLayerAvailabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCheckLayerAvailabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCheckLayerAvailability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientBatchCheckLayerAvailabilityAsyncHelper(ECRPublicClient const * const clientThis, const BatchCheckLayerAvailabilityRequest& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchCheckLayerAvailability(request), context);
}

void ECRPublicClient::BatchCheckLayerAvailabilityAsync(const BatchCheckLayerAvailabilityRequest& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientBatchCheckLayerAvailabilityAsyncHelper( this, request, handler, context ); } );
}

BatchDeleteImageOutcome ECRPublicClient::BatchDeleteImage(const BatchDeleteImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDeleteImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteImageOutcomeCallable ECRPublicClient::BatchDeleteImageCallable(const BatchDeleteImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientBatchDeleteImageAsyncHelper(ECRPublicClient const * const clientThis, const BatchDeleteImageRequest& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteImage(request), context);
}

void ECRPublicClient::BatchDeleteImageAsync(const BatchDeleteImageRequest& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientBatchDeleteImageAsyncHelper( this, request, handler, context ); } );
}

CompleteLayerUploadOutcome ECRPublicClient::CompleteLayerUpload(const CompleteLayerUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CompleteLayerUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CompleteLayerUploadOutcomeCallable ECRPublicClient::CompleteLayerUploadCallable(const CompleteLayerUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteLayerUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteLayerUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientCompleteLayerUploadAsyncHelper(ECRPublicClient const * const clientThis, const CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CompleteLayerUpload(request), context);
}

void ECRPublicClient::CompleteLayerUploadAsync(const CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientCompleteLayerUploadAsyncHelper( this, request, handler, context ); } );
}

CreateRepositoryOutcome ECRPublicClient::CreateRepository(const CreateRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRepositoryOutcomeCallable ECRPublicClient::CreateRepositoryCallable(const CreateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientCreateRepositoryAsyncHelper(ECRPublicClient const * const clientThis, const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRepository(request), context);
}

void ECRPublicClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientCreateRepositoryAsyncHelper( this, request, handler, context ); } );
}

DeleteRepositoryOutcome ECRPublicClient::DeleteRepository(const DeleteRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRepositoryOutcomeCallable ECRPublicClient::DeleteRepositoryCallable(const DeleteRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientDeleteRepositoryAsyncHelper(ECRPublicClient const * const clientThis, const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRepository(request), context);
}

void ECRPublicClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientDeleteRepositoryAsyncHelper( this, request, handler, context ); } );
}

DeleteRepositoryPolicyOutcome ECRPublicClient::DeleteRepositoryPolicy(const DeleteRepositoryPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRepositoryPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRepositoryPolicyOutcomeCallable ECRPublicClient::DeleteRepositoryPolicyCallable(const DeleteRepositoryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepositoryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientDeleteRepositoryPolicyAsyncHelper(ECRPublicClient const * const clientThis, const DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRepositoryPolicy(request), context);
}

void ECRPublicClient::DeleteRepositoryPolicyAsync(const DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientDeleteRepositoryPolicyAsyncHelper( this, request, handler, context ); } );
}

DescribeImageTagsOutcome ECRPublicClient::DescribeImageTags(const DescribeImageTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeImageTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImageTagsOutcomeCallable ECRPublicClient::DescribeImageTagsCallable(const DescribeImageTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImageTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientDescribeImageTagsAsyncHelper(ECRPublicClient const * const clientThis, const DescribeImageTagsRequest& request, const DescribeImageTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeImageTags(request), context);
}

void ECRPublicClient::DescribeImageTagsAsync(const DescribeImageTagsRequest& request, const DescribeImageTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientDescribeImageTagsAsyncHelper( this, request, handler, context ); } );
}

DescribeImagesOutcome ECRPublicClient::DescribeImages(const DescribeImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeImagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImagesOutcomeCallable ECRPublicClient::DescribeImagesCallable(const DescribeImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientDescribeImagesAsyncHelper(ECRPublicClient const * const clientThis, const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeImages(request), context);
}

void ECRPublicClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientDescribeImagesAsyncHelper( this, request, handler, context ); } );
}

DescribeRegistriesOutcome ECRPublicClient::DescribeRegistries(const DescribeRegistriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRegistriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRegistriesOutcomeCallable ECRPublicClient::DescribeRegistriesCallable(const DescribeRegistriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRegistriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRegistries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientDescribeRegistriesAsyncHelper(ECRPublicClient const * const clientThis, const DescribeRegistriesRequest& request, const DescribeRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRegistries(request), context);
}

void ECRPublicClient::DescribeRegistriesAsync(const DescribeRegistriesRequest& request, const DescribeRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientDescribeRegistriesAsyncHelper( this, request, handler, context ); } );
}

DescribeRepositoriesOutcome ECRPublicClient::DescribeRepositories(const DescribeRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRepositoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRepositoriesOutcomeCallable ECRPublicClient::DescribeRepositoriesCallable(const DescribeRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientDescribeRepositoriesAsyncHelper(ECRPublicClient const * const clientThis, const DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRepositories(request), context);
}

void ECRPublicClient::DescribeRepositoriesAsync(const DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientDescribeRepositoriesAsyncHelper( this, request, handler, context ); } );
}

GetAuthorizationTokenOutcome ECRPublicClient::GetAuthorizationToken(const GetAuthorizationTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAuthorizationTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAuthorizationTokenOutcomeCallable ECRPublicClient::GetAuthorizationTokenCallable(const GetAuthorizationTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAuthorizationTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAuthorizationToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientGetAuthorizationTokenAsyncHelper(ECRPublicClient const * const clientThis, const GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAuthorizationToken(request), context);
}

void ECRPublicClient::GetAuthorizationTokenAsync(const GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientGetAuthorizationTokenAsyncHelper( this, request, handler, context ); } );
}

GetRegistryCatalogDataOutcome ECRPublicClient::GetRegistryCatalogData(const GetRegistryCatalogDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRegistryCatalogDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegistryCatalogDataOutcomeCallable ECRPublicClient::GetRegistryCatalogDataCallable(const GetRegistryCatalogDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegistryCatalogDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegistryCatalogData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientGetRegistryCatalogDataAsyncHelper(ECRPublicClient const * const clientThis, const GetRegistryCatalogDataRequest& request, const GetRegistryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRegistryCatalogData(request), context);
}

void ECRPublicClient::GetRegistryCatalogDataAsync(const GetRegistryCatalogDataRequest& request, const GetRegistryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientGetRegistryCatalogDataAsyncHelper( this, request, handler, context ); } );
}

GetRepositoryCatalogDataOutcome ECRPublicClient::GetRepositoryCatalogData(const GetRepositoryCatalogDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRepositoryCatalogDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositoryCatalogDataOutcomeCallable ECRPublicClient::GetRepositoryCatalogDataCallable(const GetRepositoryCatalogDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryCatalogDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepositoryCatalogData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientGetRepositoryCatalogDataAsyncHelper(ECRPublicClient const * const clientThis, const GetRepositoryCatalogDataRequest& request, const GetRepositoryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRepositoryCatalogData(request), context);
}

void ECRPublicClient::GetRepositoryCatalogDataAsync(const GetRepositoryCatalogDataRequest& request, const GetRepositoryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientGetRepositoryCatalogDataAsyncHelper( this, request, handler, context ); } );
}

GetRepositoryPolicyOutcome ECRPublicClient::GetRepositoryPolicy(const GetRepositoryPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRepositoryPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositoryPolicyOutcomeCallable ECRPublicClient::GetRepositoryPolicyCallable(const GetRepositoryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepositoryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientGetRepositoryPolicyAsyncHelper(ECRPublicClient const * const clientThis, const GetRepositoryPolicyRequest& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRepositoryPolicy(request), context);
}

void ECRPublicClient::GetRepositoryPolicyAsync(const GetRepositoryPolicyRequest& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientGetRepositoryPolicyAsyncHelper( this, request, handler, context ); } );
}

InitiateLayerUploadOutcome ECRPublicClient::InitiateLayerUpload(const InitiateLayerUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return InitiateLayerUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InitiateLayerUploadOutcomeCallable ECRPublicClient::InitiateLayerUploadCallable(const InitiateLayerUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitiateLayerUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitiateLayerUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientInitiateLayerUploadAsyncHelper(ECRPublicClient const * const clientThis, const InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->InitiateLayerUpload(request), context);
}

void ECRPublicClient::InitiateLayerUploadAsync(const InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientInitiateLayerUploadAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ECRPublicClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ECRPublicClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientListTagsForResourceAsyncHelper(ECRPublicClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ECRPublicClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutImageOutcome ECRPublicClient::PutImage(const PutImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutImageOutcomeCallable ECRPublicClient::PutImageCallable(const PutImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientPutImageAsyncHelper(ECRPublicClient const * const clientThis, const PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutImage(request), context);
}

void ECRPublicClient::PutImageAsync(const PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientPutImageAsyncHelper( this, request, handler, context ); } );
}

PutRegistryCatalogDataOutcome ECRPublicClient::PutRegistryCatalogData(const PutRegistryCatalogDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRegistryCatalogDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRegistryCatalogDataOutcomeCallable ECRPublicClient::PutRegistryCatalogDataCallable(const PutRegistryCatalogDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRegistryCatalogDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRegistryCatalogData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientPutRegistryCatalogDataAsyncHelper(ECRPublicClient const * const clientThis, const PutRegistryCatalogDataRequest& request, const PutRegistryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRegistryCatalogData(request), context);
}

void ECRPublicClient::PutRegistryCatalogDataAsync(const PutRegistryCatalogDataRequest& request, const PutRegistryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientPutRegistryCatalogDataAsyncHelper( this, request, handler, context ); } );
}

PutRepositoryCatalogDataOutcome ECRPublicClient::PutRepositoryCatalogData(const PutRepositoryCatalogDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRepositoryCatalogDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRepositoryCatalogDataOutcomeCallable ECRPublicClient::PutRepositoryCatalogDataCallable(const PutRepositoryCatalogDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRepositoryCatalogDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRepositoryCatalogData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientPutRepositoryCatalogDataAsyncHelper(ECRPublicClient const * const clientThis, const PutRepositoryCatalogDataRequest& request, const PutRepositoryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRepositoryCatalogData(request), context);
}

void ECRPublicClient::PutRepositoryCatalogDataAsync(const PutRepositoryCatalogDataRequest& request, const PutRepositoryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientPutRepositoryCatalogDataAsyncHelper( this, request, handler, context ); } );
}

SetRepositoryPolicyOutcome ECRPublicClient::SetRepositoryPolicy(const SetRepositoryPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetRepositoryPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetRepositoryPolicyOutcomeCallable ECRPublicClient::SetRepositoryPolicyCallable(const SetRepositoryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetRepositoryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetRepositoryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientSetRepositoryPolicyAsyncHelper(ECRPublicClient const * const clientThis, const SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetRepositoryPolicy(request), context);
}

void ECRPublicClient::SetRepositoryPolicyAsync(const SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientSetRepositoryPolicyAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome ECRPublicClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ECRPublicClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientTagResourceAsyncHelper(ECRPublicClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ECRPublicClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome ECRPublicClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ECRPublicClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientUntagResourceAsyncHelper(ECRPublicClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ECRPublicClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UploadLayerPartOutcome ECRPublicClient::UploadLayerPart(const UploadLayerPartRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UploadLayerPartOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UploadLayerPartOutcomeCallable ECRPublicClient::UploadLayerPartCallable(const UploadLayerPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadLayerPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadLayerPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRPublicClientUploadLayerPartAsyncHelper(ECRPublicClient const * const clientThis, const UploadLayerPartRequest& request, const UploadLayerPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UploadLayerPart(request), context);
}

void ECRPublicClient::UploadLayerPartAsync(const UploadLayerPartRequest& request, const UploadLayerPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ECRPublicClientUploadLayerPartAsyncHelper( this, request, handler, context ); } );
}

