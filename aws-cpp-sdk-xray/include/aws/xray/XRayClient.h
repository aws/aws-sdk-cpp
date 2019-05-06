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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/xray/model/BatchGetTracesResult.h>
#include <aws/xray/model/CreateGroupResult.h>
#include <aws/xray/model/CreateSamplingRuleResult.h>
#include <aws/xray/model/DeleteGroupResult.h>
#include <aws/xray/model/DeleteSamplingRuleResult.h>
#include <aws/xray/model/GetEncryptionConfigResult.h>
#include <aws/xray/model/GetGroupResult.h>
#include <aws/xray/model/GetGroupsResult.h>
#include <aws/xray/model/GetSamplingRulesResult.h>
#include <aws/xray/model/GetSamplingStatisticSummariesResult.h>
#include <aws/xray/model/GetSamplingTargetsResult.h>
#include <aws/xray/model/GetServiceGraphResult.h>
#include <aws/xray/model/GetTimeSeriesServiceStatisticsResult.h>
#include <aws/xray/model/GetTraceGraphResult.h>
#include <aws/xray/model/GetTraceSummariesResult.h>
#include <aws/xray/model/PutEncryptionConfigResult.h>
#include <aws/xray/model/PutTelemetryRecordsResult.h>
#include <aws/xray/model/PutTraceSegmentsResult.h>
#include <aws/xray/model/UpdateGroupResult.h>
#include <aws/xray/model/UpdateSamplingRuleResult.h>
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

namespace XRay
{

namespace Model
{
        class BatchGetTracesRequest;
        class CreateGroupRequest;
        class CreateSamplingRuleRequest;
        class DeleteGroupRequest;
        class DeleteSamplingRuleRequest;
        class GetEncryptionConfigRequest;
        class GetGroupRequest;
        class GetGroupsRequest;
        class GetSamplingRulesRequest;
        class GetSamplingStatisticSummariesRequest;
        class GetSamplingTargetsRequest;
        class GetServiceGraphRequest;
        class GetTimeSeriesServiceStatisticsRequest;
        class GetTraceGraphRequest;
        class GetTraceSummariesRequest;
        class PutEncryptionConfigRequest;
        class PutTelemetryRecordsRequest;
        class PutTraceSegmentsRequest;
        class UpdateGroupRequest;
        class UpdateSamplingRuleRequest;

        typedef Aws::Utils::Outcome<BatchGetTracesResult, Aws::Client::AWSError<XRayErrors>> BatchGetTracesOutcome;
        typedef Aws::Utils::Outcome<CreateGroupResult, Aws::Client::AWSError<XRayErrors>> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<CreateSamplingRuleResult, Aws::Client::AWSError<XRayErrors>> CreateSamplingRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupResult, Aws::Client::AWSError<XRayErrors>> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteSamplingRuleResult, Aws::Client::AWSError<XRayErrors>> DeleteSamplingRuleOutcome;
        typedef Aws::Utils::Outcome<GetEncryptionConfigResult, Aws::Client::AWSError<XRayErrors>> GetEncryptionConfigOutcome;
        typedef Aws::Utils::Outcome<GetGroupResult, Aws::Client::AWSError<XRayErrors>> GetGroupOutcome;
        typedef Aws::Utils::Outcome<GetGroupsResult, Aws::Client::AWSError<XRayErrors>> GetGroupsOutcome;
        typedef Aws::Utils::Outcome<GetSamplingRulesResult, Aws::Client::AWSError<XRayErrors>> GetSamplingRulesOutcome;
        typedef Aws::Utils::Outcome<GetSamplingStatisticSummariesResult, Aws::Client::AWSError<XRayErrors>> GetSamplingStatisticSummariesOutcome;
        typedef Aws::Utils::Outcome<GetSamplingTargetsResult, Aws::Client::AWSError<XRayErrors>> GetSamplingTargetsOutcome;
        typedef Aws::Utils::Outcome<GetServiceGraphResult, Aws::Client::AWSError<XRayErrors>> GetServiceGraphOutcome;
        typedef Aws::Utils::Outcome<GetTimeSeriesServiceStatisticsResult, Aws::Client::AWSError<XRayErrors>> GetTimeSeriesServiceStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetTraceGraphResult, Aws::Client::AWSError<XRayErrors>> GetTraceGraphOutcome;
        typedef Aws::Utils::Outcome<GetTraceSummariesResult, Aws::Client::AWSError<XRayErrors>> GetTraceSummariesOutcome;
        typedef Aws::Utils::Outcome<PutEncryptionConfigResult, Aws::Client::AWSError<XRayErrors>> PutEncryptionConfigOutcome;
        typedef Aws::Utils::Outcome<PutTelemetryRecordsResult, Aws::Client::AWSError<XRayErrors>> PutTelemetryRecordsOutcome;
        typedef Aws::Utils::Outcome<PutTraceSegmentsResult, Aws::Client::AWSError<XRayErrors>> PutTraceSegmentsOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupResult, Aws::Client::AWSError<XRayErrors>> UpdateGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateSamplingRuleResult, Aws::Client::AWSError<XRayErrors>> UpdateSamplingRuleOutcome;

