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

#include <aws/transcribe/TranscribeServiceClient.h>
#include <aws/transcribe/TranscribeServiceEndpoint.h>
#include <aws/transcribe/TranscribeServiceErrorMarshaller.h>
#include <aws/transcribe/model/CreateCallAnalyticsCategoryRequest.h>
#include <aws/transcribe/model/CreateLanguageModelRequest.h>
#include <aws/transcribe/model/CreateMedicalVocabularyRequest.h>
#include <aws/transcribe/model/CreateVocabularyRequest.h>
#include <aws/transcribe/model/CreateVocabularyFilterRequest.h>
#include <aws/transcribe/model/DeleteCallAnalyticsCategoryRequest.h>
#include <aws/transcribe/model/DeleteCallAnalyticsJobRequest.h>
#include <aws/transcribe/model/DeleteLanguageModelRequest.h>
#include <aws/transcribe/model/DeleteMedicalTranscriptionJobRequest.h>
#include <aws/transcribe/model/DeleteMedicalVocabularyRequest.h>
#include <aws/transcribe/model/DeleteTranscriptionJobRequest.h>
#include <aws/transcribe/model/DeleteVocabularyRequest.h>
#include <aws/transcribe/model/DeleteVocabularyFilterRequest.h>
#include <aws/transcribe/model/DescribeLanguageModelRequest.h>
#include <aws/transcribe/model/GetCallAnalyticsCategoryRequest.h>
#include <aws/transcribe/model/GetCallAnalyticsJobRequest.h>
#include <aws/transcribe/model/GetMedicalTranscriptionJobRequest.h>
#include <aws/transcribe/model/GetMedicalVocabularyRequest.h>
#include <aws/transcribe/model/GetTranscriptionJobRequest.h>
#include <aws/transcribe/model/GetVocabularyRequest.h>
#include <aws/transcribe/model/GetVocabularyFilterRequest.h>
#include <aws/transcribe/model/ListCallAnalyticsCategoriesRequest.h>
#include <aws/transcribe/model/ListCallAnalyticsJobsRequest.h>
#include <aws/transcribe/model/ListLanguageModelsRequest.h>
#include <aws/transcribe/model/ListMedicalTranscriptionJobsRequest.h>
#include <aws/transcribe/model/ListMedicalVocabulariesRequest.h>
#include <aws/transcribe/model/ListTagsForResourceRequest.h>
#include <aws/transcribe/model/ListTranscriptionJobsRequest.h>
#include <aws/transcribe/model/ListVocabulariesRequest.h>
#include <aws/transcribe/model/ListVocabularyFiltersRequest.h>
#include <aws/transcribe/model/StartCallAnalyticsJobRequest.h>
#include <aws/transcribe/model/StartMedicalTranscriptionJobRequest.h>
#include <aws/transcribe/model/StartTranscriptionJobRequest.h>
#include <aws/transcribe/model/TagResourceRequest.h>
#include <aws/transcribe/model/UntagResourceRequest.h>
#include <aws/transcribe/model/UpdateCallAnalyticsCategoryRequest.h>
#include <aws/transcribe/model/UpdateMedicalVocabularyRequest.h>
#include <aws/transcribe/model/UpdateVocabularyRequest.h>
#include <aws/transcribe/model/UpdateVocabularyFilterRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TranscribeService;
using namespace Aws::TranscribeService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "transcribe";
static const char* ALLOCATION_TAG = "TranscribeServiceClient";

TranscribeServiceClient::TranscribeServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeServiceClient::~TranscribeServiceClient()
{
}

void TranscribeServiceClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Transcribe");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + TranscribeServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void TranscribeServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateCallAnalyticsCategoryOutcome TranscribeServiceClient::CreateCallAnalyticsCategory(const CreateCallAnalyticsCategoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCallAnalyticsCategoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCallAnalyticsCategoryOutcomeCallable TranscribeServiceClient::CreateCallAnalyticsCategoryCallable(const CreateCallAnalyticsCategoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCallAnalyticsCategoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCallAnalyticsCategory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientCreateCallAnalyticsCategoryAsyncHelper(TranscribeServiceClient const * const clientThis, const CreateCallAnalyticsCategoryRequest& request, const CreateCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCallAnalyticsCategory(request), context);
}

