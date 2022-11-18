/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/xray/XRayServiceClientModel.h>
#include <aws/xray/XRayLegacyAsyncMacros.h>

namespace Aws
{
namespace XRay
{
  /**
   * <p>Amazon Web Services X-Ray provides APIs for managing debug traces and
   * retrieving service maps and other data created by processing those traces.</p>
   */
  class AWS_XRAY_API XRayClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        XRayClient(const Aws::XRay::XRayClientConfiguration& clientConfiguration = Aws::XRay::XRayClientConfiguration(),
                   std::shared_ptr<XRayEndpointProviderBase> endpointProvider = Aws::MakeShared<XRayEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        XRayClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<XRayEndpointProviderBase> endpointProvider = Aws::MakeShared<XRayEndpointProvider>(ALLOCATION_TAG),
                   const Aws::XRay::XRayClientConfiguration& clientConfiguration = Aws::XRay::XRayClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        XRayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<XRayEndpointProviderBase> endpointProvider = Aws::MakeShared<XRayEndpointProvider>(ALLOCATION_TAG),
                   const Aws::XRay::XRayClientConfiguration& clientConfiguration = Aws::XRay::XRayClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        XRayClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        XRayClient(const Aws::Auth::AWSCredentials& credentials,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        XRayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~XRayClient();


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
         * <p>Retrieves a list of traces specified by ID. Each trace is a collection of
         * segment documents that originates from a single request. Use
         * <code>GetTraceSummaries</code> to get a list of trace IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/BatchGetTraces">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetTracesOutcome BatchGetTraces(const Model::BatchGetTracesRequest& request) const;


        /**
         * <p>Creates a group resource with a name and a filter expression. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;


        /**
         * <p>Creates a rule to control sampling behavior for instrumented applications.
         * Services retrieve rules with <a
         * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingRules.html">GetSamplingRules</a>,
         * and evaluate each rule in ascending order of <i>priority</i> for each request.
         * If a rule matches, the service records a trace, borrowing it from the reservoir
         * size. After 10 seconds, the service reports back to X-Ray with <a
         * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingTargets.html">GetSamplingTargets</a>
         * to get updated versions of each in-use rule. The updated rule contains a trace
         * quota that the service can use instead of borrowing from the
         * reservoir.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CreateSamplingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSamplingRuleOutcome CreateSamplingRule(const Model::CreateSamplingRuleRequest& request) const;


        /**
         * <p>Deletes a group resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;


        /**
         * <p>Deletes a resource policy from the target Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


        /**
         * <p>Deletes a sampling rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteSamplingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSamplingRuleOutcome DeleteSamplingRule(const Model::DeleteSamplingRuleRequest& request) const;


        /**
         * <p>Retrieves the current encryption configuration for X-Ray data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetEncryptionConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEncryptionConfigOutcome GetEncryptionConfig(const Model::GetEncryptionConfigRequest& request) const;


        /**
         * <p>Retrieves group resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;


        /**
         * <p>Retrieves all active group details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetGroups">AWS API
         * Reference</a></p>
         */
        virtual Model::GetGroupsOutcome GetGroups(const Model::GetGroupsRequest& request) const;


        /**
         * <p>Retrieves the summary information of an insight. This includes impact to
         * clients and root cause services, the top anomalous services, the category, the
         * state of the insight, and the start and end time of the insight.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetInsight">AWS API
         * Reference</a></p>
         */
        virtual Model::GetInsightOutcome GetInsight(const Model::GetInsightRequest& request) const;


        /**
         * <p>X-Ray reevaluates insights periodically until they're resolved, and records
         * each intermediate state as an event. You can review an insight's events in the
         * Impact Timeline on the Inspect page in the X-Ray console.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetInsightEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightEventsOutcome GetInsightEvents(const Model::GetInsightEventsRequest& request) const;


        /**
         * <p>Retrieves a service graph structure filtered by the specified insight. The
         * service graph is limited to only structural information. For a complete service
         * graph, use this API with the GetServiceGraph API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetInsightImpactGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightImpactGraphOutcome GetInsightImpactGraph(const Model::GetInsightImpactGraphRequest& request) const;


        /**
         * <p>Retrieves the summaries of all insights in the specified group matching the
         * provided filter values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetInsightSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightSummariesOutcome GetInsightSummaries(const Model::GetInsightSummariesRequest& request) const;


        /**
         * <p>Retrieves all sampling rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingRules">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSamplingRulesOutcome GetSamplingRules(const Model::GetSamplingRulesRequest& request) const;


        /**
         * <p>Retrieves information about recent sampling results for all sampling
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingStatisticSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSamplingStatisticSummariesOutcome GetSamplingStatisticSummaries(const Model::GetSamplingStatisticSummariesRequest& request) const;


        /**
         * <p>Requests a sampling quota for rules that the service is using to sample
         * requests. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSamplingTargetsOutcome GetSamplingTargets(const Model::GetSamplingTargetsRequest& request) const;


        /**
         * <p>Retrieves a document that describes services that process incoming requests,
         * and downstream services that they call as a result. Root services process
         * incoming requests and make calls to downstream services. Root services are
         * applications that use the <a
         * href="https://docs.aws.amazon.com/xray/index.html">Amazon Web Services X-Ray
         * SDK</a>. Downstream services can be other applications, Amazon Web Services
         * resources, HTTP web APIs, or SQL databases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetServiceGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceGraphOutcome GetServiceGraph(const Model::GetServiceGraphRequest& request) const;


        /**
         * <p>Get an aggregation of service statistics defined by a specific time
         * range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTimeSeriesServiceStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTimeSeriesServiceStatisticsOutcome GetTimeSeriesServiceStatistics(const Model::GetTimeSeriesServiceStatisticsRequest& request) const;


        /**
         * <p>Retrieves a service graph for one or more specific trace IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTraceGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTraceGraphOutcome GetTraceGraph(const Model::GetTraceGraphRequest& request) const;


        /**
         * <p>Retrieves IDs and annotations for traces available for a specified time frame
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
         * Filter Expressions</a> in the <i>Amazon Web Services X-Ray Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTraceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTraceSummariesOutcome GetTraceSummaries(const Model::GetTraceSummariesRequest& request) const;


        /**
         * <p>Returns the list of resource policies in the target Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ListResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcePoliciesOutcome ListResourcePolicies(const Model::ListResourcePoliciesRequest& request) const;


        /**
         * <p>Returns a list of tags that are applied to the specified Amazon Web Services
         * X-Ray group or sampling rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Updates the encryption configuration for X-Ray data.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutEncryptionConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEncryptionConfigOutcome PutEncryptionConfig(const Model::PutEncryptionConfigRequest& request) const;


        /**
         * <p> Sets the resource policy to grant one or more Amazon Web Services services
         * and accounts permissions to access X-Ray. Each resource policy will be
         * associated with a specific Amazon Web Services account. Each Amazon Web Services
         * account can have a maximum of 5 resource policies, and each policy name must be
         * unique within that account. The maximum size of each resource policy is 5KB.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;


        /**
         * <p>Used by the Amazon Web Services X-Ray daemon to upload
         * telemetry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutTelemetryRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTelemetryRecordsOutcome PutTelemetryRecords(const Model::PutTelemetryRecordsRequest& request) const;


        /**
         * <p>Uploads segment documents to Amazon Web Services X-Ray. The <a
         * href="https://docs.aws.amazon.com/xray/index.html">X-Ray SDK</a> generates
         * segment documents and sends them to the X-Ray daemon, which uploads them in
         * batches. A segment document can be a completed segment, an in-progress segment,
         * or an array of subsegments.</p> <p>Segments must include the following fields.
         * For the full segment document schema, see <a
         * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-api-segmentdocuments.html">Amazon
         * Web Services X-Ray Segment Documents</a> in the <i>Amazon Web Services X-Ray
         * Developer Guide</i>.</p> <p class="title"> <b>Required segment document
         * fields</b> </p> <ul> <li> <p> <code>name</code> - The name of the service that
         * handled the request.</p> </li> <li> <p> <code>id</code> - A 64-bit identifier
         * for the segment, unique among segments in the same trace, in 16 hexadecimal
         * digits.</p> </li> <li> <p> <code>trace_id</code> - A unique identifier that
         * connects all segments and subsegments originating from a single client
         * request.</p> </li> <li> <p> <code>start_time</code> - Time the segment or
         * subsegment was created, in floating point seconds in epoch time, accurate to
         * milliseconds. For example, <code>1480615200.010</code> or
         * <code>1.480615200010E9</code>.</p> </li> <li> <p> <code>end_time</code> - Time
         * the segment or subsegment was closed. For example, <code>1480615200.090</code>
         * or <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
         * <code>in_progress</code>.</p> </li> <li> <p> <code>in_progress</code> - Set to
         * <code>true</code> instead of specifying an <code>end_time</code> to record that
         * a segment has been started, but is not complete. Send an in-progress segment
         * when your application receives a request that will take a long time to serve, to
         * trace that the request was received. When the response is sent, send the
         * complete segment to overwrite the in-progress segment.</p> </li> </ul> <p>A
         * <code>trace_id</code> consists of three numbers separated by hyphens. For
         * example, 1-58406520-a006649127e371903a2de979. This includes:</p> <p
         * class="title"> <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, for
         * instance, <code>1</code>.</p> </li> <li> <p>The time of the original request, in
         * Unix epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd,
         * 2016 PST in epoch time is <code>1480615200</code> seconds, or
         * <code>58406520</code> in hexadecimal.</p> </li> <li> <p>A 96-bit identifier for
         * the trace, globally unique, in 24 hexadecimal digits.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutTraceSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTraceSegmentsOutcome PutTraceSegments(const Model::PutTraceSegmentsRequest& request) const;


        /**
         * <p>Applies tags to an existing Amazon Web Services X-Ray group or sampling
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from an Amazon Web Services X-Ray group or sampling rule. You
         * cannot edit or delete system tags (those with an <code>aws:</code>
         * prefix).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates a group resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;


        /**
         * <p>Modifies a sampling rule's configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UpdateSamplingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSamplingRuleOutcome UpdateSamplingRule(const Model::UpdateSamplingRuleRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<XRayEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const XRayClientConfiguration& clientConfiguration);

      XRayClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<XRayEndpointProviderBase> m_endpointProvider;
  };

} // namespace XRay
} // namespace Aws
