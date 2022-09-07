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

#include <aws/comprehend/ComprehendClient.h>
#include <aws/comprehend/ComprehendEndpoint.h>
#include <aws/comprehend/ComprehendErrorMarshaller.h>
#include <aws/comprehend/model/BatchDetectDominantLanguageRequest.h>
#include <aws/comprehend/model/BatchDetectEntitiesRequest.h>
#include <aws/comprehend/model/BatchDetectKeyPhrasesRequest.h>
#include <aws/comprehend/model/BatchDetectSentimentRequest.h>
#include <aws/comprehend/model/BatchDetectSyntaxRequest.h>
#include <aws/comprehend/model/ClassifyDocumentRequest.h>
#include <aws/comprehend/model/ContainsPiiEntitiesRequest.h>
#include <aws/comprehend/model/CreateDocumentClassifierRequest.h>
#include <aws/comprehend/model/CreateEndpointRequest.h>
#include <aws/comprehend/model/CreateEntityRecognizerRequest.h>
#include <aws/comprehend/model/DeleteDocumentClassifierRequest.h>
#include <aws/comprehend/model/DeleteEndpointRequest.h>
#include <aws/comprehend/model/DeleteEntityRecognizerRequest.h>
#include <aws/comprehend/model/DeleteResourcePolicyRequest.h>
#include <aws/comprehend/model/DescribeDocumentClassificationJobRequest.h>
#include <aws/comprehend/model/DescribeDocumentClassifierRequest.h>
#include <aws/comprehend/model/DescribeDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeEndpointRequest.h>
#include <aws/comprehend/model/DescribeEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeEntityRecognizerRequest.h>
#include <aws/comprehend/model/DescribeEventsDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribePiiEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeResourcePolicyRequest.h>
#include <aws/comprehend/model/DescribeSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeTargetedSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeTopicsDetectionJobRequest.h>
#include <aws/comprehend/model/DetectDominantLanguageRequest.h>
#include <aws/comprehend/model/DetectEntitiesRequest.h>
#include <aws/comprehend/model/DetectKeyPhrasesRequest.h>
#include <aws/comprehend/model/DetectPiiEntitiesRequest.h>
#include <aws/comprehend/model/DetectSentimentRequest.h>
#include <aws/comprehend/model/DetectSyntaxRequest.h>
#include <aws/comprehend/model/ImportModelRequest.h>
#include <aws/comprehend/model/ListDocumentClassificationJobsRequest.h>
#include <aws/comprehend/model/ListDocumentClassifierSummariesRequest.h>
#include <aws/comprehend/model/ListDocumentClassifiersRequest.h>
#include <aws/comprehend/model/ListDominantLanguageDetectionJobsRequest.h>
#include <aws/comprehend/model/ListEndpointsRequest.h>
#include <aws/comprehend/model/ListEntitiesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListEntityRecognizerSummariesRequest.h>
#include <aws/comprehend/model/ListEntityRecognizersRequest.h>
#include <aws/comprehend/model/ListEventsDetectionJobsRequest.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListPiiEntitiesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListSentimentDetectionJobsRequest.h>
#include <aws/comprehend/model/ListTagsForResourceRequest.h>
#include <aws/comprehend/model/ListTargetedSentimentDetectionJobsRequest.h>
#include <aws/comprehend/model/ListTopicsDetectionJobsRequest.h>
#include <aws/comprehend/model/PutResourcePolicyRequest.h>
#include <aws/comprehend/model/StartDocumentClassificationJobRequest.h>
#include <aws/comprehend/model/StartDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/StartEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StartEventsDetectionJobRequest.h>
#include <aws/comprehend/model/StartKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/StartPiiEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StartSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StartTargetedSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StartTopicsDetectionJobRequest.h>
#include <aws/comprehend/model/StopDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/StopEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StopEventsDetectionJobRequest.h>
#include <aws/comprehend/model/StopKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/StopPiiEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StopSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StopTargetedSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StopTrainingDocumentClassifierRequest.h>
#include <aws/comprehend/model/StopTrainingEntityRecognizerRequest.h>
#include <aws/comprehend/model/TagResourceRequest.h>
#include <aws/comprehend/model/UntagResourceRequest.h>
#include <aws/comprehend/model/UpdateEndpointRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Comprehend;
using namespace Aws::Comprehend::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "comprehend";
static const char* ALLOCATION_TAG = "ComprehendClient";

ComprehendClient::ComprehendClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendClient::ComprehendClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendClient::ComprehendClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendClient::~ComprehendClient()
{
}

void ComprehendClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Comprehend");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ComprehendEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ComprehendClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchDetectDominantLanguageOutcome ComprehendClient::BatchDetectDominantLanguage(const BatchDetectDominantLanguageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectDominantLanguageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectDominantLanguageOutcomeCallable ComprehendClient::BatchDetectDominantLanguageCallable(const BatchDetectDominantLanguageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectDominantLanguageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectDominantLanguage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientBatchDetectDominantLanguageAsyncHelper(ComprehendClient const * const clientThis, const BatchDetectDominantLanguageRequest& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDetectDominantLanguage(request), context);
}

void ComprehendClient::BatchDetectDominantLanguageAsync(const BatchDetectDominantLanguageRequest& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientBatchDetectDominantLanguageAsyncHelper( this, request, handler, context ); } );
}

BatchDetectEntitiesOutcome ComprehendClient::BatchDetectEntities(const BatchDetectEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectEntitiesOutcomeCallable ComprehendClient::BatchDetectEntitiesCallable(const BatchDetectEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientBatchDetectEntitiesAsyncHelper(ComprehendClient const * const clientThis, const BatchDetectEntitiesRequest& request, const BatchDetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDetectEntities(request), context);
}

void ComprehendClient::BatchDetectEntitiesAsync(const BatchDetectEntitiesRequest& request, const BatchDetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientBatchDetectEntitiesAsyncHelper( this, request, handler, context ); } );
}