void TranscribeServiceClient::CreateCallAnalyticsCategoryAsync(const CreateCallAnalyticsCategoryRequest& request, const CreateCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientCreateCallAnalyticsCategoryAsyncHelper( this, request, handler, context ); } );
}

CreateLanguageModelOutcome TranscribeServiceClient::CreateLanguageModel(const CreateLanguageModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLanguageModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLanguageModelOutcomeCallable TranscribeServiceClient::CreateLanguageModelCallable(const CreateLanguageModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLanguageModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLanguageModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientCreateLanguageModelAsyncHelper(TranscribeServiceClient const * const clientThis, const CreateLanguageModelRequest& request, const CreateLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLanguageModel(request), context);
}

void TranscribeServiceClient::CreateLanguageModelAsync(const CreateLanguageModelRequest& request, const CreateLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientCreateLanguageModelAsyncHelper( this, request, handler, context ); } );
}

CreateMedicalVocabularyOutcome TranscribeServiceClient::CreateMedicalVocabulary(const CreateMedicalVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateMedicalVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMedicalVocabularyOutcomeCallable TranscribeServiceClient::CreateMedicalVocabularyCallable(const CreateMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientCreateMedicalVocabularyAsyncHelper(TranscribeServiceClient const * const clientThis, const CreateMedicalVocabularyRequest& request, const CreateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMedicalVocabulary(request), context);
}

void TranscribeServiceClient::CreateMedicalVocabularyAsync(const CreateMedicalVocabularyRequest& request, const CreateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientCreateMedicalVocabularyAsyncHelper( this, request, handler, context ); } );
}

CreateVocabularyOutcome TranscribeServiceClient::CreateVocabulary(const CreateVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVocabularyOutcomeCallable TranscribeServiceClient::CreateVocabularyCallable(const CreateVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientCreateVocabularyAsyncHelper(TranscribeServiceClient const * const clientThis, const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVocabulary(request), context);
}

void TranscribeServiceClient::CreateVocabularyAsync(const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientCreateVocabularyAsyncHelper( this, request, handler, context ); } );
}

CreateVocabularyFilterOutcome TranscribeServiceClient::CreateVocabularyFilter(const CreateVocabularyFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateVocabularyFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVocabularyFilterOutcomeCallable TranscribeServiceClient::CreateVocabularyFilterCallable(const CreateVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientCreateVocabularyFilterAsyncHelper(TranscribeServiceClient const * const clientThis, const CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVocabularyFilter(request), context);
}

void TranscribeServiceClient::CreateVocabularyFilterAsync(const CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientCreateVocabularyFilterAsyncHelper( this, request, handler, context ); } );
}

DeleteCallAnalyticsCategoryOutcome TranscribeServiceClient::DeleteCallAnalyticsCategory(const DeleteCallAnalyticsCategoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCallAnalyticsCategoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCallAnalyticsCategoryOutcomeCallable TranscribeServiceClient::DeleteCallAnalyticsCategoryCallable(const DeleteCallAnalyticsCategoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCallAnalyticsCategoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCallAnalyticsCategory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientDeleteCallAnalyticsCategoryAsyncHelper(TranscribeServiceClient const * const clientThis, const DeleteCallAnalyticsCategoryRequest& request, const DeleteCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCallAnalyticsCategory(request), context);
}

void TranscribeServiceClient::DeleteCallAnalyticsCategoryAsync(const DeleteCallAnalyticsCategoryRequest& request, const DeleteCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientDeleteCallAnalyticsCategoryAsyncHelper( this, request, handler, context ); } );
}

