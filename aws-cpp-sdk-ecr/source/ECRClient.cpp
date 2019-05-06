/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

#include <aws/ecr/ECRClient.h>
#include <aws/ecr/ECREndpoint.h>
#include <aws/ecr/ECRErrorMarshaller.h>
#include <aws/ecr/model/BatchCheckLayerAvailabilityRequest.h>
#include <aws/ecr/model/BatchDeleteImageRequest.h>
#include <aws/ecr/model/BatchGetImageRequest.h>
#include <aws/ecr/model/CompleteLayerUploadRequest.h>
#include <aws/ecr/model/CreateRepositoryRequest.h>
#include <aws/ecr/model/DeleteLifecyclePolicyRequest.h>
#include <aws/ecr/model/DeleteRepositoryRequest.h>
#include <aws/ecr/model/DeleteRepositoryPolicyRequest.h>
#include <aws/ecr/model/DescribeImagesRequest.h>
#include <aws/ecr/model/DescribeRepositoriesRequest.h>
#include <aws/ecr/model/GetAuthorizationTokenRequest.h>
#include <aws/ecr/model/GetDownloadUrlForLayerRequest.h>
#include <aws/ecr/model/GetLifecyclePolicyRequest.h>
#include <aws/ecr/model/GetLifecyclePolicyPreviewRequest.h>
#include <aws/ecr/model/GetRepositoryPolicyRequest.h>
#include <aws/ecr/model/InitiateLayerUploadRequest.h>
#include <aws/ecr/model/ListImagesRequest.h>
#include <aws/ecr/model/ListTagsForResourceRequest.h>
#include <aws/ecr/model/PutImageRequest.h>
#include <aws/ecr/model/PutLifecyclePolicyRequest.h>
#include <aws/ecr/model/SetRepositoryPolicyRequest.h>
#include <aws/ecr/model/StartLifecyclePolicyPreviewRequest.h>
#include <aws/ecr/model/TagResourceRequest.h>
#include <aws/ecr/model/UntagResourceRequest.h>
#include <aws/ecr/model/UploadLayerPartRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ECR;
using namespace Aws::ECR::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ecr";
static const char* ALLOCATION_TAG = "ECRClient";


ECRClient::ECRClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECRClient::ECRClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECRClient::ECRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ECRClient::~ECRClient()
{
}

void ECRClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ECREndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ECRClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchCheckLayerAvailabilityOutcome ECRClient::BatchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchCheckLayerAvailabilityOutcome(BatchCheckLayerAvailabilityResult(outcome.GetResult()));
  }
  else
  {
    return BatchCheckLayerAvailabilityOutcome(outcome.GetError());
  }
}

BatchCheckLayerAvailabilityOutcomeCallable ECRClient::BatchCheckLayerAvailabilityCallable(const BatchCheckLayerAvailabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCheckLayerAvailabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCheckLayerAvailability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::BatchCheckLayerAvailabilityAsync(const BatchCheckLayerAvailabilityRequest& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchCheckLayerAvailabilityAsyncHelper( request, handler, context ); } );
}

void ECRClient::BatchCheckLayerAvailabilityAsyncHelper(const BatchCheckLayerAvailabilityRequest& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchCheckLayerAvailability(request), context);
}

BatchDeleteImageOutcome ECRClient::BatchDeleteImage(const BatchDeleteImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDeleteImageOutcome(BatchDeleteImageResult(outcome.GetResult()));
  }
  else
  {
    return BatchDeleteImageOutcome(outcome.GetError());
  }
}

BatchDeleteImageOutcomeCallable ECRClient::BatchDeleteImageCallable(const BatchDeleteImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::BatchDeleteImageAsync(const BatchDeleteImageRequest& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteImageAsyncHelper( request, handler, context ); } );
}

void ECRClient::BatchDeleteImageAsyncHelper(const BatchDeleteImageRequest& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteImage(request), context);
}

BatchGetImageOutcome ECRClient::BatchGetImage(const BatchGetImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetImageOutcome(BatchGetImageResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetImageOutcome(outcome.GetError());
  }
}

BatchGetImageOutcomeCallable ECRClient::BatchGetImageCallable(const BatchGetImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::BatchGetImageAsync(const BatchGetImageRequest& request, const BatchGetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetImageAsyncHelper( request, handler, context ); } );
}

