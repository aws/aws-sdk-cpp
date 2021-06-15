/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codeguruprofiler/model/AddNotificationChannelsResult.h>
#include <aws/codeguruprofiler/model/BatchGetFrameMetricDataResult.h>
#include <aws/codeguruprofiler/model/ConfigureAgentResult.h>
#include <aws/codeguruprofiler/model/CreateProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/DeleteProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/DescribeProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryResult.h>
#include <aws/codeguruprofiler/model/GetNotificationConfigurationResult.h>
#include <aws/codeguruprofiler/model/GetPolicyResult.h>
#include <aws/codeguruprofiler/model/GetProfileResult.h>
#include <aws/codeguruprofiler/model/GetRecommendationsResult.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsResult.h>
#include <aws/codeguruprofiler/model/ListProfileTimesResult.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsResult.h>
#include <aws/codeguruprofiler/model/ListTagsForResourceResult.h>
#include <aws/codeguruprofiler/model/PostAgentProfileResult.h>
#include <aws/codeguruprofiler/model/PutPermissionResult.h>
#include <aws/codeguruprofiler/model/RemoveNotificationChannelResult.h>
#include <aws/codeguruprofiler/model/RemovePermissionResult.h>
#include <aws/codeguruprofiler/model/SubmitFeedbackResult.h>
#include <aws/codeguruprofiler/model/TagResourceResult.h>
#include <aws/codeguruprofiler/model/UntagResourceResult.h>
#include <aws/codeguruprofiler/model/UpdateProfilingGroupResult.h>
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

namespace CodeGuruProfiler
{

namespace Model
{
        class AddNotificationChannelsRequest;
        class BatchGetFrameMetricDataRequest;
        class ConfigureAgentRequest;
        class CreateProfilingGroupRequest;
        class DeleteProfilingGroupRequest;
        class DescribeProfilingGroupRequest;
        class GetFindingsReportAccountSummaryRequest;
        class GetNotificationConfigurationRequest;
        class GetPolicyRequest;
        class GetProfileRequest;
        class GetRecommendationsRequest;
        class ListFindingsReportsRequest;
        class ListProfileTimesRequest;
        class ListProfilingGroupsRequest;
        class ListTagsForResourceRequest;
        class PostAgentProfileRequest;
        class PutPermissionRequest;
        class RemoveNotificationChannelRequest;
        class RemovePermissionRequest;
        class SubmitFeedbackRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateProfilingGroupRequest;

        typedef Aws::Utils::Outcome<AddNotificationChannelsResult, CodeGuruProfilerError> AddNotificationChannelsOutcome;
        typedef Aws::Utils::Outcome<BatchGetFrameMetricDataResult, CodeGuruProfilerError> BatchGetFrameMetricDataOutcome;
        typedef Aws::Utils::Outcome<ConfigureAgentResult, CodeGuruProfilerError> ConfigureAgentOutcome;
        typedef Aws::Utils::Outcome<CreateProfilingGroupResult, CodeGuruProfilerError> CreateProfilingGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteProfilingGroupResult, CodeGuruProfilerError> DeleteProfilingGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeProfilingGroupResult, CodeGuruProfilerError> DescribeProfilingGroupOutcome;
        typedef Aws::Utils::Outcome<GetFindingsReportAccountSummaryResult, CodeGuruProfilerError> GetFindingsReportAccountSummaryOutcome;
        typedef Aws::Utils::Outcome<GetNotificationConfigurationResult, CodeGuruProfilerError> GetNotificationConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetPolicyResult, CodeGuruProfilerError> GetPolicyOutcome;
        typedef Aws::Utils::Outcome<GetProfileResult, CodeGuruProfilerError> GetProfileOutcome;
        typedef Aws::Utils::Outcome<GetRecommendationsResult, CodeGuruProfilerError> GetRecommendationsOutcome;
        typedef Aws::Utils::Outcome<ListFindingsReportsResult, CodeGuruProfilerError> ListFindingsReportsOutcome;
        typedef Aws::Utils::Outcome<ListProfileTimesResult, CodeGuruProfilerError> ListProfileTimesOutcome;
        typedef Aws::Utils::Outcome<ListProfilingGroupsResult, CodeGuruProfilerError> ListProfilingGroupsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeGuruProfilerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PostAgentProfileResult, CodeGuruProfilerError> PostAgentProfileOutcome;
        typedef Aws::Utils::Outcome<PutPermissionResult, CodeGuruProfilerError> PutPermissionOutcome;
        typedef Aws::Utils::Outcome<RemoveNotificationChannelResult, CodeGuruProfilerError> RemoveNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<RemovePermissionResult, CodeGuruProfilerError> RemovePermissionOutcome;
        typedef Aws::Utils::Outcome<SubmitFeedbackResult, CodeGuruProfilerError> SubmitFeedbackOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, CodeGuruProfilerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, CodeGuruProfilerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateProfilingGroupResult, CodeGuruProfilerError> UpdateProfilingGroupOutcome;

