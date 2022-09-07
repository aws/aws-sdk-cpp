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

#include <aws/rekognition/RekognitionClient.h>
#include <aws/rekognition/RekognitionEndpoint.h>
#include <aws/rekognition/RekognitionErrorMarshaller.h>
#include <aws/rekognition/model/CompareFacesRequest.h>
#include <aws/rekognition/model/CopyProjectVersionRequest.h>
#include <aws/rekognition/model/CreateCollectionRequest.h>
#include <aws/rekognition/model/CreateDatasetRequest.h>
#include <aws/rekognition/model/CreateProjectRequest.h>
#include <aws/rekognition/model/CreateProjectVersionRequest.h>
#include <aws/rekognition/model/CreateStreamProcessorRequest.h>
#include <aws/rekognition/model/DeleteCollectionRequest.h>
#include <aws/rekognition/model/DeleteDatasetRequest.h>
#include <aws/rekognition/model/DeleteFacesRequest.h>
#include <aws/rekognition/model/DeleteProjectRequest.h>
#include <aws/rekognition/model/DeleteProjectPolicyRequest.h>
#include <aws/rekognition/model/DeleteProjectVersionRequest.h>
#include <aws/rekognition/model/DeleteStreamProcessorRequest.h>
#include <aws/rekognition/model/DescribeCollectionRequest.h>
#include <aws/rekognition/model/DescribeDatasetRequest.h>
#include <aws/rekognition/model/DescribeProjectVersionsRequest.h>
#include <aws/rekognition/model/DescribeProjectsRequest.h>
#include <aws/rekognition/model/DescribeStreamProcessorRequest.h>
#include <aws/rekognition/model/DetectCustomLabelsRequest.h>
#include <aws/rekognition/model/DetectFacesRequest.h>
#include <aws/rekognition/model/DetectLabelsRequest.h>
#include <aws/rekognition/model/DetectModerationLabelsRequest.h>
#include <aws/rekognition/model/DetectProtectiveEquipmentRequest.h>
#include <aws/rekognition/model/DetectTextRequest.h>
#include <aws/rekognition/model/DistributeDatasetEntriesRequest.h>
#include <aws/rekognition/model/GetCelebrityInfoRequest.h>
#include <aws/rekognition/model/GetCelebrityRecognitionRequest.h>
#include <aws/rekognition/model/GetContentModerationRequest.h>
#include <aws/rekognition/model/GetFaceDetectionRequest.h>
#include <aws/rekognition/model/GetFaceSearchRequest.h>
#include <aws/rekognition/model/GetLabelDetectionRequest.h>
#include <aws/rekognition/model/GetPersonTrackingRequest.h>
#include <aws/rekognition/model/GetSegmentDetectionRequest.h>
#include <aws/rekognition/model/GetTextDetectionRequest.h>
#include <aws/rekognition/model/IndexFacesRequest.h>
#include <aws/rekognition/model/ListCollectionsRequest.h>
#include <aws/rekognition/model/ListDatasetEntriesRequest.h>
#include <aws/rekognition/model/ListDatasetLabelsRequest.h>
#include <aws/rekognition/model/ListFacesRequest.h>
#include <aws/rekognition/model/ListProjectPoliciesRequest.h>
#include <aws/rekognition/model/ListStreamProcessorsRequest.h>
#include <aws/rekognition/model/ListTagsForResourceRequest.h>
#include <aws/rekognition/model/PutProjectPolicyRequest.h>
#include <aws/rekognition/model/RecognizeCelebritiesRequest.h>
#include <aws/rekognition/model/SearchFacesRequest.h>
#include <aws/rekognition/model/SearchFacesByImageRequest.h>
#include <aws/rekognition/model/StartCelebrityRecognitionRequest.h>
#include <aws/rekognition/model/StartContentModerationRequest.h>
#include <aws/rekognition/model/StartFaceDetectionRequest.h>
#include <aws/rekognition/model/StartFaceSearchRequest.h>
#include <aws/rekognition/model/StartLabelDetectionRequest.h>
#include <aws/rekognition/model/StartPersonTrackingRequest.h>
#include <aws/rekognition/model/StartProjectVersionRequest.h>
#include <aws/rekognition/model/StartSegmentDetectionRequest.h>
#include <aws/rekognition/model/StartStreamProcessorRequest.h>
#include <aws/rekognition/model/StartTextDetectionRequest.h>
#include <aws/rekognition/model/StopProjectVersionRequest.h>
#include <aws/rekognition/model/StopStreamProcessorRequest.h>
#include <aws/rekognition/model/TagResourceRequest.h>
#include <aws/rekognition/model/UntagResourceRequest.h>
#include <aws/rekognition/model/UpdateDatasetEntriesRequest.h>
#include <aws/rekognition/model/UpdateStreamProcessorRequest.h>

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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RekognitionClient::RekognitionClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RekognitionClient::RekognitionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RekognitionClient::~RekognitionClient()
{
}

void RekognitionClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Rekognition");
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
  return CompareFacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CompareFacesOutcomeCallable RekognitionClient::CompareFacesCallable(const CompareFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompareFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompareFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientCompareFacesAsyncHelper(RekognitionClient const * const clientThis, const CompareFacesRequest& request, const CompareFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CompareFaces(request), context);
}

void RekognitionClient::CompareFacesAsync(const CompareFacesRequest& request, const CompareFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientCompareFacesAsyncHelper( this, request, handler, context ); } );
}

CopyProjectVersionOutcome RekognitionClient::CopyProjectVersion(const CopyProjectVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyProjectVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopyProjectVersionOutcomeCallable RekognitionClient::CopyProjectVersionCallable(const CopyProjectVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyProjectVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyProjectVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientCopyProjectVersionAsyncHelper(RekognitionClient const * const clientThis, const CopyProjectVersionRequest& request, const CopyProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyProjectVersion(request), context);
}

void RekognitionClient::CopyProjectVersionAsync(const CopyProjectVersionRequest& request, const CopyProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientCopyProjectVersionAsyncHelper( this, request, handler, context ); } );
}

CreateCollectionOutcome RekognitionClient::CreateCollection(const CreateCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCollectionOutcomeCallable RekognitionClient::CreateCollectionCallable(const CreateCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientCreateCollectionAsyncHelper(RekognitionClient const * const clientThis, const CreateCollectionRequest& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCollection(request), context);
}

void RekognitionClient::CreateCollectionAsync(const CreateCollectionRequest& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientCreateCollectionAsyncHelper( this, request, handler, context ); } );
}

CreateDatasetOutcome RekognitionClient::CreateDataset(const CreateDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable RekognitionClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientCreateDatasetAsyncHelper(RekognitionClient const * const clientThis, const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataset(request), context);
}

void RekognitionClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientCreateDatasetAsyncHelper( this, request, handler, context ); } );
}

CreateProjectOutcome RekognitionClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable RekognitionClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientCreateProjectAsyncHelper(RekognitionClient const * const clientThis, const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProject(request), context);
}

void RekognitionClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientCreateProjectAsyncHelper( this, request, handler, context ); } );
}

CreateProjectVersionOutcome RekognitionClient::CreateProjectVersion(const CreateProjectVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProjectVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectVersionOutcomeCallable RekognitionClient::CreateProjectVersionCallable(const CreateProjectVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProjectVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientCreateProjectVersionAsyncHelper(RekognitionClient const * const clientThis, const CreateProjectVersionRequest& request, const CreateProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProjectVersion(request), context);
}

void RekognitionClient::CreateProjectVersionAsync(const CreateProjectVersionRequest& request, const CreateProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientCreateProjectVersionAsyncHelper( this, request, handler, context ); } );
}

CreateStreamProcessorOutcome RekognitionClient::CreateStreamProcessor(const CreateStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStreamProcessorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamProcessorOutcomeCallable RekognitionClient::CreateStreamProcessorCallable(const CreateStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientCreateStreamProcessorAsyncHelper(RekognitionClient const * const clientThis, const CreateStreamProcessorRequest& request, const CreateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStreamProcessor(request), context);
}

void RekognitionClient::CreateStreamProcessorAsync(const CreateStreamProcessorRequest& request, const CreateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientCreateStreamProcessorAsyncHelper( this, request, handler, context ); } );
}

DeleteCollectionOutcome RekognitionClient::DeleteCollection(const DeleteCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCollectionOutcomeCallable RekognitionClient::DeleteCollectionCallable(const DeleteCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDeleteCollectionAsyncHelper(RekognitionClient const * const clientThis, const DeleteCollectionRequest& request, const DeleteCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCollection(request), context);
}

void RekognitionClient::DeleteCollectionAsync(const DeleteCollectionRequest& request, const DeleteCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDeleteCollectionAsyncHelper( this, request, handler, context ); } );
}

DeleteDatasetOutcome RekognitionClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable RekognitionClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDeleteDatasetAsyncHelper(RekognitionClient const * const clientThis, const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataset(request), context);
}

void RekognitionClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDeleteDatasetAsyncHelper( this, request, handler, context ); } );
}

DeleteFacesOutcome RekognitionClient::DeleteFaces(const DeleteFacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFacesOutcomeCallable RekognitionClient::DeleteFacesCallable(const DeleteFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDeleteFacesAsyncHelper(RekognitionClient const * const clientThis, const DeleteFacesRequest& request, const DeleteFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFaces(request), context);
}

void RekognitionClient::DeleteFacesAsync(const DeleteFacesRequest& request, const DeleteFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDeleteFacesAsyncHelper( this, request, handler, context ); } );
}

DeleteProjectOutcome RekognitionClient::DeleteProject(const DeleteProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable RekognitionClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDeleteProjectAsyncHelper(RekognitionClient const * const clientThis, const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProject(request), context);
}

void RekognitionClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDeleteProjectAsyncHelper( this, request, handler, context ); } );
}

