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

#include <aws/rekognition/RekognitionClient.h>
#include <aws/rekognition/RekognitionErrorMarshaller.h>
#include <aws/rekognition/RekognitionEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* RekognitionClient::SERVICE_NAME = "rekognition";
const char* RekognitionClient::ALLOCATION_TAG = "RekognitionClient";

RekognitionClient::RekognitionClient(const Rekognition::RekognitionClientConfiguration& clientConfiguration,
                                     std::shared_ptr<RekognitionEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RekognitionClient::RekognitionClient(const AWSCredentials& credentials,
                                     std::shared_ptr<RekognitionEndpointProviderBase> endpointProvider,
                                     const Rekognition::RekognitionClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RekognitionClient::RekognitionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<RekognitionEndpointProviderBase> endpointProvider,
                                     const Rekognition::RekognitionClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  RekognitionClient::RekognitionClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<RekognitionEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RekognitionClient::RekognitionClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RekognitionEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RekognitionClient::RekognitionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RekognitionEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
RekognitionClient::~RekognitionClient()
{
}

std::shared_ptr<RekognitionEndpointProviderBase>& RekognitionClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void RekognitionClient::init(const Rekognition::RekognitionClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Rekognition");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void RekognitionClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CompareFacesOutcome RekognitionClient::CompareFaces(const CompareFacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompareFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CompareFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CompareFacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CompareFaces(request), context);
    } );
}

CopyProjectVersionOutcome RekognitionClient::CopyProjectVersion(const CopyProjectVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyProjectVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyProjectVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopyProjectVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopyProjectVersionOutcomeCallable RekognitionClient::CopyProjectVersionCallable(const CopyProjectVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyProjectVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyProjectVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::CopyProjectVersionAsync(const CopyProjectVersionRequest& request, const CopyProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CopyProjectVersion(request), context);
    } );
}

CreateCollectionOutcome RekognitionClient::CreateCollection(const CreateCollectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCollection(request), context);
    } );
}

CreateDatasetOutcome RekognitionClient::CreateDataset(const CreateDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable RekognitionClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataset(request), context);
    } );
}

CreateProjectOutcome RekognitionClient::CreateProject(const CreateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable RekognitionClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProject(request), context);
    } );
}

CreateProjectVersionOutcome RekognitionClient::CreateProjectVersion(const CreateProjectVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProjectVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProjectVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProjectVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectVersionOutcomeCallable RekognitionClient::CreateProjectVersionCallable(const CreateProjectVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProjectVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::CreateProjectVersionAsync(const CreateProjectVersionRequest& request, const CreateProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProjectVersion(request), context);
    } );
}

CreateStreamProcessorOutcome RekognitionClient::CreateStreamProcessor(const CreateStreamProcessorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStreamProcessorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStreamProcessor(request), context);
    } );
}

DeleteCollectionOutcome RekognitionClient::DeleteCollection(const DeleteCollectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCollection(request), context);
    } );
}

DeleteDatasetOutcome RekognitionClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable RekognitionClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataset(request), context);
    } );
}

DeleteFacesOutcome RekognitionClient::DeleteFaces(const DeleteFacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFaces(request), context);
    } );
}

DeleteProjectOutcome RekognitionClient::DeleteProject(const DeleteProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable RekognitionClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProject(request), context);
    } );
}

DeleteProjectPolicyOutcome RekognitionClient::DeleteProjectPolicy(const DeleteProjectPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProjectPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProjectPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProjectPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectPolicyOutcomeCallable RekognitionClient::DeleteProjectPolicyCallable(const DeleteProjectPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProjectPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DeleteProjectPolicyAsync(const DeleteProjectPolicyRequest& request, const DeleteProjectPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProjectPolicy(request), context);
    } );
}

DeleteProjectVersionOutcome RekognitionClient::DeleteProjectVersion(const DeleteProjectVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProjectVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProjectVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProjectVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectVersionOutcomeCallable RekognitionClient::DeleteProjectVersionCallable(const DeleteProjectVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProjectVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DeleteProjectVersionAsync(const DeleteProjectVersionRequest& request, const DeleteProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProjectVersion(request), context);
    } );
}

DeleteStreamProcessorOutcome RekognitionClient::DeleteStreamProcessor(const DeleteStreamProcessorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStreamProcessorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStreamProcessor(request), context);
    } );
}