        typedef std::future<AddNotificationChannelsOutcome> AddNotificationChannelsOutcomeCallable;
        typedef std::future<BatchGetFrameMetricDataOutcome> BatchGetFrameMetricDataOutcomeCallable;
        typedef std::future<ConfigureAgentOutcome> ConfigureAgentOutcomeCallable;
        typedef std::future<CreateProfilingGroupOutcome> CreateProfilingGroupOutcomeCallable;
        typedef std::future<DeleteProfilingGroupOutcome> DeleteProfilingGroupOutcomeCallable;
        typedef std::future<DescribeProfilingGroupOutcome> DescribeProfilingGroupOutcomeCallable;
        typedef std::future<GetFindingsReportAccountSummaryOutcome> GetFindingsReportAccountSummaryOutcomeCallable;
        typedef std::future<GetNotificationConfigurationOutcome> GetNotificationConfigurationOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<GetProfileOutcome> GetProfileOutcomeCallable;
        typedef std::future<GetRecommendationsOutcome> GetRecommendationsOutcomeCallable;
        typedef std::future<ListFindingsReportsOutcome> ListFindingsReportsOutcomeCallable;
        typedef std::future<ListProfileTimesOutcome> ListProfileTimesOutcomeCallable;
        typedef std::future<ListProfilingGroupsOutcome> ListProfilingGroupsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PostAgentProfileOutcome> PostAgentProfileOutcomeCallable;
        typedef std::future<PutPermissionOutcome> PutPermissionOutcomeCallable;
        typedef std::future<RemoveNotificationChannelOutcome> RemoveNotificationChannelOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<SubmitFeedbackOutcome> SubmitFeedbackOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateProfilingGroupOutcome> UpdateProfilingGroupOutcomeCallable;
} // namespace Model

  class CodeGuruProfilerClient;

