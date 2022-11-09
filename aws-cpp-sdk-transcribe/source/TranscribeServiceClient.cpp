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

#include <aws/transcribe/TranscribeServiceClient.h>
#include <aws/transcribe/TranscribeServiceErrorMarshaller.h>
#include <aws/transcribe/TranscribeServiceEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* TranscribeServiceClient::SERVICE_NAME = "transcribe";
const char* TranscribeServiceClient::ALLOCATION_TAG = "TranscribeServiceClient";

TranscribeServiceClient::TranscribeServiceClient(const TranscribeService::TranscribeServiceClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<TranscribeServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<TranscribeServiceEndpointProviderBase> endpointProvider,
                                                 const TranscribeService::TranscribeServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<TranscribeServiceEndpointProviderBase> endpointProvider,
                                                 const TranscribeService::TranscribeServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  TranscribeServiceClient::TranscribeServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
TranscribeServiceClient::~TranscribeServiceClient()
{
}

std::shared_ptr<TranscribeServiceEndpointProviderBase>& TranscribeServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void TranscribeServiceClient::init(const TranscribeService::TranscribeServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Transcribe");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void TranscribeServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateCallAnalyticsCategoryOutcome TranscribeServiceClient::CreateCallAnalyticsCategory(const CreateCallAnalyticsCategoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCallAnalyticsCategory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCallAnalyticsCategory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCallAnalyticsCategoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCallAnalyticsCategoryOutcomeCallable TranscribeServiceClient::CreateCallAnalyticsCategoryCallable(const CreateCallAnalyticsCategoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCallAnalyticsCategoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCallAnalyticsCategory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::CreateCallAnalyticsCategoryAsync(const CreateCallAnalyticsCategoryRequest& request, const CreateCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCallAnalyticsCategory(request), context);
    } );
}

CreateLanguageModelOutcome TranscribeServiceClient::CreateLanguageModel(const CreateLanguageModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLanguageModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLanguageModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLanguageModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLanguageModelOutcomeCallable TranscribeServiceClient::CreateLanguageModelCallable(const CreateLanguageModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLanguageModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLanguageModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::CreateLanguageModelAsync(const CreateLanguageModelRequest& request, const CreateLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLanguageModel(request), context);
    } );
}

CreateMedicalVocabularyOutcome TranscribeServiceClient::CreateMedicalVocabulary(const CreateMedicalVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMedicalVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMedicalVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateMedicalVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMedicalVocabularyOutcomeCallable TranscribeServiceClient::CreateMedicalVocabularyCallable(const CreateMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::CreateMedicalVocabularyAsync(const CreateMedicalVocabularyRequest& request, const CreateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMedicalVocabulary(request), context);
    } );
}

CreateVocabularyOutcome TranscribeServiceClient::CreateVocabulary(const CreateVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVocabularyOutcomeCallable TranscribeServiceClient::CreateVocabularyCallable(const CreateVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::CreateVocabularyAsync(const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVocabulary(request), context);
    } );
}

CreateVocabularyFilterOutcome TranscribeServiceClient::CreateVocabularyFilter(const CreateVocabularyFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVocabularyFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVocabularyFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVocabularyFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVocabularyFilterOutcomeCallable TranscribeServiceClient::CreateVocabularyFilterCallable(const CreateVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::CreateVocabularyFilterAsync(const CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVocabularyFilter(request), context);
    } );
}

DeleteCallAnalyticsCategoryOutcome TranscribeServiceClient::DeleteCallAnalyticsCategory(const DeleteCallAnalyticsCategoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCallAnalyticsCategory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCallAnalyticsCategory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCallAnalyticsCategoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCallAnalyticsCategoryOutcomeCallable TranscribeServiceClient::DeleteCallAnalyticsCategoryCallable(const DeleteCallAnalyticsCategoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCallAnalyticsCategoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCallAnalyticsCategory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteCallAnalyticsCategoryAsync(const DeleteCallAnalyticsCategoryRequest& request, const DeleteCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCallAnalyticsCategory(request), context);
    } );
}

DeleteCallAnalyticsJobOutcome TranscribeServiceClient::DeleteCallAnalyticsJob(const DeleteCallAnalyticsJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCallAnalyticsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCallAnalyticsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCallAnalyticsJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCallAnalyticsJobOutcomeCallable TranscribeServiceClient::DeleteCallAnalyticsJobCallable(const DeleteCallAnalyticsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCallAnalyticsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCallAnalyticsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteCallAnalyticsJobAsync(const DeleteCallAnalyticsJobRequest& request, const DeleteCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCallAnalyticsJob(request), context);
    } );
}