DeleteProjectPolicyOutcome RekognitionClient::DeleteProjectPolicy(const DeleteProjectPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProjectPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectPolicyOutcomeCallable RekognitionClient::DeleteProjectPolicyCallable(const DeleteProjectPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProjectPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDeleteProjectPolicyAsyncHelper(RekognitionClient const * const clientThis, const DeleteProjectPolicyRequest& request, const DeleteProjectPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProjectPolicy(request), context);
}

void RekognitionClient::DeleteProjectPolicyAsync(const DeleteProjectPolicyRequest& request, const DeleteProjectPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDeleteProjectPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteProjectVersionOutcome RekognitionClient::DeleteProjectVersion(const DeleteProjectVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProjectVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectVersionOutcomeCallable RekognitionClient::DeleteProjectVersionCallable(const DeleteProjectVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProjectVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDeleteProjectVersionAsyncHelper(RekognitionClient const * const clientThis, const DeleteProjectVersionRequest& request, const DeleteProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProjectVersion(request), context);
}

void RekognitionClient::DeleteProjectVersionAsync(const DeleteProjectVersionRequest& request, const DeleteProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDeleteProjectVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteStreamProcessorOutcome RekognitionClient::DeleteStreamProcessor(const DeleteStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStreamProcessorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStreamProcessorOutcomeCallable RekognitionClient::DeleteStreamProcessorCallable(const DeleteStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDeleteStreamProcessorAsyncHelper(RekognitionClient const * const clientThis, const DeleteStreamProcessorRequest& request, const DeleteStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStreamProcessor(request), context);
}

void RekognitionClient::DeleteStreamProcessorAsync(const DeleteStreamProcessorRequest& request, const DeleteStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDeleteStreamProcessorAsyncHelper( this, request, handler, context ); } );
}

DescribeCollectionOutcome RekognitionClient::DescribeCollection(const DescribeCollectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCollectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCollectionOutcomeCallable RekognitionClient::DescribeCollectionCallable(const DescribeCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDescribeCollectionAsyncHelper(RekognitionClient const * const clientThis, const DescribeCollectionRequest& request, const DescribeCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCollection(request), context);
}

void RekognitionClient::DescribeCollectionAsync(const DescribeCollectionRequest& request, const DescribeCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDescribeCollectionAsyncHelper( this, request, handler, context ); } );
}

DescribeDatasetOutcome RekognitionClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable RekognitionClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDescribeDatasetAsyncHelper(RekognitionClient const * const clientThis, const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataset(request), context);
}

void RekognitionClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDescribeDatasetAsyncHelper( this, request, handler, context ); } );
}

DescribeProjectVersionsOutcome RekognitionClient::DescribeProjectVersions(const DescribeProjectVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProjectVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectVersionsOutcomeCallable RekognitionClient::DescribeProjectVersionsCallable(const DescribeProjectVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProjectVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDescribeProjectVersionsAsyncHelper(RekognitionClient const * const clientThis, const DescribeProjectVersionsRequest& request, const DescribeProjectVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProjectVersions(request), context);
}

void RekognitionClient::DescribeProjectVersionsAsync(const DescribeProjectVersionsRequest& request, const DescribeProjectVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDescribeProjectVersionsAsyncHelper( this, request, handler, context ); } );
}

DescribeProjectsOutcome RekognitionClient::DescribeProjects(const DescribeProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectsOutcomeCallable RekognitionClient::DescribeProjectsCallable(const DescribeProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDescribeProjectsAsyncHelper(RekognitionClient const * const clientThis, const DescribeProjectsRequest& request, const DescribeProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProjects(request), context);
}

void RekognitionClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDescribeProjectsAsyncHelper( this, request, handler, context ); } );
}

DescribeStreamProcessorOutcome RekognitionClient::DescribeStreamProcessor(const DescribeStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStreamProcessorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStreamProcessorOutcomeCallable RekognitionClient::DescribeStreamProcessorCallable(const DescribeStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDescribeStreamProcessorAsyncHelper(RekognitionClient const * const clientThis, const DescribeStreamProcessorRequest& request, const DescribeStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStreamProcessor(request), context);
}

void RekognitionClient::DescribeStreamProcessorAsync(const DescribeStreamProcessorRequest& request, const DescribeStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDescribeStreamProcessorAsyncHelper( this, request, handler, context ); } );
}

DetectCustomLabelsOutcome RekognitionClient::DetectCustomLabels(const DetectCustomLabelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectCustomLabelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectCustomLabelsOutcomeCallable RekognitionClient::DetectCustomLabelsCallable(const DetectCustomLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectCustomLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectCustomLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDetectCustomLabelsAsyncHelper(RekognitionClient const * const clientThis, const DetectCustomLabelsRequest& request, const DetectCustomLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectCustomLabels(request), context);
}

void RekognitionClient::DetectCustomLabelsAsync(const DetectCustomLabelsRequest& request, const DetectCustomLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDetectCustomLabelsAsyncHelper( this, request, handler, context ); } );
}