    typedef std::function<void(const CodeGuruProfilerClient*, const Model::AddNotificationChannelsRequest&, const Model::AddNotificationChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddNotificationChannelsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::BatchGetFrameMetricDataRequest&, const Model::BatchGetFrameMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetFrameMetricDataResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ConfigureAgentRequest&, const Model::ConfigureAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfigureAgentResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::CreateProfilingGroupRequest&, const Model::CreateProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfilingGroupResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::DeleteProfilingGroupRequest&, const Model::DeleteProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfilingGroupResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::DescribeProfilingGroupRequest&, const Model::DescribeProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProfilingGroupResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetFindingsReportAccountSummaryRequest&, const Model::GetFindingsReportAccountSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsReportAccountSummaryResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetNotificationConfigurationRequest&, const Model::GetNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetProfileRequest&, Model::GetProfileOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetRecommendationsRequest&, const Model::GetRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ListFindingsReportsRequest&, const Model::ListFindingsReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsReportsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ListProfileTimesRequest&, const Model::ListProfileTimesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileTimesResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ListProfilingGroupsRequest&, const Model::ListProfilingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfilingGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::PostAgentProfileRequest&, const Model::PostAgentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostAgentProfileResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::PutPermissionRequest&, const Model::PutPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::RemoveNotificationChannelRequest&, const Model::RemoveNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::SubmitFeedbackRequest&, const Model::SubmitFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitFeedbackResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::UpdateProfilingGroupRequest&, const Model::UpdateProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfilingGroupResponseReceivedHandler;

  /**
   * <p> This section provides documentation for the Amazon CodeGuru Profiler API
   * operations. </p> <p> Amazon CodeGuru Profiler collects runtime performance data
   * from your live applications, and provides recommendations that can help you
   * fine-tune your application performance. Using machine learning algorithms,
   * CodeGuru Profiler can help you find your most expensive lines of code and
   * suggest ways you can improve efficiency and remove CPU bottlenecks. </p> <p>
   * Amazon CodeGuru Profiler provides different visualizations of profiling data to
   * help you identify what code is running on the CPU, see how much time is
   * consumed, and suggest ways to reduce CPU utilization. </p>  <p>Amazon
   * CodeGuru Profiler currently supports applications written in all Java virtual
   * machine (JVM) languages and Python. While CodeGuru Profiler supports both
   * visualizations and recommendations for applications written in Java, it can also
   * generate visualizations and a subset of recommendations for applications written
   * in other JVM languages and Python.</p>  <p> For more information, see <a
   * href="https://docs.aws.amazon.com/codeguru/latest/profiler-ug/what-is-codeguru-profiler.html">What
   * is Amazon CodeGuru Profiler</a> in the <i>Amazon CodeGuru Profiler User
   * Guide</i>. </p>
   */
  class AWS_CODEGURUPROFILER_API CodeGuruProfilerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruProfilerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruProfilerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeGuruProfilerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeGuruProfilerClient();


        /**
         * <p>Add up to 2 anomaly notifications channels for a profiling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AddNotificationChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::AddNotificationChannelsOutcome AddNotificationChannels(const Model::AddNotificationChannelsRequest& request) const;

        /**
         * <p>Add up to 2 anomaly notifications channels for a profiling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AddNotificationChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddNotificationChannelsOutcomeCallable AddNotificationChannelsCallable(const Model::AddNotificationChannelsRequest& request) const;

        /**
         * <p>Add up to 2 anomaly notifications channels for a profiling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/AddNotificationChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddNotificationChannelsAsync(const Model::AddNotificationChannelsRequest& request, const AddNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the time series of values for a requested list of frame metrics from
         * a time period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/BatchGetFrameMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFrameMetricDataOutcome BatchGetFrameMetricData(const Model::BatchGetFrameMetricDataRequest& request) const;

        /**
         * <p> Returns the time series of values for a requested list of frame metrics from
         * a time period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/BatchGetFrameMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetFrameMetricDataOutcomeCallable BatchGetFrameMetricDataCallable(const Model::BatchGetFrameMetricDataRequest& request) const;

        /**
         * <p> Returns the time series of values for a requested list of frame metrics from
         * a time period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/BatchGetFrameMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetFrameMetricDataAsync(const Model::BatchGetFrameMetricDataRequest& request, const BatchGetFrameMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Used by profiler agents to report their current state and to receive remote
         * configuration updates. For example, <code>ConfigureAgent</code> can be used to
         * tell an agent whether to profile or not and for how long to return profiling
         * data. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ConfigureAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureAgentOutcome ConfigureAgent(const Model::ConfigureAgentRequest& request) const;

        /**
         * <p> Used by profiler agents to report their current state and to receive remote
         * configuration updates. For example, <code>ConfigureAgent</code> can be used to
         * tell an agent whether to profile or not and for how long to return profiling
         * data. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ConfigureAgent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfigureAgentOutcomeCallable ConfigureAgentCallable(const Model::ConfigureAgentRequest& request) const;

        /**
         * <p> Used by profiler agents to report their current state and to receive remote
         * configuration updates. For example, <code>ConfigureAgent</code> can be used to
         * tell an agent whether to profile or not and for how long to return profiling
         * data. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ConfigureAgent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfigureAgentAsync(const Model::ConfigureAgentRequest& request, const ConfigureAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/CreateProfilingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfilingGroupOutcome CreateProfilingGroup(const Model::CreateProfilingGroupRequest& request) const;

        /**
         * <p>Creates a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/CreateProfilingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProfilingGroupOutcomeCallable CreateProfilingGroupCallable(const Model::CreateProfilingGroupRequest& request) const;

        /**
         * <p>Creates a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/CreateProfilingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProfilingGroupAsync(const Model::CreateProfilingGroupRequest& request, const CreateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/DeleteProfilingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfilingGroupOutcome DeleteProfilingGroup(const Model::DeleteProfilingGroupRequest& request) const;

        /**
         * <p>Deletes a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/DeleteProfilingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProfilingGroupOutcomeCallable DeleteProfilingGroupCallable(const Model::DeleteProfilingGroupRequest& request) const;

        /**
         * <p>Deletes a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/DeleteProfilingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProfilingGroupAsync(const Model::DeleteProfilingGroupRequest& request, const DeleteProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
         * <code>ProfilingGroupDescription</code> </a> object that contains information
         * about the requested profiling group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/DescribeProfilingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProfilingGroupOutcome DescribeProfilingGroup(const Model::DescribeProfilingGroupRequest& request) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
         * <code>ProfilingGroupDescription</code> </a> object that contains information
         * about the requested profiling group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/DescribeProfilingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProfilingGroupOutcomeCallable DescribeProfilingGroupCallable(const Model::DescribeProfilingGroupRequest& request) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
         * <code>ProfilingGroupDescription</code> </a> object that contains information
         * about the requested profiling group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/DescribeProfilingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProfilingGroupAsync(const Model::DescribeProfilingGroupRequest& request, const DescribeProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
         * <code>FindingsReportSummary</code> </a> objects that contain analysis results
         * for all profiling groups in your AWS account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetFindingsReportAccountSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsReportAccountSummaryOutcome GetFindingsReportAccountSummary(const Model::GetFindingsReportAccountSummaryRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
         * <code>FindingsReportSummary</code> </a> objects that contain analysis results
         * for all profiling groups in your AWS account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetFindingsReportAccountSummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsReportAccountSummaryOutcomeCallable GetFindingsReportAccountSummaryCallable(const Model::GetFindingsReportAccountSummaryRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
         * <code>FindingsReportSummary</code> </a> objects that contain analysis results
         * for all profiling groups in your AWS account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetFindingsReportAccountSummary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsReportAccountSummaryAsync(const Model::GetFindingsReportAccountSummaryRequest& request, const GetFindingsReportAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the current configuration for anomaly notifications for a profiling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNotificationConfigurationOutcome GetNotificationConfiguration(const Model::GetNotificationConfigurationRequest& request) const;

        /**
         * <p>Get the current configuration for anomaly notifications for a profiling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNotificationConfigurationOutcomeCallable GetNotificationConfigurationCallable(const Model::GetNotificationConfigurationRequest& request) const;

        /**
         * <p>Get the current configuration for anomaly notifications for a profiling
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNotificationConfigurationAsync(const Model::GetNotificationConfigurationRequest& request, const GetNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the JSON-formatted resource-based policy on a profiling group.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * <p> Returns the JSON-formatted resource-based policy on a profiling group.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * <p> Returns the JSON-formatted resource-based policy on a profiling group.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets the aggregated profile of a profiling group for a specified time range.
         * Amazon CodeGuru Profiler collects posted agent profiles for a profiling group
         * into aggregated profiles. </p> <pre><code> &lt;note&gt; &lt;p&gt; Because
         * aggregated profiles expire over time &lt;code&gt;GetProfile&lt;/code&gt; is not
         * idempotent. &lt;/p&gt; &lt;/note&gt; &lt;p&gt; Specify the time range for the
         * requested aggregated profile using 1 or 2 of the following parameters:
         * &lt;code&gt;startTime&lt;/code&gt;, &lt;code&gt;endTime&lt;/code&gt;,
         * &lt;code&gt;period&lt;/code&gt;. The maximum time range allowed is 7 days. If
         * you specify all 3 parameters, an exception is thrown. If you specify only
         * &lt;code&gt;period&lt;/code&gt;, the latest aggregated profile is returned.
         * &lt;/p&gt; &lt;p&gt; Aggregated profiles are available with aggregation periods
         * of 5 minutes, 1 hour, and 1 day, aligned to UTC. The aggregation period of an
         * aggregated profile determines how long it is retained. For more information, see
         * &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html&quot;&gt;
         * &lt;code&gt;AggregatedProfileTime&lt;/code&gt; &lt;/a&gt;. The aggregated
         * profile's aggregation period determines how long it is retained by CodeGuru
         * Profiler. &lt;/p&gt; &lt;ul&gt; &lt;li&gt; &lt;p&gt; If the aggregation period
         * is 5 minutes, the aggregated profile is retained for 15 days. &lt;/p&gt;
         * &lt;/li&gt; &lt;li&gt; &lt;p&gt; If the aggregation period is 1 hour, the
         * aggregated profile is retained for 60 days. &lt;/p&gt; &lt;/li&gt; &lt;li&gt;
         * &lt;p&gt; If the aggregation period is 1 day, the aggregated profile is retained
         * for 3 years. &lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;There are two use cases
         * for calling &lt;code&gt;GetProfile&lt;/code&gt;.&lt;/p&gt; &lt;ol&gt; &lt;li&gt;
         * &lt;p&gt; If you want to return an aggregated profile that already exists, use
         * &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ListProfileTimes.html&quot;&gt;
         * &lt;code&gt;ListProfileTimes&lt;/code&gt; &lt;/a&gt; to view the time ranges of
         * existing aggregated profiles. Use them in a &lt;code&gt;GetProfile&lt;/code&gt;
         * request to return a specific, existing aggregated profile. &lt;/p&gt;
         * &lt;/li&gt; &lt;li&gt; &lt;p&gt; If you want to return an aggregated profile for
         * a time range that doesn't align with an existing aggregated profile, then
         * CodeGuru Profiler makes a best effort to combine existing aggregated profiles
         * from the requested time range and return them as one aggregated profile.
         * &lt;/p&gt; &lt;p&gt; If aggregated profiles do not exist for the full time range
         * requested, then aggregated profiles for a smaller time range are returned. For
         * example, if the requested time range is from 00:00 to 00:20, and the existing
         * aggregated profiles are from 00:15 and 00:25, then the aggregated profiles from
         * 00:15 to 00:20 are returned. &lt;/p&gt; &lt;/li&gt; &lt;/ol&gt;
         * </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;

        /**
         * <p> Gets the aggregated profile of a profiling group for a specified time range.
         * Amazon CodeGuru Profiler collects posted agent profiles for a profiling group
         * into aggregated profiles. </p> <pre><code> &lt;note&gt; &lt;p&gt; Because
         * aggregated profiles expire over time &lt;code&gt;GetProfile&lt;/code&gt; is not
         * idempotent. &lt;/p&gt; &lt;/note&gt; &lt;p&gt; Specify the time range for the
         * requested aggregated profile using 1 or 2 of the following parameters:
         * &lt;code&gt;startTime&lt;/code&gt;, &lt;code&gt;endTime&lt;/code&gt;,
         * &lt;code&gt;period&lt;/code&gt;. The maximum time range allowed is 7 days. If
         * you specify all 3 parameters, an exception is thrown. If you specify only
         * &lt;code&gt;period&lt;/code&gt;, the latest aggregated profile is returned.
         * &lt;/p&gt; &lt;p&gt; Aggregated profiles are available with aggregation periods
         * of 5 minutes, 1 hour, and 1 day, aligned to UTC. The aggregation period of an
         * aggregated profile determines how long it is retained. For more information, see
         * &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html&quot;&gt;
         * &lt;code&gt;AggregatedProfileTime&lt;/code&gt; &lt;/a&gt;. The aggregated
         * profile's aggregation period determines how long it is retained by CodeGuru
         * Profiler. &lt;/p&gt; &lt;ul&gt; &lt;li&gt; &lt;p&gt; If the aggregation period
         * is 5 minutes, the aggregated profile is retained for 15 days. &lt;/p&gt;
         * &lt;/li&gt; &lt;li&gt; &lt;p&gt; If the aggregation period is 1 hour, the
         * aggregated profile is retained for 60 days. &lt;/p&gt; &lt;/li&gt; &lt;li&gt;
         * &lt;p&gt; If the aggregation period is 1 day, the aggregated profile is retained
         * for 3 years. &lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;There are two use cases
         * for calling &lt;code&gt;GetProfile&lt;/code&gt;.&lt;/p&gt; &lt;ol&gt; &lt;li&gt;
         * &lt;p&gt; If you want to return an aggregated profile that already exists, use
         * &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ListProfileTimes.html&quot;&gt;
         * &lt;code&gt;ListProfileTimes&lt;/code&gt; &lt;/a&gt; to view the time ranges of
         * existing aggregated profiles. Use them in a &lt;code&gt;GetProfile&lt;/code&gt;
         * request to return a specific, existing aggregated profile. &lt;/p&gt;
         * &lt;/li&gt; &lt;li&gt; &lt;p&gt; If you want to return an aggregated profile for
         * a time range that doesn't align with an existing aggregated profile, then
         * CodeGuru Profiler makes a best effort to combine existing aggregated profiles
         * from the requested time range and return them as one aggregated profile.
         * &lt;/p&gt; &lt;p&gt; If aggregated profiles do not exist for the full time range
         * requested, then aggregated profiles for a smaller time range are returned. For
         * example, if the requested time range is from 00:00 to 00:20, and the existing
         * aggregated profiles are from 00:15 and 00:25, then the aggregated profiles from
         * 00:15 to 00:20 are returned. &lt;/p&gt; &lt;/li&gt; &lt;/ol&gt;
         * </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProfileOutcomeCallable GetProfileCallable(const Model::GetProfileRequest& request) const;

        /**
         * <p> Gets the aggregated profile of a profiling group for a specified time range.
         * Amazon CodeGuru Profiler collects posted agent profiles for a profiling group
         * into aggregated profiles. </p> <pre><code> &lt;note&gt; &lt;p&gt; Because
         * aggregated profiles expire over time &lt;code&gt;GetProfile&lt;/code&gt; is not
         * idempotent. &lt;/p&gt; &lt;/note&gt; &lt;p&gt; Specify the time range for the
         * requested aggregated profile using 1 or 2 of the following parameters:
         * &lt;code&gt;startTime&lt;/code&gt;, &lt;code&gt;endTime&lt;/code&gt;,
         * &lt;code&gt;period&lt;/code&gt;. The maximum time range allowed is 7 days. If
         * you specify all 3 parameters, an exception is thrown. If you specify only
         * &lt;code&gt;period&lt;/code&gt;, the latest aggregated profile is returned.
         * &lt;/p&gt; &lt;p&gt; Aggregated profiles are available with aggregation periods
         * of 5 minutes, 1 hour, and 1 day, aligned to UTC. The aggregation period of an
         * aggregated profile determines how long it is retained. For more information, see
         * &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html&quot;&gt;
         * &lt;code&gt;AggregatedProfileTime&lt;/code&gt; &lt;/a&gt;. The aggregated
         * profile's aggregation period determines how long it is retained by CodeGuru
         * Profiler. &lt;/p&gt; &lt;ul&gt; &lt;li&gt; &lt;p&gt; If the aggregation period
         * is 5 minutes, the aggregated profile is retained for 15 days. &lt;/p&gt;
         * &lt;/li&gt; &lt;li&gt; &lt;p&gt; If the aggregation period is 1 hour, the
         * aggregated profile is retained for 60 days. &lt;/p&gt; &lt;/li&gt; &lt;li&gt;
         * &lt;p&gt; If the aggregation period is 1 day, the aggregated profile is retained
         * for 3 years. &lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;There are two use cases
         * for calling &lt;code&gt;GetProfile&lt;/code&gt;.&lt;/p&gt; &lt;ol&gt; &lt;li&gt;
         * &lt;p&gt; If you want to return an aggregated profile that already exists, use
         * &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ListProfileTimes.html&quot;&gt;
         * &lt;code&gt;ListProfileTimes&lt;/code&gt; &lt;/a&gt; to view the time ranges of
         * existing aggregated profiles. Use them in a &lt;code&gt;GetProfile&lt;/code&gt;
         * request to return a specific, existing aggregated profile. &lt;/p&gt;
         * &lt;/li&gt; &lt;li&gt; &lt;p&gt; If you want to return an aggregated profile for
         * a time range that doesn't align with an existing aggregated profile, then
         * CodeGuru Profiler makes a best effort to combine existing aggregated profiles
         * from the requested time range and return them as one aggregated profile.
         * &lt;/p&gt; &lt;p&gt; If aggregated profiles do not exist for the full time range
         * requested, then aggregated profiles for a smaller time range are returned. For
         * example, if the requested time range is from 00:00 to 00:20, and the existing
         * aggregated profiles are from 00:15 and 00:25, then the aggregated profiles from
         * 00:15 to 00:20 are returned. &lt;/p&gt; &lt;/li&gt; &lt;/ol&gt;
         * </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProfileAsync(const Model::GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_Recommendation.html">
         * <code>Recommendation</code> </a> objects that contain recommendations for a
         * profiling group for a given time period. A list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_Anomaly.html">
         * <code>Anomaly</code> </a> objects that contains details about anomalies detected
         * in the profiling group for the same time period is also returned. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationsOutcome GetRecommendations(const Model::GetRecommendationsRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_Recommendation.html">
         * <code>Recommendation</code> </a> objects that contain recommendations for a
         * profiling group for a given time period. A list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_Anomaly.html">
         * <code>Anomaly</code> </a> objects that contains details about anomalies detected
         * in the profiling group for the same time period is also returned. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecommendationsOutcomeCallable GetRecommendationsCallable(const Model::GetRecommendationsRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_Recommendation.html">
         * <code>Recommendation</code> </a> objects that contain recommendations for a
         * profiling group for a given time period. A list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_Anomaly.html">
         * <code>Anomaly</code> </a> objects that contains details about anomalies detected
         * in the profiling group for the same time period is also returned. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommendationsAsync(const Model::GetRecommendationsRequest& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the available reports for a given profiling group and time
         * range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListFindingsReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsReportsOutcome ListFindingsReports(const Model::ListFindingsReportsRequest& request) const;

        /**
         * <p>List the available reports for a given profiling group and time
         * range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListFindingsReports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsReportsOutcomeCallable ListFindingsReportsCallable(const Model::ListFindingsReportsRequest& request) const;

        /**
         * <p>List the available reports for a given profiling group and time
         * range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListFindingsReports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsReportsAsync(const Model::ListFindingsReportsRequest& request, const ListFindingsReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the start times of the available aggregated profiles of a profiling
         * group for an aggregation period within the specified time range.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfileTimes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileTimesOutcome ListProfileTimes(const Model::ListProfileTimesRequest& request) const;

        /**
         * <p>Lists the start times of the available aggregated profiles of a profiling
         * group for an aggregation period within the specified time range.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfileTimes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProfileTimesOutcomeCallable ListProfileTimesCallable(const Model::ListProfileTimesRequest& request) const;

        /**
         * <p>Lists the start times of the available aggregated profiles of a profiling
         * group for an aggregation period within the specified time range.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfileTimes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProfileTimesAsync(const Model::ListProfileTimesRequest& request, const ListProfileTimesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of profiling groups. The profiling groups are returned as <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
         * <code>ProfilingGroupDescription</code> </a> objects. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfilingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfilingGroupsOutcome ListProfilingGroups(const Model::ListProfilingGroupsRequest& request) const;

        /**
         * <p> Returns a list of profiling groups. The profiling groups are returned as <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
         * <code>ProfilingGroupDescription</code> </a> objects. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfilingGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProfilingGroupsOutcomeCallable ListProfilingGroupsCallable(const Model::ListProfilingGroupsRequest& request) const;

        /**
         * <p> Returns a list of profiling groups. The profiling groups are returned as <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
         * <code>ProfilingGroupDescription</code> </a> objects. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfilingGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProfilingGroupsAsync(const Model::ListProfilingGroupsRequest& request, const ListProfilingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of the tags that are assigned to a specified resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> Returns a list of the tags that are assigned to a specified resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> Returns a list of the tags that are assigned to a specified resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Submits profiling data to an aggregated profile of a profiling group. To get
         * an aggregated profile that is created with this profiling data, use <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_GetProfile.html">
         * <code>GetProfile</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PostAgentProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::PostAgentProfileOutcome PostAgentProfile(const Model::PostAgentProfileRequest& request) const;

        /**
         * <p> Submits profiling data to an aggregated profile of a profiling group. To get
         * an aggregated profile that is created with this profiling data, use <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_GetProfile.html">
         * <code>GetProfile</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PostAgentProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PostAgentProfileOutcomeCallable PostAgentProfileCallable(const Model::PostAgentProfileRequest& request) const;

        /**
         * <p> Submits profiling data to an aggregated profile of a profiling group. To get
         * an aggregated profile that is created with this profiling data, use <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_GetProfile.html">
         * <code>GetProfile</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PostAgentProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PostAgentProfileAsync(const Model::PostAgentProfileRequest& request, const PostAgentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Adds permissions to a profiling group's resource-based policy that are
         * provided using an action group. If a profiling group doesn't have a
         * resource-based policy, one is created for it using the permissions in the action
         * group and the roles and users in the <code>principals</code> parameter. </p>
         * <pre><code> &lt;p&gt; The one supported action group that can be added is
         * &lt;code&gt;agentPermission&lt;/code&gt; which grants
         * &lt;code&gt;ConfigureAgent&lt;/code&gt; and &lt;code&gt;PostAgent&lt;/code&gt;
         * permissions. For more information, see &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-ug/resource-based-policies.html&quot;&gt;Resource-based
         * policies in CodeGuru Profiler&lt;/a&gt; in the &lt;i&gt;Amazon CodeGuru Profiler
         * User Guide&lt;/i&gt;, &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html&quot;&gt;
         * &lt;code&gt;ConfigureAgent&lt;/code&gt; &lt;/a&gt;, and &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_PostAgentProfile.html&quot;&gt;
         * &lt;code&gt;PostAgentProfile&lt;/code&gt; &lt;/a&gt;. &lt;/p&gt; &lt;p&gt; The
         * first time you call &lt;code&gt;PutPermission&lt;/code&gt; on a profiling group,
         * do not specify a &lt;code&gt;revisionId&lt;/code&gt; because it doesn't have a
         * resource-based policy. Subsequent calls must provide a
         * &lt;code&gt;revisionId&lt;/code&gt; to specify which revision of the
         * resource-based policy to add the permissions to. &lt;/p&gt; &lt;p&gt; The
         * response contains the profiling group's JSON-formatted resource policy.
         * &lt;/p&gt; </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PutPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionOutcome PutPermission(const Model::PutPermissionRequest& request) const;

        /**
         * <p> Adds permissions to a profiling group's resource-based policy that are
         * provided using an action group. If a profiling group doesn't have a
         * resource-based policy, one is created for it using the permissions in the action
         * group and the roles and users in the <code>principals</code> parameter. </p>
         * <pre><code> &lt;p&gt; The one supported action group that can be added is
         * &lt;code&gt;agentPermission&lt;/code&gt; which grants
         * &lt;code&gt;ConfigureAgent&lt;/code&gt; and &lt;code&gt;PostAgent&lt;/code&gt;
         * permissions. For more information, see &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-ug/resource-based-policies.html&quot;&gt;Resource-based
         * policies in CodeGuru Profiler&lt;/a&gt; in the &lt;i&gt;Amazon CodeGuru Profiler
         * User Guide&lt;/i&gt;, &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html&quot;&gt;
         * &lt;code&gt;ConfigureAgent&lt;/code&gt; &lt;/a&gt;, and &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_PostAgentProfile.html&quot;&gt;
         * &lt;code&gt;PostAgentProfile&lt;/code&gt; &lt;/a&gt;. &lt;/p&gt; &lt;p&gt; The
         * first time you call &lt;code&gt;PutPermission&lt;/code&gt; on a profiling group,
         * do not specify a &lt;code&gt;revisionId&lt;/code&gt; because it doesn't have a
         * resource-based policy. Subsequent calls must provide a
         * &lt;code&gt;revisionId&lt;/code&gt; to specify which revision of the
         * resource-based policy to add the permissions to. &lt;/p&gt; &lt;p&gt; The
         * response contains the profiling group's JSON-formatted resource policy.
         * &lt;/p&gt; </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PutPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPermissionOutcomeCallable PutPermissionCallable(const Model::PutPermissionRequest& request) const;

        /**
         * <p> Adds permissions to a profiling group's resource-based policy that are
         * provided using an action group. If a profiling group doesn't have a
         * resource-based policy, one is created for it using the permissions in the action
         * group and the roles and users in the <code>principals</code> parameter. </p>
         * <pre><code> &lt;p&gt; The one supported action group that can be added is
         * &lt;code&gt;agentPermission&lt;/code&gt; which grants
         * &lt;code&gt;ConfigureAgent&lt;/code&gt; and &lt;code&gt;PostAgent&lt;/code&gt;
         * permissions. For more information, see &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-ug/resource-based-policies.html&quot;&gt;Resource-based
         * policies in CodeGuru Profiler&lt;/a&gt; in the &lt;i&gt;Amazon CodeGuru Profiler
         * User Guide&lt;/i&gt;, &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html&quot;&gt;
         * &lt;code&gt;ConfigureAgent&lt;/code&gt; &lt;/a&gt;, and &lt;a
         * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_PostAgentProfile.html&quot;&gt;
         * &lt;code&gt;PostAgentProfile&lt;/code&gt; &lt;/a&gt;. &lt;/p&gt; &lt;p&gt; The
         * first time you call &lt;code&gt;PutPermission&lt;/code&gt; on a profiling group,
         * do not specify a &lt;code&gt;revisionId&lt;/code&gt; because it doesn't have a
         * resource-based policy. Subsequent calls must provide a
         * &lt;code&gt;revisionId&lt;/code&gt; to specify which revision of the
         * resource-based policy to add the permissions to. &lt;/p&gt; &lt;p&gt; The
         * response contains the profiling group's JSON-formatted resource policy.
         * &lt;/p&gt; </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PutPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPermissionAsync(const Model::PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove one anomaly notifications channel for a profiling group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/RemoveNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveNotificationChannelOutcome RemoveNotificationChannel(const Model::RemoveNotificationChannelRequest& request) const;

        /**
         * <p>Remove one anomaly notifications channel for a profiling group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/RemoveNotificationChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveNotificationChannelOutcomeCallable RemoveNotificationChannelCallable(const Model::RemoveNotificationChannelRequest& request) const;

        /**
         * <p>Remove one anomaly notifications channel for a profiling group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/RemoveNotificationChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveNotificationChannelAsync(const Model::RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes permissions from a profiling group's resource-based policy that are
         * provided using an action group. The one supported action group that can be
         * removed is <code>agentPermission</code> which grants <code>ConfigureAgent</code>
         * and <code>PostAgent</code> permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-ug/resource-based-policies.html">Resource-based
         * policies in CodeGuru Profiler</a> in the <i>Amazon CodeGuru Profiler User
         * Guide</i>, <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
         * <code>ConfigureAgent</code> </a>, and <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_PostAgentProfile.html">
         * <code>PostAgentProfile</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * <p> Removes permissions from a profiling group's resource-based policy that are
         * provided using an action group. The one supported action group that can be
         * removed is <code>agentPermission</code> which grants <code>ConfigureAgent</code>
         * and <code>PostAgent</code> permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-ug/resource-based-policies.html">Resource-based
         * policies in CodeGuru Profiler</a> in the <i>Amazon CodeGuru Profiler User
         * Guide</i>, <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
         * <code>ConfigureAgent</code> </a>, and <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_PostAgentProfile.html">
         * <code>PostAgentProfile</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/RemovePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * <p> Removes permissions from a profiling group's resource-based policy that are
         * provided using an action group. The one supported action group that can be
         * removed is <code>agentPermission</code> which grants <code>ConfigureAgent</code>
         * and <code>PostAgent</code> permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-ug/resource-based-policies.html">Resource-based
         * policies in CodeGuru Profiler</a> in the <i>Amazon CodeGuru Profiler User
         * Guide</i>, <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html">
         * <code>ConfigureAgent</code> </a>, and <a
         * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_PostAgentProfile.html">
         * <code>PostAgentProfile</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/RemovePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends feedback to CodeGuru Profiler about whether the anomaly detected by the
         * analysis is useful or not.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/SubmitFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitFeedbackOutcome SubmitFeedback(const Model::SubmitFeedbackRequest& request) const;

        /**
         * <p>Sends feedback to CodeGuru Profiler about whether the anomaly detected by the
         * analysis is useful or not.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/SubmitFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubmitFeedbackOutcomeCallable SubmitFeedbackCallable(const Model::SubmitFeedbackRequest& request) const;

        /**
         * <p>Sends feedback to CodeGuru Profiler about whether the anomaly detected by the
         * analysis is useful or not.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/SubmitFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubmitFeedbackAsync(const Model::SubmitFeedbackRequest& request, const SubmitFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Use to assign one or more tags to a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p> Use to assign one or more tags to a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p> Use to assign one or more tags to a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Use to remove one or more tags from a resource. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p> Use to remove one or more tags from a resource. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p> Use to remove one or more tags from a resource. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/UpdateProfilingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfilingGroupOutcome UpdateProfilingGroup(const Model::UpdateProfilingGroupRequest& request) const;

        /**
         * <p>Updates a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/UpdateProfilingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProfilingGroupOutcomeCallable UpdateProfilingGroupCallable(const Model::UpdateProfilingGroupRequest& request) const;

        /**
         * <p>Updates a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/UpdateProfilingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProfilingGroupAsync(const Model::UpdateProfilingGroupRequest& request, const UpdateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddNotificationChannelsAsyncHelper(const Model::AddNotificationChannelsRequest& request, const AddNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetFrameMetricDataAsyncHelper(const Model::BatchGetFrameMetricDataRequest& request, const BatchGetFrameMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfigureAgentAsyncHelper(const Model::ConfigureAgentRequest& request, const ConfigureAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProfilingGroupAsyncHelper(const Model::CreateProfilingGroupRequest& request, const CreateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProfilingGroupAsyncHelper(const Model::DeleteProfilingGroupRequest& request, const DeleteProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProfilingGroupAsyncHelper(const Model::DescribeProfilingGroupRequest& request, const DescribeProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingsReportAccountSummaryAsyncHelper(const Model::GetFindingsReportAccountSummaryRequest& request, const GetFindingsReportAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNotificationConfigurationAsyncHelper(const Model::GetNotificationConfigurationRequest& request, const GetNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProfileAsyncHelper(const Model::GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecommendationsAsyncHelper(const Model::GetRecommendationsRequest& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFindingsReportsAsyncHelper(const Model::ListFindingsReportsRequest& request, const ListFindingsReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProfileTimesAsyncHelper(const Model::ListProfileTimesRequest& request, const ListProfileTimesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProfilingGroupsAsyncHelper(const Model::ListProfilingGroupsRequest& request, const ListProfilingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PostAgentProfileAsyncHelper(const Model::PostAgentProfileRequest& request, const PostAgentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPermissionAsyncHelper(const Model::PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveNotificationChannelAsyncHelper(const Model::RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubmitFeedbackAsyncHelper(const Model::SubmitFeedbackRequest& request, const SubmitFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProfilingGroupAsyncHelper(const Model::UpdateProfilingGroupRequest& request, const UpdateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeGuruProfiler
} // namespace Aws
