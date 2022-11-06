/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mediaconvert/MediaConvertErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mediaconvert/MediaConvertEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MediaConvertClient header */
#include <aws/mediaconvert/model/AssociateCertificateResult.h>
#include <aws/mediaconvert/model/CancelJobResult.h>
#include <aws/mediaconvert/model/CreateJobResult.h>
#include <aws/mediaconvert/model/CreateJobTemplateResult.h>
#include <aws/mediaconvert/model/CreatePresetResult.h>
#include <aws/mediaconvert/model/CreateQueueResult.h>
#include <aws/mediaconvert/model/DeleteJobTemplateResult.h>
#include <aws/mediaconvert/model/DeletePolicyResult.h>
#include <aws/mediaconvert/model/DeletePresetResult.h>
#include <aws/mediaconvert/model/DeleteQueueResult.h>
#include <aws/mediaconvert/model/DescribeEndpointsResult.h>
#include <aws/mediaconvert/model/DisassociateCertificateResult.h>
#include <aws/mediaconvert/model/GetJobResult.h>
#include <aws/mediaconvert/model/GetJobTemplateResult.h>
#include <aws/mediaconvert/model/GetPolicyResult.h>
#include <aws/mediaconvert/model/GetPresetResult.h>
#include <aws/mediaconvert/model/GetQueueResult.h>
#include <aws/mediaconvert/model/ListJobTemplatesResult.h>
#include <aws/mediaconvert/model/ListJobsResult.h>
#include <aws/mediaconvert/model/ListPresetsResult.h>
#include <aws/mediaconvert/model/ListQueuesResult.h>
#include <aws/mediaconvert/model/ListTagsForResourceResult.h>
#include <aws/mediaconvert/model/PutPolicyResult.h>
#include <aws/mediaconvert/model/TagResourceResult.h>
#include <aws/mediaconvert/model/UntagResourceResult.h>
#include <aws/mediaconvert/model/UpdateJobTemplateResult.h>
#include <aws/mediaconvert/model/UpdatePresetResult.h>
#include <aws/mediaconvert/model/UpdateQueueResult.h>
/* End of service model headers required in MediaConvertClient header */

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

  namespace MediaConvert
  {
    using MediaConvertClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MediaConvertEndpointProviderBase = Aws::MediaConvert::Endpoint::MediaConvertEndpointProviderBase;
    using MediaConvertEndpointProvider = Aws::MediaConvert::Endpoint::MediaConvertEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MediaConvertClient header */
      class AssociateCertificateRequest;
      class CancelJobRequest;
      class CreateJobRequest;
      class CreateJobTemplateRequest;
      class CreatePresetRequest;
      class CreateQueueRequest;
      class DeleteJobTemplateRequest;
      class DeletePolicyRequest;
      class DeletePresetRequest;
      class DeleteQueueRequest;
      class DescribeEndpointsRequest;
      class DisassociateCertificateRequest;
      class GetJobRequest;
      class GetJobTemplateRequest;
      class GetPolicyRequest;
      class GetPresetRequest;
      class GetQueueRequest;
      class ListJobTemplatesRequest;
      class ListJobsRequest;
      class ListPresetsRequest;
      class ListQueuesRequest;
      class ListTagsForResourceRequest;
      class PutPolicyRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateJobTemplateRequest;
      class UpdatePresetRequest;
      class UpdateQueueRequest;
      /* End of service model forward declarations required in MediaConvertClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateCertificateResult, MediaConvertError> AssociateCertificateOutcome;
      typedef Aws::Utils::Outcome<CancelJobResult, MediaConvertError> CancelJobOutcome;
      typedef Aws::Utils::Outcome<CreateJobResult, MediaConvertError> CreateJobOutcome;
      typedef Aws::Utils::Outcome<CreateJobTemplateResult, MediaConvertError> CreateJobTemplateOutcome;
      typedef Aws::Utils::Outcome<CreatePresetResult, MediaConvertError> CreatePresetOutcome;
      typedef Aws::Utils::Outcome<CreateQueueResult, MediaConvertError> CreateQueueOutcome;
      typedef Aws::Utils::Outcome<DeleteJobTemplateResult, MediaConvertError> DeleteJobTemplateOutcome;
      typedef Aws::Utils::Outcome<DeletePolicyResult, MediaConvertError> DeletePolicyOutcome;
      typedef Aws::Utils::Outcome<DeletePresetResult, MediaConvertError> DeletePresetOutcome;
      typedef Aws::Utils::Outcome<DeleteQueueResult, MediaConvertError> DeleteQueueOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointsResult, MediaConvertError> DescribeEndpointsOutcome;
      typedef Aws::Utils::Outcome<DisassociateCertificateResult, MediaConvertError> DisassociateCertificateOutcome;
      typedef Aws::Utils::Outcome<GetJobResult, MediaConvertError> GetJobOutcome;
      typedef Aws::Utils::Outcome<GetJobTemplateResult, MediaConvertError> GetJobTemplateOutcome;
      typedef Aws::Utils::Outcome<GetPolicyResult, MediaConvertError> GetPolicyOutcome;
      typedef Aws::Utils::Outcome<GetPresetResult, MediaConvertError> GetPresetOutcome;
      typedef Aws::Utils::Outcome<GetQueueResult, MediaConvertError> GetQueueOutcome;
      typedef Aws::Utils::Outcome<ListJobTemplatesResult, MediaConvertError> ListJobTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, MediaConvertError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListPresetsResult, MediaConvertError> ListPresetsOutcome;
      typedef Aws::Utils::Outcome<ListQueuesResult, MediaConvertError> ListQueuesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaConvertError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutPolicyResult, MediaConvertError> PutPolicyOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MediaConvertError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MediaConvertError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateJobTemplateResult, MediaConvertError> UpdateJobTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdatePresetResult, MediaConvertError> UpdatePresetOutcome;
      typedef Aws::Utils::Outcome<UpdateQueueResult, MediaConvertError> UpdateQueueOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateCertificateOutcome> AssociateCertificateOutcomeCallable;
      typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
      typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
      typedef std::future<CreateJobTemplateOutcome> CreateJobTemplateOutcomeCallable;
      typedef std::future<CreatePresetOutcome> CreatePresetOutcomeCallable;
      typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
      typedef std::future<DeleteJobTemplateOutcome> DeleteJobTemplateOutcomeCallable;
      typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
      typedef std::future<DeletePresetOutcome> DeletePresetOutcomeCallable;
      typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
      typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
      typedef std::future<DisassociateCertificateOutcome> DisassociateCertificateOutcomeCallable;
      typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
      typedef std::future<GetJobTemplateOutcome> GetJobTemplateOutcomeCallable;
      typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
      typedef std::future<GetPresetOutcome> GetPresetOutcomeCallable;
      typedef std::future<GetQueueOutcome> GetQueueOutcomeCallable;
      typedef std::future<ListJobTemplatesOutcome> ListJobTemplatesOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListPresetsOutcome> ListPresetsOutcomeCallable;
      typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutPolicyOutcome> PutPolicyOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateJobTemplateOutcome> UpdateJobTemplateOutcomeCallable;
      typedef std::future<UpdatePresetOutcome> UpdatePresetOutcomeCallable;
      typedef std::future<UpdateQueueOutcome> UpdateQueueOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MediaConvertClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MediaConvertClient*, const Model::AssociateCertificateRequest&, const Model::AssociateCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateCertificateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::CreateJobTemplateRequest&, const Model::CreateJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::CreatePresetRequest&, const Model::CreatePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresetResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::CreateQueueRequest&, const Model::CreateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueueResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DeleteJobTemplateRequest&, const Model::DeleteJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DeletePresetRequest&, const Model::DeletePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePresetResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DeleteQueueRequest&, const Model::DeleteQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueueResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DisassociateCertificateRequest&, const Model::DisassociateCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateCertificateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::GetJobTemplateRequest&, const Model::GetJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::GetPresetRequest&, const Model::GetPresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPresetResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::GetQueueRequest&, const Model::GetQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::ListJobTemplatesRequest&, const Model::ListJobTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobTemplatesResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::ListPresetsRequest&, const Model::ListPresetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPresetsResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::ListQueuesRequest&, const Model::ListQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueuesResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::PutPolicyRequest&, const Model::PutPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::UpdateJobTemplateRequest&, const Model::UpdateJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::UpdatePresetRequest&, const Model::UpdatePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePresetResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::UpdateQueueRequest&, const Model::UpdateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MediaConvert
} // namespace Aws
