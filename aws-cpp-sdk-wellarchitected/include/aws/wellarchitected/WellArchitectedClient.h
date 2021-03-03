/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/CreateMilestoneResult.h>
#include <aws/wellarchitected/model/CreateWorkloadResult.h>
#include <aws/wellarchitected/model/CreateWorkloadShareResult.h>
#include <aws/wellarchitected/model/GetAnswerResult.h>
#include <aws/wellarchitected/model/GetLensReviewResult.h>
#include <aws/wellarchitected/model/GetLensReviewReportResult.h>
#include <aws/wellarchitected/model/GetLensVersionDifferenceResult.h>
#include <aws/wellarchitected/model/GetMilestoneResult.h>
#include <aws/wellarchitected/model/GetWorkloadResult.h>
#include <aws/wellarchitected/model/ListAnswersResult.h>
#include <aws/wellarchitected/model/ListLensReviewImprovementsResult.h>
#include <aws/wellarchitected/model/ListLensReviewsResult.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
        class AssociateLensesRequest;
        class CreateMilestoneRequest;
        class CreateWorkloadRequest;
        class CreateWorkloadShareRequest;
        class DeleteWorkloadRequest;
        class DeleteWorkloadShareRequest;
        class DisassociateLensesRequest;
        class GetAnswerRequest;
        class GetLensReviewRequest;
        class GetLensReviewReportRequest;
        class GetLensVersionDifferenceRequest;
        class GetMilestoneRequest;
        class GetWorkloadRequest;
        class ListAnswersRequest;
        class ListLensReviewImprovementsRequest;
        class ListLensReviewsRequest;
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
        class UpdateLensReviewRequest;
        class UpdateShareInvitationRequest;
        class UpdateWorkloadRequest;
        class UpdateWorkloadShareRequest;
        class UpgradeLensReviewRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> AssociateLensesOutcome;
        typedef Aws::Utils::Outcome<CreateMilestoneResult, WellArchitectedError> CreateMilestoneOutcome;
        typedef Aws::Utils::Outcome<CreateWorkloadResult, WellArchitectedError> CreateWorkloadOutcome;
        typedef Aws::Utils::Outcome<CreateWorkloadShareResult, WellArchitectedError> CreateWorkloadShareOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> DeleteWorkloadOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> DeleteWorkloadShareOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> DisassociateLensesOutcome;
        typedef Aws::Utils::Outcome<GetAnswerResult, WellArchitectedError> GetAnswerOutcome;
        typedef Aws::Utils::Outcome<GetLensReviewResult, WellArchitectedError> GetLensReviewOutcome;
        typedef Aws::Utils::Outcome<GetLensReviewReportResult, WellArchitectedError> GetLensReviewReportOutcome;
        typedef Aws::Utils::Outcome<GetLensVersionDifferenceResult, WellArchitectedError> GetLensVersionDifferenceOutcome;
        typedef Aws::Utils::Outcome<GetMilestoneResult, WellArchitectedError> GetMilestoneOutcome;
        typedef Aws::Utils::Outcome<GetWorkloadResult, WellArchitectedError> GetWorkloadOutcome;
        typedef Aws::Utils::Outcome<ListAnswersResult, WellArchitectedError> ListAnswersOutcome;
        typedef Aws::Utils::Outcome<ListLensReviewImprovementsResult, WellArchitectedError> ListLensReviewImprovementsOutcome;
        typedef Aws::Utils::Outcome<ListLensReviewsResult, WellArchitectedError> ListLensReviewsOutcome;
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
        typedef Aws::Utils::Outcome<UpdateLensReviewResult, WellArchitectedError> UpdateLensReviewOutcome;
        typedef Aws::Utils::Outcome<UpdateShareInvitationResult, WellArchitectedError> UpdateShareInvitationOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkloadResult, WellArchitectedError> UpdateWorkloadOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkloadShareResult, WellArchitectedError> UpdateWorkloadShareOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, WellArchitectedError> UpgradeLensReviewOutcome;

        typedef std::future<AssociateLensesOutcome> AssociateLensesOutcomeCallable;
        typedef std::future<CreateMilestoneOutcome> CreateMilestoneOutcomeCallable;
        typedef std::future<CreateWorkloadOutcome> CreateWorkloadOutcomeCallable;
        typedef std::future<CreateWorkloadShareOutcome> CreateWorkloadShareOutcomeCallable;
        typedef std::future<DeleteWorkloadOutcome> DeleteWorkloadOutcomeCallable;
        typedef std::future<DeleteWorkloadShareOutcome> DeleteWorkloadShareOutcomeCallable;
        typedef std::future<DisassociateLensesOutcome> DisassociateLensesOutcomeCallable;
        typedef std::future<GetAnswerOutcome> GetAnswerOutcomeCallable;
        typedef std::future<GetLensReviewOutcome> GetLensReviewOutcomeCallable;
        typedef std::future<GetLensReviewReportOutcome> GetLensReviewReportOutcomeCallable;
        typedef std::future<GetLensVersionDifferenceOutcome> GetLensVersionDifferenceOutcomeCallable;
        typedef std::future<GetMilestoneOutcome> GetMilestoneOutcomeCallable;
        typedef std::future<GetWorkloadOutcome> GetWorkloadOutcomeCallable;
        typedef std::future<ListAnswersOutcome> ListAnswersOutcomeCallable;
        typedef std::future<ListLensReviewImprovementsOutcome> ListLensReviewImprovementsOutcomeCallable;
        typedef std::future<ListLensReviewsOutcome> ListLensReviewsOutcomeCallable;
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
        typedef std::future<UpdateLensReviewOutcome> UpdateLensReviewOutcomeCallable;
        typedef std::future<UpdateShareInvitationOutcome> UpdateShareInvitationOutcomeCallable;
        typedef std::future<UpdateWorkloadOutcome> UpdateWorkloadOutcomeCallable;
        typedef std::future<UpdateWorkloadShareOutcome> UpdateWorkloadShareOutcomeCallable;
        typedef std::future<UpgradeLensReviewOutcome> UpgradeLensReviewOutcomeCallable;
} // namespace Model

  class WellArchitectedClient;

    typedef std::function<void(const WellArchitectedClient*, const Model::AssociateLensesRequest&, const Model::AssociateLensesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLensesResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::CreateMilestoneRequest&, const Model::CreateMilestoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMilestoneResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::CreateWorkloadRequest&, const Model::CreateWorkloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkloadResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::CreateWorkloadShareRequest&, const Model::CreateWorkloadShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkloadShareResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::DeleteWorkloadRequest&, const Model::DeleteWorkloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkloadResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::DeleteWorkloadShareRequest&, const Model::DeleteWorkloadShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkloadShareResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::DisassociateLensesRequest&, const Model::DisassociateLensesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLensesResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetAnswerRequest&, const Model::GetAnswerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnswerResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetLensReviewRequest&, const Model::GetLensReviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLensReviewResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetLensReviewReportRequest&, const Model::GetLensReviewReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLensReviewReportResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetLensVersionDifferenceRequest&, const Model::GetLensVersionDifferenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLensVersionDifferenceResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetMilestoneRequest&, const Model::GetMilestoneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMilestoneResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::GetWorkloadRequest&, const Model::GetWorkloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkloadResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListAnswersRequest&, const Model::ListAnswersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnswersResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListLensReviewImprovementsRequest&, const Model::ListLensReviewImprovementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLensReviewImprovementsResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::ListLensReviewsRequest&, const Model::ListLensReviewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLensReviewsResponseReceivedHandler;
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
    typedef std::function<void(const WellArchitectedClient*, const Model::UpdateLensReviewRequest&, const Model::UpdateLensReviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLensReviewResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpdateShareInvitationRequest&, const Model::UpdateShareInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateShareInvitationResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpdateWorkloadRequest&, const Model::UpdateWorkloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkloadResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpdateWorkloadShareRequest&, const Model::UpdateWorkloadShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkloadShareResponseReceivedHandler;
    typedef std::function<void(const WellArchitectedClient*, const Model::UpgradeLensReviewRequest&, const Model::UpgradeLensReviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpgradeLensReviewResponseReceivedHandler;

  /**
   * <fullname>AWS Well-Architected Tool</fullname> <p>This is the <i>AWS
   * Well-Architected Tool API Reference</i>. The AWS Well-Architected Tool API
   * provides programmatic access to the <a
   * href="http://aws.amazon.com/well-architected-tool">AWS Well-Architected Tool</a>
   * in the <a href="https://console.aws.amazon.com/wellarchitected">AWS Management
   * Console</a>. For information about the AWS Well-Architected Tool, see the <a
   * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">AWS
   * Well-Architected Tool User Guide</a>.</p>
   */
  class AWS_WELLARCHITECTED_API WellArchitectedClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WellArchitectedClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WellArchitectedClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WellArchitectedClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~WellArchitectedClient();


        /**
         * <p>Associate a lens to a workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AssociateLenses">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLensesOutcome AssociateLenses(const Model::AssociateLensesRequest& request) const;

        /**
         * <p>Associate a lens to a workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AssociateLenses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateLensesOutcomeCallable AssociateLensesCallable(const Model::AssociateLensesRequest& request) const;

        /**
         * <p>Associate a lens to a workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AssociateLenses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateLensesAsync(const Model::AssociateLensesRequest& request, const AssociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a milestone for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateMilestone">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMilestoneOutcome CreateMilestone(const Model::CreateMilestoneRequest& request) const;

        /**
         * <p>Create a milestone for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateMilestone">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMilestoneOutcomeCallable CreateMilestoneCallable(const Model::CreateMilestoneRequest& request) const;

        /**
         * <p>Create a milestone for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateMilestone">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMilestoneAsync(const Model::CreateMilestoneRequest& request, const CreateMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new workload.</p> <p>The owner of a workload can share the workload
         * with other AWS accounts and IAM users in the same AWS Region. Only the owner of
         * a workload can delete it.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/define-workload.html">Defining
         * a Workload</a> in the <i>AWS Well-Architected Tool User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkloadOutcome CreateWorkload(const Model::CreateWorkloadRequest& request) const;

        /**
         * <p>Create a new workload.</p> <p>The owner of a workload can share the workload
         * with other AWS accounts and IAM users in the same AWS Region. Only the owner of
         * a workload can delete it.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/define-workload.html">Defining
         * a Workload</a> in the <i>AWS Well-Architected Tool User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkloadOutcomeCallable CreateWorkloadCallable(const Model::CreateWorkloadRequest& request) const;

        /**
         * <p>Create a new workload.</p> <p>The owner of a workload can share the workload
         * with other AWS accounts and IAM users in the same AWS Region. Only the owner of
         * a workload can delete it.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/define-workload.html">Defining
         * a Workload</a> in the <i>AWS Well-Architected Tool User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkloadAsync(const Model::CreateWorkloadRequest& request, const CreateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a workload share.</p> <p>The owner of a workload can share it with
         * other AWS accounts and IAM users in the same AWS Region. Shared access to a
         * workload is not removed until the workload invitation is deleted.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/workloads-sharing.html">Sharing
         * a Workload</a> in the <i>AWS Well-Architected Tool User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkloadShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkloadShareOutcome CreateWorkloadShare(const Model::CreateWorkloadShareRequest& request) const;

        /**
         * <p>Create a workload share.</p> <p>The owner of a workload can share it with
         * other AWS accounts and IAM users in the same AWS Region. Shared access to a
         * workload is not removed until the workload invitation is deleted.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/workloads-sharing.html">Sharing
         * a Workload</a> in the <i>AWS Well-Architected Tool User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkloadShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkloadShareOutcomeCallable CreateWorkloadShareCallable(const Model::CreateWorkloadShareRequest& request) const;

        /**
         * <p>Create a workload share.</p> <p>The owner of a workload can share it with
         * other AWS accounts and IAM users in the same AWS Region. Shared access to a
         * workload is not removed until the workload invitation is deleted.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/workloads-sharing.html">Sharing
         * a Workload</a> in the <i>AWS Well-Architected Tool User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkloadShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkloadShareAsync(const Model::CreateWorkloadShareRequest& request, const CreateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkloadOutcome DeleteWorkload(const Model::DeleteWorkloadRequest& request) const;

        /**
         * <p>Delete an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteWorkload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkloadOutcomeCallable DeleteWorkloadCallable(const Model::DeleteWorkloadRequest& request) const;

        /**
         * <p>Delete an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteWorkload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkloadAsync(const Model::DeleteWorkloadRequest& request, const DeleteWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a workload share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteWorkloadShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkloadShareOutcome DeleteWorkloadShare(const Model::DeleteWorkloadShareRequest& request) const;

        /**
         * <p>Delete a workload share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteWorkloadShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkloadShareOutcomeCallable DeleteWorkloadShareCallable(const Model::DeleteWorkloadShareRequest& request) const;

        /**
         * <p>Delete a workload share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteWorkloadShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkloadShareAsync(const Model::DeleteWorkloadShareRequest& request, const DeleteWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociate a lens from a workload.</p>  <p>The AWS Well-Architected
         * Framework lens (<code>wellarchitected</code>) cannot be removed from a
         * workload.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DisassociateLenses">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLensesOutcome DisassociateLenses(const Model::DisassociateLensesRequest& request) const;

        /**
         * <p>Disassociate a lens from a workload.</p>  <p>The AWS Well-Architected
         * Framework lens (<code>wellarchitected</code>) cannot be removed from a
         * workload.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DisassociateLenses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateLensesOutcomeCallable DisassociateLensesCallable(const Model::DisassociateLensesRequest& request) const;

        /**
         * <p>Disassociate a lens from a workload.</p>  <p>The AWS Well-Architected
         * Framework lens (<code>wellarchitected</code>) cannot be removed from a
         * workload.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DisassociateLenses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateLensesAsync(const Model::DisassociateLensesRequest& request, const DisassociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetAnswer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnswerOutcome GetAnswer(const Model::GetAnswerRequest& request) const;

        /**
         * <p>Get lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetAnswer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAnswerOutcomeCallable GetAnswerCallable(const Model::GetAnswerRequest& request) const;

        /**
         * <p>Get lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetAnswer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnswerAsync(const Model::GetAnswerRequest& request, const GetAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensReviewOutcome GetLensReview(const Model::GetLensReviewRequest& request) const;

        /**
         * <p>Get lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLensReviewOutcomeCallable GetLensReviewCallable(const Model::GetLensReviewRequest& request) const;

        /**
         * <p>Get lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLensReviewAsync(const Model::GetLensReviewRequest& request, const GetLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get lens review report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReviewReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensReviewReportOutcome GetLensReviewReport(const Model::GetLensReviewReportRequest& request) const;

        /**
         * <p>Get lens review report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReviewReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLensReviewReportOutcomeCallable GetLensReviewReportCallable(const Model::GetLensReviewReportRequest& request) const;

        /**
         * <p>Get lens review report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReviewReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLensReviewReportAsync(const Model::GetLensReviewReportRequest& request, const GetLensReviewReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get lens version differences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensVersionDifference">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensVersionDifferenceOutcome GetLensVersionDifference(const Model::GetLensVersionDifferenceRequest& request) const;

        /**
         * <p>Get lens version differences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensVersionDifference">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLensVersionDifferenceOutcomeCallable GetLensVersionDifferenceCallable(const Model::GetLensVersionDifferenceRequest& request) const;

        /**
         * <p>Get lens version differences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensVersionDifference">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLensVersionDifferenceAsync(const Model::GetLensVersionDifferenceRequest& request, const GetLensVersionDifferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a milestone for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetMilestone">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMilestoneOutcome GetMilestone(const Model::GetMilestoneRequest& request) const;

        /**
         * <p>Get a milestone for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetMilestone">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMilestoneOutcomeCallable GetMilestoneCallable(const Model::GetMilestoneRequest& request) const;

        /**
         * <p>Get a milestone for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetMilestone">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMilestoneAsync(const Model::GetMilestoneRequest& request, const GetMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkloadOutcome GetWorkload(const Model::GetWorkloadRequest& request) const;

        /**
         * <p>Get an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetWorkload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkloadOutcomeCallable GetWorkloadCallable(const Model::GetWorkloadRequest& request) const;

        /**
         * <p>Get an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetWorkload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkloadAsync(const Model::GetWorkloadRequest& request, const GetWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List of answers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListAnswers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnswersOutcome ListAnswers(const Model::ListAnswersRequest& request) const;

        /**
         * <p>List of answers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListAnswers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnswersOutcomeCallable ListAnswersCallable(const Model::ListAnswersRequest& request) const;

        /**
         * <p>List of answers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListAnswers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnswersAsync(const Model::ListAnswersRequest& request, const ListAnswersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List lens review improvements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviewImprovements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensReviewImprovementsOutcome ListLensReviewImprovements(const Model::ListLensReviewImprovementsRequest& request) const;

        /**
         * <p>List lens review improvements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviewImprovements">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLensReviewImprovementsOutcomeCallable ListLensReviewImprovementsCallable(const Model::ListLensReviewImprovementsRequest& request) const;

        /**
         * <p>List lens review improvements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviewImprovements">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLensReviewImprovementsAsync(const Model::ListLensReviewImprovementsRequest& request, const ListLensReviewImprovementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List lens reviews.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensReviewsOutcome ListLensReviews(const Model::ListLensReviewsRequest& request) const;

        /**
         * <p>List lens reviews.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviews">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLensReviewsOutcomeCallable ListLensReviewsCallable(const Model::ListLensReviewsRequest& request) const;

        /**
         * <p>List lens reviews.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviews">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLensReviewsAsync(const Model::ListLensReviewsRequest& request, const ListLensReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the available lenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensesOutcome ListLenses(const Model::ListLensesRequest& request) const;

        /**
         * <p>List the available lenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLenses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLensesOutcomeCallable ListLensesCallable(const Model::ListLensesRequest& request) const;

        /**
         * <p>List the available lenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLenses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLensesAsync(const Model::ListLensesRequest& request, const ListLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all milestones for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListMilestones">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMilestonesOutcome ListMilestones(const Model::ListMilestonesRequest& request) const;

        /**
         * <p>List all milestones for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListMilestones">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMilestonesOutcomeCallable ListMilestonesCallable(const Model::ListMilestonesRequest& request) const;

        /**
         * <p>List all milestones for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListMilestones">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMilestonesAsync(const Model::ListMilestonesRequest& request, const ListMilestonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List lens notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationsOutcome ListNotifications(const Model::ListNotificationsRequest& request) const;

        /**
         * <p>List lens notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListNotifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotificationsOutcomeCallable ListNotificationsCallable(const Model::ListNotificationsRequest& request) const;

        /**
         * <p>List lens notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListNotifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotificationsAsync(const Model::ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the workload invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListShareInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListShareInvitationsOutcome ListShareInvitations(const Model::ListShareInvitationsRequest& request) const;

        /**
         * <p>List the workload invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListShareInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListShareInvitationsOutcomeCallable ListShareInvitationsCallable(const Model::ListShareInvitationsRequest& request) const;

        /**
         * <p>List the workload invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListShareInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListShareInvitationsAsync(const Model::ListShareInvitationsRequest& request, const ListShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the workload shares associated with the workload.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloadShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadSharesOutcome ListWorkloadShares(const Model::ListWorkloadSharesRequest& request) const;

        /**
         * <p>List the workload shares associated with the workload.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloadShares">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkloadSharesOutcomeCallable ListWorkloadSharesCallable(const Model::ListWorkloadSharesRequest& request) const;

        /**
         * <p>List the workload shares associated with the workload.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloadShares">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkloadSharesAsync(const Model::ListWorkloadSharesRequest& request, const ListWorkloadSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List workloads. Paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadsOutcome ListWorkloads(const Model::ListWorkloadsRequest& request) const;

        /**
         * <p>List workloads. Paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloads">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkloadsOutcomeCallable ListWorkloadsCallable(const Model::ListWorkloadsRequest& request) const;

        /**
         * <p>List workloads. Paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloads">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkloadsAsync(const Model::ListWorkloadsRequest& request, const ListWorkloadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the answer to a specific question in a workload review.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateAnswer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnswerOutcome UpdateAnswer(const Model::UpdateAnswerRequest& request) const;

        /**
         * <p>Update the answer to a specific question in a workload review.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateAnswer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAnswerOutcomeCallable UpdateAnswerCallable(const Model::UpdateAnswerRequest& request) const;

        /**
         * <p>Update the answer to a specific question in a workload review.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateAnswer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAnswerAsync(const Model::UpdateAnswerRequest& request, const UpdateAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLensReviewOutcome UpdateLensReview(const Model::UpdateLensReviewRequest& request) const;

        /**
         * <p>Update lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateLensReview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLensReviewOutcomeCallable UpdateLensReviewCallable(const Model::UpdateLensReviewRequest& request) const;

        /**
         * <p>Update lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateLensReview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLensReviewAsync(const Model::UpdateLensReviewRequest& request, const UpdateLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a workload invitation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateShareInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateShareInvitationOutcome UpdateShareInvitation(const Model::UpdateShareInvitationRequest& request) const;

        /**
         * <p>Update a workload invitation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateShareInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateShareInvitationOutcomeCallable UpdateShareInvitationCallable(const Model::UpdateShareInvitationRequest& request) const;

        /**
         * <p>Update a workload invitation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateShareInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateShareInvitationAsync(const Model::UpdateShareInvitationRequest& request, const UpdateShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkloadOutcome UpdateWorkload(const Model::UpdateWorkloadRequest& request) const;

        /**
         * <p>Update an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkloadOutcomeCallable UpdateWorkloadCallable(const Model::UpdateWorkloadRequest& request) const;

        /**
         * <p>Update an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkloadAsync(const Model::UpdateWorkloadRequest& request, const UpdateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a workload share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkloadShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkloadShareOutcome UpdateWorkloadShare(const Model::UpdateWorkloadShareRequest& request) const;

        /**
         * <p>Update a workload share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkloadShare">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkloadShareOutcomeCallable UpdateWorkloadShareCallable(const Model::UpdateWorkloadShareRequest& request) const;

        /**
         * <p>Update a workload share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkloadShare">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkloadShareAsync(const Model::UpdateWorkloadShareRequest& request, const UpdateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Upgrade lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpgradeLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeLensReviewOutcome UpgradeLensReview(const Model::UpgradeLensReviewRequest& request) const;

        /**
         * <p>Upgrade lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpgradeLensReview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpgradeLensReviewOutcomeCallable UpgradeLensReviewCallable(const Model::UpgradeLensReviewRequest& request) const;

        /**
         * <p>Upgrade lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpgradeLensReview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpgradeLensReviewAsync(const Model::UpgradeLensReviewRequest& request, const UpgradeLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateLensesAsyncHelper(const Model::AssociateLensesRequest& request, const AssociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMilestoneAsyncHelper(const Model::CreateMilestoneRequest& request, const CreateMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkloadAsyncHelper(const Model::CreateWorkloadRequest& request, const CreateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkloadShareAsyncHelper(const Model::CreateWorkloadShareRequest& request, const CreateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkloadAsyncHelper(const Model::DeleteWorkloadRequest& request, const DeleteWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkloadShareAsyncHelper(const Model::DeleteWorkloadShareRequest& request, const DeleteWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateLensesAsyncHelper(const Model::DisassociateLensesRequest& request, const DisassociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAnswerAsyncHelper(const Model::GetAnswerRequest& request, const GetAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLensReviewAsyncHelper(const Model::GetLensReviewRequest& request, const GetLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLensReviewReportAsyncHelper(const Model::GetLensReviewReportRequest& request, const GetLensReviewReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLensVersionDifferenceAsyncHelper(const Model::GetLensVersionDifferenceRequest& request, const GetLensVersionDifferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMilestoneAsyncHelper(const Model::GetMilestoneRequest& request, const GetMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkloadAsyncHelper(const Model::GetWorkloadRequest& request, const GetWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnswersAsyncHelper(const Model::ListAnswersRequest& request, const ListAnswersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLensReviewImprovementsAsyncHelper(const Model::ListLensReviewImprovementsRequest& request, const ListLensReviewImprovementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLensReviewsAsyncHelper(const Model::ListLensReviewsRequest& request, const ListLensReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLensesAsyncHelper(const Model::ListLensesRequest& request, const ListLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMilestonesAsyncHelper(const Model::ListMilestonesRequest& request, const ListMilestonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotificationsAsyncHelper(const Model::ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListShareInvitationsAsyncHelper(const Model::ListShareInvitationsRequest& request, const ListShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkloadSharesAsyncHelper(const Model::ListWorkloadSharesRequest& request, const ListWorkloadSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkloadsAsyncHelper(const Model::ListWorkloadsRequest& request, const ListWorkloadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAnswerAsyncHelper(const Model::UpdateAnswerRequest& request, const UpdateAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLensReviewAsyncHelper(const Model::UpdateLensReviewRequest& request, const UpdateLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateShareInvitationAsyncHelper(const Model::UpdateShareInvitationRequest& request, const UpdateShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkloadAsyncHelper(const Model::UpdateWorkloadRequest& request, const UpdateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkloadShareAsyncHelper(const Model::UpdateWorkloadShareRequest& request, const UpdateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpgradeLensReviewAsyncHelper(const Model::UpgradeLensReviewRequest& request, const UpgradeLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WellArchitected
} // namespace Aws