DetectFacesOutcome RekognitionClient::DetectFaces(const DetectFacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectFacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectFacesOutcomeCallable RekognitionClient::DetectFacesCallable(const DetectFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDetectFacesAsyncHelper(RekognitionClient const * const clientThis, const DetectFacesRequest& request, const DetectFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectFaces(request), context);
}

void RekognitionClient::DetectFacesAsync(const DetectFacesRequest& request, const DetectFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDetectFacesAsyncHelper( this, request, handler, context ); } );
}

DetectLabelsOutcome RekognitionClient::DetectLabels(const DetectLabelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectLabelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectLabelsOutcomeCallable RekognitionClient::DetectLabelsCallable(const DetectLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDetectLabelsAsyncHelper(RekognitionClient const * const clientThis, const DetectLabelsRequest& request, const DetectLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectLabels(request), context);
}

void RekognitionClient::DetectLabelsAsync(const DetectLabelsRequest& request, const DetectLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDetectLabelsAsyncHelper( this, request, handler, context ); } );
}

DetectModerationLabelsOutcome RekognitionClient::DetectModerationLabels(const DetectModerationLabelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectModerationLabelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectModerationLabelsOutcomeCallable RekognitionClient::DetectModerationLabelsCallable(const DetectModerationLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectModerationLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectModerationLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDetectModerationLabelsAsyncHelper(RekognitionClient const * const clientThis, const DetectModerationLabelsRequest& request, const DetectModerationLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectModerationLabels(request), context);
}

void RekognitionClient::DetectModerationLabelsAsync(const DetectModerationLabelsRequest& request, const DetectModerationLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDetectModerationLabelsAsyncHelper( this, request, handler, context ); } );
}

DetectProtectiveEquipmentOutcome RekognitionClient::DetectProtectiveEquipment(const DetectProtectiveEquipmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectProtectiveEquipmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectProtectiveEquipmentOutcomeCallable RekognitionClient::DetectProtectiveEquipmentCallable(const DetectProtectiveEquipmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectProtectiveEquipmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectProtectiveEquipment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDetectProtectiveEquipmentAsyncHelper(RekognitionClient const * const clientThis, const DetectProtectiveEquipmentRequest& request, const DetectProtectiveEquipmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectProtectiveEquipment(request), context);
}

void RekognitionClient::DetectProtectiveEquipmentAsync(const DetectProtectiveEquipmentRequest& request, const DetectProtectiveEquipmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDetectProtectiveEquipmentAsyncHelper( this, request, handler, context ); } );
}

DetectTextOutcome RekognitionClient::DetectText(const DetectTextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectTextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectTextOutcomeCallable RekognitionClient::DetectTextCallable(const DetectTextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectTextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectText(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDetectTextAsyncHelper(RekognitionClient const * const clientThis, const DetectTextRequest& request, const DetectTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectText(request), context);
}

void RekognitionClient::DetectTextAsync(const DetectTextRequest& request, const DetectTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDetectTextAsyncHelper( this, request, handler, context ); } );
}

DistributeDatasetEntriesOutcome RekognitionClient::DistributeDatasetEntries(const DistributeDatasetEntriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DistributeDatasetEntriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DistributeDatasetEntriesOutcomeCallable RekognitionClient::DistributeDatasetEntriesCallable(const DistributeDatasetEntriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DistributeDatasetEntriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DistributeDatasetEntries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientDistributeDatasetEntriesAsyncHelper(RekognitionClient const * const clientThis, const DistributeDatasetEntriesRequest& request, const DistributeDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DistributeDatasetEntries(request), context);
}

void RekognitionClient::DistributeDatasetEntriesAsync(const DistributeDatasetEntriesRequest& request, const DistributeDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientDistributeDatasetEntriesAsyncHelper( this, request, handler, context ); } );
}

GetCelebrityInfoOutcome RekognitionClient::GetCelebrityInfo(const GetCelebrityInfoRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCelebrityInfoOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCelebrityInfoOutcomeCallable RekognitionClient::GetCelebrityInfoCallable(const GetCelebrityInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCelebrityInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCelebrityInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientGetCelebrityInfoAsyncHelper(RekognitionClient const * const clientThis, const GetCelebrityInfoRequest& request, const GetCelebrityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCelebrityInfo(request), context);
}

void RekognitionClient::GetCelebrityInfoAsync(const GetCelebrityInfoRequest& request, const GetCelebrityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientGetCelebrityInfoAsyncHelper( this, request, handler, context ); } );
}

GetCelebrityRecognitionOutcome RekognitionClient::GetCelebrityRecognition(const GetCelebrityRecognitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCelebrityRecognitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCelebrityRecognitionOutcomeCallable RekognitionClient::GetCelebrityRecognitionCallable(const GetCelebrityRecognitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCelebrityRecognitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCelebrityRecognition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientGetCelebrityRecognitionAsyncHelper(RekognitionClient const * const clientThis, const GetCelebrityRecognitionRequest& request, const GetCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCelebrityRecognition(request), context);
}

void RekognitionClient::GetCelebrityRecognitionAsync(const GetCelebrityRecognitionRequest& request, const GetCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientGetCelebrityRecognitionAsyncHelper( this, request, handler, context ); } );
}