BatchDetectKeyPhrasesOutcome ComprehendClient::BatchDetectKeyPhrases(const BatchDetectKeyPhrasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectKeyPhrasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectKeyPhrasesOutcomeCallable ComprehendClient::BatchDetectKeyPhrasesCallable(const BatchDetectKeyPhrasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectKeyPhrasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectKeyPhrases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientBatchDetectKeyPhrasesAsyncHelper(ComprehendClient const * const clientThis, const BatchDetectKeyPhrasesRequest& request, const BatchDetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDetectKeyPhrases(request), context);
}

void ComprehendClient::BatchDetectKeyPhrasesAsync(const BatchDetectKeyPhrasesRequest& request, const BatchDetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientBatchDetectKeyPhrasesAsyncHelper( this, request, handler, context ); } );
}

BatchDetectSentimentOutcome ComprehendClient::BatchDetectSentiment(const BatchDetectSentimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectSentimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectSentimentOutcomeCallable ComprehendClient::BatchDetectSentimentCallable(const BatchDetectSentimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectSentimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectSentiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientBatchDetectSentimentAsyncHelper(ComprehendClient const * const clientThis, const BatchDetectSentimentRequest& request, const BatchDetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDetectSentiment(request), context);
}

void ComprehendClient::BatchDetectSentimentAsync(const BatchDetectSentimentRequest& request, const BatchDetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientBatchDetectSentimentAsyncHelper( this, request, handler, context ); } );
}

BatchDetectSyntaxOutcome ComprehendClient::BatchDetectSyntax(const BatchDetectSyntaxRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectSyntaxOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectSyntaxOutcomeCallable ComprehendClient::BatchDetectSyntaxCallable(const BatchDetectSyntaxRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectSyntaxOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectSyntax(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientBatchDetectSyntaxAsyncHelper(ComprehendClient const * const clientThis, const BatchDetectSyntaxRequest& request, const BatchDetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDetectSyntax(request), context);
}

void ComprehendClient::BatchDetectSyntaxAsync(const BatchDetectSyntaxRequest& request, const BatchDetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientBatchDetectSyntaxAsyncHelper( this, request, handler, context ); } );
}

ClassifyDocumentOutcome ComprehendClient::ClassifyDocument(const ClassifyDocumentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ClassifyDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ClassifyDocumentOutcomeCallable ComprehendClient::ClassifyDocumentCallable(const ClassifyDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ClassifyDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ClassifyDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientClassifyDocumentAsyncHelper(ComprehendClient const * const clientThis, const ClassifyDocumentRequest& request, const ClassifyDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ClassifyDocument(request), context);
}

void ComprehendClient::ClassifyDocumentAsync(const ClassifyDocumentRequest& request, const ClassifyDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientClassifyDocumentAsyncHelper( this, request, handler, context ); } );
}

ContainsPiiEntitiesOutcome ComprehendClient::ContainsPiiEntities(const ContainsPiiEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ContainsPiiEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ContainsPiiEntitiesOutcomeCallable ComprehendClient::ContainsPiiEntitiesCallable(const ContainsPiiEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ContainsPiiEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ContainsPiiEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientContainsPiiEntitiesAsyncHelper(ComprehendClient const * const clientThis, const ContainsPiiEntitiesRequest& request, const ContainsPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ContainsPiiEntities(request), context);
}

void ComprehendClient::ContainsPiiEntitiesAsync(const ContainsPiiEntitiesRequest& request, const ContainsPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientContainsPiiEntitiesAsyncHelper( this, request, handler, context ); } );
}

CreateDocumentClassifierOutcome ComprehendClient::CreateDocumentClassifier(const CreateDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDocumentClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDocumentClassifierOutcomeCallable ComprehendClient::CreateDocumentClassifierCallable(const CreateDocumentClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDocumentClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDocumentClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientCreateDocumentClassifierAsyncHelper(ComprehendClient const * const clientThis, const CreateDocumentClassifierRequest& request, const CreateDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDocumentClassifier(request), context);
}

void ComprehendClient::CreateDocumentClassifierAsync(const CreateDocumentClassifierRequest& request, const CreateDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientCreateDocumentClassifierAsyncHelper( this, request, handler, context ); } );
}

CreateEndpointOutcome ComprehendClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointOutcomeCallable ComprehendClient::CreateEndpointCallable(const CreateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientCreateEndpointAsyncHelper(ComprehendClient const * const clientThis, const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEndpoint(request), context);
}

void ComprehendClient::CreateEndpointAsync(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientCreateEndpointAsyncHelper( this, request, handler, context ); } );
}

CreateEntityRecognizerOutcome ComprehendClient::CreateEntityRecognizer(const CreateEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEntityRecognizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEntityRecognizerOutcomeCallable ComprehendClient::CreateEntityRecognizerCallable(const CreateEntityRecognizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEntityRecognizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEntityRecognizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientCreateEntityRecognizerAsyncHelper(ComprehendClient const * const clientThis, const CreateEntityRecognizerRequest& request, const CreateEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEntityRecognizer(request), context);
}

void ComprehendClient::CreateEntityRecognizerAsync(const CreateEntityRecognizerRequest& request, const CreateEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientCreateEntityRecognizerAsyncHelper( this, request, handler, context ); } );
}

DeleteDocumentClassifierOutcome ComprehendClient::DeleteDocumentClassifier(const DeleteDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDocumentClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDocumentClassifierOutcomeCallable ComprehendClient::DeleteDocumentClassifierCallable(const DeleteDocumentClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDocumentClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDocumentClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDeleteDocumentClassifierAsyncHelper(ComprehendClient const * const clientThis, const DeleteDocumentClassifierRequest& request, const DeleteDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDocumentClassifier(request), context);
}

void ComprehendClient::DeleteDocumentClassifierAsync(const DeleteDocumentClassifierRequest& request, const DeleteDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDeleteDocumentClassifierAsyncHelper( this, request, handler, context ); } );
}

DeleteEndpointOutcome ComprehendClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointOutcomeCallable ComprehendClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDeleteEndpointAsyncHelper(ComprehendClient const * const clientThis, const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEndpoint(request), context);
}

void ComprehendClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDeleteEndpointAsyncHelper( this, request, handler, context ); } );
}

DeleteEntityRecognizerOutcome ComprehendClient::DeleteEntityRecognizer(const DeleteEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEntityRecognizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEntityRecognizerOutcomeCallable ComprehendClient::DeleteEntityRecognizerCallable(const DeleteEntityRecognizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEntityRecognizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEntityRecognizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDeleteEntityRecognizerAsyncHelper(ComprehendClient const * const clientThis, const DeleteEntityRecognizerRequest& request, const DeleteEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEntityRecognizer(request), context);
}

void ComprehendClient::DeleteEntityRecognizerAsync(const DeleteEntityRecognizerRequest& request, const DeleteEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDeleteEntityRecognizerAsyncHelper( this, request, handler, context ); } );
}

DeleteResourcePolicyOutcome ComprehendClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable ComprehendClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDeleteResourcePolicyAsyncHelper(ComprehendClient const * const clientThis, const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourcePolicy(request), context);
}

void ComprehendClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDeleteResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

DescribeDocumentClassificationJobOutcome ComprehendClient::DescribeDocumentClassificationJob(const DescribeDocumentClassificationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDocumentClassificationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDocumentClassificationJobOutcomeCallable ComprehendClient::DescribeDocumentClassificationJobCallable(const DescribeDocumentClassificationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDocumentClassificationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDocumentClassificationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeDocumentClassificationJobAsyncHelper(ComprehendClient const * const clientThis, const DescribeDocumentClassificationJobRequest& request, const DescribeDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDocumentClassificationJob(request), context);
}

void ComprehendClient::DescribeDocumentClassificationJobAsync(const DescribeDocumentClassificationJobRequest& request, const DescribeDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeDocumentClassificationJobAsyncHelper( this, request, handler, context ); } );
}

DescribeDocumentClassifierOutcome ComprehendClient::DescribeDocumentClassifier(const DescribeDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDocumentClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDocumentClassifierOutcomeCallable ComprehendClient::DescribeDocumentClassifierCallable(const DescribeDocumentClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDocumentClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDocumentClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeDocumentClassifierAsyncHelper(ComprehendClient const * const clientThis, const DescribeDocumentClassifierRequest& request, const DescribeDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDocumentClassifier(request), context);
}

void ComprehendClient::DescribeDocumentClassifierAsync(const DescribeDocumentClassifierRequest& request, const DescribeDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeDocumentClassifierAsyncHelper( this, request, handler, context ); } );
}

DescribeDominantLanguageDetectionJobOutcome ComprehendClient::DescribeDominantLanguageDetectionJob(const DescribeDominantLanguageDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDominantLanguageDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDominantLanguageDetectionJobOutcomeCallable ComprehendClient::DescribeDominantLanguageDetectionJobCallable(const DescribeDominantLanguageDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDominantLanguageDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDominantLanguageDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeDominantLanguageDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const DescribeDominantLanguageDetectionJobRequest& request, const DescribeDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDominantLanguageDetectionJob(request), context);
}

void ComprehendClient::DescribeDominantLanguageDetectionJobAsync(const DescribeDominantLanguageDetectionJobRequest& request, const DescribeDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeDominantLanguageDetectionJobAsyncHelper( this, request, handler, context ); } );
}

DescribeEndpointOutcome ComprehendClient::DescribeEndpoint(const DescribeEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointOutcomeCallable ComprehendClient::DescribeEndpointCallable(const DescribeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeEndpointAsyncHelper(ComprehendClient const * const clientThis, const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEndpoint(request), context);
}

void ComprehendClient::DescribeEndpointAsync(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeEndpointAsyncHelper( this, request, handler, context ); } );
}

DescribeEntitiesDetectionJobOutcome ComprehendClient::DescribeEntitiesDetectionJob(const DescribeEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEntitiesDetectionJobOutcomeCallable ComprehendClient::DescribeEntitiesDetectionJobCallable(const DescribeEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeEntitiesDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const DescribeEntitiesDetectionJobRequest& request, const DescribeEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEntitiesDetectionJob(request), context);
}

void ComprehendClient::DescribeEntitiesDetectionJobAsync(const DescribeEntitiesDetectionJobRequest& request, const DescribeEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeEntitiesDetectionJobAsyncHelper( this, request, handler, context ); } );
}

DescribeEntityRecognizerOutcome ComprehendClient::DescribeEntityRecognizer(const DescribeEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEntityRecognizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEntityRecognizerOutcomeCallable ComprehendClient::DescribeEntityRecognizerCallable(const DescribeEntityRecognizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEntityRecognizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEntityRecognizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeEntityRecognizerAsyncHelper(ComprehendClient const * const clientThis, const DescribeEntityRecognizerRequest& request, const DescribeEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEntityRecognizer(request), context);
}

void ComprehendClient::DescribeEntityRecognizerAsync(const DescribeEntityRecognizerRequest& request, const DescribeEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeEntityRecognizerAsyncHelper( this, request, handler, context ); } );
}

DescribeEventsDetectionJobOutcome ComprehendClient::DescribeEventsDetectionJob(const DescribeEventsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventsDetectionJobOutcomeCallable ComprehendClient::DescribeEventsDetectionJobCallable(const DescribeEventsDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventsDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeEventsDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const DescribeEventsDetectionJobRequest& request, const DescribeEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventsDetectionJob(request), context);
}

void ComprehendClient::DescribeEventsDetectionJobAsync(const DescribeEventsDetectionJobRequest& request, const DescribeEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeEventsDetectionJobAsyncHelper( this, request, handler, context ); } );
}

DescribeKeyPhrasesDetectionJobOutcome ComprehendClient::DescribeKeyPhrasesDetectionJob(const DescribeKeyPhrasesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeKeyPhrasesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeKeyPhrasesDetectionJobOutcomeCallable ComprehendClient::DescribeKeyPhrasesDetectionJobCallable(const DescribeKeyPhrasesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeKeyPhrasesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeKeyPhrasesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeKeyPhrasesDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const DescribeKeyPhrasesDetectionJobRequest& request, const DescribeKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeKeyPhrasesDetectionJob(request), context);
}