DescribeCollectionOutcome RekognitionClient::DescribeCollection(const DescribeCollectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCollection(request), context);
    } );
}

DescribeDatasetOutcome RekognitionClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable RekognitionClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataset(request), context);
    } );
}

DescribeProjectVersionsOutcome RekognitionClient::DescribeProjectVersions(const DescribeProjectVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProjectVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProjectVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProjectVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectVersionsOutcomeCallable RekognitionClient::DescribeProjectVersionsCallable(const DescribeProjectVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProjectVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DescribeProjectVersionsAsync(const DescribeProjectVersionsRequest& request, const DescribeProjectVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeProjectVersions(request), context);
    } );
}

DescribeProjectsOutcome RekognitionClient::DescribeProjects(const DescribeProjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectsOutcomeCallable RekognitionClient::DescribeProjectsCallable(const DescribeProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeProjects(request), context);
    } );
}

DescribeStreamProcessorOutcome RekognitionClient::DescribeStreamProcessor(const DescribeStreamProcessorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStreamProcessorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStreamProcessor(request), context);
    } );
}

DetectCustomLabelsOutcome RekognitionClient::DetectCustomLabels(const DetectCustomLabelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectCustomLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectCustomLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetectCustomLabelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectCustomLabelsOutcomeCallable RekognitionClient::DetectCustomLabelsCallable(const DetectCustomLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectCustomLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectCustomLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DetectCustomLabelsAsync(const DetectCustomLabelsRequest& request, const DetectCustomLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectCustomLabels(request), context);
    } );
}

DetectFacesOutcome RekognitionClient::DetectFaces(const DetectFacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetectFacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectFaces(request), context);
    } );
}

DetectLabelsOutcome RekognitionClient::DetectLabels(const DetectLabelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetectLabelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectLabels(request), context);
    } );
}

DetectModerationLabelsOutcome RekognitionClient::DetectModerationLabels(const DetectModerationLabelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectModerationLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectModerationLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetectModerationLabelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectModerationLabels(request), context);
    } );
}

DetectProtectiveEquipmentOutcome RekognitionClient::DetectProtectiveEquipment(const DetectProtectiveEquipmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectProtectiveEquipment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectProtectiveEquipment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetectProtectiveEquipmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectProtectiveEquipmentOutcomeCallable RekognitionClient::DetectProtectiveEquipmentCallable(const DetectProtectiveEquipmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectProtectiveEquipmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectProtectiveEquipment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DetectProtectiveEquipmentAsync(const DetectProtectiveEquipmentRequest& request, const DetectProtectiveEquipmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectProtectiveEquipment(request), context);
    } );
}

DetectTextOutcome RekognitionClient::DetectText(const DetectTextRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectText, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectText, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetectTextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectText(request), context);
    } );
}

DistributeDatasetEntriesOutcome RekognitionClient::DistributeDatasetEntries(const DistributeDatasetEntriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DistributeDatasetEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DistributeDatasetEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DistributeDatasetEntriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DistributeDatasetEntriesOutcomeCallable RekognitionClient::DistributeDatasetEntriesCallable(const DistributeDatasetEntriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DistributeDatasetEntriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DistributeDatasetEntries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::DistributeDatasetEntriesAsync(const DistributeDatasetEntriesRequest& request, const DistributeDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DistributeDatasetEntries(request), context);
    } );
}

GetCelebrityInfoOutcome RekognitionClient::GetCelebrityInfo(const GetCelebrityInfoRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCelebrityInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCelebrityInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCelebrityInfoOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCelebrityInfo(request), context);
    } );
}

GetCelebrityRecognitionOutcome RekognitionClient::GetCelebrityRecognition(const GetCelebrityRecognitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCelebrityRecognition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCelebrityRecognition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCelebrityRecognitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCelebrityRecognition(request), context);
    } );
}

GetContentModerationOutcome RekognitionClient::GetContentModeration(const GetContentModerationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContentModeration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContentModeration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContentModerationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContentModeration(request), context);
    } );
}

GetFaceDetectionOutcome RekognitionClient::GetFaceDetection(const GetFaceDetectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFaceDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFaceDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetFaceDetectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFaceDetection(request), context);
    } );
}

