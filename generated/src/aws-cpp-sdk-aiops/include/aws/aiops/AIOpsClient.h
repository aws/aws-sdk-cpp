/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/aiops/AIOpsServiceClientModel.h>

namespace Aws
{
namespace AIOps
{
  /**
   * <p>The CloudWatch investigations feature is a generative AI-powered assistant
   * that can help you respond to incidents in your system. It uses generative AI to
   * scan your system's telemetry and quickly surface suggestions that might be
   * related to your issue. These suggestions include metrics, logs, deployment
   * events, and root-cause hypotheses. </p> <p>You can use API actions to create,
   * manage, and delete investigation groups and investigation group policies. To
   * start and manage investigations, you must use the CloudWatch console.</p>
   */
  class AWS_AIOPS_API AIOpsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AIOpsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AIOpsClientConfiguration ClientConfigurationType;
      typedef AIOpsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AIOpsClient(const Aws::AIOps::AIOpsClientConfiguration& clientConfiguration = Aws::AIOps::AIOpsClientConfiguration(),
                    std::shared_ptr<AIOpsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AIOpsClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<AIOpsEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::AIOps::AIOpsClientConfiguration& clientConfiguration = Aws::AIOps::AIOpsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AIOpsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<AIOpsEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::AIOps::AIOpsClientConfiguration& clientConfiguration = Aws::AIOps::AIOpsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AIOpsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AIOpsClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AIOpsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AIOpsClient();

        /**
         * <p>Creates an <i>investigation group</i> in your account. Creating an
         * investigation group is a one-time setup task for each Region in your account. It
         * is a necessary task to be able to perform investigations.</p> <p>Settings in the
         * investigation group help you centrally manage the common properties of your
         * investigations, such as the following:</p> <ul> <li> <p>Who can access the
         * investigations</p> </li> <li> <p>Whether investigation data is encrypted with a
         * customer managed Key Management Service key.</p> </li> <li> <p>How long
         * investigations and their data are retained by default.</p> </li> </ul>
         * <p>Currently, you can have one investigation group in each Region in your
         * account. Each investigation in a Region is a part of the investigation group in
         * that Region</p> <p>To create an investigation group and set up CloudWatch
         * investigations, you must be signed in to an IAM principal that has either the
         * <code>AIOpsConsoleAdminPolicy</code> or the <code>AdministratorAccess</code> IAM
         * policy attached, or to an account that has similar permissions.</p> 
         * <p>You can configure CloudWatch alarms to start investigations and add events to
         * investigations. If you create your investigation group with
         * <code>CreateInvestigationGroup</code> and you want to enable alarms to do this,
         * you must use <code>PutInvestigationGroupPolicy</code> to create a resource
         * policy that grants this permission to CloudWatch alarms. </p> <p>For more
         * information about configuring CloudWatch alarms, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/AlarmThatSendsEmail.html">Using
         * Amazon CloudWatch alarms</a> </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/CreateInvestigationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvestigationGroupOutcome CreateInvestigationGroup(const Model::CreateInvestigationGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateInvestigationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInvestigationGroupRequestT = Model::CreateInvestigationGroupRequest>
        Model::CreateInvestigationGroupOutcomeCallable CreateInvestigationGroupCallable(const CreateInvestigationGroupRequestT& request) const
        {
            return SubmitCallable(&AIOpsClient::CreateInvestigationGroup, request);
        }

        /**
         * An Async wrapper for CreateInvestigationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInvestigationGroupRequestT = Model::CreateInvestigationGroupRequest>
        void CreateInvestigationGroupAsync(const CreateInvestigationGroupRequestT& request, const CreateInvestigationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AIOpsClient::CreateInvestigationGroup, request, handler, context);
        }

        /**
         * <p>Deletes the specified investigation group from your account. You can
         * currently have one investigation group per Region in your account. After you
         * delete an investigation group, you can later create a new investigation group in
         * the same Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/DeleteInvestigationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvestigationGroupOutcome DeleteInvestigationGroup(const Model::DeleteInvestigationGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteInvestigationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInvestigationGroupRequestT = Model::DeleteInvestigationGroupRequest>
        Model::DeleteInvestigationGroupOutcomeCallable DeleteInvestigationGroupCallable(const DeleteInvestigationGroupRequestT& request) const
        {
            return SubmitCallable(&AIOpsClient::DeleteInvestigationGroup, request);
        }

        /**
         * An Async wrapper for DeleteInvestigationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInvestigationGroupRequestT = Model::DeleteInvestigationGroupRequest>
        void DeleteInvestigationGroupAsync(const DeleteInvestigationGroupRequestT& request, const DeleteInvestigationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AIOpsClient::DeleteInvestigationGroup, request, handler, context);
        }

        /**
         * <p>Removes the IAM resource policy from being associated with the investigation
         * group that you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/DeleteInvestigationGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvestigationGroupPolicyOutcome DeleteInvestigationGroupPolicy(const Model::DeleteInvestigationGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteInvestigationGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInvestigationGroupPolicyRequestT = Model::DeleteInvestigationGroupPolicyRequest>
        Model::DeleteInvestigationGroupPolicyOutcomeCallable DeleteInvestigationGroupPolicyCallable(const DeleteInvestigationGroupPolicyRequestT& request) const
        {
            return SubmitCallable(&AIOpsClient::DeleteInvestigationGroupPolicy, request);
        }

        /**
         * An Async wrapper for DeleteInvestigationGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInvestigationGroupPolicyRequestT = Model::DeleteInvestigationGroupPolicyRequest>
        void DeleteInvestigationGroupPolicyAsync(const DeleteInvestigationGroupPolicyRequestT& request, const DeleteInvestigationGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AIOpsClient::DeleteInvestigationGroupPolicy, request, handler, context);
        }

        /**
         * <p>Returns the configuration information for the specified investigation
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/GetInvestigationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvestigationGroupOutcome GetInvestigationGroup(const Model::GetInvestigationGroupRequest& request) const;

        /**
         * A Callable wrapper for GetInvestigationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInvestigationGroupRequestT = Model::GetInvestigationGroupRequest>
        Model::GetInvestigationGroupOutcomeCallable GetInvestigationGroupCallable(const GetInvestigationGroupRequestT& request) const
        {
            return SubmitCallable(&AIOpsClient::GetInvestigationGroup, request);
        }

        /**
         * An Async wrapper for GetInvestigationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInvestigationGroupRequestT = Model::GetInvestigationGroupRequest>
        void GetInvestigationGroupAsync(const GetInvestigationGroupRequestT& request, const GetInvestigationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AIOpsClient::GetInvestigationGroup, request, handler, context);
        }

        /**
         * <p>Returns the JSON of the IAM resource policy associated with the specified
         * investigation group in a string. For example,
         * <code>{\"Version\":\"2012-10-17\",\"Statement\":[{\"Effect\":\"Allow\",\"Principal\":{\"Service\":\"aiops.alarms.cloudwatch.amazonaws.com\"},\"Action\":[\"aiops:CreateInvestigation\",\"aiops:CreateInvestigationEvent\"],\"Resource\":\"*\",\"Condition\":{\"StringEquals\":{\"aws:SourceAccount\":\"111122223333\"},\"ArnLike\":{\"aws:SourceArn\":\"arn:aws:cloudwatch:us-east-1:111122223333:alarm:*\"}}}]}</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/GetInvestigationGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvestigationGroupPolicyOutcome GetInvestigationGroupPolicy(const Model::GetInvestigationGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetInvestigationGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInvestigationGroupPolicyRequestT = Model::GetInvestigationGroupPolicyRequest>
        Model::GetInvestigationGroupPolicyOutcomeCallable GetInvestigationGroupPolicyCallable(const GetInvestigationGroupPolicyRequestT& request) const
        {
            return SubmitCallable(&AIOpsClient::GetInvestigationGroupPolicy, request);
        }

        /**
         * An Async wrapper for GetInvestigationGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInvestigationGroupPolicyRequestT = Model::GetInvestigationGroupPolicyRequest>
        void GetInvestigationGroupPolicyAsync(const GetInvestigationGroupPolicyRequestT& request, const GetInvestigationGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AIOpsClient::GetInvestigationGroupPolicy, request, handler, context);
        }

        /**
         * <p>Returns the ARN and name of each investigation group in the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/ListInvestigationGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvestigationGroupsOutcome ListInvestigationGroups(const Model::ListInvestigationGroupsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListInvestigationGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInvestigationGroupsRequestT = Model::ListInvestigationGroupsRequest>
        Model::ListInvestigationGroupsOutcomeCallable ListInvestigationGroupsCallable(const ListInvestigationGroupsRequestT& request = {}) const
        {
            return SubmitCallable(&AIOpsClient::ListInvestigationGroups, request);
        }

        /**
         * An Async wrapper for ListInvestigationGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvestigationGroupsRequestT = Model::ListInvestigationGroupsRequest>
        void ListInvestigationGroupsAsync(const ListInvestigationGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListInvestigationGroupsRequestT& request = {}) const
        {
            return SubmitAsync(&AIOpsClient::ListInvestigationGroups, request, handler, context);
        }

        /**
         * <p>Displays the tags associated with a CloudWatch investigations resource.
         * Currently, investigation groups support tagging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AIOpsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AIOpsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates an IAM resource policy and assigns it to the specified investigation
         * group.</p> <p>If you create your investigation group with
         * <code>CreateInvestigationGroup</code> and you want to enable CloudWatch alarms
         * to create investigations and add events to investigations, you must use this
         * operation to create a policy similar to this example.</p> <p> <code> {
         * "Version": "2008-10-17", "Statement": [ { "Effect": "Allow", "Principal": {
         * "Service": "aiops.alarms.cloudwatch.amazonaws.com" }, "Action": [
         * "aiops:CreateInvestigation", "aiops:CreateInvestigationEvent" ], "Resource":
         * "*", "Condition": { "StringEquals": { "aws:SourceAccount": "account-id" },
         * "ArnLike": { "aws:SourceArn": "arn:aws:cloudwatch:region:account-id:alarm:*" } }
         * } ] } </code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/PutInvestigationGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInvestigationGroupPolicyOutcome PutInvestigationGroupPolicy(const Model::PutInvestigationGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutInvestigationGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutInvestigationGroupPolicyRequestT = Model::PutInvestigationGroupPolicyRequest>
        Model::PutInvestigationGroupPolicyOutcomeCallable PutInvestigationGroupPolicyCallable(const PutInvestigationGroupPolicyRequestT& request) const
        {
            return SubmitCallable(&AIOpsClient::PutInvestigationGroupPolicy, request);
        }

        /**
         * An Async wrapper for PutInvestigationGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutInvestigationGroupPolicyRequestT = Model::PutInvestigationGroupPolicyRequest>
        void PutInvestigationGroupPolicyAsync(const PutInvestigationGroupPolicyRequestT& request, const PutInvestigationGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AIOpsClient::PutInvestigationGroupPolicy, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified resource.</p>
         * <p>Tags can help you organize and categorize your resources. You can also use
         * them to scope user permissions by granting a user permission to access or change
         * only resources with certain tag values.</p> <p>Tags don't have any semantic
         * meaning to Amazon Web Services and are interpreted strictly as strings of
         * characters.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AIOpsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AIOpsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AIOpsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AIOpsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the configuration of the specified investigation group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/UpdateInvestigationGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInvestigationGroupOutcome UpdateInvestigationGroup(const Model::UpdateInvestigationGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateInvestigationGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInvestigationGroupRequestT = Model::UpdateInvestigationGroupRequest>
        Model::UpdateInvestigationGroupOutcomeCallable UpdateInvestigationGroupCallable(const UpdateInvestigationGroupRequestT& request) const
        {
            return SubmitCallable(&AIOpsClient::UpdateInvestigationGroup, request);
        }

        /**
         * An Async wrapper for UpdateInvestigationGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInvestigationGroupRequestT = Model::UpdateInvestigationGroupRequest>
        void UpdateInvestigationGroupAsync(const UpdateInvestigationGroupRequestT& request, const UpdateInvestigationGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AIOpsClient::UpdateInvestigationGroup, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AIOpsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AIOpsClient>;
      void init(const AIOpsClientConfiguration& clientConfiguration);

      AIOpsClientConfiguration m_clientConfiguration;
      std::shared_ptr<AIOpsEndpointProviderBase> m_endpointProvider;
  };

} // namespace AIOps
} // namespace Aws
