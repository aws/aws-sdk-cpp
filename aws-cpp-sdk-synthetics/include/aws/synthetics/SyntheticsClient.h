/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/synthetics/model/CreateCanaryResult.h>
#include <aws/synthetics/model/DeleteCanaryResult.h>
#include <aws/synthetics/model/DescribeCanariesResult.h>
#include <aws/synthetics/model/DescribeCanariesLastRunResult.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsResult.h>
#include <aws/synthetics/model/GetCanaryResult.h>
#include <aws/synthetics/model/GetCanaryRunsResult.h>
#include <aws/synthetics/model/ListTagsForResourceResult.h>
#include <aws/synthetics/model/StartCanaryResult.h>
#include <aws/synthetics/model/StopCanaryResult.h>
#include <aws/synthetics/model/TagResourceResult.h>
#include <aws/synthetics/model/UntagResourceResult.h>
#include <aws/synthetics/model/UpdateCanaryResult.h>
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

namespace Synthetics
{

namespace Model
{
        class CreateCanaryRequest;
        class DeleteCanaryRequest;
        class DescribeCanariesRequest;
        class DescribeCanariesLastRunRequest;
        class DescribeRuntimeVersionsRequest;
        class GetCanaryRequest;
        class GetCanaryRunsRequest;
        class ListTagsForResourceRequest;
        class StartCanaryRequest;
        class StopCanaryRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateCanaryRequest;

        typedef Aws::Utils::Outcome<CreateCanaryResult, SyntheticsError> CreateCanaryOutcome;
        typedef Aws::Utils::Outcome<DeleteCanaryResult, SyntheticsError> DeleteCanaryOutcome;
        typedef Aws::Utils::Outcome<DescribeCanariesResult, SyntheticsError> DescribeCanariesOutcome;
        typedef Aws::Utils::Outcome<DescribeCanariesLastRunResult, SyntheticsError> DescribeCanariesLastRunOutcome;
        typedef Aws::Utils::Outcome<DescribeRuntimeVersionsResult, SyntheticsError> DescribeRuntimeVersionsOutcome;
        typedef Aws::Utils::Outcome<GetCanaryResult, SyntheticsError> GetCanaryOutcome;
        typedef Aws::Utils::Outcome<GetCanaryRunsResult, SyntheticsError> GetCanaryRunsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, SyntheticsError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartCanaryResult, SyntheticsError> StartCanaryOutcome;
        typedef Aws::Utils::Outcome<StopCanaryResult, SyntheticsError> StopCanaryOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, SyntheticsError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, SyntheticsError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateCanaryResult, SyntheticsError> UpdateCanaryOutcome;

        typedef std::future<CreateCanaryOutcome> CreateCanaryOutcomeCallable;
        typedef std::future<DeleteCanaryOutcome> DeleteCanaryOutcomeCallable;
        typedef std::future<DescribeCanariesOutcome> DescribeCanariesOutcomeCallable;
        typedef std::future<DescribeCanariesLastRunOutcome> DescribeCanariesLastRunOutcomeCallable;
        typedef std::future<DescribeRuntimeVersionsOutcome> DescribeRuntimeVersionsOutcomeCallable;
        typedef std::future<GetCanaryOutcome> GetCanaryOutcomeCallable;
        typedef std::future<GetCanaryRunsOutcome> GetCanaryRunsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartCanaryOutcome> StartCanaryOutcomeCallable;
        typedef std::future<StopCanaryOutcome> StopCanaryOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateCanaryOutcome> UpdateCanaryOutcomeCallable;
} // namespace Model

  class SyntheticsClient;

