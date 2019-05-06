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

#include <aws/rekognition/RekognitionClient.h>
#include <aws/rekognition/RekognitionEndpoint.h>
#include <aws/rekognition/RekognitionErrorMarshaller.h>
#include <aws/rekognition/model/CompareFacesRequest.h>
#include <aws/rekognition/model/CreateCollectionRequest.h>
#include <aws/rekognition/model/CreateStreamProcessorRequest.h>
#include <aws/rekognition/model/DeleteCollectionRequest.h>
#include <aws/rekognition/model/DeleteFacesRequest.h>
#include <aws/rekognition/model/DeleteStreamProcessorRequest.h>
#include <aws/rekognition/model/DescribeCollectionRequest.h>
#include <aws/rekognition/model/DescribeStreamProcessorRequest.h>
#include <aws/rekognition/model/DetectFacesRequest.h>
#include <aws/rekognition/model/DetectLabelsRequest.h>
#include <aws/rekognition/model/DetectModerationLabelsRequest.h>
#include <aws/rekognition/model/DetectTextRequest.h>
#include <aws/rekognition/model/GetCelebrityInfoRequest.h>
#include <aws/rekognition/model/GetCelebrityRecognitionRequest.h>
#include <aws/rekognition/model/GetContentModerationRequest.h>
#include <aws/rekognition/model/GetFaceDetectionRequest.h>
#include <aws/rekognition/model/GetFaceSearchRequest.h>
#include <aws/rekognition/model/GetLabelDetectionRequest.h>
#include <aws/rekognition/model/GetPersonTrackingRequest.h>
#include <aws/rekognition/model/IndexFacesRequest.h>
#include <aws/rekognition/model/ListCollectionsRequest.h>
#include <aws/rekognition/model/ListFacesRequest.h>
#include <aws/rekognition/model/ListStreamProcessorsRequest.h>
#include <aws/rekognition/model/RecognizeCelebritiesRequest.h>
#include <aws/rekognition/model/SearchFacesRequest.h>
#include <aws/rekognition/model/SearchFacesByImageRequest.h>
#include <aws/rekognition/model/StartCelebrityRecognitionRequest.h>
#include <aws/rekognition/model/StartContentModerationRequest.h>
#include <aws/rekognition/model/StartFaceDetectionRequest.h>
#include <aws/rekognition/model/StartFaceSearchRequest.h>
#include <aws/rekognition/model/StartLabelDetectionRequest.h>
#include <aws/rekognition/model/StartPersonTrackingRequest.h>
#include <aws/rekognition/model/StartStreamProcessorRequest.h>
#include <aws/rekognition/model/StopStreamProcessorRequest.h>

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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + RekognitionEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void RekognitionClient::OverrideEndpoint(const Aws::String& endpoint)
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

CompareFacesOutcome RekognitionClient::CompareFaces(const CompareFacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

CreateStreamProcessorOutcome RekognitionClient::CreateStreamProcessor(const CreateStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateStreamProcessorOutcome(CreateStreamProcessorResult(outcome.GetResult()));
  }
  else
  {
    return CreateStreamProcessorOutcome(outcome.GetError());
  }
}

