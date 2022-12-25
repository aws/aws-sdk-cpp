/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/transcribe/TranscribeServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/transcribe/TranscribeServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TranscribeServiceClient header */
#include <aws/transcribe/model/CreateCallAnalyticsCategoryResult.h>
#include <aws/transcribe/model/CreateLanguageModelResult.h>
#include <aws/transcribe/model/CreateMedicalVocabularyResult.h>
#include <aws/transcribe/model/CreateVocabularyResult.h>
#include <aws/transcribe/model/CreateVocabularyFilterResult.h>
#include <aws/transcribe/model/DeleteCallAnalyticsCategoryResult.h>
#include <aws/transcribe/model/DeleteCallAnalyticsJobResult.h>
#include <aws/transcribe/model/DescribeLanguageModelResult.h>
#include <aws/transcribe/model/GetCallAnalyticsCategoryResult.h>
#include <aws/transcribe/model/GetCallAnalyticsJobResult.h>
#include <aws/transcribe/model/GetMedicalTranscriptionJobResult.h>
#include <aws/transcribe/model/GetMedicalVocabularyResult.h>
#include <aws/transcribe/model/GetTranscriptionJobResult.h>
#include <aws/transcribe/model/GetVocabularyResult.h>
#include <aws/transcribe/model/GetVocabularyFilterResult.h>
#include <aws/transcribe/model/ListCallAnalyticsCategoriesResult.h>
#include <aws/transcribe/model/ListCallAnalyticsJobsResult.h>
#include <aws/transcribe/model/ListLanguageModelsResult.h>
#include <aws/transcribe/model/ListMedicalTranscriptionJobsResult.h>
#include <aws/transcribe/model/ListMedicalVocabulariesResult.h>
#include <aws/transcribe/model/ListTagsForResourceResult.h>
#include <aws/transcribe/model/ListTranscriptionJobsResult.h>
#include <aws/transcribe/model/ListVocabulariesResult.h>
#include <aws/transcribe/model/ListVocabularyFiltersResult.h>
#include <aws/transcribe/model/StartCallAnalyticsJobResult.h>
#include <aws/transcribe/model/StartMedicalTranscriptionJobResult.h>
#include <aws/transcribe/model/StartTranscriptionJobResult.h>
#include <aws/transcribe/model/TagResourceResult.h>
#include <aws/transcribe/model/UntagResourceResult.h>
#include <aws/transcribe/model/UpdateCallAnalyticsCategoryResult.h>
#include <aws/transcribe/model/UpdateMedicalVocabularyResult.h>
#include <aws/transcribe/model/UpdateVocabularyResult.h>
#include <aws/transcribe/model/UpdateVocabularyFilterResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in TranscribeServiceClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace TranscribeService
  {
    using TranscribeServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using TranscribeServiceEndpointProviderBase = Aws::TranscribeService::Endpoint::TranscribeServiceEndpointProviderBase;
    using TranscribeServiceEndpointProvider = Aws::TranscribeService::Endpoint::TranscribeServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TranscribeServiceClient header */
      class CreateCallAnalyticsCategoryRequest;
      class CreateLanguageModelRequest;
      class CreateMedicalVocabularyRequest;
      class CreateVocabularyRequest;
      class CreateVocabularyFilterRequest;
      class DeleteCallAnalyticsCategoryRequest;
      class DeleteCallAnalyticsJobRequest;
      class DeleteLanguageModelRequest;
      class DeleteMedicalTranscriptionJobRequest;
      class DeleteMedicalVocabularyRequest;
      class DeleteTranscriptionJobRequest;
      class DeleteVocabularyRequest;
      class DeleteVocabularyFilterRequest;
      class DescribeLanguageModelRequest;
      class GetCallAnalyticsCategoryRequest;
      class GetCallAnalyticsJobRequest;
      class GetMedicalTranscriptionJobRequest;
      class GetMedicalVocabularyRequest;
      class GetTranscriptionJobRequest;
      class GetVocabularyRequest;
      class GetVocabularyFilterRequest;
      class ListCallAnalyticsCategoriesRequest;
      class ListCallAnalyticsJobsRequest;
      class ListLanguageModelsRequest;
      class ListMedicalTranscriptionJobsRequest;
      class ListMedicalVocabulariesRequest;
      class ListTagsForResourceRequest;
      class ListTranscriptionJobsRequest;
      class ListVocabulariesRequest;
      class ListVocabularyFiltersRequest;
      class StartCallAnalyticsJobRequest;
      class StartMedicalTranscriptionJobRequest;
      class StartTranscriptionJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCallAnalyticsCategoryRequest;
      class UpdateMedicalVocabularyRequest;
      class UpdateVocabularyRequest;
      class UpdateVocabularyFilterRequest;
      /* End of service model forward declarations required in TranscribeServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateCallAnalyticsCategoryResult, TranscribeServiceError> CreateCallAnalyticsCategoryOutcome;
      typedef Aws::Utils::Outcome<CreateLanguageModelResult, TranscribeServiceError> CreateLanguageModelOutcome;
      typedef Aws::Utils::Outcome<CreateMedicalVocabularyResult, TranscribeServiceError> CreateMedicalVocabularyOutcome;
      typedef Aws::Utils::Outcome<CreateVocabularyResult, TranscribeServiceError> CreateVocabularyOutcome;
      typedef Aws::Utils::Outcome<CreateVocabularyFilterResult, TranscribeServiceError> CreateVocabularyFilterOutcome;
      typedef Aws::Utils::Outcome<DeleteCallAnalyticsCategoryResult, TranscribeServiceError> DeleteCallAnalyticsCategoryOutcome;
      typedef Aws::Utils::Outcome<DeleteCallAnalyticsJobResult, TranscribeServiceError> DeleteCallAnalyticsJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteLanguageModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteMedicalTranscriptionJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteMedicalVocabularyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteTranscriptionJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteVocabularyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteVocabularyFilterOutcome;
      typedef Aws::Utils::Outcome<DescribeLanguageModelResult, TranscribeServiceError> DescribeLanguageModelOutcome;
      typedef Aws::Utils::Outcome<GetCallAnalyticsCategoryResult, TranscribeServiceError> GetCallAnalyticsCategoryOutcome;
      typedef Aws::Utils::Outcome<GetCallAnalyticsJobResult, TranscribeServiceError> GetCallAnalyticsJobOutcome;
      typedef Aws::Utils::Outcome<GetMedicalTranscriptionJobResult, TranscribeServiceError> GetMedicalTranscriptionJobOutcome;
      typedef Aws::Utils::Outcome<GetMedicalVocabularyResult, TranscribeServiceError> GetMedicalVocabularyOutcome;
      typedef Aws::Utils::Outcome<GetTranscriptionJobResult, TranscribeServiceError> GetTranscriptionJobOutcome;
      typedef Aws::Utils::Outcome<GetVocabularyResult, TranscribeServiceError> GetVocabularyOutcome;
      typedef Aws::Utils::Outcome<GetVocabularyFilterResult, TranscribeServiceError> GetVocabularyFilterOutcome;
      typedef Aws::Utils::Outcome<ListCallAnalyticsCategoriesResult, TranscribeServiceError> ListCallAnalyticsCategoriesOutcome;
      typedef Aws::Utils::Outcome<ListCallAnalyticsJobsResult, TranscribeServiceError> ListCallAnalyticsJobsOutcome;
      typedef Aws::Utils::Outcome<ListLanguageModelsResult, TranscribeServiceError> ListLanguageModelsOutcome;
      typedef Aws::Utils::Outcome<ListMedicalTranscriptionJobsResult, TranscribeServiceError> ListMedicalTranscriptionJobsOutcome;
      typedef Aws::Utils::Outcome<ListMedicalVocabulariesResult, TranscribeServiceError> ListMedicalVocabulariesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, TranscribeServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTranscriptionJobsResult, TranscribeServiceError> ListTranscriptionJobsOutcome;
      typedef Aws::Utils::Outcome<ListVocabulariesResult, TranscribeServiceError> ListVocabulariesOutcome;
      typedef Aws::Utils::Outcome<ListVocabularyFiltersResult, TranscribeServiceError> ListVocabularyFiltersOutcome;
      typedef Aws::Utils::Outcome<StartCallAnalyticsJobResult, TranscribeServiceError> StartCallAnalyticsJobOutcome;
      typedef Aws::Utils::Outcome<StartMedicalTranscriptionJobResult, TranscribeServiceError> StartMedicalTranscriptionJobOutcome;
      typedef Aws::Utils::Outcome<StartTranscriptionJobResult, TranscribeServiceError> StartTranscriptionJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, TranscribeServiceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, TranscribeServiceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCallAnalyticsCategoryResult, TranscribeServiceError> UpdateCallAnalyticsCategoryOutcome;
      typedef Aws::Utils::Outcome<UpdateMedicalVocabularyResult, TranscribeServiceError> UpdateMedicalVocabularyOutcome;
      typedef Aws::Utils::Outcome<UpdateVocabularyResult, TranscribeServiceError> UpdateVocabularyOutcome;
      typedef Aws::Utils::Outcome<UpdateVocabularyFilterResult, TranscribeServiceError> UpdateVocabularyFilterOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateCallAnalyticsCategoryOutcome> CreateCallAnalyticsCategoryOutcomeCallable;
      typedef std::future<CreateLanguageModelOutcome> CreateLanguageModelOutcomeCallable;
      typedef std::future<CreateMedicalVocabularyOutcome> CreateMedicalVocabularyOutcomeCallable;
      typedef std::future<CreateVocabularyOutcome> CreateVocabularyOutcomeCallable;
      typedef std::future<CreateVocabularyFilterOutcome> CreateVocabularyFilterOutcomeCallable;
      typedef std::future<DeleteCallAnalyticsCategoryOutcome> DeleteCallAnalyticsCategoryOutcomeCallable;
      typedef std::future<DeleteCallAnalyticsJobOutcome> DeleteCallAnalyticsJobOutcomeCallable;
      typedef std::future<DeleteLanguageModelOutcome> DeleteLanguageModelOutcomeCallable;
      typedef std::future<DeleteMedicalTranscriptionJobOutcome> DeleteMedicalTranscriptionJobOutcomeCallable;
      typedef std::future<DeleteMedicalVocabularyOutcome> DeleteMedicalVocabularyOutcomeCallable;
      typedef std::future<DeleteTranscriptionJobOutcome> DeleteTranscriptionJobOutcomeCallable;
      typedef std::future<DeleteVocabularyOutcome> DeleteVocabularyOutcomeCallable;
      typedef std::future<DeleteVocabularyFilterOutcome> DeleteVocabularyFilterOutcomeCallable;
      typedef std::future<DescribeLanguageModelOutcome> DescribeLanguageModelOutcomeCallable;
      typedef std::future<GetCallAnalyticsCategoryOutcome> GetCallAnalyticsCategoryOutcomeCallable;
      typedef std::future<GetCallAnalyticsJobOutcome> GetCallAnalyticsJobOutcomeCallable;
      typedef std::future<GetMedicalTranscriptionJobOutcome> GetMedicalTranscriptionJobOutcomeCallable;
      typedef std::future<GetMedicalVocabularyOutcome> GetMedicalVocabularyOutcomeCallable;
      typedef std::future<GetTranscriptionJobOutcome> GetTranscriptionJobOutcomeCallable;
      typedef std::future<GetVocabularyOutcome> GetVocabularyOutcomeCallable;
      typedef std::future<GetVocabularyFilterOutcome> GetVocabularyFilterOutcomeCallable;
      typedef std::future<ListCallAnalyticsCategoriesOutcome> ListCallAnalyticsCategoriesOutcomeCallable;
      typedef std::future<ListCallAnalyticsJobsOutcome> ListCallAnalyticsJobsOutcomeCallable;
      typedef std::future<ListLanguageModelsOutcome> ListLanguageModelsOutcomeCallable;
      typedef std::future<ListMedicalTranscriptionJobsOutcome> ListMedicalTranscriptionJobsOutcomeCallable;
      typedef std::future<ListMedicalVocabulariesOutcome> ListMedicalVocabulariesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTranscriptionJobsOutcome> ListTranscriptionJobsOutcomeCallable;
      typedef std::future<ListVocabulariesOutcome> ListVocabulariesOutcomeCallable;
      typedef std::future<ListVocabularyFiltersOutcome> ListVocabularyFiltersOutcomeCallable;
      typedef std::future<StartCallAnalyticsJobOutcome> StartCallAnalyticsJobOutcomeCallable;
      typedef std::future<StartMedicalTranscriptionJobOutcome> StartMedicalTranscriptionJobOutcomeCallable;
      typedef std::future<StartTranscriptionJobOutcome> StartTranscriptionJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCallAnalyticsCategoryOutcome> UpdateCallAnalyticsCategoryOutcomeCallable;
      typedef std::future<UpdateMedicalVocabularyOutcome> UpdateMedicalVocabularyOutcomeCallable;
      typedef std::future<UpdateVocabularyOutcome> UpdateVocabularyOutcomeCallable;
      typedef std::future<UpdateVocabularyFilterOutcome> UpdateVocabularyFilterOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TranscribeServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateCallAnalyticsCategoryRequest&, const Model::CreateCallAnalyticsCategoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCallAnalyticsCategoryResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateLanguageModelRequest&, const Model::CreateLanguageModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLanguageModelResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateMedicalVocabularyRequest&, const Model::CreateMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateVocabularyRequest&, const Model::CreateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateVocabularyFilterRequest&, const Model::CreateVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteCallAnalyticsCategoryRequest&, const Model::DeleteCallAnalyticsCategoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCallAnalyticsCategoryResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteCallAnalyticsJobRequest&, const Model::DeleteCallAnalyticsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCallAnalyticsJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteLanguageModelRequest&, const Model::DeleteLanguageModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLanguageModelResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteMedicalTranscriptionJobRequest&, const Model::DeleteMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteMedicalVocabularyRequest&, const Model::DeleteMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteTranscriptionJobRequest&, const Model::DeleteTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteVocabularyRequest&, const Model::DeleteVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteVocabularyFilterRequest&, const Model::DeleteVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DescribeLanguageModelRequest&, const Model::DescribeLanguageModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLanguageModelResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetCallAnalyticsCategoryRequest&, const Model::GetCallAnalyticsCategoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCallAnalyticsCategoryResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetCallAnalyticsJobRequest&, const Model::GetCallAnalyticsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCallAnalyticsJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetMedicalTranscriptionJobRequest&, const Model::GetMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetMedicalVocabularyRequest&, const Model::GetMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetTranscriptionJobRequest&, const Model::GetTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetVocabularyRequest&, const Model::GetVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetVocabularyFilterRequest&, const Model::GetVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListCallAnalyticsCategoriesRequest&, const Model::ListCallAnalyticsCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCallAnalyticsCategoriesResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListCallAnalyticsJobsRequest&, const Model::ListCallAnalyticsJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCallAnalyticsJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListLanguageModelsRequest&, const Model::ListLanguageModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLanguageModelsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListMedicalTranscriptionJobsRequest&, const Model::ListMedicalTranscriptionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMedicalTranscriptionJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListMedicalVocabulariesRequest&, const Model::ListMedicalVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMedicalVocabulariesResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListTranscriptionJobsRequest&, const Model::ListTranscriptionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTranscriptionJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListVocabulariesRequest&, const Model::ListVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVocabulariesResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListVocabularyFiltersRequest&, const Model::ListVocabularyFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVocabularyFiltersResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartCallAnalyticsJobRequest&, const Model::StartCallAnalyticsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCallAnalyticsJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartMedicalTranscriptionJobRequest&, const Model::StartMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartTranscriptionJobRequest&, const Model::StartTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateCallAnalyticsCategoryRequest&, const Model::UpdateCallAnalyticsCategoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCallAnalyticsCategoryResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateMedicalVocabularyRequest&, const Model::UpdateMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateVocabularyRequest&, const Model::UpdateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateVocabularyFilterRequest&, const Model::UpdateVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVocabularyFilterResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace TranscribeService
} // namespace Aws
