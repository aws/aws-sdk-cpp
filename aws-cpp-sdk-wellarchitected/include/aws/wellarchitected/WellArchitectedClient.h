/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/WellArchitectedServiceClientModel.h>
#include <aws/wellarchitected/WellArchitectedLegacyAsyncMacros.h>

namespace Aws
{
namespace WellArchitected
{
  /**
   * <fullname>Well-Architected Tool</fullname> <p>This is the <i>Well-Architected
   * Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
   * href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in
   * the <a href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services
   * Management Console</a>. For information about the Well-Architected Tool, see the
   * <a
   * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected
   * Tool User Guide</a>.</p>
   */
  class AWS_WELLARCHITECTED_API WellArchitectedClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WellArchitectedClient(const Aws::WellArchitected::WellArchitectedClientConfiguration& clientConfiguration = Aws::WellArchitected::WellArchitectedClientConfiguration(),
                              std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider = Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WellArchitectedClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider = Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG),
                              const Aws::WellArchitected::WellArchitectedClientConfiguration& clientConfiguration = Aws::WellArchitected::WellArchitectedClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WellArchitectedClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider = Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG),
                              const Aws::WellArchitected::WellArchitectedClientConfiguration& clientConfiguration = Aws::WellArchitected::WellArchitectedClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WellArchitectedClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WellArchitectedClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WellArchitectedClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WellArchitectedClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Associate a lens to a workload.</p> <p>Up to 10 lenses can be associated with
         * a workload in a single API operation. A maximum of 20 lenses can be associated
         * with a workload.</p>  <p> <b>Disclaimer</b> </p> <p>By accessing and/or
         * applying custom lenses created by another Amazon Web Services user or account,
         * you acknowledge that custom lenses created by other users and shared with you
         * are Third Party Content as defined in the Amazon Web Services Customer
         * Agreement. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AssociateLenses">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLensesOutcome AssociateLenses(const Model::AssociateLensesRequest& request) const;