DeleteCallAnalyticsJobOutcome TranscribeServiceClient::DeleteCallAnalyticsJob(const DeleteCallAnalyticsJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCallAnalyticsJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCallAnalyticsJobOutcomeCallable TranscribeServiceClient::DeleteCallAnalyticsJobCallable(const DeleteCallAnalyticsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCallAnalyticsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCallAnalyticsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientDeleteCallAnalyticsJobAsyncHelper(TranscribeServiceClient const * const clientThis, const DeleteCallAnalyticsJobRequest& request, const DeleteCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCallAnalyticsJob(request), context);
}

void TranscribeServiceClient::DeleteCallAnalyticsJobAsync(const DeleteCallAnalyticsJobRequest& request, const DeleteCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientDeleteCallAnalyticsJobAsyncHelper( this, request, handler, context ); } );
}

DeleteLanguageModelOutcome TranscribeServiceClient::DeleteLanguageModel(const DeleteLanguageModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLanguageModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLanguageModelOutcomeCallable TranscribeServiceClient::DeleteLanguageModelCallable(const DeleteLanguageModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLanguageModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLanguageModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientDeleteLanguageModelAsyncHelper(TranscribeServiceClient const * const clientThis, const DeleteLanguageModelRequest& request, const DeleteLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLanguageModel(request), context);
}

void TranscribeServiceClient::DeleteLanguageModelAsync(const DeleteLanguageModelRequest& request, const DeleteLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientDeleteLanguageModelAsyncHelper( this, request, handler, context ); } );
}

DeleteMedicalTranscriptionJobOutcome TranscribeServiceClient::DeleteMedicalTranscriptionJob(const DeleteMedicalTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMedicalTranscriptionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMedicalTranscriptionJobOutcomeCallable TranscribeServiceClient::DeleteMedicalTranscriptionJobCallable(const DeleteMedicalTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMedicalTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMedicalTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientDeleteMedicalTranscriptionJobAsyncHelper(TranscribeServiceClient const * const clientThis, const DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMedicalTranscriptionJob(request), context);
}

void TranscribeServiceClient::DeleteMedicalTranscriptionJobAsync(const DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientDeleteMedicalTranscriptionJobAsyncHelper( this, request, handler, context ); } );
}

DeleteMedicalVocabularyOutcome TranscribeServiceClient::DeleteMedicalVocabulary(const DeleteMedicalVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMedicalVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMedicalVocabularyOutcomeCallable TranscribeServiceClient::DeleteMedicalVocabularyCallable(const DeleteMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientDeleteMedicalVocabularyAsyncHelper(TranscribeServiceClient const * const clientThis, const DeleteMedicalVocabularyRequest& request, const DeleteMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMedicalVocabulary(request), context);
}

void TranscribeServiceClient::DeleteMedicalVocabularyAsync(const DeleteMedicalVocabularyRequest& request, const DeleteMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientDeleteMedicalVocabularyAsyncHelper( this, request, handler, context ); } );
}

DeleteTranscriptionJobOutcome TranscribeServiceClient::DeleteTranscriptionJob(const DeleteTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTranscriptionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTranscriptionJobOutcomeCallable TranscribeServiceClient::DeleteTranscriptionJobCallable(const DeleteTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientDeleteTranscriptionJobAsyncHelper(TranscribeServiceClient const * const clientThis, const DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTranscriptionJob(request), context);
}

void TranscribeServiceClient::DeleteTranscriptionJobAsync(const DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientDeleteTranscriptionJobAsyncHelper( this, request, handler, context ); } );
}

DeleteVocabularyOutcome TranscribeServiceClient::DeleteVocabulary(const DeleteVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVocabularyOutcomeCallable TranscribeServiceClient::DeleteVocabularyCallable(const DeleteVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientDeleteVocabularyAsyncHelper(TranscribeServiceClient const * const clientThis, const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVocabulary(request), context);
}

void TranscribeServiceClient::DeleteVocabularyAsync(const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientDeleteVocabularyAsyncHelper( this, request, handler, context ); } );
}

DeleteVocabularyFilterOutcome TranscribeServiceClient::DeleteVocabularyFilter(const DeleteVocabularyFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVocabularyFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVocabularyFilterOutcomeCallable TranscribeServiceClient::DeleteVocabularyFilterCallable(const DeleteVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientDeleteVocabularyFilterAsyncHelper(TranscribeServiceClient const * const clientThis, const DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVocabularyFilter(request), context);
}

void TranscribeServiceClient::DeleteVocabularyFilterAsync(const DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientDeleteVocabularyFilterAsyncHelper( this, request, handler, context ); } );
}