GetContentModerationOutcome RekognitionClient::GetContentModeration(const GetContentModerationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetContentModerationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContentModerationOutcomeCallable RekognitionClient::GetContentModerationCallable(const GetContentModerationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContentModerationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContentModeration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientGetContentModerationAsyncHelper(RekognitionClient const * const clientThis, const GetContentModerationRequest& request, const GetContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContentModeration(request), context);
}

void RekognitionClient::GetContentModerationAsync(const GetContentModerationRequest& request, const GetContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientGetContentModerationAsyncHelper( this, request, handler, context ); } );
}

GetFaceDetectionOutcome RekognitionClient::GetFaceDetection(const GetFaceDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetFaceDetectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFaceDetectionOutcomeCallable RekognitionClient::GetFaceDetectionCallable(const GetFaceDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFaceDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFaceDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientGetFaceDetectionAsyncHelper(RekognitionClient const * const clientThis, const GetFaceDetectionRequest& request, const GetFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFaceDetection(request), context);
}

void RekognitionClient::GetFaceDetectionAsync(const GetFaceDetectionRequest& request, const GetFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientGetFaceDetectionAsyncHelper( this, request, handler, context ); } );
}

GetFaceSearchOutcome RekognitionClient::GetFaceSearch(const GetFaceSearchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetFaceSearchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFaceSearchOutcomeCallable RekognitionClient::GetFaceSearchCallable(const GetFaceSearchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFaceSearchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFaceSearch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientGetFaceSearchAsyncHelper(RekognitionClient const * const clientThis, const GetFaceSearchRequest& request, const GetFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFaceSearch(request), context);
}

void RekognitionClient::GetFaceSearchAsync(const GetFaceSearchRequest& request, const GetFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientGetFaceSearchAsyncHelper( this, request, handler, context ); } );
}

GetLabelDetectionOutcome RekognitionClient::GetLabelDetection(const GetLabelDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLabelDetectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLabelDetectionOutcomeCallable RekognitionClient::GetLabelDetectionCallable(const GetLabelDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLabelDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLabelDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientGetLabelDetectionAsyncHelper(RekognitionClient const * const clientThis, const GetLabelDetectionRequest& request, const GetLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLabelDetection(request), context);
}

void RekognitionClient::GetLabelDetectionAsync(const GetLabelDetectionRequest& request, const GetLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientGetLabelDetectionAsyncHelper( this, request, handler, context ); } );
}

GetPersonTrackingOutcome RekognitionClient::GetPersonTracking(const GetPersonTrackingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPersonTrackingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPersonTrackingOutcomeCallable RekognitionClient::GetPersonTrackingCallable(const GetPersonTrackingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPersonTrackingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPersonTracking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientGetPersonTrackingAsyncHelper(RekognitionClient const * const clientThis, const GetPersonTrackingRequest& request, const GetPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPersonTracking(request), context);
}

void RekognitionClient::GetPersonTrackingAsync(const GetPersonTrackingRequest& request, const GetPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientGetPersonTrackingAsyncHelper( this, request, handler, context ); } );
}

GetSegmentDetectionOutcome RekognitionClient::GetSegmentDetection(const GetSegmentDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSegmentDetectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentDetectionOutcomeCallable RekognitionClient::GetSegmentDetectionCallable(const GetSegmentDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientGetSegmentDetectionAsyncHelper(RekognitionClient const * const clientThis, const GetSegmentDetectionRequest& request, const GetSegmentDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSegmentDetection(request), context);
}

void RekognitionClient::GetSegmentDetectionAsync(const GetSegmentDetectionRequest& request, const GetSegmentDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientGetSegmentDetectionAsyncHelper( this, request, handler, context ); } );
}

GetTextDetectionOutcome RekognitionClient::GetTextDetection(const GetTextDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTextDetectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTextDetectionOutcomeCallable RekognitionClient::GetTextDetectionCallable(const GetTextDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTextDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTextDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientGetTextDetectionAsyncHelper(RekognitionClient const * const clientThis, const GetTextDetectionRequest& request, const GetTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTextDetection(request), context);
}

void RekognitionClient::GetTextDetectionAsync(const GetTextDetectionRequest& request, const GetTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientGetTextDetectionAsyncHelper( this, request, handler, context ); } );
}

IndexFacesOutcome RekognitionClient::IndexFaces(const IndexFacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return IndexFacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

IndexFacesOutcomeCallable RekognitionClient::IndexFacesCallable(const IndexFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IndexFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IndexFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientIndexFacesAsyncHelper(RekognitionClient const * const clientThis, const IndexFacesRequest& request, const IndexFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->IndexFaces(request), context);
}

void RekognitionClient::IndexFacesAsync(const IndexFacesRequest& request, const IndexFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientIndexFacesAsyncHelper( this, request, handler, context ); } );
}