GetFaceSearchOutcome RekognitionClient::GetFaceSearch(const GetFaceSearchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFaceSearch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFaceSearch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetFaceSearchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFaceSearch(request), context);
    } );
}

GetLabelDetectionOutcome RekognitionClient::GetLabelDetection(const GetLabelDetectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLabelDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLabelDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLabelDetectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLabelDetection(request), context);
    } );
}

GetPersonTrackingOutcome RekognitionClient::GetPersonTracking(const GetPersonTrackingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPersonTracking, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPersonTracking, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPersonTrackingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPersonTracking(request), context);
    } );
}

GetSegmentDetectionOutcome RekognitionClient::GetSegmentDetection(const GetSegmentDetectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSegmentDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSegmentDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSegmentDetectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentDetectionOutcomeCallable RekognitionClient::GetSegmentDetectionCallable(const GetSegmentDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::GetSegmentDetectionAsync(const GetSegmentDetectionRequest& request, const GetSegmentDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSegmentDetection(request), context);
    } );
}

GetTextDetectionOutcome RekognitionClient::GetTextDetection(const GetTextDetectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTextDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTextDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTextDetectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTextDetectionOutcomeCallable RekognitionClient::GetTextDetectionCallable(const GetTextDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTextDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTextDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::GetTextDetectionAsync(const GetTextDetectionRequest& request, const GetTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTextDetection(request), context);
    } );
}

IndexFacesOutcome RekognitionClient::IndexFaces(const IndexFacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, IndexFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, IndexFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return IndexFacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, IndexFaces(request), context);
    } );
}

ListCollectionsOutcome RekognitionClient::ListCollections(const ListCollectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCollections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCollectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCollections(request), context);
    } );
}

ListDatasetEntriesOutcome RekognitionClient::ListDatasetEntries(const ListDatasetEntriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasetEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasetEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetEntriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetEntriesOutcomeCallable RekognitionClient::ListDatasetEntriesCallable(const ListDatasetEntriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetEntriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetEntries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::ListDatasetEntriesAsync(const ListDatasetEntriesRequest& request, const ListDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasetEntries(request), context);
    } );
}

ListDatasetLabelsOutcome RekognitionClient::ListDatasetLabels(const ListDatasetLabelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasetLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasetLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetLabelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetLabelsOutcomeCallable RekognitionClient::ListDatasetLabelsCallable(const ListDatasetLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::ListDatasetLabelsAsync(const ListDatasetLabelsRequest& request, const ListDatasetLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasetLabels(request), context);
    } );
}

ListFacesOutcome RekognitionClient::ListFaces(const ListFacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFaces(request), context);
    } );
}

ListProjectPoliciesOutcome RekognitionClient::ListProjectPolicies(const ListProjectPoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjectPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjectPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListProjectPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProjectPoliciesOutcomeCallable RekognitionClient::ListProjectPoliciesCallable(const ListProjectPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjectPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::ListProjectPoliciesAsync(const ListProjectPoliciesRequest& request, const ListProjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProjectPolicies(request), context);
    } );
}

ListStreamProcessorsOutcome RekognitionClient::ListStreamProcessors(const ListStreamProcessorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreamProcessors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStreamProcessors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStreamProcessorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStreamProcessors(request), context);
    } );
}

ListTagsForResourceOutcome RekognitionClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable RekognitionClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutProjectPolicyOutcome RekognitionClient::PutProjectPolicy(const PutProjectPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutProjectPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutProjectPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutProjectPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutProjectPolicyOutcomeCallable RekognitionClient::PutProjectPolicyCallable(const PutProjectPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProjectPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProjectPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::PutProjectPolicyAsync(const PutProjectPolicyRequest& request, const PutProjectPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutProjectPolicy(request), context);
    } );
}

RecognizeCelebritiesOutcome RekognitionClient::RecognizeCelebrities(const RecognizeCelebritiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RecognizeCelebrities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RecognizeCelebrities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RecognizeCelebritiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RecognizeCelebrities(request), context);
    } );
}

SearchFacesOutcome RekognitionClient::SearchFaces(const SearchFacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchFaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchFacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchFaces(request), context);
    } );
}

SearchFacesByImageOutcome RekognitionClient::SearchFacesByImage(const SearchFacesByImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchFacesByImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchFacesByImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchFacesByImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchFacesByImage(request), context);
    } );
}