        typedef std::future<BatchGetTracesOutcome> BatchGetTracesOutcomeCallable;
        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<CreateSamplingRuleOutcome> CreateSamplingRuleOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<DeleteSamplingRuleOutcome> DeleteSamplingRuleOutcomeCallable;
        typedef std::future<GetEncryptionConfigOutcome> GetEncryptionConfigOutcomeCallable;
        typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
        typedef std::future<GetGroupsOutcome> GetGroupsOutcomeCallable;
        typedef std::future<GetSamplingRulesOutcome> GetSamplingRulesOutcomeCallable;
        typedef std::future<GetSamplingStatisticSummariesOutcome> GetSamplingStatisticSummariesOutcomeCallable;
        typedef std::future<GetSamplingTargetsOutcome> GetSamplingTargetsOutcomeCallable;
        typedef std::future<GetServiceGraphOutcome> GetServiceGraphOutcomeCallable;
        typedef std::future<GetTimeSeriesServiceStatisticsOutcome> GetTimeSeriesServiceStatisticsOutcomeCallable;
        typedef std::future<GetTraceGraphOutcome> GetTraceGraphOutcomeCallable;
        typedef std::future<GetTraceSummariesOutcome> GetTraceSummariesOutcomeCallable;
        typedef std::future<PutEncryptionConfigOutcome> PutEncryptionConfigOutcomeCallable;
        typedef std::future<PutTelemetryRecordsOutcome> PutTelemetryRecordsOutcomeCallable;
        typedef std::future<PutTraceSegmentsOutcome> PutTraceSegmentsOutcomeCallable;
        typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
        typedef std::future<UpdateSamplingRuleOutcome> UpdateSamplingRuleOutcomeCallable;
} // namespace Model

  class XRayClient;