ListCollectionsOutcome RekognitionClient::ListCollections(const ListCollectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCollectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCollectionsOutcomeCallable RekognitionClient::ListCollectionsCallable(const ListCollectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCollectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCollections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientListCollectionsAsyncHelper(RekognitionClient const * const clientThis, const ListCollectionsRequest& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCollections(request), context);
}

void RekognitionClient::ListCollectionsAsync(const ListCollectionsRequest& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientListCollectionsAsyncHelper( this, request, handler, context ); } );
}

ListDatasetEntriesOutcome RekognitionClient::ListDatasetEntries(const ListDatasetEntriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDatasetEntriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetEntriesOutcomeCallable RekognitionClient::ListDatasetEntriesCallable(const ListDatasetEntriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetEntriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetEntries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientListDatasetEntriesAsyncHelper(RekognitionClient const * const clientThis, const ListDatasetEntriesRequest& request, const ListDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatasetEntries(request), context);
}

void RekognitionClient::ListDatasetEntriesAsync(const ListDatasetEntriesRequest& request, const ListDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientListDatasetEntriesAsyncHelper( this, request, handler, context ); } );
}

ListDatasetLabelsOutcome RekognitionClient::ListDatasetLabels(const ListDatasetLabelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDatasetLabelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetLabelsOutcomeCallable RekognitionClient::ListDatasetLabelsCallable(const ListDatasetLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientListDatasetLabelsAsyncHelper(RekognitionClient const * const clientThis, const ListDatasetLabelsRequest& request, const ListDatasetLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatasetLabels(request), context);
}

void RekognitionClient::ListDatasetLabelsAsync(const ListDatasetLabelsRequest& request, const ListDatasetLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientListDatasetLabelsAsyncHelper( this, request, handler, context ); } );
}

ListFacesOutcome RekognitionClient::ListFaces(const ListFacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFacesOutcomeCallable RekognitionClient::ListFacesCallable(const ListFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientListFacesAsyncHelper(RekognitionClient const * const clientThis, const ListFacesRequest& request, const ListFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFaces(request), context);
}

void RekognitionClient::ListFacesAsync(const ListFacesRequest& request, const ListFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientListFacesAsyncHelper( this, request, handler, context ); } );
}

ListProjectPoliciesOutcome RekognitionClient::ListProjectPolicies(const ListProjectPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProjectPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProjectPoliciesOutcomeCallable RekognitionClient::ListProjectPoliciesCallable(const ListProjectPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjectPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientListProjectPoliciesAsyncHelper(RekognitionClient const * const clientThis, const ListProjectPoliciesRequest& request, const ListProjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProjectPolicies(request), context);
}

void RekognitionClient::ListProjectPoliciesAsync(const ListProjectPoliciesRequest& request, const ListProjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientListProjectPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListStreamProcessorsOutcome RekognitionClient::ListStreamProcessors(const ListStreamProcessorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStreamProcessorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStreamProcessorsOutcomeCallable RekognitionClient::ListStreamProcessorsCallable(const ListStreamProcessorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamProcessorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamProcessors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientListStreamProcessorsAsyncHelper(RekognitionClient const * const clientThis, const ListStreamProcessorsRequest& request, const ListStreamProcessorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStreamProcessors(request), context);
}

void RekognitionClient::ListStreamProcessorsAsync(const ListStreamProcessorsRequest& request, const ListStreamProcessorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientListStreamProcessorsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome RekognitionClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable RekognitionClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientListTagsForResourceAsyncHelper(RekognitionClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void RekognitionClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutProjectPolicyOutcome RekognitionClient::PutProjectPolicy(const PutProjectPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutProjectPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutProjectPolicyOutcomeCallable RekognitionClient::PutProjectPolicyCallable(const PutProjectPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProjectPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProjectPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientPutProjectPolicyAsyncHelper(RekognitionClient const * const clientThis, const PutProjectPolicyRequest& request, const PutProjectPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutProjectPolicy(request), context);
}

void RekognitionClient::PutProjectPolicyAsync(const PutProjectPolicyRequest& request, const PutProjectPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientPutProjectPolicyAsyncHelper( this, request, handler, context ); } );
}

RecognizeCelebritiesOutcome RekognitionClient::RecognizeCelebrities(const RecognizeCelebritiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RecognizeCelebritiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RecognizeCelebritiesOutcomeCallable RekognitionClient::RecognizeCelebritiesCallable(const RecognizeCelebritiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RecognizeCelebritiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RecognizeCelebrities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientRecognizeCelebritiesAsyncHelper(RekognitionClient const * const clientThis, const RecognizeCelebritiesRequest& request, const RecognizeCelebritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RecognizeCelebrities(request), context);
}

void RekognitionClient::RecognizeCelebritiesAsync(const RecognizeCelebritiesRequest& request, const RecognizeCelebritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientRecognizeCelebritiesAsyncHelper( this, request, handler, context ); } );
}

SearchFacesOutcome RekognitionClient::SearchFaces(const SearchFacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchFacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchFacesOutcomeCallable RekognitionClient::SearchFacesCallable(const SearchFacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchFacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchFaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientSearchFacesAsyncHelper(RekognitionClient const * const clientThis, const SearchFacesRequest& request, const SearchFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchFaces(request), context);
}

void RekognitionClient::SearchFacesAsync(const SearchFacesRequest& request, const SearchFacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientSearchFacesAsyncHelper( this, request, handler, context ); } );
}

SearchFacesByImageOutcome RekognitionClient::SearchFacesByImage(const SearchFacesByImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchFacesByImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchFacesByImageOutcomeCallable RekognitionClient::SearchFacesByImageCallable(const SearchFacesByImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchFacesByImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchFacesByImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientSearchFacesByImageAsyncHelper(RekognitionClient const * const clientThis, const SearchFacesByImageRequest& request, const SearchFacesByImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchFacesByImage(request), context);
}

void RekognitionClient::SearchFacesByImageAsync(const SearchFacesByImageRequest& request, const SearchFacesByImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientSearchFacesByImageAsyncHelper( this, request, handler, context ); } );
}

StartCelebrityRecognitionOutcome RekognitionClient::StartCelebrityRecognition(const StartCelebrityRecognitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartCelebrityRecognitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartCelebrityRecognitionOutcomeCallable RekognitionClient::StartCelebrityRecognitionCallable(const StartCelebrityRecognitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCelebrityRecognitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCelebrityRecognition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStartCelebrityRecognitionAsyncHelper(RekognitionClient const * const clientThis, const StartCelebrityRecognitionRequest& request, const StartCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartCelebrityRecognition(request), context);
}

void RekognitionClient::StartCelebrityRecognitionAsync(const StartCelebrityRecognitionRequest& request, const StartCelebrityRecognitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStartCelebrityRecognitionAsyncHelper( this, request, handler, context ); } );
}

