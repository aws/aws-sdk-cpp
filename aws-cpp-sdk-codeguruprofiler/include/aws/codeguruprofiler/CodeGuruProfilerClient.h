/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codeguruprofiler/model/ConfigureAgentResult.h>
#include <aws/codeguruprofiler/model/CreateProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/DeleteProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/DescribeProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/GetProfileResult.h>
#include <aws/codeguruprofiler/model/ListProfileTimesResult.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsResult.h>
#include <aws/codeguruprofiler/model/PostAgentProfileResult.h>
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
        class ConfigureAgentRequest;
        class CreateProfilingGroupRequest;
        class DeleteProfilingGroupRequest;
        class DescribeProfilingGroupRequest;
        class GetProfileRequest;
        class ListProfileTimesRequest;
        class ListProfilingGroupsRequest;
        class PostAgentProfileRequest;
        class UpdateProfilingGroupRequest;

        typedef Aws::Utils::Outcome<ConfigureAgentResult, Aws::Client::AWSError<CodeGuruProfilerErrors>> ConfigureAgentOutcome;
        typedef Aws::Utils::Outcome<CreateProfilingGroupResult, Aws::Client::AWSError<CodeGuruProfilerErrors>> CreateProfilingGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteProfilingGroupResult, Aws::Client::AWSError<CodeGuruProfilerErrors>> DeleteProfilingGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeProfilingGroupResult, Aws::Client::AWSError<CodeGuruProfilerErrors>> DescribeProfilingGroupOutcome;
        typedef Aws::Utils::Outcome<GetProfileResult, Aws::Client::AWSError<CodeGuruProfilerErrors>> GetProfileOutcome;
        typedef Aws::Utils::Outcome<ListProfileTimesResult, Aws::Client::AWSError<CodeGuruProfilerErrors>> ListProfileTimesOutcome;
        typedef Aws::Utils::Outcome<ListProfilingGroupsResult, Aws::Client::AWSError<CodeGuruProfilerErrors>> ListProfilingGroupsOutcome;
        typedef Aws::Utils::Outcome<PostAgentProfileResult, Aws::Client::AWSError<CodeGuruProfilerErrors>> PostAgentProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateProfilingGroupResult, Aws::Client::AWSError<CodeGuruProfilerErrors>> UpdateProfilingGroupOutcome;

        typedef std::future<ConfigureAgentOutcome> ConfigureAgentOutcomeCallable;
        typedef std::future<CreateProfilingGroupOutcome> CreateProfilingGroupOutcomeCallable;
        typedef std::future<DeleteProfilingGroupOutcome> DeleteProfilingGroupOutcomeCallable;
        typedef std::future<DescribeProfilingGroupOutcome> DescribeProfilingGroupOutcomeCallable;
        typedef std::future<GetProfileOutcome> GetProfileOutcomeCallable;
        typedef std::future<ListProfileTimesOutcome> ListProfileTimesOutcomeCallable;
        typedef std::future<ListProfilingGroupsOutcome> ListProfilingGroupsOutcomeCallable;
        typedef std::future<PostAgentProfileOutcome> PostAgentProfileOutcomeCallable;
        typedef std::future<UpdateProfilingGroupOutcome> UpdateProfilingGroupOutcomeCallable;
} // namespace Model

  class CodeGuruProfilerClient;

    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ConfigureAgentRequest&, const Model::ConfigureAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfigureAgentResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::CreateProfilingGroupRequest&, const Model::CreateProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfilingGroupResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::DeleteProfilingGroupRequest&, const Model::DeleteProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfilingGroupResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::DescribeProfilingGroupRequest&, const Model::DescribeProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProfilingGroupResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetProfileRequest&, Model::GetProfileOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ListProfileTimesRequest&, const Model::ListProfileTimesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileTimesResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ListProfilingGroupsRequest&, const Model::ListProfilingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfilingGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::PostAgentProfileRequest&, const Model::PostAgentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostAgentProfileResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::UpdateProfilingGroupRequest&, const Model::UpdateProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfilingGroupResponseReceivedHandler;

  /**
   * <p>This section provides documentation for the Amazon CodeGuru Profiler API
   * operations.</p>
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

        inline virtual const char* GetServiceClientName() const override { return "CodeGuruProfiler"; }


        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ConfigureAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureAgentOutcome ConfigureAgent(const Model::ConfigureAgentRequest& request) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ConfigureAgent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfigureAgentOutcomeCallable ConfigureAgentCallable(const Model::ConfigureAgentRequest& request) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
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
         * <p>Describes a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/DescribeProfilingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProfilingGroupOutcome DescribeProfilingGroup(const Model::DescribeProfilingGroupRequest& request) const;

        /**
         * <p>Describes a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/DescribeProfilingGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProfilingGroupOutcomeCallable DescribeProfilingGroupCallable(const Model::DescribeProfilingGroupRequest& request) const;

        /**
         * <p>Describes a profiling group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/DescribeProfilingGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProfilingGroupAsync(const Model::DescribeProfilingGroupRequest& request, const DescribeProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the aggregated profile of a profiling group for the specified time
         * range. If the requested time range does not align with the available aggregated
         * profiles, it is expanded to attain alignment. If aggregated profiles are
         * available only for part of the period requested, the profile is returned from
         * the earliest available to the latest within the requested time range. </p>
         * <p>For example, if the requested time range is from 00:00 to 00:20 and the
         * available profiles are from 00:15 to 00:25, the returned profile will be from
         * 00:15 to 00:20. </p> <p>You must specify exactly two of the following
         * parameters: <code>startTime</code>, <code>period</code>, and
         * <code>endTime</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileOutcome GetProfile(const Model::GetProfileRequest& request) const;

        /**
         * <p>Gets the aggregated profile of a profiling group for the specified time
         * range. If the requested time range does not align with the available aggregated
         * profiles, it is expanded to attain alignment. If aggregated profiles are
         * available only for part of the period requested, the profile is returned from
         * the earliest available to the latest within the requested time range. </p>
         * <p>For example, if the requested time range is from 00:00 to 00:20 and the
         * available profiles are from 00:15 to 00:25, the returned profile will be from
         * 00:15 to 00:20. </p> <p>You must specify exactly two of the following
         * parameters: <code>startTime</code>, <code>period</code>, and
         * <code>endTime</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProfileOutcomeCallable GetProfileCallable(const Model::GetProfileRequest& request) const;

        /**
         * <p>Gets the aggregated profile of a profiling group for the specified time
         * range. If the requested time range does not align with the available aggregated
         * profiles, it is expanded to attain alignment. If aggregated profiles are
         * available only for part of the period requested, the profile is returned from
         * the earliest available to the latest within the requested time range. </p>
         * <p>For example, if the requested time range is from 00:00 to 00:20 and the
         * available profiles are from 00:15 to 00:25, the returned profile will be from
         * 00:15 to 00:20. </p> <p>You must specify exactly two of the following
         * parameters: <code>startTime</code>, <code>period</code>, and
         * <code>endTime</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProfileAsync(const Model::GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the start times of the available aggregated profiles of a profiling
         * group for an aggregation period within the specified time range.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfileTimes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileTimesOutcome ListProfileTimes(const Model::ListProfileTimesRequest& request) const;

        /**
         * <p>List the start times of the available aggregated profiles of a profiling
         * group for an aggregation period within the specified time range.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfileTimes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProfileTimesOutcomeCallable ListProfileTimesCallable(const Model::ListProfileTimesRequest& request) const;

        /**
         * <p>List the start times of the available aggregated profiles of a profiling
         * group for an aggregation period within the specified time range.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfileTimes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProfileTimesAsync(const Model::ListProfileTimesRequest& request, const ListProfileTimesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists profiling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfilingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfilingGroupsOutcome ListProfilingGroups(const Model::ListProfilingGroupsRequest& request) const;

        /**
         * <p>Lists profiling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfilingGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProfilingGroupsOutcomeCallable ListProfilingGroupsCallable(const Model::ListProfilingGroupsRequest& request) const;

        /**
         * <p>Lists profiling groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfilingGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProfilingGroupsAsync(const Model::ListProfilingGroupsRequest& request, const ListProfilingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PostAgentProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::PostAgentProfileOutcome PostAgentProfile(const Model::PostAgentProfileRequest& request) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PostAgentProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PostAgentProfileOutcomeCallable PostAgentProfileCallable(const Model::PostAgentProfileRequest& request) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PostAgentProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PostAgentProfileAsync(const Model::PostAgentProfileRequest& request, const PostAgentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        void ConfigureAgentAsyncHelper(const Model::ConfigureAgentRequest& request, const ConfigureAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProfilingGroupAsyncHelper(const Model::CreateProfilingGroupRequest& request, const CreateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProfilingGroupAsyncHelper(const Model::DeleteProfilingGroupRequest& request, const DeleteProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProfilingGroupAsyncHelper(const Model::DescribeProfilingGroupRequest& request, const DescribeProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProfileAsyncHelper(const Model::GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProfileTimesAsyncHelper(const Model::ListProfileTimesRequest& request, const ListProfileTimesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProfilingGroupsAsyncHelper(const Model::ListProfilingGroupsRequest& request, const ListProfilingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PostAgentProfileAsyncHelper(const Model::PostAgentProfileRequest& request, const PostAgentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProfilingGroupAsyncHelper(const Model::UpdateProfilingGroupRequest& request, const UpdateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeGuruProfiler
} // namespace Aws