DescribeLanguageModelOutcome TranscribeServiceClient::DescribeLanguageModel(const DescribeLanguageModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLanguageModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLanguageModelOutcomeCallable TranscribeServiceClient::DescribeLanguageModelCallable(const DescribeLanguageModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLanguageModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLanguageModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientDescribeLanguageModelAsyncHelper(TranscribeServiceClient const * const clientThis, const DescribeLanguageModelRequest& request, const DescribeLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLanguageModel(request), context);
}

void TranscribeServiceClient::DescribeLanguageModelAsync(const DescribeLanguageModelRequest& request, const DescribeLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientDescribeLanguageModelAsyncHelper( this, request, handler, context ); } );
}

GetCallAnalyticsCategoryOutcome TranscribeServiceClient::GetCallAnalyticsCategory(const GetCallAnalyticsCategoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCallAnalyticsCategoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCallAnalyticsCategoryOutcomeCallable TranscribeServiceClient::GetCallAnalyticsCategoryCallable(const GetCallAnalyticsCategoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCallAnalyticsCategoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCallAnalyticsCategory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientGetCallAnalyticsCategoryAsyncHelper(TranscribeServiceClient const * const clientThis, const GetCallAnalyticsCategoryRequest& request, const GetCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCallAnalyticsCategory(request), context);
}

void TranscribeServiceClient::GetCallAnalyticsCategoryAsync(const GetCallAnalyticsCategoryRequest& request, const GetCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientGetCallAnalyticsCategoryAsyncHelper( this, request, handler, context ); } );
}

GetCallAnalyticsJobOutcome TranscribeServiceClient::GetCallAnalyticsJob(const GetCallAnalyticsJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCallAnalyticsJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCallAnalyticsJobOutcomeCallable TranscribeServiceClient::GetCallAnalyticsJobCallable(const GetCallAnalyticsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCallAnalyticsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCallAnalyticsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientGetCallAnalyticsJobAsyncHelper(TranscribeServiceClient const * const clientThis, const GetCallAnalyticsJobRequest& request, const GetCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCallAnalyticsJob(request), context);
}

void TranscribeServiceClient::GetCallAnalyticsJobAsync(const GetCallAnalyticsJobRequest& request, const GetCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientGetCallAnalyticsJobAsyncHelper( this, request, handler, context ); } );
}

GetMedicalTranscriptionJobOutcome TranscribeServiceClient::GetMedicalTranscriptionJob(const GetMedicalTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMedicalTranscriptionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMedicalTranscriptionJobOutcomeCallable TranscribeServiceClient::GetMedicalTranscriptionJobCallable(const GetMedicalTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMedicalTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMedicalTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientGetMedicalTranscriptionJobAsyncHelper(TranscribeServiceClient const * const clientThis, const GetMedicalTranscriptionJobRequest& request, const GetMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMedicalTranscriptionJob(request), context);
}

void TranscribeServiceClient::GetMedicalTranscriptionJobAsync(const GetMedicalTranscriptionJobRequest& request, const GetMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientGetMedicalTranscriptionJobAsyncHelper( this, request, handler, context ); } );
}

GetMedicalVocabularyOutcome TranscribeServiceClient::GetMedicalVocabulary(const GetMedicalVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMedicalVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMedicalVocabularyOutcomeCallable TranscribeServiceClient::GetMedicalVocabularyCallable(const GetMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientGetMedicalVocabularyAsyncHelper(TranscribeServiceClient const * const clientThis, const GetMedicalVocabularyRequest& request, const GetMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMedicalVocabulary(request), context);
}

void TranscribeServiceClient::GetMedicalVocabularyAsync(const GetMedicalVocabularyRequest& request, const GetMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientGetMedicalVocabularyAsyncHelper( this, request, handler, context ); } );
}

