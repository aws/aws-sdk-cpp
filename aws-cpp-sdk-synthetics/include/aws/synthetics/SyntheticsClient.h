/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/synthetics/SyntheticsServiceClientModel.h>

namespace Aws
{
namespace Synthetics
{
  /**
   * <fullname>Amazon CloudWatch Synthetics</fullname> <p>You can use Amazon
   * CloudWatch Synthetics to continually monitor your services. You can create and
   * manage <i>canaries</i>, which are modular, lightweight scripts that monitor your
   * endpoints and APIs from the outside-in. You can set up your canaries to run 24
   * hours a day, once per minute. The canaries help you check the availability and
   * latency of your web services and troubleshoot anomalies by investigating load
   * time data, screenshots of the UI, logs, and metrics. The canaries seamlessly
   * integrate with CloudWatch ServiceLens to help you trace the causes of impacted
   * nodes in your applications. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ServiceLens.html">Using
   * ServiceLens to Monitor the Health of Your Applications</a> in the <i>Amazon
   * CloudWatch User Guide</i>.</p> <p>Before you create and manage canaries, be
   * aware of the security considerations. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
   * Considerations for Synthetics Canaries</a>.</p>
   */
  class AWS_SYNTHETICS_API SyntheticsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SyntheticsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SyntheticsClient(const Aws::Synthetics::SyntheticsClientConfiguration& clientConfiguration = Aws::Synthetics::SyntheticsClientConfiguration(),
                         std::shared_ptr<SyntheticsEndpointProviderBase> endpointProvider = Aws::MakeShared<SyntheticsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SyntheticsClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<SyntheticsEndpointProviderBase> endpointProvider = Aws::MakeShared<SyntheticsEndpointProvider>(ALLOCATION_TAG),
                         const Aws::Synthetics::SyntheticsClientConfiguration& clientConfiguration = Aws::Synthetics::SyntheticsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SyntheticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<SyntheticsEndpointProviderBase> endpointProvider = Aws::MakeShared<SyntheticsEndpointProvider>(ALLOCATION_TAG),
                         const Aws::Synthetics::SyntheticsClientConfiguration& clientConfiguration = Aws::Synthetics::SyntheticsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SyntheticsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SyntheticsClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SyntheticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SyntheticsClient();

        /**
         * <p>Associates a canary with a group. Using groups can help you with managing and
         * automating your canaries, and you can also view aggregated run results and
         * statistics for all canaries in a group. </p> <p>You must run this operation in
         * the Region where the canary exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/AssociateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResourceOutcome AssociateResource(const Model::AssociateResourceRequest& request) const;

        /**
         * A Callable wrapper for AssociateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResourceOutcomeCallable AssociateResourceCallable(const Model::AssociateResourceRequest& request) const;

        /**
         * An Async wrapper for AssociateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateResourceAsync(const Model::AssociateResourceRequest& request, const AssociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a canary. Canaries are scripts that monitor your endpoints and APIs
         * from the outside-in. Canaries help you check the availability and latency of
         * your web services and troubleshoot anomalies by investigating load time data,
         * screenshots of the UI, logs, and metrics. You can set up a canary to run
         * continuously or just once. </p> <p>Do not use <code>CreateCanary</code> to
         * modify an existing canary. Use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_UpdateCanary.html">UpdateCanary</a>
         * instead.</p> <p>To create canaries, you must have the
         * <code>CloudWatchSyntheticsFullAccess</code> policy. If you are creating a new
         * IAM role for the canary, you also need the <code>iam:CreateRole</code>,
         * <code>iam:CreatePolicy</code> and <code>iam:AttachRolePolicy</code> permissions.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Roles">Necessary
         * Roles and Permissions</a>.</p> <p>Do not include secrets or proprietary
         * information in your canary names. The canary name makes up part of the Amazon
         * Resource Name (ARN) for the canary, and the ARN is included in outbound calls
         * over the internet. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
         * Considerations for Synthetics Canaries</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CreateCanary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCanaryOutcome CreateCanary(const Model::CreateCanaryRequest& request) const;

        /**
         * A Callable wrapper for CreateCanary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCanaryOutcomeCallable CreateCanaryCallable(const Model::CreateCanaryRequest& request) const;

        /**
         * An Async wrapper for CreateCanary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCanaryAsync(const Model::CreateCanaryRequest& request, const CreateCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a group which you can use to associate canaries with each other,
         * including cross-Region canaries. Using groups can help you with managing and
         * automating your canaries, and you can also view aggregated run results and
         * statistics for all canaries in a group. </p> <p>Groups are global resources.
         * When you create a group, it is replicated across Amazon Web Services Regions,
         * and you can view it and add canaries to it from any Region. Although the group
         * ARN format reflects the Region name where it was created, a group is not
         * constrained to any Region. This means that you can put canaries from multiple
         * Regions into the same group, and then use that group to view and manage all of
         * those canaries in a single view.</p> <p>Groups are supported in all Regions
         * except the Regions that are disabled by default. For more information about
         * these Regions, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling
         * a Region</a>.</p> <p>Each group can contain as many as 10 canaries. You can have
         * as many as 20 groups in your account. Any single canary can be a member of up to
         * 10 groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes the specified canary.</p> <p>If you specify
         * <code>DeleteLambda</code> to <code>true</code>, CloudWatch Synthetics also
         * deletes the Lambda functions and layers that are used by the canary.</p>
         * <p>Other resources used and created by the canary are not automatically deleted.
         * After you delete a canary that you do not intend to use again, you should also
         * delete the following:</p> <ul> <li> <p>The CloudWatch alarms created for this
         * canary. These alarms have a name of
         * <code>Synthetics-SharpDrop-Alarm-<i>MyCanaryName</i> </code>.</p> </li> <li>
         * <p>Amazon S3 objects and buckets, such as the canary's artifact location.</p>
         * </li> <li> <p>IAM roles created for the canary. If they were created in the
         * console, these roles have the name <code>
         * role/service-role/CloudWatchSyntheticsRole-<i>MyCanaryName</i> </code>.</p>
         * </li> <li> <p>CloudWatch Logs log groups created for the canary. These logs
         * groups have the name <code>/aws/lambda/cwsyn-<i>MyCanaryName</i> </code>. </p>
         * </li> </ul> <p>Before you delete a canary, you might want to use
         * <code>GetCanary</code> to display the information about this canary. Make note
         * of the information returned by this operation so that you can delete these
         * resources after you delete the canary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DeleteCanary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCanaryOutcome DeleteCanary(const Model::DeleteCanaryRequest& request) const;

        /**
         * A Callable wrapper for DeleteCanary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCanaryOutcomeCallable DeleteCanaryCallable(const Model::DeleteCanaryRequest& request) const;

        /**
         * An Async wrapper for DeleteCanary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCanaryAsync(const Model::DeleteCanaryRequest& request, const DeleteCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a group. The group doesn't need to be empty to be deleted. If there
         * are canaries in the group, they are not deleted when you delete the group. </p>
         * <p>Groups are a global resource that appear in all Regions, but the request to
         * delete a group must be made from its home Region. You can find the home Region
         * of a group within its ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns a list of the canaries in your account, along with
         * full details about each canary.</p> <p>This operation supports resource-level
         * authorization using an IAM policy and the <code>Names</code> parameter. If you
         * specify the <code>Names</code> parameter, the operation is successful only if
         * you have authorization to view all the canaries that you specify in your
         * request. If you do not have permission to view any of the canaries, the request
         * fails with a 403 response.</p> <p>You are required to use the <code>Names</code>
         * parameter if you are logged on to a user or role that has an IAM policy that
         * restricts which canaries that you are allowed to view. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
         * Limiting a user to viewing specific canaries</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeCanaries">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCanariesOutcome DescribeCanaries(const Model::DescribeCanariesRequest& request) const;

        /**
         * A Callable wrapper for DescribeCanaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCanariesOutcomeCallable DescribeCanariesCallable(const Model::DescribeCanariesRequest& request) const;

        /**
         * An Async wrapper for DescribeCanaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCanariesAsync(const Model::DescribeCanariesRequest& request, const DescribeCanariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to see information from the most recent run of each canary
         * that you have created.</p> <p>This operation supports resource-level
         * authorization using an IAM policy and the <code>Names</code> parameter. If you
         * specify the <code>Names</code> parameter, the operation is successful only if
         * you have authorization to view all the canaries that you specify in your
         * request. If you do not have permission to view any of the canaries, the request
         * fails with a 403 response.</p> <p>You are required to use the <code>Names</code>
         * parameter if you are logged on to a user or role that has an IAM policy that
         * restricts which canaries that you are allowed to view. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
         * Limiting a user to viewing specific canaries</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeCanariesLastRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCanariesLastRunOutcome DescribeCanariesLastRun(const Model::DescribeCanariesLastRunRequest& request) const;

        /**
         * A Callable wrapper for DescribeCanariesLastRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCanariesLastRunOutcomeCallable DescribeCanariesLastRunCallable(const Model::DescribeCanariesLastRunRequest& request) const;

        /**
         * An Async wrapper for DescribeCanariesLastRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCanariesLastRunAsync(const Model::DescribeCanariesLastRunRequest& request, const DescribeCanariesLastRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Synthetics canary runtime versions. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
         * Canary Runtime Versions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeRuntimeVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuntimeVersionsOutcome DescribeRuntimeVersions(const Model::DescribeRuntimeVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRuntimeVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuntimeVersionsOutcomeCallable DescribeRuntimeVersionsCallable(const Model::DescribeRuntimeVersionsRequest& request) const;

        /**
         * An Async wrapper for DescribeRuntimeVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuntimeVersionsAsync(const Model::DescribeRuntimeVersionsRequest& request, const DescribeRuntimeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a canary from a group. You must run this operation in the Region
         * where the canary exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DisassociateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResourceOutcome DisassociateResource(const Model::DisassociateResourceRequest& request) const;

        /**
         * A Callable wrapper for DisassociateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResourceOutcomeCallable DisassociateResourceCallable(const Model::DisassociateResourceRequest& request) const;

        /**
         * An Async wrapper for DisassociateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResourceAsync(const Model::DisassociateResourceRequest& request, const DisassociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves complete information about one canary. You must specify the name of
         * the canary that you want. To get a list of canaries and their names, use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">DescribeCanaries</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/GetCanary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCanaryOutcome GetCanary(const Model::GetCanaryRequest& request) const;

        /**
         * A Callable wrapper for GetCanary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCanaryOutcomeCallable GetCanaryCallable(const Model::GetCanaryRequest& request) const;

        /**
         * An Async wrapper for GetCanary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCanaryAsync(const Model::GetCanaryRequest& request, const GetCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of runs for a specified canary.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/GetCanaryRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCanaryRunsOutcome GetCanaryRuns(const Model::GetCanaryRunsRequest& request) const;

        /**
         * A Callable wrapper for GetCanaryRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCanaryRunsOutcomeCallable GetCanaryRunsCallable(const Model::GetCanaryRunsRequest& request) const;

        /**
         * An Async wrapper for GetCanaryRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCanaryRunsAsync(const Model::GetCanaryRunsRequest& request, const GetCanaryRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about one group. Groups are a global resource, so you can
         * use this operation from any Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * An Async wrapper for GetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the groups that the specified canary is associated with.
         * The canary that you specify must be in the current Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/ListAssociatedGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociatedGroupsOutcome ListAssociatedGroups(const Model::ListAssociatedGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListAssociatedGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociatedGroupsOutcomeCallable ListAssociatedGroupsCallable(const Model::ListAssociatedGroupsRequest& request) const;

        /**
         * An Async wrapper for ListAssociatedGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociatedGroupsAsync(const Model::ListAssociatedGroupsRequest& request, const ListAssociatedGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns a list of the ARNs of the canaries that are associated
         * with the specified group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/ListGroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupResourcesOutcome ListGroupResources(const Model::ListGroupResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListGroupResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupResourcesOutcomeCallable ListGroupResourcesCallable(const Model::ListGroupResourcesRequest& request) const;

        /**
         * An Async wrapper for ListGroupResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupResourcesAsync(const Model::ListGroupResourcesRequest& request, const ListGroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all groups in the account, displaying their names, unique
         * IDs, and ARNs. The groups from all Regions are returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with a canary or group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to run a canary that has already been created. The
         * frequency of the canary runs is determined by the value of the canary's
         * <code>Schedule</code>. To see a canary's schedule, use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_GetCanary.html">GetCanary</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/StartCanary">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCanaryOutcome StartCanary(const Model::StartCanaryRequest& request) const;

        /**
         * A Callable wrapper for StartCanary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCanaryOutcomeCallable StartCanaryCallable(const Model::StartCanaryRequest& request) const;

        /**
         * An Async wrapper for StartCanary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCanaryAsync(const Model::StartCanaryRequest& request, const StartCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the canary to prevent all future runs. If the canary is currently
         * running,the run that is in progress completes on its own, publishes metrics, and
         * uploads artifacts, but it is not recorded in Synthetics as a completed run.</p>
         * <p>You can use <code>StartCanary</code> to start it running again with the
         * canary’s current schedule at any point in the future. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/StopCanary">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCanaryOutcome StopCanary(const Model::StopCanaryRequest& request) const;

        /**
         * A Callable wrapper for StopCanary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopCanaryOutcomeCallable StopCanaryCallable(const Model::StopCanaryRequest& request) const;

        /**
         * An Async wrapper for StopCanary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopCanaryAsync(const Model::StopCanaryRequest& request, const StopCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified canary or group.
         * </p> <p>Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions, by granting a user permission to access or
         * change only resources with certain tag values.</p> <p>Tags don't have any
         * semantic meaning to Amazon Web Services and are interpreted strictly as strings
         * of characters.</p> <p>You can use the <code>TagResource</code> action with a
         * resource that already has tags. If you specify a new tag key for the resource,
         * this tag is appended to the list of tags associated with the resource. If you
         * specify a tag key that is already associated with the resource, the new tag
         * value that you specify replaces the previous value for that tag.</p> <p>You can
         * associate as many as 50 tags with a canary or group.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of a canary that has already been created.</p>
         * <p>You can't use this operation to update the tags of an existing canary. To
         * change the tags of an existing canary, use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_TagResource.html">TagResource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/UpdateCanary">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCanaryOutcome UpdateCanary(const Model::UpdateCanaryRequest& request) const;

        /**
         * A Callable wrapper for UpdateCanary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCanaryOutcomeCallable UpdateCanaryCallable(const Model::UpdateCanaryRequest& request) const;

        /**
         * An Async wrapper for UpdateCanary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCanaryAsync(const Model::UpdateCanaryRequest& request, const UpdateCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SyntheticsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SyntheticsClient>;
      void init(const SyntheticsClientConfiguration& clientConfiguration);

      SyntheticsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SyntheticsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Synthetics
} // namespace Aws
