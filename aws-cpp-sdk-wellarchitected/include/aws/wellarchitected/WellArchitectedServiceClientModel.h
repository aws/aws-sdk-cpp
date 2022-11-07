/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/wellarchitected/WellArchitectedErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/wellarchitected/WellArchitectedEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WellArchitectedClient header */
#include <aws/wellarchitected/model/CreateLensShareResult.h>
#include <aws/wellarchitected/model/CreateLensVersionResult.h>
#include <aws/wellarchitected/model/CreateMilestoneResult.h>
#include <aws/wellarchitected/model/CreateWorkloadResult.h>
#include <aws/wellarchitected/model/CreateWorkloadShareResult.h>
#include <aws/wellarchitected/model/ExportLensResult.h>
#include <aws/wellarchitected/model/GetAnswerResult.h>
#include <aws/wellarchitected/model/GetLensResult.h>
#include <aws/wellarchitected/model/GetLensReviewResult.h>
#include <aws/wellarchitected/model/GetLensReviewReportResult.h>
#include <aws/wellarchitected/model/GetLensVersionDifferenceResult.h>
#include <aws/wellarchitected/model/GetMilestoneResult.h>
#include <aws/wellarchitected/model/GetWorkloadResult.h>
#include <aws/wellarchitected/model/ImportLensResult.h>
#include <aws/wellarchitected/model/ListAnswersResult.h>
#include <aws/wellarchitected/model/ListCheckDetailsResult.h>
#include <aws/wellarchitected/model/ListCheckSummariesResult.h>
#include <aws/wellarchitected/model/ListLensReviewImprovementsResult.h>
#include <aws/wellarchitected/model/ListLensReviewsResult.h>
#include <aws/wellarchitected/model/ListLensSharesResult.h>
#include <aws/wellarchitected/model/ListLensesResult.h>
#include <aws/wellarchitected/model/ListMilestonesResult.h>
#include <aws/wellarchitected/model/ListNotificationsResult.h>
#include <aws/wellarchitected/model/ListShareInvitationsResult.h>
#include <aws/wellarchitected/model/ListTagsForResourceResult.h>
#include <aws/wellarchitected/model/ListWorkloadSharesResult.h>
#include <aws/wellarchitected/model/ListWorkloadsResult.h>
#include <aws/wellarchitected/model/TagResourceResult.h>
#include <aws/wellarchitected/model/UntagResourceResult.h>
#include <aws/wellarchitected/model/UpdateAnswerResult.h>
#include <aws/wellarchitected/model/UpdateLensReviewResult.h>
#include <aws/wellarchitected/model/UpdateShareInvitationResult.h>
#include <aws/wellarchitected/model/UpdateWorkloadResult.h>
#include <aws/wellarchitected/model/UpdateWorkloadShareResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in WellArchitectedClient header */

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

  namespace WellArchitected
  {
    using WellArchitectedClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using WellArchitectedEndpointProviderBase = Aws::WellArchitected::Endpoint::WellArchitectedEndpointProviderBase;
    using WellArchitectedEndpointProvider = Aws::WellArchitected::Endpoint::WellArchitectedEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WellArchitectedClient header */
      class AssociateLensesRequest;
      class CreateLensShareRequest;
      class CreateLensVersionRequest;
      class CreateMilestoneRequest;
      class CreateWorkloadRequest;
      class CreateWorkloadShareRequest;
      class DeleteLensRequest;
      class DeleteLensShareRequest;
      class DeleteWorkloadRequest;
      class DeleteWorkloadShareRequest;
      class DisassociateLensesRequest;
      class ExportLensRequest;
      class GetAnswerRequest;
      class GetLensRequest;
      class GetLensReviewRequest;
      class GetLensReviewReportRequest;
      class GetLensVersionDifferenceRequest;
      class GetMilestoneRequest;
      class GetWorkloadRequest;
      class ImportLensRequest;
      class ListAnswersRequest;
      class ListCheckDetailsRequest;
      class ListCheckSummariesRequest;
      class ListLensReviewImprovementsRequest;
      class ListLensReviewsRequest;
      class ListLensSharesRequest;
      class ListLensesRequest;
      class ListMilestonesRequest;
      class ListNotificationsRequest;
      class ListShareInvitationsRequest;
      class ListTagsForResourceRequest;
      class ListWorkloadSharesRequest;
      class ListWorkloadsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAnswerRequest;
      class UpdateGlobalSettingsRequest;
      class UpdateLensReviewRequest;
      class UpdateShareInvitationRequest;
      class UpdateWorkloadRequest;
      class UpdateWorkloadShareRequest;
      class UpgradeLensReviewRequest;
      /* End of service model forward declarations required in WellArchitectedClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> AssociateLensesOutcome;
      typedef Aws::Utils::Outcome<CreateLensShareResult, WellArchitectedError> CreateLensShareOutcome;
      typedef Aws::Utils::Outcome<CreateLensVersionResult, WellArchitectedError> CreateLensVersionOutcome;
      typedef Aws::Utils::Outcome<CreateMilestoneResult, WellArchitectedError> CreateMilestoneOutcome;
      typedef Aws::Utils::Outcome<CreateWorkloadResult, WellArchitectedError> CreateWorkloadOutcome;
      typedef Aws::Utils::Outcome<CreateWorkloadShareResult, WellArchitectedError> CreateWorkloadShareOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> DeleteLensOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> DeleteLensShareOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> DeleteWorkloadOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> DeleteWorkloadShareOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> DisassociateLensesOutcome;
      typedef Aws::Utils::Outcome<ExportLensResult, WellArchitectedError> ExportLensOutcome;
      typedef Aws::Utils::Outcome<GetAnswerResult, WellArchitectedError> GetAnswerOutcome;
      typedef Aws::Utils::Outcome<GetLensResult, WellArchitectedError> GetLensOutcome;
      typedef Aws::Utils::Outcome<GetLensReviewResult, WellArchitectedError> GetLensReviewOutcome;
      typedef Aws::Utils::Outcome<GetLensReviewReportResult, WellArchitectedError> GetLensReviewReportOutcome;
      typedef Aws::Utils::Outcome<GetLensVersionDifferenceResult, WellArchitectedError> GetLensVersionDifferenceOutcome;
      typedef Aws::Utils::Outcome<GetMilestoneResult, WellArchitectedError> GetMilestoneOutcome;
      typedef Aws::Utils::Outcome<GetWorkloadResult, WellArchitectedError> GetWorkloadOutcome;
      typedef Aws::Utils::Outcome<ImportLensResult, WellArchitectedError> ImportLensOutcome;
      typedef Aws::Utils::Outcome<ListAnswersResult, WellArchitectedError> ListAnswersOutcome;
      typedef Aws::Utils::Outcome<ListCheckDetailsResult, WellArchitectedError> ListCheckDetailsOutcome;
      typedef Aws::Utils::Outcome<ListCheckSummariesResult, WellArchitectedError> ListCheckSummariesOutcome;
      typedef Aws::Utils::Outcome<ListLensReviewImprovementsResult, WellArchitectedError> ListLensReviewImprovementsOutcome;
      typedef Aws::Utils::Outcome<ListLensReviewsResult, WellArchitectedError> ListLensReviewsOutcome;
      typedef Aws::Utils::Outcome<ListLensSharesResult, WellArchitectedError> ListLensSharesOutcome;
      typedef Aws::Utils::Outcome<ListLensesResult, WellArchitectedError> ListLensesOutcome;
      typedef Aws::Utils::Outcome<ListMilestonesResult, WellArchitectedError> ListMilestonesOutcome;
      typedef Aws::Utils::Outcome<ListNotificationsResult, WellArchitectedError> ListNotificationsOutcome;
      typedef Aws::Utils::Outcome<ListShareInvitationsResult, WellArchitectedError> ListShareInvitationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, WellArchitectedError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorkloadSharesResult, WellArchitectedError> ListWorkloadSharesOutcome;
      typedef Aws::Utils::Outcome<ListWorkloadsResult, WellArchitectedError> ListWorkloadsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, WellArchitectedError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, WellArchitectedError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAnswerResult, WellArchitectedError> UpdateAnswerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> UpdateGlobalSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateLensReviewResult, WellArchitectedError> UpdateLensReviewOutcome;
      typedef Aws::Utils::Outcome<UpdateShareInvitationResult, WellArchitectedError> UpdateShareInvitationOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkloadResult, WellArchitectedError> UpdateWorkloadOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkloadShareResult, WellArchitectedError> UpdateWorkloadShareOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> UpgradeLensReviewOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateLensesOutcome> AssociateLensesOutcomeCallable;
      typedef std::future<CreateLensShareOutcome> CreateLensShareOutcomeCallable;
      typedef std::future<CreateLensVersionOutcome> CreateLensVersionOutcomeCallable;
      typedef std::future<CreateMilestoneOutcome> CreateMilestoneOutcomeCallable;
      typedef std::future<CreateWorkloadOutcome> CreateWorkloadOutcomeCallable;
      typedef std::future<CreateWorkloadShareOutcome> CreateWorkloadShareOutcomeCallable;
      typedef std::future<DeleteLensOutcome> DeleteLensOutcomeCallable;
      typedef std::future<DeleteLensShareOutcome> DeleteLensShareOutcomeCallable;
      typedef std::future<DeleteWorkloadOutcome> DeleteWorkloadOutcomeCallable;
      typedef std::future<DeleteWorkloadShareOutcome> DeleteWorkloadShareOutcomeCallable;
      typedef std::future<DisassociateLensesOutcome> DisassociateLensesOutcomeCallable;
      typedef std::future<ExportLensOutcome> ExportLensOutcomeCallable;
      typedef std::future<GetAnswerOutcome> GetAnswerOutcomeCallable;
      typedef std::future<GetLensOutcome> GetLensOutcomeCallable;
      typedef std::future<GetLensReviewOutcome> GetLensReviewOutcomeCallable;
      typedef std::future<GetLensReviewReportOutcome> GetLensReviewReportOutcomeCallable;
      typedef std::future<GetLensVersionDifferenceOutcome> GetLensVersionDifferenceOutcomeCallable;
      typedef std::future<GetMilestoneOutcome> GetMilestoneOutcomeCallable;
      typedef std::future<GetWorkloadOutcome> GetWorkloadOutcomeCallable;
      typedef std::future<ImportLensOutcome> ImportLensOutcomeCallable;
      typedef std::future<ListAnswersOutcome> ListAnswersOutcomeCallable;
      typedef std::future<ListCheckDetailsOutcome> ListCheckDetailsOutcomeCallable;
      typedef std::future<ListCheckSummariesOutcome> ListCheckSummariesOutcomeCallable;
      typedef std::future<ListLensReviewImprovementsOutcome> ListLensReviewImprovementsOutcomeCallable;
      typedef std::future<ListLensReviewsOutcome> ListLensReviewsOutcomeCallable;
      typedef std::future<ListLensSharesOutcome> ListLensSharesOutcomeCallable;
      typedef std::future<ListLensesOutcome> ListLensesOutcomeCallable;
      typedef std::future<ListMilestonesOutcome> ListMilestonesOutcomeCallable;
      typedef std::future<ListNotificationsOutcome> ListNotificationsOutcomeCallable;
      typedef std::future<ListShareInvitationsOutcome> ListShareInvitationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWorkloadSharesOutcome> ListWorkloadSharesOutcomeCallable;
      typedef std::future<ListWorkloadsOutcome> ListWorkloadsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAnswerOutcome> UpdateAnswerOutcomeCallable;
      typedef std::future<UpdateGlobalSettingsOutcome> UpdateGlobalSettingsOutcomeCallable;
      typedef std::future<UpdateLensReviewOutcome> UpdateLensReviewOutcomeCallable;
      typedef std::future<UpdateShareInvitationOutcome> UpdateShareInvitationOutcomeCallable;
      typedef std::future<UpdateWorkloadOutcome> UpdateWorkloadOutcomeCallable;
      typedef std::future<UpdateWorkloadShareOutcome> UpdateWorkloadShareOutcomeCallable;
      typedef std::future<UpgradeLensReviewOutcome> UpgradeLensReviewOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class WellArchitectedClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const WellArchitectedClient*, const Model::AssociateLensesRequest&, const Model::AssociateLensesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLensesResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::CreateLensShareRequest&, const Model::CreateLensShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLensShareResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::CreateLensVersionRequest&, const Model::CreateLensVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLensVersionResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::CreateMilestoneRequest&, const Model::CreateMilestoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMilestoneResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::CreateWorkloadRequest&, const Model::CreateWorkloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkloadResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::CreateWorkloadShareRequest&, const Model::CreateWorkloadShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkloadShareResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::DeleteLensRequest&, const Model::DeleteLensOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLensResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::DeleteLensShareRequest&, const Model::DeleteLensShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLensShareResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::DeleteWorkloadRequest&, const Model::DeleteWorkloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkloadResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::DeleteWorkloadShareRequest&, const Model::DeleteWorkloadShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkloadShareResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::DisassociateLensesRequest&, const Model::DisassociateLensesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLensesResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ExportLensRequest&, const Model::ExportLensOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportLensResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetAnswerRequest&, const Model::GetAnswerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnswerResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetLensRequest&, const Model::GetLensOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLensResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetLensReviewRequest&, const Model::GetLensReviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLensReviewResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetLensReviewReportRequest&, const Model::GetLensReviewReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLensReviewReportResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetLensVersionDifferenceRequest&, const Model::GetLensVersionDifferenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLensVersionDifferenceResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetMilestoneRequest&, const Model::GetMilestoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMilestoneResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetWorkloadRequest&, const Model::GetWorkloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkloadResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ImportLensRequest&, const Model::ImportLensOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportLensResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListAnswersRequest&, const Model::ListAnswersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnswersResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListCheckDetailsRequest&, const Model::ListCheckDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCheckDetailsResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListCheckSummariesRequest&, const Model::ListCheckSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCheckSummariesResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListLensReviewImprovementsRequest&, const Model::ListLensReviewImprovementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLensReviewImprovementsResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListLensReviewsRequest&, const Model::ListLensReviewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLensReviewsResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListLensSharesRequest&, const Model::ListLensSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLensSharesResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListLensesRequest&, const Model::ListLensesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLensesResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListMilestonesRequest&, const Model::ListMilestonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMilestonesResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListNotificationsRequest&, const Model::ListNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationsResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListShareInvitationsRequest&, const Model::ListShareInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListShareInvitationsResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListWorkloadSharesRequest&, const Model::ListWorkloadSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkloadSharesResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListWorkloadsRequest&, const Model::ListWorkloadsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkloadsResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpdateAnswerRequest&, const Model::UpdateAnswerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnswerResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpdateGlobalSettingsRequest&, const Model::UpdateGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpdateLensReviewRequest&, const Model::UpdateLensReviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLensReviewResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpdateShareInvitationRequest&, const Model::UpdateShareInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateShareInvitationResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpdateWorkloadRequest&, const Model::UpdateWorkloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkloadResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpdateWorkloadShareRequest&, const Model::UpdateWorkloadShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkloadShareResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpgradeLensReviewRequest&, const Model::UpgradeLensReviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpgradeLensReviewResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WellArchitected
} // namespace Aws