CreateStreamProcessorOutcomeCallable RekognitionClient::CreateStreamProcessorCallable(const CreateStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::CreateStreamProcessorAsync(const CreateStreamProcessorRequest& request, const CreateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamProcessorAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::CreateStreamProcessorAsyncHelper(const CreateStreamProcessorRequest& request, const CreateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamProcessor(request), context);
}

DeleteCollectionOutcome RekognitionClient::DeleteCollection(const DeleteCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

DeleteStreamProcessorOutcome RekognitionClient::DeleteStreamProcessor(const DeleteStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteStreamProcessorOutcome(DeleteStreamProcessorResult(outcome.GetResult()));
  }
  else
  {
    return DeleteStreamProcessorOutcome(outcome.GetError());
  }
}

DeleteStreamProcessorOutcomeCallable RekognitionClient::DeleteStreamProcessorCallable(const DeleteStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DeleteStreamProcessorAsync(const DeleteStreamProcessorRequest& request, const DeleteStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamProcessorAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::DeleteStreamProcessorAsyncHelper(const DeleteStreamProcessorRequest& request, const DeleteStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStreamProcessor(request), context);
}

DescribeCollectionOutcome RekognitionClient::DescribeCollection(const DescribeCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCollectionOutcome(DescribeCollectionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCollectionOutcome(outcome.GetError());
  }
}

DescribeCollectionOutcomeCallable RekognitionClient::DescribeCollectionCallable(const DescribeCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DescribeCollectionAsync(const DescribeCollectionRequest& request, const DescribeCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCollectionAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::DescribeCollectionAsyncHelper(const DescribeCollectionRequest& request, const DescribeCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCollection(request), context);
}

DescribeStreamProcessorOutcome RekognitionClient::DescribeStreamProcessor(const DescribeStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStreamProcessorOutcome(DescribeStreamProcessorResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStreamProcessorOutcome(outcome.GetError());
  }
}

DescribeStreamProcessorOutcomeCallable RekognitionClient::DescribeStreamProcessorCallable(const DescribeStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DescribeStreamProcessorAsync(const DescribeStreamProcessorRequest& request, const DescribeStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStreamProcessorAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::DescribeStreamProcessorAsyncHelper(const DescribeStreamProcessorRequest& request, const DescribeStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStreamProcessor(request), context);
}

DetectFacesOutcome RekognitionClient::DetectFaces(const DetectFacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

DetectTextOutcome RekognitionClient::DetectText(const DetectTextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetectTextOutcome(DetectTextResult(outcome.GetResult()));
  }
  else
  {
    return DetectTextOutcome(outcome.GetError());
  }
}

DetectTextOutcomeCallable RekognitionClient::DetectTextCallable(const DetectTextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectTextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectText(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DetectTextAsync(const DetectTextRequest& request, const DetectTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetectTextAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::DetectTextAsyncHelper(const DetectTextRequest& request, const DetectTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectText(request), context);
}

GetCelebrityInfoOutcome RekognitionClient::GetCelebrityInfo(const GetCelebrityInfoRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCelebrityInfoOutcome(GetCelebrityInfoResult(outcome.GetResult()));
  }
  else
  {
    return GetCelebrityInfoOutcome(outcome.GetError());
  }
}

GetCelebrityInfoOutcomeCallable RekognitionClient::GetCelebrityInfoCallable(const GetCelebrityInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCelebrityInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCelebrityInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::GetCelebrityInfoAsync(const GetCelebrityInfoRequest& request, const GetCelebrityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCelebrityInfoAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::GetCelebrityInfoAsyncHelper(const GetCelebrityInfoRequest& request, const GetCelebrityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCelebrityInfo(request), context);
}

GetCelebrityRecognitionOutcome RekognitionClient::GetCelebrityRecognition(const GetCelebrityRecognitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCelebrityRecognitionOutcome(GetCelebrityRecognitionResult(outcome.GetResult()));
  }
  else
  {
    return GetCelebrityRecognitionOutcome(outcome.GetError());
  }
}

GetCelebrityRecognitionOutcomeCallable RekognitionClient::GetCelebrityRecognitionCallable(const GetCelebrityRecognitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCelebrityRecognitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCelebrityRecognition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::GetCelebrityRecognitionAsync(const GetCelebrityRecognitionRequest& request, const GetCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCelebrityRecognitionAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::GetCelebrityRecognitionAsyncHelper(const GetCelebrityRecognitionRequest& request, const GetCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCelebrityRecognition(request), context);
}

GetContentModerationOutcome RekognitionClient::GetContentModeration(const GetContentModerationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetContentModerationOutcome(GetContentModerationResult(outcome.GetResult()));
  }
  else
  {
    return GetContentModerationOutcome(outcome.GetError());
  }
}

GetContentModerationOutcomeCallable RekognitionClient::GetContentModerationCallable(const GetContentModerationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContentModerationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContentModeration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::GetContentModerationAsync(const GetContentModerationRequest& request, const GetContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContentModerationAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::GetContentModerationAsyncHelper(const GetContentModerationRequest& request, const GetContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContentModeration(request), context);
}

GetFaceDetectionOutcome RekognitionClient::GetFaceDetection(const GetFaceDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFaceDetectionOutcome(GetFaceDetectionResult(outcome.GetResult()));
  }
  else
  {
    return GetFaceDetectionOutcome(outcome.GetError());
  }
}

GetFaceDetectionOutcomeCallable RekognitionClient::GetFaceDetectionCallable(const GetFaceDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFaceDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFaceDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::GetFaceDetectionAsync(const GetFaceDetectionRequest& request, const GetFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFaceDetectionAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::GetFaceDetectionAsyncHelper(const GetFaceDetectionRequest& request, const GetFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFaceDetection(request), context);
}

GetFaceSearchOutcome RekognitionClient::GetFaceSearch(const GetFaceSearchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFaceSearchOutcome(GetFaceSearchResult(outcome.GetResult()));
  }
  else
  {
    return GetFaceSearchOutcome(outcome.GetError());
  }
}

GetFaceSearchOutcomeCallable RekognitionClient::GetFaceSearchCallable(const GetFaceSearchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFaceSearchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFaceSearch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::GetFaceSearchAsync(const GetFaceSearchRequest& request, const GetFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFaceSearchAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::GetFaceSearchAsyncHelper(const GetFaceSearchRequest& request, const GetFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFaceSearch(request), context);
}

GetLabelDetectionOutcome RekognitionClient::GetLabelDetection(const GetLabelDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLabelDetectionOutcome(GetLabelDetectionResult(outcome.GetResult()));
  }
  else
  {
    return GetLabelDetectionOutcome(outcome.GetError());
  }
}

GetLabelDetectionOutcomeCallable RekognitionClient::GetLabelDetectionCallable(const GetLabelDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLabelDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLabelDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::GetLabelDetectionAsync(const GetLabelDetectionRequest& request, const GetLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLabelDetectionAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::GetLabelDetectionAsyncHelper(const GetLabelDetectionRequest& request, const GetLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLabelDetection(request), context);
}

GetPersonTrackingOutcome RekognitionClient::GetPersonTracking(const GetPersonTrackingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPersonTrackingOutcome(GetPersonTrackingResult(outcome.GetResult()));
  }
  else
  {
    return GetPersonTrackingOutcome(outcome.GetError());
  }
}

GetPersonTrackingOutcomeCallable RekognitionClient::GetPersonTrackingCallable(const GetPersonTrackingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPersonTrackingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPersonTracking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::GetPersonTrackingAsync(const GetPersonTrackingRequest& request, const GetPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPersonTrackingAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::GetPersonTrackingAsyncHelper(const GetPersonTrackingRequest& request, const GetPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPersonTracking(request), context);
}

IndexFacesOutcome RekognitionClient::IndexFaces(const IndexFacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

ListStreamProcessorsOutcome RekognitionClient::ListStreamProcessors(const ListStreamProcessorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListStreamProcessorsOutcome(ListStreamProcessorsResult(outcome.GetResult()));
  }
  else
  {
    return ListStreamProcessorsOutcome(outcome.GetError());
  }
}

ListStreamProcessorsOutcomeCallable RekognitionClient::ListStreamProcessorsCallable(const ListStreamProcessorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamProcessorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamProcessors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::ListStreamProcessorsAsync(const ListStreamProcessorsRequest& request, const ListStreamProcessorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamProcessorsAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::ListStreamProcessorsAsyncHelper(const ListStreamProcessorsRequest& request, const ListStreamProcessorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamProcessors(request), context);
}

RecognizeCelebritiesOutcome RekognitionClient::RecognizeCelebrities(const RecognizeCelebritiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RecognizeCelebritiesOutcome(RecognizeCelebritiesResult(outcome.GetResult()));
  }
  else
  {
    return RecognizeCelebritiesOutcome(outcome.GetError());
  }
}

RecognizeCelebritiesOutcomeCallable RekognitionClient::RecognizeCelebritiesCallable(const RecognizeCelebritiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RecognizeCelebritiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RecognizeCelebrities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::RecognizeCelebritiesAsync(const RecognizeCelebritiesRequest& request, const RecognizeCelebritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RecognizeCelebritiesAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::RecognizeCelebritiesAsyncHelper(const RecognizeCelebritiesRequest& request, const RecognizeCelebritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RecognizeCelebrities(request), context);
}

SearchFacesOutcome RekognitionClient::SearchFaces(const SearchFacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

StartCelebrityRecognitionOutcome RekognitionClient::StartCelebrityRecognition(const StartCelebrityRecognitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartCelebrityRecognitionOutcome(StartCelebrityRecognitionResult(outcome.GetResult()));
  }
  else
  {
    return StartCelebrityRecognitionOutcome(outcome.GetError());
  }
}

StartCelebrityRecognitionOutcomeCallable RekognitionClient::StartCelebrityRecognitionCallable(const StartCelebrityRecognitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCelebrityRecognitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCelebrityRecognition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StartCelebrityRecognitionAsync(const StartCelebrityRecognitionRequest& request, const StartCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartCelebrityRecognitionAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::StartCelebrityRecognitionAsyncHelper(const StartCelebrityRecognitionRequest& request, const StartCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartCelebrityRecognition(request), context);
}

StartContentModerationOutcome RekognitionClient::StartContentModeration(const StartContentModerationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartContentModerationOutcome(StartContentModerationResult(outcome.GetResult()));
  }
  else
  {
    return StartContentModerationOutcome(outcome.GetError());
  }
}

StartContentModerationOutcomeCallable RekognitionClient::StartContentModerationCallable(const StartContentModerationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartContentModerationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartContentModeration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StartContentModerationAsync(const StartContentModerationRequest& request, const StartContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartContentModerationAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::StartContentModerationAsyncHelper(const StartContentModerationRequest& request, const StartContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartContentModeration(request), context);
}

StartFaceDetectionOutcome RekognitionClient::StartFaceDetection(const StartFaceDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartFaceDetectionOutcome(StartFaceDetectionResult(outcome.GetResult()));
  }
  else
  {
    return StartFaceDetectionOutcome(outcome.GetError());
  }
}

StartFaceDetectionOutcomeCallable RekognitionClient::StartFaceDetectionCallable(const StartFaceDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFaceDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFaceDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StartFaceDetectionAsync(const StartFaceDetectionRequest& request, const StartFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartFaceDetectionAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::StartFaceDetectionAsyncHelper(const StartFaceDetectionRequest& request, const StartFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartFaceDetection(request), context);
}

StartFaceSearchOutcome RekognitionClient::StartFaceSearch(const StartFaceSearchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartFaceSearchOutcome(StartFaceSearchResult(outcome.GetResult()));
  }
  else
  {
    return StartFaceSearchOutcome(outcome.GetError());
  }
}

StartFaceSearchOutcomeCallable RekognitionClient::StartFaceSearchCallable(const StartFaceSearchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFaceSearchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFaceSearch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StartFaceSearchAsync(const StartFaceSearchRequest& request, const StartFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartFaceSearchAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::StartFaceSearchAsyncHelper(const StartFaceSearchRequest& request, const StartFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartFaceSearch(request), context);
}

StartLabelDetectionOutcome RekognitionClient::StartLabelDetection(const StartLabelDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartLabelDetectionOutcome(StartLabelDetectionResult(outcome.GetResult()));
  }
  else
  {
    return StartLabelDetectionOutcome(outcome.GetError());
  }
}

StartLabelDetectionOutcomeCallable RekognitionClient::StartLabelDetectionCallable(const StartLabelDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartLabelDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartLabelDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StartLabelDetectionAsync(const StartLabelDetectionRequest& request, const StartLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartLabelDetectionAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::StartLabelDetectionAsyncHelper(const StartLabelDetectionRequest& request, const StartLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartLabelDetection(request), context);
}

StartPersonTrackingOutcome RekognitionClient::StartPersonTracking(const StartPersonTrackingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartPersonTrackingOutcome(StartPersonTrackingResult(outcome.GetResult()));
  }
  else
  {
    return StartPersonTrackingOutcome(outcome.GetError());
  }
}

StartPersonTrackingOutcomeCallable RekognitionClient::StartPersonTrackingCallable(const StartPersonTrackingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPersonTrackingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPersonTracking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StartPersonTrackingAsync(const StartPersonTrackingRequest& request, const StartPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartPersonTrackingAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::StartPersonTrackingAsyncHelper(const StartPersonTrackingRequest& request, const StartPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartPersonTracking(request), context);
}

StartStreamProcessorOutcome RekognitionClient::StartStreamProcessor(const StartStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartStreamProcessorOutcome(StartStreamProcessorResult(outcome.GetResult()));
  }
  else
  {
    return StartStreamProcessorOutcome(outcome.GetError());
  }
}

StartStreamProcessorOutcomeCallable RekognitionClient::StartStreamProcessorCallable(const StartStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StartStreamProcessorAsync(const StartStreamProcessorRequest& request, const StartStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartStreamProcessorAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::StartStreamProcessorAsyncHelper(const StartStreamProcessorRequest& request, const StartStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartStreamProcessor(request), context);
}

StopStreamProcessorOutcome RekognitionClient::StopStreamProcessor(const StopStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopStreamProcessorOutcome(StopStreamProcessorResult(outcome.GetResult()));
  }
  else
  {
    return StopStreamProcessorOutcome(outcome.GetError());
  }
}

StopStreamProcessorOutcomeCallable RekognitionClient::StopStreamProcessorCallable(const StopStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StopStreamProcessorAsync(const StopStreamProcessorRequest& request, const StopStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopStreamProcessorAsyncHelper( request, handler, context ); } );
}

void RekognitionClient::StopStreamProcessorAsyncHelper(const StopStreamProcessorRequest& request, const StopStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopStreamProcessor(request), context);
}