void ECRClient::BatchGetImageAsyncHelper(const BatchGetImageRequest& request, const BatchGetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetImage(request), context);
}

CompleteLayerUploadOutcome ECRClient::CompleteLayerUpload(const CompleteLayerUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CompleteLayerUploadOutcome(CompleteLayerUploadResult(outcome.GetResult()));
  }
  else
  {
    return CompleteLayerUploadOutcome(outcome.GetError());
  }
}

CompleteLayerUploadOutcomeCallable ECRClient::CompleteLayerUploadCallable(const CompleteLayerUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteLayerUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteLayerUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::CompleteLayerUploadAsync(const CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CompleteLayerUploadAsyncHelper( request, handler, context ); } );
}

void ECRClient::CompleteLayerUploadAsyncHelper(const CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CompleteLayerUpload(request), context);
}

CreateRepositoryOutcome ECRClient::CreateRepository(const CreateRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRepositoryOutcome(CreateRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return CreateRepositoryOutcome(outcome.GetError());
  }
}

CreateRepositoryOutcomeCallable ECRClient::CreateRepositoryCallable(const CreateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRepositoryAsyncHelper( request, handler, context ); } );
}

void ECRClient::CreateRepositoryAsyncHelper(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRepository(request), context);
}

DeleteLifecyclePolicyOutcome ECRClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLifecyclePolicyOutcome(DeleteLifecyclePolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLifecyclePolicyOutcome(outcome.GetError());
  }
}

DeleteLifecyclePolicyOutcomeCallable ECRClient::DeleteLifecyclePolicyCallable(const DeleteLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DeleteLifecyclePolicyAsync(const DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLifecyclePolicyAsyncHelper( request, handler, context ); } );
}

void ECRClient::DeleteLifecyclePolicyAsyncHelper(const DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLifecyclePolicy(request), context);
}

DeleteRepositoryOutcome ECRClient::DeleteRepository(const DeleteRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRepositoryOutcome(DeleteRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRepositoryOutcome(outcome.GetError());
  }
}

DeleteRepositoryOutcomeCallable ECRClient::DeleteRepositoryCallable(const DeleteRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRepositoryAsyncHelper( request, handler, context ); } );
}

void ECRClient::DeleteRepositoryAsyncHelper(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRepository(request), context);
}

DeleteRepositoryPolicyOutcome ECRClient::DeleteRepositoryPolicy(const DeleteRepositoryPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRepositoryPolicyOutcome(DeleteRepositoryPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRepositoryPolicyOutcome(outcome.GetError());
  }
}

DeleteRepositoryPolicyOutcomeCallable ECRClient::DeleteRepositoryPolicyCallable(const DeleteRepositoryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepositoryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DeleteRepositoryPolicyAsync(const DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRepositoryPolicyAsyncHelper( request, handler, context ); } );
}

void ECRClient::DeleteRepositoryPolicyAsyncHelper(const DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRepositoryPolicy(request), context);
}

DescribeImagesOutcome ECRClient::DescribeImages(const DescribeImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeImagesOutcome(DescribeImagesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeImagesOutcome(outcome.GetError());
  }
}

DescribeImagesOutcomeCallable ECRClient::DescribeImagesCallable(const DescribeImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImagesAsyncHelper( request, handler, context ); } );
}

void ECRClient::DescribeImagesAsyncHelper(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImages(request), context);
}

DescribeRepositoriesOutcome ECRClient::DescribeRepositories(const DescribeRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRepositoriesOutcome(DescribeRepositoriesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRepositoriesOutcome(outcome.GetError());
  }
}

DescribeRepositoriesOutcomeCallable ECRClient::DescribeRepositoriesCallable(const DescribeRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DescribeRepositoriesAsync(const DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRepositoriesAsyncHelper( request, handler, context ); } );
}

void ECRClient::DescribeRepositoriesAsyncHelper(const DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRepositories(request), context);
}

GetAuthorizationTokenOutcome ECRClient::GetAuthorizationToken(const GetAuthorizationTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAuthorizationTokenOutcome(GetAuthorizationTokenResult(outcome.GetResult()));
  }
  else
  {
    return GetAuthorizationTokenOutcome(outcome.GetError());
  }
}