        /**
         * <p>Create a lens share.</p> <p>The owner of a lens can share it with other
         * Amazon Web Services accounts, IAM users, an organization, and organizational
         * units (OUs) in the same Amazon Web Services Region. Shared access to a lens is
         * not removed until the lens invitation is deleted.</p>  <p>
         * <b>Disclaimer</b> </p> <p>By sharing your custom lenses with other Amazon Web
         * Services accounts, you acknowledge that Amazon Web Services will make your
         * custom lenses available to those other accounts. Those other accounts may
         * continue to access and use your shared custom lenses even if you delete the
         * custom lenses from your own Amazon Web Services account or terminate your Amazon
         * Web Services account.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateLensShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLensShareOutcome CreateLensShare(const Model::CreateLensShareRequest& request) const;


        /**
         * <p>Create a new lens version.</p> <p>A lens can have up to 100 versions.</p>
         * <p>After a lens has been imported, create a new lens version to publish it. The
         * owner of a lens can share the lens with other Amazon Web Services accounts and
         * IAM users in the same Amazon Web Services Region. Only the owner of a lens can
         * delete it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateLensVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLensVersionOutcome CreateLensVersion(const Model::CreateLensVersionRequest& request) const;


        /**
         * <p>Create a milestone for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateMilestone">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMilestoneOutcome CreateMilestone(const Model::CreateMilestoneRequest& request) const;


        /**
         * <p>Create a new workload.</p> <p>The owner of a workload can share the workload
         * with other Amazon Web Services accounts, IAM users, an organization, and
         * organizational units (OUs) in the same Amazon Web Services Region. Only the
         * owner of a workload can delete it.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/define-workload.html">Defining
         * a Workload</a> in the <i>Well-Architected Tool User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkloadOutcome CreateWorkload(const Model::CreateWorkloadRequest& request) const;


        /**
         * <p>Create a workload share.</p> <p>The owner of a workload can share it with
         * other Amazon Web Services accounts and IAM users in the same Amazon Web Services
         * Region. Shared access to a workload is not removed until the workload invitation
         * is deleted.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/workloads-sharing.html">Sharing
         * a Workload</a> in the <i>Well-Architected Tool User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkloadShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkloadShareOutcome CreateWorkloadShare(const Model::CreateWorkloadShareRequest& request) const;


        /**
         * <p>Delete an existing lens.</p> <p>Only the owner of a lens can delete it. After
         * the lens is deleted, Amazon Web Services accounts and IAM users that you shared
         * the lens with can continue to use it, but they will no longer be able to apply
         * it to new workloads. </p>  <p> <b>Disclaimer</b> </p> <p>By sharing your
         * custom lenses with other Amazon Web Services accounts, you acknowledge that
         * Amazon Web Services will make your custom lenses available to those other
         * accounts. Those other accounts may continue to access and use your shared custom
         * lenses even if you delete the custom lenses from your own Amazon Web Services
         * account or terminate your Amazon Web Services account.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteLens">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLensOutcome DeleteLens(const Model::DeleteLensRequest& request) const;


        /**
         * <p>Delete a lens share.</p> <p>After the lens share is deleted, Amazon Web
         * Services accounts, IAM users, organizations, and organizational units (OUs) that
         * you shared the lens with can continue to use it, but they will no longer be able
         * to apply it to new workloads.</p>  <p> <b>Disclaimer</b> </p> <p>By
         * sharing your custom lenses with other Amazon Web Services accounts, you
         * acknowledge that Amazon Web Services will make your custom lenses available to
         * those other accounts. Those other accounts may continue to access and use your
         * shared custom lenses even if you delete the custom lenses from your own Amazon
         * Web Services account or terminate your Amazon Web Services account.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteLensShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLensShareOutcome DeleteLensShare(const Model::DeleteLensShareRequest& request) const;


        /**
         * <p>Delete an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkloadOutcome DeleteWorkload(const Model::DeleteWorkloadRequest& request) const;


        /**
         * <p>Delete a workload share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DeleteWorkloadShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkloadShareOutcome DeleteWorkloadShare(const Model::DeleteWorkloadShareRequest& request) const;


        /**
         * <p>Disassociate a lens from a workload.</p> <p>Up to 10 lenses can be
         * disassociated from a workload in a single API operation.</p>  <p>The
         * Amazon Web Services Well-Architected Framework lens
         * (<code>wellarchitected</code>) cannot be removed from a workload.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/DisassociateLenses">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLensesOutcome DisassociateLenses(const Model::DisassociateLensesRequest& request) const;


        /**
         * <p>Export an existing lens.</p> <p>Lenses are defined in JSON. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/lenses-format-specification.html">JSON
         * format specification</a> in the <i>Well-Architected Tool User Guide</i>. Only
         * the owner of a lens can export it. </p>  <p> <b>Disclaimer</b> </p> <p>Do
         * not include or gather personal identifiable information (PII) of end users or
         * other identifiable individuals in or via your custom lenses. If your custom lens
         * or those shared with you and used in your account do include or collect PII you
         * are responsible for: ensuring that the included PII is processed in accordance
         * with applicable law, providing adequate privacy notices, and obtaining necessary
         * consents for processing such data.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ExportLens">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportLensOutcome ExportLens(const Model::ExportLensRequest& request) const;


        /**
         * <p>Get the answer to a specific question in a workload review.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetAnswer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnswerOutcome GetAnswer(const Model::GetAnswerRequest& request) const;


        /**
         * <p>Get an existing lens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLens">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensOutcome GetLens(const Model::GetLensRequest& request) const;


        /**
         * <p>Get lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensReviewOutcome GetLensReview(const Model::GetLensReviewRequest& request) const;


        /**
         * <p>Get lens review report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReviewReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensReviewReportOutcome GetLensReviewReport(const Model::GetLensReviewReportRequest& request) const;


        /**
         * <p>Get lens version differences.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensVersionDifference">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLensVersionDifferenceOutcome GetLensVersionDifference(const Model::GetLensVersionDifferenceRequest& request) const;


        /**
         * <p>Get a milestone for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetMilestone">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMilestoneOutcome GetMilestone(const Model::GetMilestoneRequest& request) const;


        /**
         * <p>Get an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkloadOutcome GetWorkload(const Model::GetWorkloadRequest& request) const;


        /**
         * <p>Import a new lens.</p> <p>The lens cannot be applied to workloads or shared
         * with other Amazon Web Services accounts until it's published with
         * <a>CreateLensVersion</a> </p> <p>Lenses are defined in JSON. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/lenses-format-specification.html">JSON
         * format specification</a> in the <i>Well-Architected Tool User Guide</i>.</p>
         * <p>A custom lens cannot exceed 500 KB in size.</p>  <p> <b>Disclaimer</b>
         * </p> <p>Do not include or gather personal identifiable information (PII) of end
         * users or other identifiable individuals in or via your custom lenses. If your
         * custom lens or those shared with you and used in your account do include or
         * collect PII you are responsible for: ensuring that the included PII is processed
         * in accordance with applicable law, providing adequate privacy notices, and
         * obtaining necessary consents for processing such data.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ImportLens">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportLensOutcome ImportLens(const Model::ImportLensRequest& request) const;


        /**
         * <p>List of answers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListAnswers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnswersOutcome ListAnswers(const Model::ListAnswersRequest& request) const;


        /**
         * <p>List of Trusted Advisor check details by account related to the
         * workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListCheckDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCheckDetailsOutcome ListCheckDetails(const Model::ListCheckDetailsRequest& request) const;


        /**
         * <p>List of Trusted Advisor checks summarized for all accounts related to the
         * workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListCheckSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCheckSummariesOutcome ListCheckSummaries(const Model::ListCheckSummariesRequest& request) const;


        /**
         * <p>List lens review improvements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviewImprovements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensReviewImprovementsOutcome ListLensReviewImprovements(const Model::ListLensReviewImprovementsRequest& request) const;


        /**
         * <p>List lens reviews.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensReviewsOutcome ListLensReviews(const Model::ListLensReviewsRequest& request) const;


        /**
         * <p>List the lens shares associated with the lens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensSharesOutcome ListLensShares(const Model::ListLensSharesRequest& request) const;


        /**
         * <p>List the available lenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLenses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLensesOutcome ListLenses(const Model::ListLensesRequest& request) const;


        /**
         * <p>List all milestones for an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListMilestones">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMilestonesOutcome ListMilestones(const Model::ListMilestonesRequest& request) const;


        /**
         * <p>List lens notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationsOutcome ListNotifications(const Model::ListNotificationsRequest& request) const;


        /**
         * <p>List the workload invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListShareInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListShareInvitationsOutcome ListShareInvitations(const Model::ListShareInvitationsRequest& request) const;


        /**
         * <p>List the tags for a resource.</p>  <p>The WorkloadArn parameter can be
         * either a workload ARN or a custom lens ARN.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>List the workload shares associated with the workload.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloadShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadSharesOutcome ListWorkloadShares(const Model::ListWorkloadSharesRequest& request) const;


        /**
         * <p>List workloads. Paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadsOutcome ListWorkloads(const Model::ListWorkloadsRequest& request) const;


        /**
         * <p>Adds one or more tags to the specified resource.</p>  <p>The
         * WorkloadArn parameter can be either a workload ARN or a custom lens ARN.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Deletes specified tags from a resource.</p>  <p>The WorkloadArn
         * parameter can be either a workload ARN or a custom lens ARN.</p>  <p>To
         * specify multiple tags, use separate <b>tagKeys</b> parameters, for example:</p>
         * <p> <code>DELETE /tags/WorkloadArn?tagKeys=key1&amp;tagKeys=key2</code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Update the answer to a specific question in a workload review.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateAnswer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnswerOutcome UpdateAnswer(const Model::UpdateAnswerRequest& request) const;


        /**
         * <p>Updates whether the Amazon Web Services account is opted into organization
         * sharing features.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalSettingsOutcome UpdateGlobalSettings(const Model::UpdateGlobalSettingsRequest& request) const;


        /**
         * <p>Update lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLensReviewOutcome UpdateLensReview(const Model::UpdateLensReviewRequest& request) const;


        /**
         * <p>Update a workload or custom lens share invitation.</p>  <p>This API
         * operation can be called independently of any resource. Previous documentation
         * implied that a workload ARN must be specified.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateShareInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateShareInvitationOutcome UpdateShareInvitation(const Model::UpdateShareInvitationRequest& request) const;


        /**
         * <p>Update an existing workload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkload">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkloadOutcome UpdateWorkload(const Model::UpdateWorkloadRequest& request) const;


        /**
         * <p>Update a workload share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkloadShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkloadShareOutcome UpdateWorkloadShare(const Model::UpdateWorkloadShareRequest& request) const;


        /**
         * <p>Upgrade lens review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpgradeLensReview">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeLensReviewOutcome UpgradeLensReview(const Model::UpgradeLensReviewRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WellArchitectedEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const WellArchitectedClientConfiguration& clientConfiguration);

      WellArchitectedClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WellArchitectedEndpointProviderBase> m_endpointProvider;
  };

} // namespace WellArchitected
} // namespace Aws