DeleteLanguageModelOutcome TranscribeServiceClient::DeleteLanguageModel(const DeleteLanguageModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLanguageModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLanguageModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLanguageModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLanguageModelOutcomeCallable TranscribeServiceClient::DeleteLanguageModelCallable(const DeleteLanguageModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLanguageModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLanguageModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteLanguageModelAsync(const DeleteLanguageModelRequest& request, const DeleteLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLanguageModel(request), context);
    } );
}

DeleteMedicalTranscriptionJobOutcome TranscribeServiceClient::DeleteMedicalTranscriptionJob(const DeleteMedicalTranscriptionJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMedicalTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMedicalTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMedicalTranscriptionJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMedicalTranscriptionJobOutcomeCallable TranscribeServiceClient::DeleteMedicalTranscriptionJobCallable(const DeleteMedicalTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMedicalTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMedicalTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteMedicalTranscriptionJobAsync(const DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMedicalTranscriptionJob(request), context);
    } );
}

DeleteMedicalVocabularyOutcome TranscribeServiceClient::DeleteMedicalVocabulary(const DeleteMedicalVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMedicalVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMedicalVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMedicalVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMedicalVocabularyOutcomeCallable TranscribeServiceClient::DeleteMedicalVocabularyCallable(const DeleteMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteMedicalVocabularyAsync(const DeleteMedicalVocabularyRequest& request, const DeleteMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMedicalVocabulary(request), context);
    } );
}

DeleteTranscriptionJobOutcome TranscribeServiceClient::DeleteTranscriptionJob(const DeleteTranscriptionJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTranscriptionJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTranscriptionJobOutcomeCallable TranscribeServiceClient::DeleteTranscriptionJobCallable(const DeleteTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteTranscriptionJobAsync(const DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTranscriptionJob(request), context);
    } );
}

DeleteVocabularyOutcome TranscribeServiceClient::DeleteVocabulary(const DeleteVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVocabularyOutcomeCallable TranscribeServiceClient::DeleteVocabularyCallable(const DeleteVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteVocabularyAsync(const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVocabulary(request), context);
    } );
}

DeleteVocabularyFilterOutcome TranscribeServiceClient::DeleteVocabularyFilter(const DeleteVocabularyFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVocabularyFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVocabularyFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVocabularyFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVocabularyFilterOutcomeCallable TranscribeServiceClient::DeleteVocabularyFilterCallable(const DeleteVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteVocabularyFilterAsync(const DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVocabularyFilter(request), context);
    } );
}

DescribeLanguageModelOutcome TranscribeServiceClient::DescribeLanguageModel(const DescribeLanguageModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLanguageModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLanguageModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLanguageModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLanguageModelOutcomeCallable TranscribeServiceClient::DescribeLanguageModelCallable(const DescribeLanguageModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLanguageModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLanguageModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DescribeLanguageModelAsync(const DescribeLanguageModelRequest& request, const DescribeLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLanguageModel(request), context);
    } );
}

GetCallAnalyticsCategoryOutcome TranscribeServiceClient::GetCallAnalyticsCategory(const GetCallAnalyticsCategoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCallAnalyticsCategory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCallAnalyticsCategory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCallAnalyticsCategoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCallAnalyticsCategoryOutcomeCallable TranscribeServiceClient::GetCallAnalyticsCategoryCallable(const GetCallAnalyticsCategoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCallAnalyticsCategoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCallAnalyticsCategory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetCallAnalyticsCategoryAsync(const GetCallAnalyticsCategoryRequest& request, const GetCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCallAnalyticsCategory(request), context);
    } );
}

GetCallAnalyticsJobOutcome TranscribeServiceClient::GetCallAnalyticsJob(const GetCallAnalyticsJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCallAnalyticsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCallAnalyticsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCallAnalyticsJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCallAnalyticsJobOutcomeCallable TranscribeServiceClient::GetCallAnalyticsJobCallable(const GetCallAnalyticsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCallAnalyticsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCallAnalyticsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetCallAnalyticsJobAsync(const GetCallAnalyticsJobRequest& request, const GetCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCallAnalyticsJob(request), context);
    } );
}

GetMedicalTranscriptionJobOutcome TranscribeServiceClient::GetMedicalTranscriptionJob(const GetMedicalTranscriptionJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMedicalTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMedicalTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMedicalTranscriptionJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMedicalTranscriptionJobOutcomeCallable TranscribeServiceClient::GetMedicalTranscriptionJobCallable(const GetMedicalTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMedicalTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMedicalTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetMedicalTranscriptionJobAsync(const GetMedicalTranscriptionJobRequest& request, const GetMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMedicalTranscriptionJob(request), context);
    } );
}