StartCelebrityRecognitionOutcome RekognitionClient::StartCelebrityRecognition(const StartCelebrityRecognitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartCelebrityRecognition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartCelebrityRecognition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartCelebrityRecognitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartCelebrityRecognition(request), context);
    } );
}

StartContentModerationOutcome RekognitionClient::StartContentModeration(const StartContentModerationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartContentModeration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartContentModeration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartContentModerationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartContentModeration(request), context);
    } );
}

StartFaceDetectionOutcome RekognitionClient::StartFaceDetection(const StartFaceDetectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartFaceDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartFaceDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartFaceDetectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartFaceDetection(request), context);
    } );
}

StartFaceSearchOutcome RekognitionClient::StartFaceSearch(const StartFaceSearchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartFaceSearch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartFaceSearch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartFaceSearchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartFaceSearch(request), context);
    } );
}

StartLabelDetectionOutcome RekognitionClient::StartLabelDetection(const StartLabelDetectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartLabelDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartLabelDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartLabelDetectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartLabelDetection(request), context);
    } );
}

StartPersonTrackingOutcome RekognitionClient::StartPersonTracking(const StartPersonTrackingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartPersonTracking, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartPersonTracking, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartPersonTrackingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartPersonTracking(request), context);
    } );
}

StartProjectVersionOutcome RekognitionClient::StartProjectVersion(const StartProjectVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartProjectVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartProjectVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartProjectVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartProjectVersionOutcomeCallable RekognitionClient::StartProjectVersionCallable(const StartProjectVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartProjectVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartProjectVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StartProjectVersionAsync(const StartProjectVersionRequest& request, const StartProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartProjectVersion(request), context);
    } );
}

StartSegmentDetectionOutcome RekognitionClient::StartSegmentDetection(const StartSegmentDetectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSegmentDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSegmentDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartSegmentDetectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSegmentDetectionOutcomeCallable RekognitionClient::StartSegmentDetectionCallable(const StartSegmentDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSegmentDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSegmentDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StartSegmentDetectionAsync(const StartSegmentDetectionRequest& request, const StartSegmentDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartSegmentDetection(request), context);
    } );
}

StartStreamProcessorOutcome RekognitionClient::StartStreamProcessor(const StartStreamProcessorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartStreamProcessorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartStreamProcessor(request), context);
    } );
}

StartTextDetectionOutcome RekognitionClient::StartTextDetection(const StartTextDetectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTextDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTextDetection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartTextDetectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTextDetectionOutcomeCallable RekognitionClient::StartTextDetectionCallable(const StartTextDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTextDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTextDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StartTextDetectionAsync(const StartTextDetectionRequest& request, const StartTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartTextDetection(request), context);
    } );
}

StopProjectVersionOutcome RekognitionClient::StopProjectVersion(const StopProjectVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopProjectVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopProjectVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopProjectVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopProjectVersionOutcomeCallable RekognitionClient::StopProjectVersionCallable(const StopProjectVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopProjectVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopProjectVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::StopProjectVersionAsync(const StopProjectVersionRequest& request, const StopProjectVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopProjectVersion(request), context);
    } );
}

StopStreamProcessorOutcome RekognitionClient::StopStreamProcessor(const StopStreamProcessorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopStreamProcessorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopStreamProcessor(request), context);
    } );
}

TagResourceOutcome RekognitionClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable RekognitionClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome RekognitionClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable RekognitionClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDatasetEntriesOutcome RekognitionClient::UpdateDatasetEntries(const UpdateDatasetEntriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatasetEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatasetEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDatasetEntriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetEntriesOutcomeCallable RekognitionClient::UpdateDatasetEntriesCallable(const UpdateDatasetEntriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetEntriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatasetEntries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::UpdateDatasetEntriesAsync(const UpdateDatasetEntriesRequest& request, const UpdateDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDatasetEntries(request), context);
    } );
}

UpdateStreamProcessorOutcome RekognitionClient::UpdateStreamProcessor(const UpdateStreamProcessorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStreamProcessor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateStreamProcessorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStreamProcessorOutcomeCallable RekognitionClient::UpdateStreamProcessorCallable(const UpdateStreamProcessorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamProcessorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamProcessor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RekognitionClient::UpdateStreamProcessorAsync(const UpdateStreamProcessorRequest& request, const UpdateStreamProcessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStreamProcessor(request), context);
    } );
}