GetAuthorizationTokenOutcomeCallable ECRClient::GetAuthorizationTokenCallable(const GetAuthorizationTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAuthorizationTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAuthorizationToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetAuthorizationTokenAsync(const GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAuthorizationTokenAsyncHelper( request, handler, context ); } );
}

void ECRClient::GetAuthorizationTokenAsyncHelper(const GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAuthorizationToken(request), context);
}

GetDownloadUrlForLayerOutcome ECRClient::GetDownloadUrlForLayer(const GetDownloadUrlForLayerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDownloadUrlForLayerOutcome(GetDownloadUrlForLayerResult(outcome.GetResult()));
  }
  else
  {
    return GetDownloadUrlForLayerOutcome(outcome.GetError());
  }
}

GetDownloadUrlForLayerOutcomeCallable ECRClient::GetDownloadUrlForLayerCallable(const GetDownloadUrlForLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDownloadUrlForLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDownloadUrlForLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetDownloadUrlForLayerAsync(const GetDownloadUrlForLayerRequest& request, const GetDownloadUrlForLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDownloadUrlForLayerAsyncHelper( request, handler, context ); } );
}

void ECRClient::GetDownloadUrlForLayerAsyncHelper(const GetDownloadUrlForLayerRequest& request, const GetDownloadUrlForLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDownloadUrlForLayer(request), context);
}

GetLifecyclePolicyOutcome ECRClient::GetLifecyclePolicy(const GetLifecyclePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLifecyclePolicyOutcome(GetLifecyclePolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetLifecyclePolicyOutcome(outcome.GetError());
  }
}

GetLifecyclePolicyOutcomeCallable ECRClient::GetLifecyclePolicyCallable(const GetLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetLifecyclePolicyAsync(const GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLifecyclePolicyAsyncHelper( request, handler, context ); } );
}

void ECRClient::GetLifecyclePolicyAsyncHelper(const GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLifecyclePolicy(request), context);
}

GetLifecyclePolicyPreviewOutcome ECRClient::GetLifecyclePolicyPreview(const GetLifecyclePolicyPreviewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLifecyclePolicyPreviewOutcome(GetLifecyclePolicyPreviewResult(outcome.GetResult()));
  }
  else
  {
    return GetLifecyclePolicyPreviewOutcome(outcome.GetError());
  }
}

GetLifecyclePolicyPreviewOutcomeCallable ECRClient::GetLifecyclePolicyPreviewCallable(const GetLifecyclePolicyPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLifecyclePolicyPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLifecyclePolicyPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetLifecyclePolicyPreviewAsync(const GetLifecyclePolicyPreviewRequest& request, const GetLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLifecyclePolicyPreviewAsyncHelper( request, handler, context ); } );
}

void ECRClient::GetLifecyclePolicyPreviewAsyncHelper(const GetLifecyclePolicyPreviewRequest& request, const GetLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLifecyclePolicyPreview(request), context);
}

GetRepositoryPolicyOutcome ECRClient::GetRepositoryPolicy(const GetRepositoryPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRepositoryPolicyOutcome(GetRepositoryPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetRepositoryPolicyOutcome(outcome.GetError());
  }
}

GetRepositoryPolicyOutcomeCallable ECRClient::GetRepositoryPolicyCallable(const GetRepositoryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepositoryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetRepositoryPolicyAsync(const GetRepositoryPolicyRequest& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRepositoryPolicyAsyncHelper( request, handler, context ); } );
}

void ECRClient::GetRepositoryPolicyAsyncHelper(const GetRepositoryPolicyRequest& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRepositoryPolicy(request), context);
}

InitiateLayerUploadOutcome ECRClient::InitiateLayerUpload(const InitiateLayerUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InitiateLayerUploadOutcome(InitiateLayerUploadResult(outcome.GetResult()));
  }
  else
  {
    return InitiateLayerUploadOutcome(outcome.GetError());
  }
}

InitiateLayerUploadOutcomeCallable ECRClient::InitiateLayerUploadCallable(const InitiateLayerUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitiateLayerUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitiateLayerUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::InitiateLayerUploadAsync(const InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InitiateLayerUploadAsyncHelper( request, handler, context ); } );
}