    typedef std::function<void(const SyntheticsClient*, const Model::CreateCanaryRequest&, const Model::CreateCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCanaryResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::DeleteCanaryRequest&, const Model::DeleteCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCanaryResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::DescribeCanariesRequest&, const Model::DescribeCanariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCanariesResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::DescribeCanariesLastRunRequest&, const Model::DescribeCanariesLastRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCanariesLastRunResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::DescribeRuntimeVersionsRequest&, const Model::DescribeRuntimeVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuntimeVersionsResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::GetCanaryRequest&, const Model::GetCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCanaryResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::GetCanaryRunsRequest&, const Model::GetCanaryRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCanaryRunsResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::StartCanaryRequest&, const Model::StartCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCanaryResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::StopCanaryRequest&, const Model::StopCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCanaryResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::UpdateCanaryRequest&, const Model::UpdateCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCanaryResponseReceivedHandler;

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
  class AWS_SYNTHETICS_API SyntheticsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SyntheticsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SyntheticsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SyntheticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SyntheticsClient();


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
         * IAM role for the canary, you also need the the <code>iam:CreateRole</code>,
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
         * <p>Creates a canary. Canaries are scripts that monitor your endpoints and APIs
         * from the outside-in. Canaries help you check the availability and latency of
         * your web services and troubleshoot anomalies by investigating load time data,
         * screenshots of the UI, logs, and metrics. You can set up a canary to run
         * continuously or just once. </p> <p>Do not use <code>CreateCanary</code> to
         * modify an existing canary. Use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_UpdateCanary.html">UpdateCanary</a>
         * instead.</p> <p>To create canaries, you must have the
         * <code>CloudWatchSyntheticsFullAccess</code> policy. If you are creating a new
         * IAM role for the canary, you also need the the <code>iam:CreateRole</code>,
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCanaryOutcomeCallable CreateCanaryCallable(const Model::CreateCanaryRequest& request) const;

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
         * IAM role for the canary, you also need the the <code>iam:CreateRole</code>,
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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCanaryAsync(const Model::CreateCanaryRequest& request, const CreateCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes the specified canary.</p> <p>When you delete a canary,
         * resources used and created by the canary are not automatically deleted. After
         * you delete a canary that you do not intend to use again, you should also delete
         * the following:</p> <ul> <li> <p>The Lambda functions and layers used by this
         * canary. These have the prefix <code>cwsyn-<i>MyCanaryName</i> </code>.</p> </li>
         * <li> <p>The CloudWatch alarms created for this canary. These alarms have a name
         * of <code>Synthetics-SharpDrop-Alarm-<i>MyCanaryName</i> </code>.</p> </li> <li>
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
         * <p>Permanently deletes the specified canary.</p> <p>When you delete a canary,
         * resources used and created by the canary are not automatically deleted. After
         * you delete a canary that you do not intend to use again, you should also delete
         * the following:</p> <ul> <li> <p>The Lambda functions and layers used by this
         * canary. These have the prefix <code>cwsyn-<i>MyCanaryName</i> </code>.</p> </li>
         * <li> <p>The CloudWatch alarms created for this canary. These alarms have a name
         * of <code>Synthetics-SharpDrop-Alarm-<i>MyCanaryName</i> </code>.</p> </li> <li>
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCanaryOutcomeCallable DeleteCanaryCallable(const Model::DeleteCanaryRequest& request) const;

        /**
         * <p>Permanently deletes the specified canary.</p> <p>When you delete a canary,
         * resources used and created by the canary are not automatically deleted. After
         * you delete a canary that you do not intend to use again, you should also delete
         * the following:</p> <ul> <li> <p>The Lambda functions and layers used by this
         * canary. These have the prefix <code>cwsyn-<i>MyCanaryName</i> </code>.</p> </li>
         * <li> <p>The CloudWatch alarms created for this canary. These alarms have a name
         * of <code>Synthetics-SharpDrop-Alarm-<i>MyCanaryName</i> </code>.</p> </li> <li>
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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCanaryAsync(const Model::DeleteCanaryRequest& request, const DeleteCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns a list of the canaries in your account, along with
         * full details about each canary.</p> <p>This operation does not have
         * resource-level authorization, so if a user is able to use
         * <code>DescribeCanaries</code>, the user can see all of the canaries in the
         * account. A deny policy can only be used to restrict access to all canaries. It
         * cannot be used on specific resources. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeCanaries">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCanariesOutcome DescribeCanaries(const Model::DescribeCanariesRequest& request) const;

        /**
         * <p>This operation returns a list of the canaries in your account, along with
         * full details about each canary.</p> <p>This operation does not have
         * resource-level authorization, so if a user is able to use
         * <code>DescribeCanaries</code>, the user can see all of the canaries in the
         * account. A deny policy can only be used to restrict access to all canaries. It
         * cannot be used on specific resources. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeCanaries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCanariesOutcomeCallable DescribeCanariesCallable(const Model::DescribeCanariesRequest& request) const;

        /**
         * <p>This operation returns a list of the canaries in your account, along with
         * full details about each canary.</p> <p>This operation does not have
         * resource-level authorization, so if a user is able to use
         * <code>DescribeCanaries</code>, the user can see all of the canaries in the
         * account. A deny policy can only be used to restrict access to all canaries. It
         * cannot be used on specific resources. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeCanaries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCanariesAsync(const Model::DescribeCanariesRequest& request, const DescribeCanariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to see information from the most recent run of each canary
         * that you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeCanariesLastRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCanariesLastRunOutcome DescribeCanariesLastRun(const Model::DescribeCanariesLastRunRequest& request) const;

        /**
         * <p>Use this operation to see information from the most recent run of each canary
         * that you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeCanariesLastRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCanariesLastRunOutcomeCallable DescribeCanariesLastRunCallable(const Model::DescribeCanariesLastRunRequest& request) const;

        /**
         * <p>Use this operation to see information from the most recent run of each canary
         * that you have created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeCanariesLastRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of Synthetics canary runtime versions. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
         * Canary Runtime Versions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeRuntimeVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuntimeVersionsOutcomeCallable DescribeRuntimeVersionsCallable(const Model::DescribeRuntimeVersionsRequest& request) const;

        /**
         * <p>Returns a list of Synthetics canary runtime versions. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
         * Canary Runtime Versions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DescribeRuntimeVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuntimeVersionsAsync(const Model::DescribeRuntimeVersionsRequest& request, const DescribeRuntimeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Retrieves complete information about one canary. You must specify the name of
         * the canary that you want. To get a list of canaries and their names, use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">DescribeCanaries</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/GetCanary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCanaryOutcomeCallable GetCanaryCallable(const Model::GetCanaryRequest& request) const;

        /**
         * <p>Retrieves complete information about one canary. You must specify the name of
         * the canary that you want. To get a list of canaries and their names, use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">DescribeCanaries</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/GetCanary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a list of runs for a specified canary.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/GetCanaryRuns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCanaryRunsOutcomeCallable GetCanaryRunsCallable(const Model::GetCanaryRunsRequest& request) const;

        /**
         * <p>Retrieves a list of runs for a specified canary.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/GetCanaryRuns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCanaryRunsAsync(const Model::GetCanaryRunsRequest& request, const GetCanaryRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the tags associated with a canary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with a canary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Displays the tags associated with a canary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Use this operation to run a canary that has already been created. The
         * frequency of the canary runs is determined by the value of the canary's
         * <code>Schedule</code>. To see a canary's schedule, use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_GetCanary.html">GetCanary</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/StartCanary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCanaryOutcomeCallable StartCanaryCallable(const Model::StartCanaryRequest& request) const;

        /**
         * <p>Use this operation to run a canary that has already been created. The
         * frequency of the canary runs is determined by the value of the canary's
         * <code>Schedule</code>. To see a canary's schedule, use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_GetCanary.html">GetCanary</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/StartCanary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCanaryAsync(const Model::StartCanaryRequest& request, const StartCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the canary to prevent all future runs. If the canary is currently
         * running, Synthetics stops waiting for the current run of the specified canary to
         * complete. The run that is in progress completes on its own, publishes metrics,
         * and uploads artifacts, but it is not recorded in Synthetics as a completed
         * run.</p> <p>You can use <code>StartCanary</code> to start it running again with
         * the canary’s current schedule at any point in the future. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/StopCanary">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCanaryOutcome StopCanary(const Model::StopCanaryRequest& request) const;

        /**
         * <p>Stops the canary to prevent all future runs. If the canary is currently
         * running, Synthetics stops waiting for the current run of the specified canary to
         * complete. The run that is in progress completes on its own, publishes metrics,
         * and uploads artifacts, but it is not recorded in Synthetics as a completed
         * run.</p> <p>You can use <code>StartCanary</code> to start it running again with
         * the canary’s current schedule at any point in the future. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/StopCanary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopCanaryOutcomeCallable StopCanaryCallable(const Model::StopCanaryRequest& request) const;

        /**
         * <p>Stops the canary to prevent all future runs. If the canary is currently
         * running, Synthetics stops waiting for the current run of the specified canary to
         * complete. The run that is in progress completes on its own, publishes metrics,
         * and uploads artifacts, but it is not recorded in Synthetics as a completed
         * run.</p> <p>You can use <code>StartCanary</code> to start it running again with
         * the canary’s current schedule at any point in the future. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/StopCanary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopCanaryAsync(const Model::StopCanaryRequest& request, const StopCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified canary. </p>
         * <p>Tags can help you organize and categorize your resources. You can also use
         * them to scope user permissions, by granting a user permission to access or
         * change only resources with certain tag values.</p> <p>Tags don't have any
         * semantic meaning to AWS and are interpreted strictly as strings of
         * characters.</p> <p>You can use the <code>TagResource</code> action with a canary
         * that already has tags. If you specify a new tag key for the alarm, this tag is
         * appended to the list of tags associated with the alarm. If you specify a tag key
         * that is already associated with the alarm, the new tag value that you specify
         * replaces the previous value for that tag.</p> <p>You can associate as many as 50
         * tags with a canary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified canary. </p>
         * <p>Tags can help you organize and categorize your resources. You can also use
         * them to scope user permissions, by granting a user permission to access or
         * change only resources with certain tag values.</p> <p>Tags don't have any
         * semantic meaning to AWS and are interpreted strictly as strings of
         * characters.</p> <p>You can use the <code>TagResource</code> action with a canary
         * that already has tags. If you specify a new tag key for the alarm, this tag is
         * appended to the list of tags associated with the alarm. If you specify a tag key
         * that is already associated with the alarm, the new tag value that you specify
         * replaces the previous value for that tag.</p> <p>You can associate as many as 50
         * tags with a canary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified canary. </p>
         * <p>Tags can help you organize and categorize your resources. You can also use
         * them to scope user permissions, by granting a user permission to access or
         * change only resources with certain tag values.</p> <p>Tags don't have any
         * semantic meaning to AWS and are interpreted strictly as strings of
         * characters.</p> <p>You can use the <code>TagResource</code> action with a canary
         * that already has tags. If you specify a new tag key for the alarm, this tag is
         * appended to the list of tags associated with the alarm. If you specify a tag key
         * that is already associated with the alarm, the new tag value that you specify
         * replaces the previous value for that tag.</p> <p>You can associate as many as 50
         * tags with a canary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified canary.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified canary.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified canary.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to change the settings of a canary that has already been
         * created.</p> <p>You can't use this operation to update the tags of an existing
         * canary. To change the tags of an existing canary, use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_TagResource.html">TagResource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/UpdateCanary">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCanaryOutcome UpdateCanary(const Model::UpdateCanaryRequest& request) const;

        /**
         * <p>Use this operation to change the settings of a canary that has already been
         * created.</p> <p>You can't use this operation to update the tags of an existing
         * canary. To change the tags of an existing canary, use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_TagResource.html">TagResource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/UpdateCanary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCanaryOutcomeCallable UpdateCanaryCallable(const Model::UpdateCanaryRequest& request) const;

        /**
         * <p>Use this operation to change the settings of a canary that has already been
         * created.</p> <p>You can't use this operation to update the tags of an existing
         * canary. To change the tags of an existing canary, use <a
         * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_TagResource.html">TagResource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/UpdateCanary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCanaryAsync(const Model::UpdateCanaryRequest& request, const UpdateCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateCanaryAsyncHelper(const Model::CreateCanaryRequest& request, const CreateCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCanaryAsyncHelper(const Model::DeleteCanaryRequest& request, const DeleteCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCanariesAsyncHelper(const Model::DescribeCanariesRequest& request, const DescribeCanariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCanariesLastRunAsyncHelper(const Model::DescribeCanariesLastRunRequest& request, const DescribeCanariesLastRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRuntimeVersionsAsyncHelper(const Model::DescribeRuntimeVersionsRequest& request, const DescribeRuntimeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCanaryAsyncHelper(const Model::GetCanaryRequest& request, const GetCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCanaryRunsAsyncHelper(const Model::GetCanaryRunsRequest& request, const GetCanaryRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartCanaryAsyncHelper(const Model::StartCanaryRequest& request, const StartCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopCanaryAsyncHelper(const Model::StopCanaryRequest& request, const StopCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCanaryAsyncHelper(const Model::UpdateCanaryRequest& request, const UpdateCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Synthetics
} // namespace Aws