    typedef std::function<void(const XRayClient*, const Model::BatchGetTracesRequest&, const Model::BatchGetTracesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetTracesResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::CreateSamplingRuleRequest&, const Model::CreateSamplingRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSamplingRuleResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::DeleteSamplingRuleRequest&, const Model::DeleteSamplingRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSamplingRuleResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetEncryptionConfigRequest&, const Model::GetEncryptionConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEncryptionConfigResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetGroupsRequest&, const Model::GetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetSamplingRulesRequest&, const Model::GetSamplingRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSamplingRulesResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetSamplingStatisticSummariesRequest&, const Model::GetSamplingStatisticSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSamplingStatisticSummariesResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetSamplingTargetsRequest&, const Model::GetSamplingTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSamplingTargetsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetServiceGraphRequest&, const Model::GetServiceGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceGraphResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetTimeSeriesServiceStatisticsRequest&, const Model::GetTimeSeriesServiceStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTimeSeriesServiceStatisticsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetTraceGraphRequest&, const Model::GetTraceGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTraceGraphResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetTraceSummariesRequest&, const Model::GetTraceSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTraceSummariesResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::PutEncryptionConfigRequest&, const Model::PutEncryptionConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEncryptionConfigResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::PutTelemetryRecordsRequest&, const Model::PutTelemetryRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTelemetryRecordsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::PutTraceSegmentsRequest&, const Model::PutTraceSegmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTraceSegmentsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::UpdateSamplingRuleRequest&, const Model::UpdateSamplingRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSamplingRuleResponseReceivedHandler;

  /**
   * <p>AWS X-Ray provides APIs for managing debug traces and retrieving service maps
   * and other data created by processing those traces.</p>
   */
  class AWS_XRAY_API XRayClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        XRayClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        XRayClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        XRayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~XRayClient();

        inline virtual const char* GetServiceClientName() const override { return "XRay"; }


        /**
         * <p>Retrieves a list of traces specified by ID. Each trace is a collection of
         * segment documents that originates from a single request. Use
         * <code>GetTraceSummaries</code> to get a list of trace IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/BatchGetTraces">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetTracesOutcome BatchGetTraces(const Model::BatchGetTracesRequest& request) const;

        /**
         * <p>Retrieves a list of traces specified by ID. Each trace is a collection of
         * segment documents that originates from a single request. Use
         * <code>GetTraceSummaries</code> to get a list of trace IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/BatchGetTraces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetTracesOutcomeCallable BatchGetTracesCallable(const Model::BatchGetTracesRequest& request) const;

        /**
         * <p>Retrieves a list of traces specified by ID. Each trace is a collection of
         * segment documents that originates from a single request. Use
         * <code>GetTraceSummaries</code> to get a list of trace IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/BatchGetTraces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetTracesAsync(const Model::BatchGetTracesRequest& request, const BatchGetTracesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a group resource with a name and a filter expression. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a group resource with a name and a filter expression. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CreateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a group resource with a name and a filter expression. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CreateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a rule to control sampling behavior for instrumented applications.
         * Services retrieve rules with <a>GetSamplingRules</a>, and evaluate each rule in
         * ascending order of <i>priority</i> for each request. If a rule matches, the
         * service records a trace, borrowing it from the reservoir size. After 10 seconds,
         * the service reports back to X-Ray with <a>GetSamplingTargets</a> to get updated
         * versions of each in-use rule. The updated rule contains a trace quota that the
         * service can use instead of borrowing from the reservoir.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CreateSamplingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSamplingRuleOutcome CreateSamplingRule(const Model::CreateSamplingRuleRequest& request) const;

        /**
         * <p>Creates a rule to control sampling behavior for instrumented applications.
         * Services retrieve rules with <a>GetSamplingRules</a>, and evaluate each rule in
         * ascending order of <i>priority</i> for each request. If a rule matches, the
         * service records a trace, borrowing it from the reservoir size. After 10 seconds,
         * the service reports back to X-Ray with <a>GetSamplingTargets</a> to get updated
         * versions of each in-use rule. The updated rule contains a trace quota that the
         * service can use instead of borrowing from the reservoir.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CreateSamplingRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSamplingRuleOutcomeCallable CreateSamplingRuleCallable(const Model::CreateSamplingRuleRequest& request) const;

        /**
         * <p>Creates a rule to control sampling behavior for instrumented applications.
         * Services retrieve rules with <a>GetSamplingRules</a>, and evaluate each rule in
         * ascending order of <i>priority</i> for each request. If a rule matches, the
         * service records a trace, borrowing it from the reservoir size. After 10 seconds,
         * the service reports back to X-Ray with <a>GetSamplingTargets</a> to get updated
         * versions of each in-use rule. The updated rule contains a trace quota that the
         * service can use instead of borrowing from the reservoir.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CreateSamplingRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSamplingRuleAsync(const Model::CreateSamplingRuleRequest& request, const CreateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a group resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes a group resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes a group resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a sampling rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteSamplingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSamplingRuleOutcome DeleteSamplingRule(const Model::DeleteSamplingRuleRequest& request) const;

        /**
         * <p>Deletes a sampling rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteSamplingRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSamplingRuleOutcomeCallable DeleteSamplingRuleCallable(const Model::DeleteSamplingRuleRequest& request) const;

        /**
         * <p>Deletes a sampling rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteSamplingRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSamplingRuleAsync(const Model::DeleteSamplingRuleRequest& request, const DeleteSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current encryption configuration for X-Ray data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetEncryptionConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEncryptionConfigOutcome GetEncryptionConfig(const Model::GetEncryptionConfigRequest& request) const;

        /**
         * <p>Retrieves the current encryption configuration for X-Ray data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetEncryptionConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEncryptionConfigOutcomeCallable GetEncryptionConfigCallable(const Model::GetEncryptionConfigRequest& request) const;

        /**
         * <p>Retrieves the current encryption configuration for X-Ray data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetEncryptionConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEncryptionConfigAsync(const Model::GetEncryptionConfigRequest& request, const GetEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves group resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * <p>Retrieves group resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetGroup">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * <p>Retrieves group resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetGroup">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all active group details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetGroups">AWS API
         * Reference</a></p>
         */
        virtual Model::GetGroupsOutcome GetGroups(const Model::GetGroupsRequest& request) const;

        /**
         * <p>Retrieves all active group details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetGroups">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupsOutcomeCallable GetGroupsCallable(const Model::GetGroupsRequest& request) const;

        /**
         * <p>Retrieves all active group details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetGroups">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupsAsync(const Model::GetGroupsRequest& request, const GetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all sampling rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingRules">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSamplingRulesOutcome GetSamplingRules(const Model::GetSamplingRulesRequest& request) const;

        /**
         * <p>Retrieves all sampling rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSamplingRulesOutcomeCallable GetSamplingRulesCallable(const Model::GetSamplingRulesRequest& request) const;

        /**
         * <p>Retrieves all sampling rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSamplingRulesAsync(const Model::GetSamplingRulesRequest& request, const GetSamplingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about recent sampling results for all sampling
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingStatisticSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSamplingStatisticSummariesOutcome GetSamplingStatisticSummaries(const Model::GetSamplingStatisticSummariesRequest& request) const;

        /**
         * <p>Retrieves information about recent sampling results for all sampling
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingStatisticSummaries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSamplingStatisticSummariesOutcomeCallable GetSamplingStatisticSummariesCallable(const Model::GetSamplingStatisticSummariesRequest& request) const;

        /**
         * <p>Retrieves information about recent sampling results for all sampling
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingStatisticSummaries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSamplingStatisticSummariesAsync(const Model::GetSamplingStatisticSummariesRequest& request, const GetSamplingStatisticSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a sampling quota for rules that the service is using to sample
         * requests. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSamplingTargetsOutcome GetSamplingTargets(const Model::GetSamplingTargetsRequest& request) const;

        /**
         * <p>Requests a sampling quota for rules that the service is using to sample
         * requests. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSamplingTargetsOutcomeCallable GetSamplingTargetsCallable(const Model::GetSamplingTargetsRequest& request) const;

        /**
         * <p>Requests a sampling quota for rules that the service is using to sample
         * requests. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSamplingTargetsAsync(const Model::GetSamplingTargetsRequest& request, const GetSamplingTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a document that describes services that process incoming requests,
         * and downstream services that they call as a result. Root services process
         * incoming requests and make calls to downstream services. Root services are
         * applications that use the AWS X-Ray SDK. Downstream services can be other
         * applications, AWS resources, HTTP web APIs, or SQL databases.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetServiceGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceGraphOutcome GetServiceGraph(const Model::GetServiceGraphRequest& request) const;

        /**
         * <p>Retrieves a document that describes services that process incoming requests,
         * and downstream services that they call as a result. Root services process
         * incoming requests and make calls to downstream services. Root services are
         * applications that use the AWS X-Ray SDK. Downstream services can be other
         * applications, AWS resources, HTTP web APIs, or SQL databases.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetServiceGraph">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceGraphOutcomeCallable GetServiceGraphCallable(const Model::GetServiceGraphRequest& request) const;

        /**
         * <p>Retrieves a document that describes services that process incoming requests,
         * and downstream services that they call as a result. Root services process
         * incoming requests and make calls to downstream services. Root services are
         * applications that use the AWS X-Ray SDK. Downstream services can be other
         * applications, AWS resources, HTTP web APIs, or SQL databases.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetServiceGraph">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceGraphAsync(const Model::GetServiceGraphRequest& request, const GetServiceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get an aggregation of service statistics defined by a specific time
         * range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTimeSeriesServiceStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTimeSeriesServiceStatisticsOutcome GetTimeSeriesServiceStatistics(const Model::GetTimeSeriesServiceStatisticsRequest& request) const;

        /**
         * <p>Get an aggregation of service statistics defined by a specific time
         * range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTimeSeriesServiceStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTimeSeriesServiceStatisticsOutcomeCallable GetTimeSeriesServiceStatisticsCallable(const Model::GetTimeSeriesServiceStatisticsRequest& request) const;

        /**
         * <p>Get an aggregation of service statistics defined by a specific time
         * range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTimeSeriesServiceStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTimeSeriesServiceStatisticsAsync(const Model::GetTimeSeriesServiceStatisticsRequest& request, const GetTimeSeriesServiceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a service graph for one or more specific trace IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTraceGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTraceGraphOutcome GetTraceGraph(const Model::GetTraceGraphRequest& request) const;

        /**
         * <p>Retrieves a service graph for one or more specific trace IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTraceGraph">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTraceGraphOutcomeCallable GetTraceGraphCallable(const Model::GetTraceGraphRequest& request) const;

        /**
         * <p>Retrieves a service graph for one or more specific trace IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTraceGraph">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTraceGraphAsync(const Model::GetTraceGraphRequest& request, const GetTraceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves IDs and metadata for traces available for a specified time frame
         * using an optional filter. To get the full traces, pass the trace IDs to
         * <code>BatchGetTraces</code>.</p> <p>A filter expression can target traced
         * requests that hit specific service nodes or edges, have errors, or come from a
         * known user. For example, the following filter expression targets traces that
         * pass through <code>api.example.com</code>:</p> <p>
         * <code>service("api.example.com")</code> </p> <p>This filter expression finds
         * traces that have an annotation named <code>account</code> with the value
         * <code>12345</code>:</p> <p> <code>annotation.account = "12345"</code> </p>
         * <p>For a full list of indexed fields and keywords that you can use in filter
         * expressions, see <a
         * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-console-filters.html">Using
         * Filter Expressions</a> in the <i>AWS X-Ray Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTraceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTraceSummariesOutcome GetTraceSummaries(const Model::GetTraceSummariesRequest& request) const;

        /**
         * <p>Retrieves IDs and metadata for traces available for a specified time frame
         * using an optional filter. To get the full traces, pass the trace IDs to
         * <code>BatchGetTraces</code>.</p> <p>A filter expression can target traced
         * requests that hit specific service nodes or edges, have errors, or come from a
         * known user. For example, the following filter expression targets traces that
         * pass through <code>api.example.com</code>:</p> <p>
         * <code>service("api.example.com")</code> </p> <p>This filter expression finds
         * traces that have an annotation named <code>account</code> with the value
         * <code>12345</code>:</p> <p> <code>annotation.account = "12345"</code> </p>
         * <p>For a full list of indexed fields and keywords that you can use in filter
         * expressions, see <a
         * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-console-filters.html">Using
         * Filter Expressions</a> in the <i>AWS X-Ray Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTraceSummaries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTraceSummariesOutcomeCallable GetTraceSummariesCallable(const Model::GetTraceSummariesRequest& request) const;

        /**
         * <p>Retrieves IDs and metadata for traces available for a specified time frame
         * using an optional filter. To get the full traces, pass the trace IDs to
         * <code>BatchGetTraces</code>.</p> <p>A filter expression can target traced
         * requests that hit specific service nodes or edges, have errors, or come from a
         * known user. For example, the following filter expression targets traces that
         * pass through <code>api.example.com</code>:</p> <p>
         * <code>service("api.example.com")</code> </p> <p>This filter expression finds
         * traces that have an annotation named <code>account</code> with the value
         * <code>12345</code>:</p> <p> <code>annotation.account = "12345"</code> </p>
         * <p>For a full list of indexed fields and keywords that you can use in filter
         * expressions, see <a
         * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-console-filters.html">Using
         * Filter Expressions</a> in the <i>AWS X-Ray Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTraceSummaries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTraceSummariesAsync(const Model::GetTraceSummariesRequest& request, const GetTraceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the encryption configuration for X-Ray data.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutEncryptionConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEncryptionConfigOutcome PutEncryptionConfig(const Model::PutEncryptionConfigRequest& request) const;

        /**
         * <p>Updates the encryption configuration for X-Ray data.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutEncryptionConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEncryptionConfigOutcomeCallable PutEncryptionConfigCallable(const Model::PutEncryptionConfigRequest& request) const;

        /**
         * <p>Updates the encryption configuration for X-Ray data.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutEncryptionConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEncryptionConfigAsync(const Model::PutEncryptionConfigRequest& request, const PutEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by the AWS X-Ray daemon to upload telemetry.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutTelemetryRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTelemetryRecordsOutcome PutTelemetryRecords(const Model::PutTelemetryRecordsRequest& request) const;

        /**
         * <p>Used by the AWS X-Ray daemon to upload telemetry.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutTelemetryRecords">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutTelemetryRecordsOutcomeCallable PutTelemetryRecordsCallable(const Model::PutTelemetryRecordsRequest& request) const;

        /**
         * <p>Used by the AWS X-Ray daemon to upload telemetry.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutTelemetryRecords">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutTelemetryRecordsAsync(const Model::PutTelemetryRecordsRequest& request, const PutTelemetryRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads segment documents to AWS X-Ray. The X-Ray SDK generates segment
         * documents and sends them to the X-Ray daemon, which uploads them in batches. A
         * segment document can be a completed segment, an in-progress segment, or an array
         * of subsegments.</p> <p>Segments must include the following fields. For the full
         * segment document schema, see <a
         * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-api-segmentdocuments.html">AWS
         * X-Ray Segment Documents</a> in the <i>AWS X-Ray Developer Guide</i>.</p> <p
         * class="title"> <b>Required Segment Document Fields</b> </p> <ul> <li> <p>
         * <code>name</code> - The name of the service that handled the request.</p> </li>
         * <li> <p> <code>id</code> - A 64-bit identifier for the segment, unique among
         * segments in the same trace, in 16 hexadecimal digits.</p> </li> <li> <p>
         * <code>trace_id</code> - A unique identifier that connects all segments and
         * subsegments originating from a single client request.</p> </li> <li> <p>
         * <code>start_time</code> - Time the segment or subsegment was created, in
         * floating point seconds in epoch time, accurate to milliseconds. For example,
         * <code>1480615200.010</code> or <code>1.480615200010E9</code>.</p> </li> <li> <p>
         * <code>end_time</code> - Time the segment or subsegment was closed. For example,
         * <code>1480615200.090</code> or <code>1.480615200090E9</code>. Specify either an
         * <code>end_time</code> or <code>in_progress</code>.</p> </li> <li> <p>
         * <code>in_progress</code> - Set to <code>true</code> instead of specifying an
         * <code>end_time</code> to record that a segment has been started, but is not
         * complete. Send an in progress segment when your application receives a request
         * that will take a long time to serve, to trace the fact that the request was
         * received. When the response is sent, send the complete segment to overwrite the
         * in-progress segment.</p> </li> </ul> <p>A <code>trace_id</code> consists of
         * three numbers separated by hyphens. For example,
         * 1-58406520-a006649127e371903a2de979. This includes:</p> <p class="title">
         * <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
         * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
         * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
         * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
         * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
         * unique, in 24 hexadecimal digits.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutTraceSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTraceSegmentsOutcome PutTraceSegments(const Model::PutTraceSegmentsRequest& request) const;

        /**
         * <p>Uploads segment documents to AWS X-Ray. The X-Ray SDK generates segment
         * documents and sends them to the X-Ray daemon, which uploads them in batches. A
         * segment document can be a completed segment, an in-progress segment, or an array
         * of subsegments.</p> <p>Segments must include the following fields. For the full
         * segment document schema, see <a
         * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-api-segmentdocuments.html">AWS
         * X-Ray Segment Documents</a> in the <i>AWS X-Ray Developer Guide</i>.</p> <p
         * class="title"> <b>Required Segment Document Fields</b> </p> <ul> <li> <p>
         * <code>name</code> - The name of the service that handled the request.</p> </li>
         * <li> <p> <code>id</code> - A 64-bit identifier for the segment, unique among
         * segments in the same trace, in 16 hexadecimal digits.</p> </li> <li> <p>
         * <code>trace_id</code> - A unique identifier that connects all segments and
         * subsegments originating from a single client request.</p> </li> <li> <p>
         * <code>start_time</code> - Time the segment or subsegment was created, in
         * floating point seconds in epoch time, accurate to milliseconds. For example,
         * <code>1480615200.010</code> or <code>1.480615200010E9</code>.</p> </li> <li> <p>
         * <code>end_time</code> - Time the segment or subsegment was closed. For example,
         * <code>1480615200.090</code> or <code>1.480615200090E9</code>. Specify either an
         * <code>end_time</code> or <code>in_progress</code>.</p> </li> <li> <p>
         * <code>in_progress</code> - Set to <code>true</code> instead of specifying an
         * <code>end_time</code> to record that a segment has been started, but is not
         * complete. Send an in progress segment when your application receives a request
         * that will take a long time to serve, to trace the fact that the request was
         * received. When the response is sent, send the complete segment to overwrite the
         * in-progress segment.</p> </li> </ul> <p>A <code>trace_id</code> consists of
         * three numbers separated by hyphens. For example,
         * 1-58406520-a006649127e371903a2de979. This includes:</p> <p class="title">
         * <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
         * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
         * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
         * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
         * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
         * unique, in 24 hexadecimal digits.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutTraceSegments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutTraceSegmentsOutcomeCallable PutTraceSegmentsCallable(const Model::PutTraceSegmentsRequest& request) const;

        /**
         * <p>Uploads segment documents to AWS X-Ray. The X-Ray SDK generates segment
         * documents and sends them to the X-Ray daemon, which uploads them in batches. A
         * segment document can be a completed segment, an in-progress segment, or an array
         * of subsegments.</p> <p>Segments must include the following fields. For the full
         * segment document schema, see <a
         * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-api-segmentdocuments.html">AWS
         * X-Ray Segment Documents</a> in the <i>AWS X-Ray Developer Guide</i>.</p> <p
         * class="title"> <b>Required Segment Document Fields</b> </p> <ul> <li> <p>
         * <code>name</code> - The name of the service that handled the request.</p> </li>
         * <li> <p> <code>id</code> - A 64-bit identifier for the segment, unique among
         * segments in the same trace, in 16 hexadecimal digits.</p> </li> <li> <p>
         * <code>trace_id</code> - A unique identifier that connects all segments and
         * subsegments originating from a single client request.</p> </li> <li> <p>
         * <code>start_time</code> - Time the segment or subsegment was created, in
         * floating point seconds in epoch time, accurate to milliseconds. For example,
         * <code>1480615200.010</code> or <code>1.480615200010E9</code>.</p> </li> <li> <p>
         * <code>end_time</code> - Time the segment or subsegment was closed. For example,
         * <code>1480615200.090</code> or <code>1.480615200090E9</code>. Specify either an
         * <code>end_time</code> or <code>in_progress</code>.</p> </li> <li> <p>
         * <code>in_progress</code> - Set to <code>true</code> instead of specifying an
         * <code>end_time</code> to record that a segment has been started, but is not
         * complete. Send an in progress segment when your application receives a request
         * that will take a long time to serve, to trace the fact that the request was
         * received. When the response is sent, send the complete segment to overwrite the
         * in-progress segment.</p> </li> </ul> <p>A <code>trace_id</code> consists of
         * three numbers separated by hyphens. For example,
         * 1-58406520-a006649127e371903a2de979. This includes:</p> <p class="title">
         * <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
         * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
         * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
         * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
         * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
         * unique, in 24 hexadecimal digits.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutTraceSegments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutTraceSegmentsAsync(const Model::PutTraceSegmentsRequest& request, const PutTraceSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a group resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates a group resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates a group resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a sampling rule's configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UpdateSamplingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSamplingRuleOutcome UpdateSamplingRule(const Model::UpdateSamplingRuleRequest& request) const;

        /**
         * <p>Modifies a sampling rule's configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UpdateSamplingRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSamplingRuleOutcomeCallable UpdateSamplingRuleCallable(const Model::UpdateSamplingRuleRequest& request) const;

        /**
         * <p>Modifies a sampling rule's configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UpdateSamplingRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSamplingRuleAsync(const Model::UpdateSamplingRuleRequest& request, const UpdateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchGetTracesAsyncHelper(const Model::BatchGetTracesRequest& request, const BatchGetTracesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSamplingRuleAsyncHelper(const Model::CreateSamplingRuleRequest& request, const CreateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSamplingRuleAsyncHelper(const Model::DeleteSamplingRuleRequest& request, const DeleteSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEncryptionConfigAsyncHelper(const Model::GetEncryptionConfigRequest& request, const GetEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupAsyncHelper(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupsAsyncHelper(const Model::GetGroupsRequest& request, const GetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSamplingRulesAsyncHelper(const Model::GetSamplingRulesRequest& request, const GetSamplingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSamplingStatisticSummariesAsyncHelper(const Model::GetSamplingStatisticSummariesRequest& request, const GetSamplingStatisticSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSamplingTargetsAsyncHelper(const Model::GetSamplingTargetsRequest& request, const GetSamplingTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceGraphAsyncHelper(const Model::GetServiceGraphRequest& request, const GetServiceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTimeSeriesServiceStatisticsAsyncHelper(const Model::GetTimeSeriesServiceStatisticsRequest& request, const GetTimeSeriesServiceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTraceGraphAsyncHelper(const Model::GetTraceGraphRequest& request, const GetTraceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTraceSummariesAsyncHelper(const Model::GetTraceSummariesRequest& request, const GetTraceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEncryptionConfigAsyncHelper(const Model::PutEncryptionConfigRequest& request, const PutEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutTelemetryRecordsAsyncHelper(const Model::PutTelemetryRecordsRequest& request, const PutTelemetryRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutTraceSegmentsAsyncHelper(const Model::PutTraceSegmentsRequest& request, const PutTraceSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSamplingRuleAsyncHelper(const Model::UpdateSamplingRuleRequest& request, const UpdateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace XRay
} // namespace Aws