GetMedicalVocabularyOutcome TranscribeServiceClient::GetMedicalVocabulary(const GetMedicalVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMedicalVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMedicalVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMedicalVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMedicalVocabularyOutcomeCallable TranscribeServiceClient::GetMedicalVocabularyCallable(const GetMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetMedicalVocabularyAsync(const GetMedicalVocabularyRequest& request, const GetMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMedicalVocabulary(request), context);
    } );
}

GetTranscriptionJobOutcome TranscribeServiceClient::GetTranscriptionJob(const GetTranscriptionJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTranscriptionJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTranscriptionJobOutcomeCallable TranscribeServiceClient::GetTranscriptionJobCallable(const GetTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetTranscriptionJobAsync(const GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTranscriptionJob(request), context);
    } );
}

GetVocabularyOutcome TranscribeServiceClient::GetVocabulary(const GetVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetVocabularyOutcomeCallable TranscribeServiceClient::GetVocabularyCallable(const GetVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetVocabularyAsync(const GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVocabulary(request), context);
    } );
}

GetVocabularyFilterOutcome TranscribeServiceClient::GetVocabularyFilter(const GetVocabularyFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVocabularyFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVocabularyFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVocabularyFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetVocabularyFilterOutcomeCallable TranscribeServiceClient::GetVocabularyFilterCallable(const GetVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetVocabularyFilterAsync(const GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVocabularyFilter(request), context);
    } );
}

ListCallAnalyticsCategoriesOutcome TranscribeServiceClient::ListCallAnalyticsCategories(const ListCallAnalyticsCategoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCallAnalyticsCategories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCallAnalyticsCategories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCallAnalyticsCategoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCallAnalyticsCategoriesOutcomeCallable TranscribeServiceClient::ListCallAnalyticsCategoriesCallable(const ListCallAnalyticsCategoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCallAnalyticsCategoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCallAnalyticsCategories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListCallAnalyticsCategoriesAsync(const ListCallAnalyticsCategoriesRequest& request, const ListCallAnalyticsCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCallAnalyticsCategories(request), context);
    } );
}

ListCallAnalyticsJobsOutcome TranscribeServiceClient::ListCallAnalyticsJobs(const ListCallAnalyticsJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCallAnalyticsJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCallAnalyticsJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCallAnalyticsJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCallAnalyticsJobsOutcomeCallable TranscribeServiceClient::ListCallAnalyticsJobsCallable(const ListCallAnalyticsJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCallAnalyticsJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCallAnalyticsJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListCallAnalyticsJobsAsync(const ListCallAnalyticsJobsRequest& request, const ListCallAnalyticsJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCallAnalyticsJobs(request), context);
    } );
}

ListLanguageModelsOutcome TranscribeServiceClient::ListLanguageModels(const ListLanguageModelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLanguageModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLanguageModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLanguageModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLanguageModelsOutcomeCallable TranscribeServiceClient::ListLanguageModelsCallable(const ListLanguageModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLanguageModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLanguageModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListLanguageModelsAsync(const ListLanguageModelsRequest& request, const ListLanguageModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLanguageModels(request), context);
    } );
}

ListMedicalTranscriptionJobsOutcome TranscribeServiceClient::ListMedicalTranscriptionJobs(const ListMedicalTranscriptionJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMedicalTranscriptionJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMedicalTranscriptionJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMedicalTranscriptionJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMedicalTranscriptionJobsOutcomeCallable TranscribeServiceClient::ListMedicalTranscriptionJobsCallable(const ListMedicalTranscriptionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMedicalTranscriptionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMedicalTranscriptionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListMedicalTranscriptionJobsAsync(const ListMedicalTranscriptionJobsRequest& request, const ListMedicalTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMedicalTranscriptionJobs(request), context);
    } );
}

ListMedicalVocabulariesOutcome TranscribeServiceClient::ListMedicalVocabularies(const ListMedicalVocabulariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMedicalVocabularies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMedicalVocabularies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMedicalVocabulariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMedicalVocabulariesOutcomeCallable TranscribeServiceClient::ListMedicalVocabulariesCallable(const ListMedicalVocabulariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMedicalVocabulariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMedicalVocabularies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListMedicalVocabulariesAsync(const ListMedicalVocabulariesRequest& request, const ListMedicalVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMedicalVocabularies(request), context);
    } );
}