StartContentModerationOutcome RekognitionClient::StartContentModeration(const StartContentModerationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartContentModerationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartContentModerationOutcomeCallable RekognitionClient::StartContentModerationCallable(const StartContentModerationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartContentModerationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartContentModeration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStartContentModerationAsyncHelper(RekognitionClient const * const clientThis, const StartContentModerationRequest& request, const StartContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartContentModeration(request), context);
}

void RekognitionClient::StartContentModerationAsync(const StartContentModerationRequest& request, const StartContentModerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStartContentModerationAsyncHelper( this, request, handler, context ); } );
}

StartFaceDetectionOutcome RekognitionClient::StartFaceDetection(const StartFaceDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartFaceDetectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFaceDetectionOutcomeCallable RekognitionClient::StartFaceDetectionCallable(const StartFaceDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFaceDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFaceDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStartFaceDetectionAsyncHelper(RekognitionClient const * const clientThis, const StartFaceDetectionRequest& request, const StartFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartFaceDetection(request), context);
}

void RekognitionClient::StartFaceDetectionAsync(const StartFaceDetectionRequest& request, const StartFaceDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStartFaceDetectionAsyncHelper( this, request, handler, context ); } );
}

StartFaceSearchOutcome RekognitionClient::StartFaceSearch(const StartFaceSearchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartFaceSearchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFaceSearchOutcomeCallable RekognitionClient::StartFaceSearchCallable(const StartFaceSearchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFaceSearchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFaceSearch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStartFaceSearchAsyncHelper(RekognitionClient const * const clientThis, const StartFaceSearchRequest& request, const StartFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartFaceSearch(request), context);
}

void RekognitionClient::StartFaceSearchAsync(const StartFaceSearchRequest& request, const StartFaceSearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStartFaceSearchAsyncHelper( this, request, handler, context ); } );
}

StartLabelDetectionOutcome RekognitionClient::StartLabelDetection(const StartLabelDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartLabelDetectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartLabelDetectionOutcomeCallable RekognitionClient::StartLabelDetectionCallable(const StartLabelDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartLabelDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartLabelDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStartLabelDetectionAsyncHelper(RekognitionClient const * const clientThis, const StartLabelDetectionRequest& request, const StartLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartLabelDetection(request), context);
}

void RekognitionClient::StartLabelDetectionAsync(const StartLabelDetectionRequest& request, const StartLabelDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStartLabelDetectionAsyncHelper( this, request, handler, context ); } );
}

StartPersonTrackingOutcome RekognitionClient::StartPersonTracking(const StartPersonTrackingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartPersonTrackingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartPersonTrackingOutcomeCallable RekognitionClient::StartPersonTrackingCallable(const StartPersonTrackingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPersonTrackingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPersonTracking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStartPersonTrackingAsyncHelper(RekognitionClient const * const clientThis, const StartPersonTrackingRequest& request, const StartPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartPersonTracking(request), context);
}

void RekognitionClient::StartPersonTrackingAsync(const StartPersonTrackingRequest& request, const StartPersonTrackingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStartPersonTrackingAsyncHelper( this, request, handler, context ); } );
}