GetTranscriptionJobOutcome TranscribeServiceClient::GetTranscriptionJob(const GetTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTranscriptionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTranscriptionJobOutcomeCallable TranscribeServiceClient::GetTranscriptionJobCallable(const GetTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientGetTranscriptionJobAsyncHelper(TranscribeServiceClient const * const clientThis, const GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTranscriptionJob(request), context);
}

void TranscribeServiceClient::GetTranscriptionJobAsync(const GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientGetTranscriptionJobAsyncHelper( this, request, handler, context ); } );
}

GetVocabularyOutcome TranscribeServiceClient::GetVocabulary(const GetVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetVocabularyOutcomeCallable TranscribeServiceClient::GetVocabularyCallable(const GetVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientGetVocabularyAsyncHelper(TranscribeServiceClient const * const clientThis, const GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetVocabulary(request), context);
}

void TranscribeServiceClient::GetVocabularyAsync(const GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientGetVocabularyAsyncHelper( this, request, handler, context ); } );
}

GetVocabularyFilterOutcome TranscribeServiceClient::GetVocabularyFilter(const GetVocabularyFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetVocabularyFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetVocabularyFilterOutcomeCallable TranscribeServiceClient::GetVocabularyFilterCallable(const GetVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientGetVocabularyFilterAsyncHelper(TranscribeServiceClient const * const clientThis, const GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetVocabularyFilter(request), context);
}

void TranscribeServiceClient::GetVocabularyFilterAsync(const GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientGetVocabularyFilterAsyncHelper( this, request, handler, context ); } );
}

ListCallAnalyticsCategoriesOutcome TranscribeServiceClient::ListCallAnalyticsCategories(const ListCallAnalyticsCategoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCallAnalyticsCategoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCallAnalyticsCategoriesOutcomeCallable TranscribeServiceClient::ListCallAnalyticsCategoriesCallable(const ListCallAnalyticsCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCallAnalyticsCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCallAnalyticsCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientListCallAnalyticsCategoriesAsyncHelper(TranscribeServiceClient const * const clientThis, const ListCallAnalyticsCategoriesRequest& request, const ListCallAnalyticsCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCallAnalyticsCategories(request), context);
}

void TranscribeServiceClient::ListCallAnalyticsCategoriesAsync(const ListCallAnalyticsCategoriesRequest& request, const ListCallAnalyticsCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientListCallAnalyticsCategoriesAsyncHelper( this, request, handler, context ); } );
}

ListCallAnalyticsJobsOutcome TranscribeServiceClient::ListCallAnalyticsJobs(const ListCallAnalyticsJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCallAnalyticsJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCallAnalyticsJobsOutcomeCallable TranscribeServiceClient::ListCallAnalyticsJobsCallable(const ListCallAnalyticsJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCallAnalyticsJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCallAnalyticsJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientListCallAnalyticsJobsAsyncHelper(TranscribeServiceClient const * const clientThis, const ListCallAnalyticsJobsRequest& request, const ListCallAnalyticsJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCallAnalyticsJobs(request), context);
}

void TranscribeServiceClient::ListCallAnalyticsJobsAsync(const ListCallAnalyticsJobsRequest& request, const ListCallAnalyticsJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientListCallAnalyticsJobsAsyncHelper( this, request, handler, context ); } );
}

ListLanguageModelsOutcome TranscribeServiceClient::ListLanguageModels(const ListLanguageModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLanguageModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLanguageModelsOutcomeCallable TranscribeServiceClient::ListLanguageModelsCallable(const ListLanguageModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLanguageModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLanguageModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientListLanguageModelsAsyncHelper(TranscribeServiceClient const * const clientThis, const ListLanguageModelsRequest& request, const ListLanguageModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLanguageModels(request), context);
}

void TranscribeServiceClient::ListLanguageModelsAsync(const ListLanguageModelsRequest& request, const ListLanguageModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientListLanguageModelsAsyncHelper( this, request, handler, context ); } );
}