ListTagsForResourceOutcome TranscribeServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable TranscribeServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTranscriptionJobsOutcome TranscribeServiceClient::ListTranscriptionJobs(const ListTranscriptionJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTranscriptionJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTranscriptionJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTranscriptionJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTranscriptionJobsOutcomeCallable TranscribeServiceClient::ListTranscriptionJobsCallable(const ListTranscriptionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTranscriptionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTranscriptionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListTranscriptionJobsAsync(const ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTranscriptionJobs(request), context);
    } );
}

ListVocabulariesOutcome TranscribeServiceClient::ListVocabularies(const ListVocabulariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVocabularies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVocabularies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVocabulariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVocabulariesOutcomeCallable TranscribeServiceClient::ListVocabulariesCallable(const ListVocabulariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVocabulariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVocabularies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListVocabulariesAsync(const ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVocabularies(request), context);
    } );
}

ListVocabularyFiltersOutcome TranscribeServiceClient::ListVocabularyFilters(const ListVocabularyFiltersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVocabularyFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVocabularyFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVocabularyFiltersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVocabularyFiltersOutcomeCallable TranscribeServiceClient::ListVocabularyFiltersCallable(const ListVocabularyFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVocabularyFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVocabularyFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListVocabularyFiltersAsync(const ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVocabularyFilters(request), context);
    } );
}

StartCallAnalyticsJobOutcome TranscribeServiceClient::StartCallAnalyticsJob(const StartCallAnalyticsJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartCallAnalyticsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartCallAnalyticsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartCallAnalyticsJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartCallAnalyticsJobOutcomeCallable TranscribeServiceClient::StartCallAnalyticsJobCallable(const StartCallAnalyticsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCallAnalyticsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCallAnalyticsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::StartCallAnalyticsJobAsync(const StartCallAnalyticsJobRequest& request, const StartCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartCallAnalyticsJob(request), context);
    } );
}

StartMedicalTranscriptionJobOutcome TranscribeServiceClient::StartMedicalTranscriptionJob(const StartMedicalTranscriptionJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMedicalTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMedicalTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartMedicalTranscriptionJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMedicalTranscriptionJobOutcomeCallable TranscribeServiceClient::StartMedicalTranscriptionJobCallable(const StartMedicalTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMedicalTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMedicalTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::StartMedicalTranscriptionJobAsync(const StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartMedicalTranscriptionJob(request), context);
    } );
}

StartTranscriptionJobOutcome TranscribeServiceClient::StartTranscriptionJob(const StartTranscriptionJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTranscriptionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartTranscriptionJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTranscriptionJobOutcomeCallable TranscribeServiceClient::StartTranscriptionJobCallable(const StartTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::StartTranscriptionJobAsync(const StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartTranscriptionJob(request), context);
    } );
}

TagResourceOutcome TranscribeServiceClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable TranscribeServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome TranscribeServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable TranscribeServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateCallAnalyticsCategoryOutcome TranscribeServiceClient::UpdateCallAnalyticsCategory(const UpdateCallAnalyticsCategoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCallAnalyticsCategory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCallAnalyticsCategory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCallAnalyticsCategoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCallAnalyticsCategoryOutcomeCallable TranscribeServiceClient::UpdateCallAnalyticsCategoryCallable(const UpdateCallAnalyticsCategoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCallAnalyticsCategoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCallAnalyticsCategory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::UpdateCallAnalyticsCategoryAsync(const UpdateCallAnalyticsCategoryRequest& request, const UpdateCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCallAnalyticsCategory(request), context);
    } );
}

UpdateMedicalVocabularyOutcome TranscribeServiceClient::UpdateMedicalVocabulary(const UpdateMedicalVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMedicalVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMedicalVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMedicalVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMedicalVocabularyOutcomeCallable TranscribeServiceClient::UpdateMedicalVocabularyCallable(const UpdateMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::UpdateMedicalVocabularyAsync(const UpdateMedicalVocabularyRequest& request, const UpdateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMedicalVocabulary(request), context);
    } );
}

UpdateVocabularyOutcome TranscribeServiceClient::UpdateVocabulary(const UpdateVocabularyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateVocabularyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVocabularyOutcomeCallable TranscribeServiceClient::UpdateVocabularyCallable(const UpdateVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::UpdateVocabularyAsync(const UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVocabulary(request), context);
    } );
}

UpdateVocabularyFilterOutcome TranscribeServiceClient::UpdateVocabularyFilter(const UpdateVocabularyFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVocabularyFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVocabularyFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateVocabularyFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVocabularyFilterOutcomeCallable TranscribeServiceClient::UpdateVocabularyFilterCallable(const UpdateVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::UpdateVocabularyFilterAsync(const UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVocabularyFilter(request), context);
    } );
}