void ComprehendClient::DescribeKeyPhrasesDetectionJobAsync(const DescribeKeyPhrasesDetectionJobRequest& request, const DescribeKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeKeyPhrasesDetectionJobAsyncHelper( this, request, handler, context ); } );
}

DescribePiiEntitiesDetectionJobOutcome ComprehendClient::DescribePiiEntitiesDetectionJob(const DescribePiiEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePiiEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePiiEntitiesDetectionJobOutcomeCallable ComprehendClient::DescribePiiEntitiesDetectionJobCallable(const DescribePiiEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePiiEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePiiEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribePiiEntitiesDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const DescribePiiEntitiesDetectionJobRequest& request, const DescribePiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePiiEntitiesDetectionJob(request), context);
}

void ComprehendClient::DescribePiiEntitiesDetectionJobAsync(const DescribePiiEntitiesDetectionJobRequest& request, const DescribePiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribePiiEntitiesDetectionJobAsyncHelper( this, request, handler, context ); } );
}

DescribeResourcePolicyOutcome ComprehendClient::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourcePolicyOutcomeCallable ComprehendClient::DescribeResourcePolicyCallable(const DescribeResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeResourcePolicyAsyncHelper(ComprehendClient const * const clientThis, const DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeResourcePolicy(request), context);
}

void ComprehendClient::DescribeResourcePolicyAsync(const DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

DescribeSentimentDetectionJobOutcome ComprehendClient::DescribeSentimentDetectionJob(const DescribeSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSentimentDetectionJobOutcomeCallable ComprehendClient::DescribeSentimentDetectionJobCallable(const DescribeSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeSentimentDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const DescribeSentimentDetectionJobRequest& request, const DescribeSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSentimentDetectionJob(request), context);
}

void ComprehendClient::DescribeSentimentDetectionJobAsync(const DescribeSentimentDetectionJobRequest& request, const DescribeSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeSentimentDetectionJobAsyncHelper( this, request, handler, context ); } );
}

DescribeTargetedSentimentDetectionJobOutcome ComprehendClient::DescribeTargetedSentimentDetectionJob(const DescribeTargetedSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTargetedSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTargetedSentimentDetectionJobOutcomeCallable ComprehendClient::DescribeTargetedSentimentDetectionJobCallable(const DescribeTargetedSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTargetedSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTargetedSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeTargetedSentimentDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const DescribeTargetedSentimentDetectionJobRequest& request, const DescribeTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTargetedSentimentDetectionJob(request), context);
}

void ComprehendClient::DescribeTargetedSentimentDetectionJobAsync(const DescribeTargetedSentimentDetectionJobRequest& request, const DescribeTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeTargetedSentimentDetectionJobAsyncHelper( this, request, handler, context ); } );
}

DescribeTopicsDetectionJobOutcome ComprehendClient::DescribeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTopicsDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTopicsDetectionJobOutcomeCallable ComprehendClient::DescribeTopicsDetectionJobCallable(const DescribeTopicsDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTopicsDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTopicsDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDescribeTopicsDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const DescribeTopicsDetectionJobRequest& request, const DescribeTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTopicsDetectionJob(request), context);
}

void ComprehendClient::DescribeTopicsDetectionJobAsync(const DescribeTopicsDetectionJobRequest& request, const DescribeTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDescribeTopicsDetectionJobAsyncHelper( this, request, handler, context ); } );
}

DetectDominantLanguageOutcome ComprehendClient::DetectDominantLanguage(const DetectDominantLanguageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectDominantLanguageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectDominantLanguageOutcomeCallable ComprehendClient::DetectDominantLanguageCallable(const DetectDominantLanguageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectDominantLanguageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectDominantLanguage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDetectDominantLanguageAsyncHelper(ComprehendClient const * const clientThis, const DetectDominantLanguageRequest& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectDominantLanguage(request), context);
}

void ComprehendClient::DetectDominantLanguageAsync(const DetectDominantLanguageRequest& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDetectDominantLanguageAsyncHelper( this, request, handler, context ); } );
}

DetectEntitiesOutcome ComprehendClient::DetectEntities(const DetectEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectEntitiesOutcomeCallable ComprehendClient::DetectEntitiesCallable(const DetectEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDetectEntitiesAsyncHelper(ComprehendClient const * const clientThis, const DetectEntitiesRequest& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectEntities(request), context);
}

void ComprehendClient::DetectEntitiesAsync(const DetectEntitiesRequest& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDetectEntitiesAsyncHelper( this, request, handler, context ); } );
}

DetectKeyPhrasesOutcome ComprehendClient::DetectKeyPhrases(const DetectKeyPhrasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectKeyPhrasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectKeyPhrasesOutcomeCallable ComprehendClient::DetectKeyPhrasesCallable(const DetectKeyPhrasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectKeyPhrasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectKeyPhrases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDetectKeyPhrasesAsyncHelper(ComprehendClient const * const clientThis, const DetectKeyPhrasesRequest& request, const DetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectKeyPhrases(request), context);
}

void ComprehendClient::DetectKeyPhrasesAsync(const DetectKeyPhrasesRequest& request, const DetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDetectKeyPhrasesAsyncHelper( this, request, handler, context ); } );
}

DetectPiiEntitiesOutcome ComprehendClient::DetectPiiEntities(const DetectPiiEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectPiiEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectPiiEntitiesOutcomeCallable ComprehendClient::DetectPiiEntitiesCallable(const DetectPiiEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectPiiEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectPiiEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDetectPiiEntitiesAsyncHelper(ComprehendClient const * const clientThis, const DetectPiiEntitiesRequest& request, const DetectPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectPiiEntities(request), context);
}

void ComprehendClient::DetectPiiEntitiesAsync(const DetectPiiEntitiesRequest& request, const DetectPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDetectPiiEntitiesAsyncHelper( this, request, handler, context ); } );
}