StartProjectVersionOutcome RekognitionClient::StartProjectVersion(const StartProjectVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartProjectVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartProjectVersionOutcomeCallable RekognitionClient::StartProjectVersionCallable(const StartProjectVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartProjectVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartProjectVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStartProjectVersionAsyncHelper(RekognitionClient const * const clientThis, const StartProjectVersionRequest& request, const StartProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartProjectVersion(request), context);
}

void RekognitionClient::StartProjectVersionAsync(const StartProjectVersionRequest& request, const StartProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStartProjectVersionAsyncHelper( this, request, handler, context ); } );
}

StartSegmentDetectionOutcome RekognitionClient::StartSegmentDetection(const StartSegmentDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartSegmentDetectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSegmentDetectionOutcomeCallable RekognitionClient::StartSegmentDetectionCallable(const StartSegmentDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSegmentDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSegmentDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStartSegmentDetectionAsyncHelper(RekognitionClient const * const clientThis, const StartSegmentDetectionRequest& request, const StartSegmentDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartSegmentDetection(request), context);
}

void RekognitionClient::StartSegmentDetectionAsync(const StartSegmentDetectionRequest& request, const StartSegmentDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStartSegmentDetectionAsyncHelper( this, request, handler, context ); } );
}

StartStreamProcessorOutcome RekognitionClient::StartStreamProcessor(const StartStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartStreamProcessorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartStreamProcessorOutcomeCallable RekognitionClient::StartStreamProcessorCallable(const StartStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStartStreamProcessorAsyncHelper(RekognitionClient const * const clientThis, const StartStreamProcessorRequest& request, const StartStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartStreamProcessor(request), context);
}

void RekognitionClient::StartStreamProcessorAsync(const StartStreamProcessorRequest& request, const StartStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStartStreamProcessorAsyncHelper( this, request, handler, context ); } );
}

StartTextDetectionOutcome RekognitionClient::StartTextDetection(const StartTextDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartTextDetectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTextDetectionOutcomeCallable RekognitionClient::StartTextDetectionCallable(const StartTextDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTextDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTextDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStartTextDetectionAsyncHelper(RekognitionClient const * const clientThis, const StartTextDetectionRequest& request, const StartTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartTextDetection(request), context);
}

void RekognitionClient::StartTextDetectionAsync(const StartTextDetectionRequest& request, const StartTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStartTextDetectionAsyncHelper( this, request, handler, context ); } );
}

StopProjectVersionOutcome RekognitionClient::StopProjectVersion(const StopProjectVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopProjectVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopProjectVersionOutcomeCallable RekognitionClient::StopProjectVersionCallable(const StopProjectVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopProjectVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopProjectVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStopProjectVersionAsyncHelper(RekognitionClient const * const clientThis, const StopProjectVersionRequest& request, const StopProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopProjectVersion(request), context);
}

void RekognitionClient::StopProjectVersionAsync(const StopProjectVersionRequest& request, const StopProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStopProjectVersionAsyncHelper( this, request, handler, context ); } );
}

StopStreamProcessorOutcome RekognitionClient::StopStreamProcessor(const StopStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopStreamProcessorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopStreamProcessorOutcomeCallable RekognitionClient::StopStreamProcessorCallable(const StopStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientStopStreamProcessorAsyncHelper(RekognitionClient const * const clientThis, const StopStreamProcessorRequest& request, const StopStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopStreamProcessor(request), context);
}

void RekognitionClient::StopStreamProcessorAsync(const StopStreamProcessorRequest& request, const StopStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientStopStreamProcessorAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome RekognitionClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable RekognitionClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientTagResourceAsyncHelper(RekognitionClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void RekognitionClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome RekognitionClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable RekognitionClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientUntagResourceAsyncHelper(RekognitionClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void RekognitionClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDatasetEntriesOutcome RekognitionClient::UpdateDatasetEntries(const UpdateDatasetEntriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDatasetEntriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetEntriesOutcomeCallable RekognitionClient::UpdateDatasetEntriesCallable(const UpdateDatasetEntriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetEntriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatasetEntries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientUpdateDatasetEntriesAsyncHelper(RekognitionClient const * const clientThis, const UpdateDatasetEntriesRequest& request, const UpdateDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDatasetEntries(request), context);
}

void RekognitionClient::UpdateDatasetEntriesAsync(const UpdateDatasetEntriesRequest& request, const UpdateDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientUpdateDatasetEntriesAsyncHelper( this, request, handler, context ); } );
}

UpdateStreamProcessorOutcome RekognitionClient::UpdateStreamProcessor(const UpdateStreamProcessorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateStreamProcessorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStreamProcessorOutcomeCallable RekognitionClient::UpdateStreamProcessorCallable(const UpdateStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClientUpdateStreamProcessorAsyncHelper(RekognitionClient const * const clientThis, const UpdateStreamProcessorRequest& request, const UpdateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStreamProcessor(request), context);
}

void RekognitionClient::UpdateStreamProcessorAsync(const UpdateStreamProcessorRequest& request, const UpdateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RekognitionClientUpdateStreamProcessorAsyncHelper( this, request, handler, context ); } );
}