ListMedicalTranscriptionJobsOutcome TranscribeServiceClient::ListMedicalTranscriptionJobs(const ListMedicalTranscriptionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMedicalTranscriptionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMedicalTranscriptionJobsOutcomeCallable TranscribeServiceClient::ListMedicalTranscriptionJobsCallable(const ListMedicalTranscriptionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMedicalTranscriptionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMedicalTranscriptionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientListMedicalTranscriptionJobsAsyncHelper(TranscribeServiceClient const * const clientThis, const ListMedicalTranscriptionJobsRequest& request, const ListMedicalTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMedicalTranscriptionJobs(request), context);
}

void TranscribeServiceClient::ListMedicalTranscriptionJobsAsync(const ListMedicalTranscriptionJobsRequest& request, const ListMedicalTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientListMedicalTranscriptionJobsAsyncHelper( this, request, handler, context ); } );
}

ListMedicalVocabulariesOutcome TranscribeServiceClient::ListMedicalVocabularies(const ListMedicalVocabulariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMedicalVocabulariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMedicalVocabulariesOutcomeCallable TranscribeServiceClient::ListMedicalVocabulariesCallable(const ListMedicalVocabulariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMedicalVocabulariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMedicalVocabularies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientListMedicalVocabulariesAsyncHelper(TranscribeServiceClient const * const clientThis, const ListMedicalVocabulariesRequest& request, const ListMedicalVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMedicalVocabularies(request), context);
}

void TranscribeServiceClient::ListMedicalVocabulariesAsync(const ListMedicalVocabulariesRequest& request, const ListMedicalVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientListMedicalVocabulariesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome TranscribeServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable TranscribeServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientListTagsForResourceAsyncHelper(TranscribeServiceClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void TranscribeServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTranscriptionJobsOutcome TranscribeServiceClient::ListTranscriptionJobs(const ListTranscriptionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTranscriptionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTranscriptionJobsOutcomeCallable TranscribeServiceClient::ListTranscriptionJobsCallable(const ListTranscriptionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTranscriptionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTranscriptionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientListTranscriptionJobsAsyncHelper(TranscribeServiceClient const * const clientThis, const ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTranscriptionJobs(request), context);
}

void TranscribeServiceClient::ListTranscriptionJobsAsync(const ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientListTranscriptionJobsAsyncHelper( this, request, handler, context ); } );
}

ListVocabulariesOutcome TranscribeServiceClient::ListVocabularies(const ListVocabulariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListVocabulariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVocabulariesOutcomeCallable TranscribeServiceClient::ListVocabulariesCallable(const ListVocabulariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVocabulariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVocabularies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientListVocabulariesAsyncHelper(TranscribeServiceClient const * const clientThis, const ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVocabularies(request), context);
}

void TranscribeServiceClient::ListVocabulariesAsync(const ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientListVocabulariesAsyncHelper( this, request, handler, context ); } );
}

ListVocabularyFiltersOutcome TranscribeServiceClient::ListVocabularyFilters(const ListVocabularyFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListVocabularyFiltersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVocabularyFiltersOutcomeCallable TranscribeServiceClient::ListVocabularyFiltersCallable(const ListVocabularyFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVocabularyFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVocabularyFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientListVocabularyFiltersAsyncHelper(TranscribeServiceClient const * const clientThis, const ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVocabularyFilters(request), context);
}

void TranscribeServiceClient::ListVocabularyFiltersAsync(const ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientListVocabularyFiltersAsyncHelper( this, request, handler, context ); } );
}

StartCallAnalyticsJobOutcome TranscribeServiceClient::StartCallAnalyticsJob(const StartCallAnalyticsJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartCallAnalyticsJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartCallAnalyticsJobOutcomeCallable TranscribeServiceClient::StartCallAnalyticsJobCallable(const StartCallAnalyticsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCallAnalyticsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCallAnalyticsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientStartCallAnalyticsJobAsyncHelper(TranscribeServiceClient const * const clientThis, const StartCallAnalyticsJobRequest& request, const StartCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartCallAnalyticsJob(request), context);
}

void TranscribeServiceClient::StartCallAnalyticsJobAsync(const StartCallAnalyticsJobRequest& request, const StartCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientStartCallAnalyticsJobAsyncHelper( this, request, handler, context ); } );
}