DetectSentimentOutcome ComprehendClient::DetectSentiment(const DetectSentimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectSentimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectSentimentOutcomeCallable ComprehendClient::DetectSentimentCallable(const DetectSentimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectSentimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectSentiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDetectSentimentAsyncHelper(ComprehendClient const * const clientThis, const DetectSentimentRequest& request, const DetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectSentiment(request), context);
}

void ComprehendClient::DetectSentimentAsync(const DetectSentimentRequest& request, const DetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDetectSentimentAsyncHelper( this, request, handler, context ); } );
}

DetectSyntaxOutcome ComprehendClient::DetectSyntax(const DetectSyntaxRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectSyntaxOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectSyntaxOutcomeCallable ComprehendClient::DetectSyntaxCallable(const DetectSyntaxRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectSyntaxOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectSyntax(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientDetectSyntaxAsyncHelper(ComprehendClient const * const clientThis, const DetectSyntaxRequest& request, const DetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectSyntax(request), context);
}

void ComprehendClient::DetectSyntaxAsync(const DetectSyntaxRequest& request, const DetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientDetectSyntaxAsyncHelper( this, request, handler, context ); } );
}

ImportModelOutcome ComprehendClient::ImportModel(const ImportModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportModelOutcomeCallable ComprehendClient::ImportModelCallable(const ImportModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientImportModelAsyncHelper(ComprehendClient const * const clientThis, const ImportModelRequest& request, const ImportModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportModel(request), context);
}

void ComprehendClient::ImportModelAsync(const ImportModelRequest& request, const ImportModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientImportModelAsyncHelper( this, request, handler, context ); } );
}

ListDocumentClassificationJobsOutcome ComprehendClient::ListDocumentClassificationJobs(const ListDocumentClassificationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDocumentClassificationJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentClassificationJobsOutcomeCallable ComprehendClient::ListDocumentClassificationJobsCallable(const ListDocumentClassificationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentClassificationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocumentClassificationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListDocumentClassificationJobsAsyncHelper(ComprehendClient const * const clientThis, const ListDocumentClassificationJobsRequest& request, const ListDocumentClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDocumentClassificationJobs(request), context);
}

void ComprehendClient::ListDocumentClassificationJobsAsync(const ListDocumentClassificationJobsRequest& request, const ListDocumentClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListDocumentClassificationJobsAsyncHelper( this, request, handler, context ); } );
}

ListDocumentClassifierSummariesOutcome ComprehendClient::ListDocumentClassifierSummaries(const ListDocumentClassifierSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDocumentClassifierSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentClassifierSummariesOutcomeCallable ComprehendClient::ListDocumentClassifierSummariesCallable(const ListDocumentClassifierSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentClassifierSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocumentClassifierSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListDocumentClassifierSummariesAsyncHelper(ComprehendClient const * const clientThis, const ListDocumentClassifierSummariesRequest& request, const ListDocumentClassifierSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDocumentClassifierSummaries(request), context);
}

void ComprehendClient::ListDocumentClassifierSummariesAsync(const ListDocumentClassifierSummariesRequest& request, const ListDocumentClassifierSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListDocumentClassifierSummariesAsyncHelper( this, request, handler, context ); } );
}

ListDocumentClassifiersOutcome ComprehendClient::ListDocumentClassifiers(const ListDocumentClassifiersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDocumentClassifiersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentClassifiersOutcomeCallable ComprehendClient::ListDocumentClassifiersCallable(const ListDocumentClassifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentClassifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocumentClassifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListDocumentClassifiersAsyncHelper(ComprehendClient const * const clientThis, const ListDocumentClassifiersRequest& request, const ListDocumentClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDocumentClassifiers(request), context);
}

void ComprehendClient::ListDocumentClassifiersAsync(const ListDocumentClassifiersRequest& request, const ListDocumentClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListDocumentClassifiersAsyncHelper( this, request, handler, context ); } );
}

ListDominantLanguageDetectionJobsOutcome ComprehendClient::ListDominantLanguageDetectionJobs(const ListDominantLanguageDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDominantLanguageDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDominantLanguageDetectionJobsOutcomeCallable ComprehendClient::ListDominantLanguageDetectionJobsCallable(const ListDominantLanguageDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDominantLanguageDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDominantLanguageDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListDominantLanguageDetectionJobsAsyncHelper(ComprehendClient const * const clientThis, const ListDominantLanguageDetectionJobsRequest& request, const ListDominantLanguageDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDominantLanguageDetectionJobs(request), context);
}

void ComprehendClient::ListDominantLanguageDetectionJobsAsync(const ListDominantLanguageDetectionJobsRequest& request, const ListDominantLanguageDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListDominantLanguageDetectionJobsAsyncHelper( this, request, handler, context ); } );
}

ListEndpointsOutcome ComprehendClient::ListEndpoints(const ListEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEndpointsOutcomeCallable ComprehendClient::ListEndpointsCallable(const ListEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListEndpointsAsyncHelper(ComprehendClient const * const clientThis, const ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEndpoints(request), context);
}

void ComprehendClient::ListEndpointsAsync(const ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListEndpointsAsyncHelper( this, request, handler, context ); } );
}

ListEntitiesDetectionJobsOutcome ComprehendClient::ListEntitiesDetectionJobs(const ListEntitiesDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEntitiesDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntitiesDetectionJobsOutcomeCallable ComprehendClient::ListEntitiesDetectionJobsCallable(const ListEntitiesDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitiesDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntitiesDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListEntitiesDetectionJobsAsyncHelper(ComprehendClient const * const clientThis, const ListEntitiesDetectionJobsRequest& request, const ListEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEntitiesDetectionJobs(request), context);
}

void ComprehendClient::ListEntitiesDetectionJobsAsync(const ListEntitiesDetectionJobsRequest& request, const ListEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListEntitiesDetectionJobsAsyncHelper( this, request, handler, context ); } );
}