void ECRClient::InitiateLayerUploadAsyncHelper(const InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InitiateLayerUpload(request), context);
}

ListImagesOutcome ECRClient::ListImages(const ListImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListImagesOutcome(ListImagesResult(outcome.GetResult()));
  }
  else
  {
    return ListImagesOutcome(outcome.GetError());
  }
}

ListImagesOutcomeCallable ECRClient::ListImagesCallable(const ListImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::ListImagesAsync(const ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListImagesAsyncHelper( request, handler, context ); } );
}

void ECRClient::ListImagesAsyncHelper(const ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListImages(request), context);
}

ListTagsForResourceOutcome ECRClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable ECRClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ECRClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutImageOutcome ECRClient::PutImage(const PutImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutImageOutcome(PutImageResult(outcome.GetResult()));
  }
  else
  {
    return PutImageOutcome(outcome.GetError());
  }
}

PutImageOutcomeCallable ECRClient::PutImageCallable(const PutImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::PutImageAsync(const PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutImageAsyncHelper( request, handler, context ); } );
}

void ECRClient::PutImageAsyncHelper(const PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutImage(request), context);
}

PutLifecyclePolicyOutcome ECRClient::PutLifecyclePolicy(const PutLifecyclePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutLifecyclePolicyOutcome(PutLifecyclePolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutLifecyclePolicyOutcome(outcome.GetError());
  }
}

PutLifecyclePolicyOutcomeCallable ECRClient::PutLifecyclePolicyCallable(const PutLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::PutLifecyclePolicyAsync(const PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutLifecyclePolicyAsyncHelper( request, handler, context ); } );
}

void ECRClient::PutLifecyclePolicyAsyncHelper(const PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLifecyclePolicy(request), context);
}

SetRepositoryPolicyOutcome ECRClient::SetRepositoryPolicy(const SetRepositoryPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetRepositoryPolicyOutcome(SetRepositoryPolicyResult(outcome.GetResult()));
  }
  else
  {
    return SetRepositoryPolicyOutcome(outcome.GetError());
  }
}

SetRepositoryPolicyOutcomeCallable ECRClient::SetRepositoryPolicyCallable(const SetRepositoryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetRepositoryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetRepositoryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::SetRepositoryPolicyAsync(const SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetRepositoryPolicyAsyncHelper( request, handler, context ); } );
}

void ECRClient::SetRepositoryPolicyAsyncHelper(const SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetRepositoryPolicy(request), context);
}

StartLifecyclePolicyPreviewOutcome ECRClient::StartLifecyclePolicyPreview(const StartLifecyclePolicyPreviewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartLifecyclePolicyPreviewOutcome(StartLifecyclePolicyPreviewResult(outcome.GetResult()));
  }
  else
  {
    return StartLifecyclePolicyPreviewOutcome(outcome.GetError());
  }
}

StartLifecyclePolicyPreviewOutcomeCallable ECRClient::StartLifecyclePolicyPreviewCallable(const StartLifecyclePolicyPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartLifecyclePolicyPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartLifecyclePolicyPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::StartLifecyclePolicyPreviewAsync(const StartLifecyclePolicyPreviewRequest& request, const StartLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartLifecyclePolicyPreviewAsyncHelper( request, handler, context ); } );
}

void ECRClient::StartLifecyclePolicyPreviewAsyncHelper(const StartLifecyclePolicyPreviewRequest& request, const StartLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartLifecyclePolicyPreview(request), context);
}

TagResourceOutcome ECRClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable ECRClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ECRClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ECRClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable ECRClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ECRClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UploadLayerPartOutcome ECRClient::UploadLayerPart(const UploadLayerPartRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UploadLayerPartOutcome(UploadLayerPartResult(outcome.GetResult()));
  }
  else
  {
    return UploadLayerPartOutcome(outcome.GetError());
  }
}

UploadLayerPartOutcomeCallable ECRClient::UploadLayerPartCallable(const UploadLayerPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadLayerPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadLayerPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::UploadLayerPartAsync(const UploadLayerPartRequest& request, const UploadLayerPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UploadLayerPartAsyncHelper( request, handler, context ); } );
}

void ECRClient::UploadLayerPartAsyncHelper(const UploadLayerPartRequest& request, const UploadLayerPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadLayerPart(request), context);
}

