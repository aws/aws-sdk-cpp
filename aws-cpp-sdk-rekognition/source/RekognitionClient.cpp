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
#include <aws/rekognition/RekognitionClient.h>
#include <aws/rekognition/RekognitionEndpoint.h>
#include <aws/rekognition/RekognitionErrorMarshaller.h>
#include <aws/rekognition/model/CompareFacesRequest.h>
#include <aws/rekognition/model/CreateCollectionRequest.h>
#include <aws/rekognition/model/DeleteCollectionRequest.h>
#include <aws/rekognition/model/DeleteFacesRequest.h>
#include <aws/rekognition/model/DetectFacesRequest.h>
#include <aws/rekognition/model/DetectLabelsRequest.h>
#include <aws/rekognition/model/DetectModerationLabelsRequest.h>
#include <aws/rekognition/model/IndexFacesRequest.h>
#include <aws/rekognition/model/ListCollectionsRequest.h>
#include <aws/rekognition/model/ListFacesRequest.h>
#include <aws/rekognition/model/SearchFacesRequest.h>
#include <aws/rekognition/model/SearchFacesByImageRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Rekognition;
using namespace Aws::Rekognition::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "rekognition";
static const char* ALLOCATION_TAG = "RekognitionClient";


RekognitionClient::RekognitionClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RekognitionClient::RekognitionClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RekognitionClient::RekognitionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RekognitionClient::~RekognitionClient()
{
}

void RekognitionClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << RekognitionEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CompareFacesOutcome RekognitionClient::CompareFaces(const CompareFacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CompareFacesOutcome(CompareFacesResult(outcome.GetResult()));
  }
  else
  {
    return CompareFacesOutcome(outcome.GetError());
  }
}

CompareFacesOutcomeCallable RekognitionClient::CompareFacesCallable(const CompareFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompareFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompareFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::CompareFacesAsync(const CompareFacesRequest& request, const CompareFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CompareFacesAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::CompareFacesAsyncHelper(const CompareFacesRequest& request, const CompareFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CompareFaces(request), context);
}

CreateCollectionOutcome RekognitionClient::CreateCollection(const CreateCollectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCollectionOutcome(CreateCollectionResult(outcome.GetResult()));
  }
  else
  {
    return CreateCollectionOutcome(outcome.GetError());
  }
}