ListEntityRecognizerSummariesOutcome ComprehendClient::ListEntityRecognizerSummaries(const ListEntityRecognizerSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEntityRecognizerSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntityRecognizerSummariesOutcomeCallable ComprehendClient::ListEntityRecognizerSummariesCallable(const ListEntityRecognizerSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntityRecognizerSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntityRecognizerSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListEntityRecognizerSummariesAsyncHelper(ComprehendClient const * const clientThis, const ListEntityRecognizerSummariesRequest& request, const ListEntityRecognizerSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEntityRecognizerSummaries(request), context);
}

void ComprehendClient::ListEntityRecognizerSummariesAsync(const ListEntityRecognizerSummariesRequest& request, const ListEntityRecognizerSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListEntityRecognizerSummariesAsyncHelper( this, request, handler, context ); } );
}

ListEntityRecognizersOutcome ComprehendClient::ListEntityRecognizers(const ListEntityRecognizersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEntityRecognizersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntityRecognizersOutcomeCallable ComprehendClient::ListEntityRecognizersCallable(const ListEntityRecognizersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntityRecognizersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntityRecognizers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListEntityRecognizersAsyncHelper(ComprehendClient const * const clientThis, const ListEntityRecognizersRequest& request, const ListEntityRecognizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEntityRecognizers(request), context);
}

void ComprehendClient::ListEntityRecognizersAsync(const ListEntityRecognizersRequest& request, const ListEntityRecognizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListEntityRecognizersAsyncHelper( this, request, handler, context ); } );
}

ListEventsDetectionJobsOutcome ComprehendClient::ListEventsDetectionJobs(const ListEventsDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEventsDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventsDetectionJobsOutcomeCallable ComprehendClient::ListEventsDetectionJobsCallable(const ListEventsDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventsDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventsDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListEventsDetectionJobsAsyncHelper(ComprehendClient const * const clientThis, const ListEventsDetectionJobsRequest& request, const ListEventsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEventsDetectionJobs(request), context);
}

void ComprehendClient::ListEventsDetectionJobsAsync(const ListEventsDetectionJobsRequest& request, const ListEventsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListEventsDetectionJobsAsyncHelper( this, request, handler, context ); } );
}

ListKeyPhrasesDetectionJobsOutcome ComprehendClient::ListKeyPhrasesDetectionJobs(const ListKeyPhrasesDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListKeyPhrasesDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListKeyPhrasesDetectionJobsOutcomeCallable ComprehendClient::ListKeyPhrasesDetectionJobsCallable(const ListKeyPhrasesDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKeyPhrasesDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKeyPhrasesDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListKeyPhrasesDetectionJobsAsyncHelper(ComprehendClient const * const clientThis, const ListKeyPhrasesDetectionJobsRequest& request, const ListKeyPhrasesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListKeyPhrasesDetectionJobs(request), context);
}

void ComprehendClient::ListKeyPhrasesDetectionJobsAsync(const ListKeyPhrasesDetectionJobsRequest& request, const ListKeyPhrasesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListKeyPhrasesDetectionJobsAsyncHelper( this, request, handler, context ); } );
}

ListPiiEntitiesDetectionJobsOutcome ComprehendClient::ListPiiEntitiesDetectionJobs(const ListPiiEntitiesDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPiiEntitiesDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPiiEntitiesDetectionJobsOutcomeCallable ComprehendClient::ListPiiEntitiesDetectionJobsCallable(const ListPiiEntitiesDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPiiEntitiesDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPiiEntitiesDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListPiiEntitiesDetectionJobsAsyncHelper(ComprehendClient const * const clientThis, const ListPiiEntitiesDetectionJobsRequest& request, const ListPiiEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPiiEntitiesDetectionJobs(request), context);
}

void ComprehendClient::ListPiiEntitiesDetectionJobsAsync(const ListPiiEntitiesDetectionJobsRequest& request, const ListPiiEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListPiiEntitiesDetectionJobsAsyncHelper( this, request, handler, context ); } );
}

ListSentimentDetectionJobsOutcome ComprehendClient::ListSentimentDetectionJobs(const ListSentimentDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSentimentDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSentimentDetectionJobsOutcomeCallable ComprehendClient::ListSentimentDetectionJobsCallable(const ListSentimentDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSentimentDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSentimentDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListSentimentDetectionJobsAsyncHelper(ComprehendClient const * const clientThis, const ListSentimentDetectionJobsRequest& request, const ListSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSentimentDetectionJobs(request), context);
}

void ComprehendClient::ListSentimentDetectionJobsAsync(const ListSentimentDetectionJobsRequest& request, const ListSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListSentimentDetectionJobsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ComprehendClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ComprehendClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListTagsForResourceAsyncHelper(ComprehendClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ComprehendClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTargetedSentimentDetectionJobsOutcome ComprehendClient::ListTargetedSentimentDetectionJobs(const ListTargetedSentimentDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTargetedSentimentDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTargetedSentimentDetectionJobsOutcomeCallable ComprehendClient::ListTargetedSentimentDetectionJobsCallable(const ListTargetedSentimentDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetedSentimentDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargetedSentimentDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListTargetedSentimentDetectionJobsAsyncHelper(ComprehendClient const * const clientThis, const ListTargetedSentimentDetectionJobsRequest& request, const ListTargetedSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTargetedSentimentDetectionJobs(request), context);
}

void ComprehendClient::ListTargetedSentimentDetectionJobsAsync(const ListTargetedSentimentDetectionJobsRequest& request, const ListTargetedSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListTargetedSentimentDetectionJobsAsyncHelper( this, request, handler, context ); } );
}

ListTopicsDetectionJobsOutcome ComprehendClient::ListTopicsDetectionJobs(const ListTopicsDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTopicsDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTopicsDetectionJobsOutcomeCallable ComprehendClient::ListTopicsDetectionJobsCallable(const ListTopicsDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTopicsDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTopicsDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientListTopicsDetectionJobsAsyncHelper(ComprehendClient const * const clientThis, const ListTopicsDetectionJobsRequest& request, const ListTopicsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTopicsDetectionJobs(request), context);
}

void ComprehendClient::ListTopicsDetectionJobsAsync(const ListTopicsDetectionJobsRequest& request, const ListTopicsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientListTopicsDetectionJobsAsyncHelper( this, request, handler, context ); } );
}

PutResourcePolicyOutcome ComprehendClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable ComprehendClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientPutResourcePolicyAsyncHelper(ComprehendClient const * const clientThis, const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutResourcePolicy(request), context);
}

void ComprehendClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientPutResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

StartDocumentClassificationJobOutcome ComprehendClient::StartDocumentClassificationJob(const StartDocumentClassificationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDocumentClassificationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDocumentClassificationJobOutcomeCallable ComprehendClient::StartDocumentClassificationJobCallable(const StartDocumentClassificationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDocumentClassificationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDocumentClassificationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStartDocumentClassificationJobAsyncHelper(ComprehendClient const * const clientThis, const StartDocumentClassificationJobRequest& request, const StartDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDocumentClassificationJob(request), context);
}

void ComprehendClient::StartDocumentClassificationJobAsync(const StartDocumentClassificationJobRequest& request, const StartDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStartDocumentClassificationJobAsyncHelper( this, request, handler, context ); } );
}

StartDominantLanguageDetectionJobOutcome ComprehendClient::StartDominantLanguageDetectionJob(const StartDominantLanguageDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDominantLanguageDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDominantLanguageDetectionJobOutcomeCallable ComprehendClient::StartDominantLanguageDetectionJobCallable(const StartDominantLanguageDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDominantLanguageDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDominantLanguageDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStartDominantLanguageDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StartDominantLanguageDetectionJobRequest& request, const StartDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDominantLanguageDetectionJob(request), context);
}

void ComprehendClient::StartDominantLanguageDetectionJobAsync(const StartDominantLanguageDetectionJobRequest& request, const StartDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStartDominantLanguageDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StartEntitiesDetectionJobOutcome ComprehendClient::StartEntitiesDetectionJob(const StartEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartEntitiesDetectionJobOutcomeCallable ComprehendClient::StartEntitiesDetectionJobCallable(const StartEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStartEntitiesDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StartEntitiesDetectionJobRequest& request, const StartEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartEntitiesDetectionJob(request), context);
}

void ComprehendClient::StartEntitiesDetectionJobAsync(const StartEntitiesDetectionJobRequest& request, const StartEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStartEntitiesDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StartEventsDetectionJobOutcome ComprehendClient::StartEventsDetectionJob(const StartEventsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartEventsDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartEventsDetectionJobOutcomeCallable ComprehendClient::StartEventsDetectionJobCallable(const StartEventsDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartEventsDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartEventsDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStartEventsDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StartEventsDetectionJobRequest& request, const StartEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartEventsDetectionJob(request), context);
}

void ComprehendClient::StartEventsDetectionJobAsync(const StartEventsDetectionJobRequest& request, const StartEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStartEventsDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StartKeyPhrasesDetectionJobOutcome ComprehendClient::StartKeyPhrasesDetectionJob(const StartKeyPhrasesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartKeyPhrasesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartKeyPhrasesDetectionJobOutcomeCallable ComprehendClient::StartKeyPhrasesDetectionJobCallable(const StartKeyPhrasesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartKeyPhrasesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartKeyPhrasesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStartKeyPhrasesDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StartKeyPhrasesDetectionJobRequest& request, const StartKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartKeyPhrasesDetectionJob(request), context);
}

void ComprehendClient::StartKeyPhrasesDetectionJobAsync(const StartKeyPhrasesDetectionJobRequest& request, const StartKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStartKeyPhrasesDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StartPiiEntitiesDetectionJobOutcome ComprehendClient::StartPiiEntitiesDetectionJob(const StartPiiEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartPiiEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartPiiEntitiesDetectionJobOutcomeCallable ComprehendClient::StartPiiEntitiesDetectionJobCallable(const StartPiiEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPiiEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPiiEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStartPiiEntitiesDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StartPiiEntitiesDetectionJobRequest& request, const StartPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartPiiEntitiesDetectionJob(request), context);
}

void ComprehendClient::StartPiiEntitiesDetectionJobAsync(const StartPiiEntitiesDetectionJobRequest& request, const StartPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStartPiiEntitiesDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StartSentimentDetectionJobOutcome ComprehendClient::StartSentimentDetectionJob(const StartSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSentimentDetectionJobOutcomeCallable ComprehendClient::StartSentimentDetectionJobCallable(const StartSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStartSentimentDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StartSentimentDetectionJobRequest& request, const StartSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartSentimentDetectionJob(request), context);
}

void ComprehendClient::StartSentimentDetectionJobAsync(const StartSentimentDetectionJobRequest& request, const StartSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStartSentimentDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StartTargetedSentimentDetectionJobOutcome ComprehendClient::StartTargetedSentimentDetectionJob(const StartTargetedSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartTargetedSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTargetedSentimentDetectionJobOutcomeCallable ComprehendClient::StartTargetedSentimentDetectionJobCallable(const StartTargetedSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTargetedSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTargetedSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStartTargetedSentimentDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StartTargetedSentimentDetectionJobRequest& request, const StartTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartTargetedSentimentDetectionJob(request), context);
}

void ComprehendClient::StartTargetedSentimentDetectionJobAsync(const StartTargetedSentimentDetectionJobRequest& request, const StartTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStartTargetedSentimentDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StartTopicsDetectionJobOutcome ComprehendClient::StartTopicsDetectionJob(const StartTopicsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartTopicsDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTopicsDetectionJobOutcomeCallable ComprehendClient::StartTopicsDetectionJobCallable(const StartTopicsDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTopicsDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTopicsDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStartTopicsDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StartTopicsDetectionJobRequest& request, const StartTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartTopicsDetectionJob(request), context);
}

void ComprehendClient::StartTopicsDetectionJobAsync(const StartTopicsDetectionJobRequest& request, const StartTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStartTopicsDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StopDominantLanguageDetectionJobOutcome ComprehendClient::StopDominantLanguageDetectionJob(const StopDominantLanguageDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDominantLanguageDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopDominantLanguageDetectionJobOutcomeCallable ComprehendClient::StopDominantLanguageDetectionJobCallable(const StopDominantLanguageDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDominantLanguageDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDominantLanguageDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStopDominantLanguageDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StopDominantLanguageDetectionJobRequest& request, const StopDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDominantLanguageDetectionJob(request), context);
}

void ComprehendClient::StopDominantLanguageDetectionJobAsync(const StopDominantLanguageDetectionJobRequest& request, const StopDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStopDominantLanguageDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StopEntitiesDetectionJobOutcome ComprehendClient::StopEntitiesDetectionJob(const StopEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEntitiesDetectionJobOutcomeCallable ComprehendClient::StopEntitiesDetectionJobCallable(const StopEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStopEntitiesDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StopEntitiesDetectionJobRequest& request, const StopEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopEntitiesDetectionJob(request), context);
}

void ComprehendClient::StopEntitiesDetectionJobAsync(const StopEntitiesDetectionJobRequest& request, const StopEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStopEntitiesDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StopEventsDetectionJobOutcome ComprehendClient::StopEventsDetectionJob(const StopEventsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopEventsDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEventsDetectionJobOutcomeCallable ComprehendClient::StopEventsDetectionJobCallable(const StopEventsDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEventsDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEventsDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStopEventsDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StopEventsDetectionJobRequest& request, const StopEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopEventsDetectionJob(request), context);
}

void ComprehendClient::StopEventsDetectionJobAsync(const StopEventsDetectionJobRequest& request, const StopEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStopEventsDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StopKeyPhrasesDetectionJobOutcome ComprehendClient::StopKeyPhrasesDetectionJob(const StopKeyPhrasesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopKeyPhrasesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopKeyPhrasesDetectionJobOutcomeCallable ComprehendClient::StopKeyPhrasesDetectionJobCallable(const StopKeyPhrasesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopKeyPhrasesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopKeyPhrasesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStopKeyPhrasesDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StopKeyPhrasesDetectionJobRequest& request, const StopKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopKeyPhrasesDetectionJob(request), context);
}

void ComprehendClient::StopKeyPhrasesDetectionJobAsync(const StopKeyPhrasesDetectionJobRequest& request, const StopKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStopKeyPhrasesDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StopPiiEntitiesDetectionJobOutcome ComprehendClient::StopPiiEntitiesDetectionJob(const StopPiiEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopPiiEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopPiiEntitiesDetectionJobOutcomeCallable ComprehendClient::StopPiiEntitiesDetectionJobCallable(const StopPiiEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopPiiEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopPiiEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStopPiiEntitiesDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StopPiiEntitiesDetectionJobRequest& request, const StopPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopPiiEntitiesDetectionJob(request), context);
}

void ComprehendClient::StopPiiEntitiesDetectionJobAsync(const StopPiiEntitiesDetectionJobRequest& request, const StopPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStopPiiEntitiesDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StopSentimentDetectionJobOutcome ComprehendClient::StopSentimentDetectionJob(const StopSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopSentimentDetectionJobOutcomeCallable ComprehendClient::StopSentimentDetectionJobCallable(const StopSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStopSentimentDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StopSentimentDetectionJobRequest& request, const StopSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopSentimentDetectionJob(request), context);
}

void ComprehendClient::StopSentimentDetectionJobAsync(const StopSentimentDetectionJobRequest& request, const StopSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStopSentimentDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StopTargetedSentimentDetectionJobOutcome ComprehendClient::StopTargetedSentimentDetectionJob(const StopTargetedSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTargetedSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTargetedSentimentDetectionJobOutcomeCallable ComprehendClient::StopTargetedSentimentDetectionJobCallable(const StopTargetedSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTargetedSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTargetedSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStopTargetedSentimentDetectionJobAsyncHelper(ComprehendClient const * const clientThis, const StopTargetedSentimentDetectionJobRequest& request, const StopTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopTargetedSentimentDetectionJob(request), context);
}

void ComprehendClient::StopTargetedSentimentDetectionJobAsync(const StopTargetedSentimentDetectionJobRequest& request, const StopTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStopTargetedSentimentDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StopTrainingDocumentClassifierOutcome ComprehendClient::StopTrainingDocumentClassifier(const StopTrainingDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTrainingDocumentClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTrainingDocumentClassifierOutcomeCallable ComprehendClient::StopTrainingDocumentClassifierCallable(const StopTrainingDocumentClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTrainingDocumentClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTrainingDocumentClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStopTrainingDocumentClassifierAsyncHelper(ComprehendClient const * const clientThis, const StopTrainingDocumentClassifierRequest& request, const StopTrainingDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopTrainingDocumentClassifier(request), context);
}

void ComprehendClient::StopTrainingDocumentClassifierAsync(const StopTrainingDocumentClassifierRequest& request, const StopTrainingDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStopTrainingDocumentClassifierAsyncHelper( this, request, handler, context ); } );
}

StopTrainingEntityRecognizerOutcome ComprehendClient::StopTrainingEntityRecognizer(const StopTrainingEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTrainingEntityRecognizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTrainingEntityRecognizerOutcomeCallable ComprehendClient::StopTrainingEntityRecognizerCallable(const StopTrainingEntityRecognizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTrainingEntityRecognizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTrainingEntityRecognizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientStopTrainingEntityRecognizerAsyncHelper(ComprehendClient const * const clientThis, const StopTrainingEntityRecognizerRequest& request, const StopTrainingEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopTrainingEntityRecognizer(request), context);
}

void ComprehendClient::StopTrainingEntityRecognizerAsync(const StopTrainingEntityRecognizerRequest& request, const StopTrainingEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientStopTrainingEntityRecognizerAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome ComprehendClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ComprehendClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientTagResourceAsyncHelper(ComprehendClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ComprehendClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome ComprehendClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ComprehendClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientUntagResourceAsyncHelper(ComprehendClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ComprehendClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateEndpointOutcome ComprehendClient::UpdateEndpoint(const UpdateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointOutcomeCallable ComprehendClient::UpdateEndpointCallable(const UpdateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClientUpdateEndpointAsyncHelper(ComprehendClient const * const clientThis, const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEndpoint(request), context);
}

void ComprehendClient::UpdateEndpointAsync(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendClientUpdateEndpointAsyncHelper( this, request, handler, context ); } );
}