StartMedicalTranscriptionJobOutcome TranscribeServiceClient::StartMedicalTranscriptionJob(const StartMedicalTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartMedicalTranscriptionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMedicalTranscriptionJobOutcomeCallable TranscribeServiceClient::StartMedicalTranscriptionJobCallable(const StartMedicalTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMedicalTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMedicalTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientStartMedicalTranscriptionJobAsyncHelper(TranscribeServiceClient const * const clientThis, const StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMedicalTranscriptionJob(request), context);
}

void TranscribeServiceClient::StartMedicalTranscriptionJobAsync(const StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientStartMedicalTranscriptionJobAsyncHelper( this, request, handler, context ); } );
}

StartTranscriptionJobOutcome TranscribeServiceClient::StartTranscriptionJob(const StartTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartTranscriptionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTranscriptionJobOutcomeCallable TranscribeServiceClient::StartTranscriptionJobCallable(const StartTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientStartTranscriptionJobAsyncHelper(TranscribeServiceClient const * const clientThis, const StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartTranscriptionJob(request), context);
}

void TranscribeServiceClient::StartTranscriptionJobAsync(const StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientStartTranscriptionJobAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome TranscribeServiceClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable TranscribeServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientTagResourceAsyncHelper(TranscribeServiceClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void TranscribeServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome TranscribeServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable TranscribeServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientUntagResourceAsyncHelper(TranscribeServiceClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void TranscribeServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateCallAnalyticsCategoryOutcome TranscribeServiceClient::UpdateCallAnalyticsCategory(const UpdateCallAnalyticsCategoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCallAnalyticsCategoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCallAnalyticsCategoryOutcomeCallable TranscribeServiceClient::UpdateCallAnalyticsCategoryCallable(const UpdateCallAnalyticsCategoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCallAnalyticsCategoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCallAnalyticsCategory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientUpdateCallAnalyticsCategoryAsyncHelper(TranscribeServiceClient const * const clientThis, const UpdateCallAnalyticsCategoryRequest& request, const UpdateCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCallAnalyticsCategory(request), context);
}

void TranscribeServiceClient::UpdateCallAnalyticsCategoryAsync(const UpdateCallAnalyticsCategoryRequest& request, const UpdateCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientUpdateCallAnalyticsCategoryAsyncHelper( this, request, handler, context ); } );
}

UpdateMedicalVocabularyOutcome TranscribeServiceClient::UpdateMedicalVocabulary(const UpdateMedicalVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMedicalVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMedicalVocabularyOutcomeCallable TranscribeServiceClient::UpdateMedicalVocabularyCallable(const UpdateMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientUpdateMedicalVocabularyAsyncHelper(TranscribeServiceClient const * const clientThis, const UpdateMedicalVocabularyRequest& request, const UpdateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMedicalVocabulary(request), context);
}

void TranscribeServiceClient::UpdateMedicalVocabularyAsync(const UpdateMedicalVocabularyRequest& request, const UpdateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientUpdateMedicalVocabularyAsyncHelper( this, request, handler, context ); } );
}

UpdateVocabularyOutcome TranscribeServiceClient::UpdateVocabulary(const UpdateVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateVocabularyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVocabularyOutcomeCallable TranscribeServiceClient::UpdateVocabularyCallable(const UpdateVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientUpdateVocabularyAsyncHelper(TranscribeServiceClient const * const clientThis, const UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVocabulary(request), context);
}

void TranscribeServiceClient::UpdateVocabularyAsync(const UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientUpdateVocabularyAsyncHelper( this, request, handler, context ); } );
}

UpdateVocabularyFilterOutcome TranscribeServiceClient::UpdateVocabularyFilter(const UpdateVocabularyFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateVocabularyFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVocabularyFilterOutcomeCallable TranscribeServiceClient::UpdateVocabularyFilterCallable(const UpdateVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClientUpdateVocabularyFilterAsyncHelper(TranscribeServiceClient const * const clientThis, const UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVocabularyFilter(request), context);
}

void TranscribeServiceClient::UpdateVocabularyFilterAsync(const UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranscribeServiceClientUpdateVocabularyFilterAsyncHelper( this, request, handler, context ); } );
}