CreateCollectionOutcomeCallable RekognitionClient::CreateCollectionCallable(const CreateCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::CreateCollectionAsync(const CreateCollectionRequest& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCollectionAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::CreateCollectionAsyncHelper(const CreateCollectionRequest& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCollection(request), context);
}

DeleteCollectionOutcome RekognitionClient::DeleteCollection(const DeleteCollectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteCollectionOutcome(DeleteCollectionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCollectionOutcome(outcome.GetError());
  }
}

DeleteCollectionOutcomeCallable RekognitionClient::DeleteCollectionCallable(const DeleteCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DeleteCollectionAsync(const DeleteCollectionRequest& request, const DeleteCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCollectionAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::DeleteCollectionAsyncHelper(const DeleteCollectionRequest& request, const DeleteCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCollection(request), context);
}

DeleteFacesOutcome RekognitionClient::DeleteFaces(const DeleteFacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteFacesOutcome(DeleteFacesResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFacesOutcome(outcome.GetError());
  }
}

DeleteFacesOutcomeCallable RekognitionClient::DeleteFacesCallable(const DeleteFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DeleteFacesAsync(const DeleteFacesRequest& request, const DeleteFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFacesAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::DeleteFacesAsyncHelper(const DeleteFacesRequest& request, const DeleteFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFaces(request), context);
}

DetectFacesOutcome RekognitionClient::DetectFaces(const DetectFacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetectFacesOutcome(DetectFacesResult(outcome.GetResult()));
  }
  else
  {
    return DetectFacesOutcome(outcome.GetError());
  }
}

DetectFacesOutcomeCallable RekognitionClient::DetectFacesCallable(const DetectFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DetectFacesAsync(const DetectFacesRequest& request, const DetectFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetectFacesAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::DetectFacesAsyncHelper(const DetectFacesRequest& request, const DetectFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectFaces(request), context);
}

DetectLabelsOutcome RekognitionClient::DetectLabels(const DetectLabelsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetectLabelsOutcome(DetectLabelsResult(outcome.GetResult()));
  }
  else
  {
    return DetectLabelsOutcome(outcome.GetError());
  }
}

DetectLabelsOutcomeCallable RekognitionClient::DetectLabelsCallable(const DetectLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DetectLabelsAsync(const DetectLabelsRequest& request, const DetectLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetectLabelsAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::DetectLabelsAsyncHelper(const DetectLabelsRequest& request, const DetectLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectLabels(request), context);
}

DetectModerationLabelsOutcome RekognitionClient::DetectModerationLabels(const DetectModerationLabelsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetectModerationLabelsOutcome(DetectModerationLabelsResult(outcome.GetResult()));
  }
  else
  {
    return DetectModerationLabelsOutcome(outcome.GetError());
  }
}

DetectModerationLabelsOutcomeCallable RekognitionClient::DetectModerationLabelsCallable(const DetectModerationLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectModerationLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectModerationLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DetectModerationLabelsAsync(const DetectModerationLabelsRequest& request, const DetectModerationLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetectModerationLabelsAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::DetectModerationLabelsAsyncHelper(const DetectModerationLabelsRequest& request, const DetectModerationLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectModerationLabels(request), context);
}

IndexFacesOutcome RekognitionClient::IndexFaces(const IndexFacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return IndexFacesOutcome(IndexFacesResult(outcome.GetResult()));
  }
  else
  {
    return IndexFacesOutcome(outcome.GetError());
  }
}

IndexFacesOutcomeCallable RekognitionClient::IndexFacesCallable(const IndexFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IndexFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IndexFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::IndexFacesAsync(const IndexFacesRequest& request, const IndexFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->IndexFacesAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::IndexFacesAsyncHelper(const IndexFacesRequest& request, const IndexFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, IndexFaces(request), context);
}

ListCollectionsOutcome RekognitionClient::ListCollections(const ListCollectionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListCollectionsOutcome(ListCollectionsResult(outcome.GetResult()));
  }
  else
  {
    return ListCollectionsOutcome(outcome.GetError());
  }
}

ListCollectionsOutcomeCallable RekognitionClient::ListCollectionsCallable(const ListCollectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCollectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCollections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::ListCollectionsAsync(const ListCollectionsRequest& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCollectionsAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::ListCollectionsAsyncHelper(const ListCollectionsRequest& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCollections(request), context);
}

ListFacesOutcome RekognitionClient::ListFaces(const ListFacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListFacesOutcome(ListFacesResult(outcome.GetResult()));
  }
  else
  {
    return ListFacesOutcome(outcome.GetError());
  }
}

ListFacesOutcomeCallable RekognitionClient::ListFacesCallable(const ListFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::ListFacesAsync(const ListFacesRequest& request, const ListFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFacesAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::ListFacesAsyncHelper(const ListFacesRequest& request, const ListFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFaces(request), context);
}

SearchFacesOutcome RekognitionClient::SearchFaces(const SearchFacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SearchFacesOutcome(SearchFacesResult(outcome.GetResult()));
  }
  else
  {
    return SearchFacesOutcome(outcome.GetError());
  }
}

SearchFacesOutcomeCallable RekognitionClient::SearchFacesCallable(const SearchFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::SearchFacesAsync(const SearchFacesRequest& request, const SearchFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchFacesAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::SearchFacesAsyncHelper(const SearchFacesRequest& request, const SearchFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchFaces(request), context);
}

SearchFacesByImageOutcome RekognitionClient::SearchFacesByImage(const SearchFacesByImageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SearchFacesByImageOutcome(SearchFacesByImageResult(outcome.GetResult()));
  }
  else
  {
    return SearchFacesByImageOutcome(outcome.GetError());
  }
}

SearchFacesByImageOutcomeCallable RekognitionClient::SearchFacesByImageCallable(const SearchFacesByImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchFacesByImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchFacesByImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::SearchFacesByImageAsync(const SearchFacesByImageRequest& request, const SearchFacesByImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchFacesByImageAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::SearchFacesByImageAsyncHelper(const SearchFacesByImageRequest& request, const SearchFacesByImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchFacesByImage(request), context);
}

