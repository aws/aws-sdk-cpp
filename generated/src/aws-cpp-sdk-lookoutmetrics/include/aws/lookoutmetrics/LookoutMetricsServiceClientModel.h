/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/lookoutmetrics/LookoutMetricsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/lookoutmetrics/LookoutMetricsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LookoutMetricsClient header */
#include <aws/lookoutmetrics/model/ActivateAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/BackTestAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/CreateAlertResult.h>
#include <aws/lookoutmetrics/model/CreateAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/CreateMetricSetResult.h>
#include <aws/lookoutmetrics/model/DeactivateAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/DeleteAlertResult.h>
#include <aws/lookoutmetrics/model/DeleteAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/DescribeAlertResult.h>
#include <aws/lookoutmetrics/model/DescribeAnomalyDetectionExecutionsResult.h>
#include <aws/lookoutmetrics/model/DescribeAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/DescribeMetricSetResult.h>
#include <aws/lookoutmetrics/model/DetectMetricSetConfigResult.h>
#include <aws/lookoutmetrics/model/GetAnomalyGroupResult.h>
#include <aws/lookoutmetrics/model/GetDataQualityMetricsResult.h>
#include <aws/lookoutmetrics/model/GetFeedbackResult.h>
#include <aws/lookoutmetrics/model/GetSampleDataResult.h>
#include <aws/lookoutmetrics/model/ListAlertsResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyDetectorsResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupRelatedMetricsResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupSummariesResult.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupTimeSeriesResult.h>
#include <aws/lookoutmetrics/model/ListMetricSetsResult.h>
#include <aws/lookoutmetrics/model/ListTagsForResourceResult.h>
#include <aws/lookoutmetrics/model/PutFeedbackResult.h>
#include <aws/lookoutmetrics/model/TagResourceResult.h>
#include <aws/lookoutmetrics/model/UntagResourceResult.h>
#include <aws/lookoutmetrics/model/UpdateAlertResult.h>
#include <aws/lookoutmetrics/model/UpdateAnomalyDetectorResult.h>
#include <aws/lookoutmetrics/model/UpdateMetricSetResult.h>
/* End of service model headers required in LookoutMetricsClient header */

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

  namespace LookoutMetrics
  {
    using LookoutMetricsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LookoutMetricsEndpointProviderBase = Aws::LookoutMetrics::Endpoint::LookoutMetricsEndpointProviderBase;
    using LookoutMetricsEndpointProvider = Aws::LookoutMetrics::Endpoint::LookoutMetricsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LookoutMetricsClient header */
      class ActivateAnomalyDetectorRequest;
      class BackTestAnomalyDetectorRequest;
      class CreateAlertRequest;
      class CreateAnomalyDetectorRequest;
      class CreateMetricSetRequest;
      class DeactivateAnomalyDetectorRequest;
      class DeleteAlertRequest;
      class DeleteAnomalyDetectorRequest;
      class DescribeAlertRequest;
      class DescribeAnomalyDetectionExecutionsRequest;
      class DescribeAnomalyDetectorRequest;
      class DescribeMetricSetRequest;
      class DetectMetricSetConfigRequest;
      class GetAnomalyGroupRequest;
      class GetDataQualityMetricsRequest;
      class GetFeedbackRequest;
      class GetSampleDataRequest;
      class ListAlertsRequest;
      class ListAnomalyDetectorsRequest;
      class ListAnomalyGroupRelatedMetricsRequest;
      class ListAnomalyGroupSummariesRequest;
      class ListAnomalyGroupTimeSeriesRequest;
      class ListMetricSetsRequest;
      class ListTagsForResourceRequest;
      class PutFeedbackRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAlertRequest;
      class UpdateAnomalyDetectorRequest;
      class UpdateMetricSetRequest;
      /* End of service model forward declarations required in LookoutMetricsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ActivateAnomalyDetectorResult, LookoutMetricsError> ActivateAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<BackTestAnomalyDetectorResult, LookoutMetricsError> BackTestAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<CreateAlertResult, LookoutMetricsError> CreateAlertOutcome;
      typedef Aws::Utils::Outcome<CreateAnomalyDetectorResult, LookoutMetricsError> CreateAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<CreateMetricSetResult, LookoutMetricsError> CreateMetricSetOutcome;
      typedef Aws::Utils::Outcome<DeactivateAnomalyDetectorResult, LookoutMetricsError> DeactivateAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<DeleteAlertResult, LookoutMetricsError> DeleteAlertOutcome;
      typedef Aws::Utils::Outcome<DeleteAnomalyDetectorResult, LookoutMetricsError> DeleteAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<DescribeAlertResult, LookoutMetricsError> DescribeAlertOutcome;
      typedef Aws::Utils::Outcome<DescribeAnomalyDetectionExecutionsResult, LookoutMetricsError> DescribeAnomalyDetectionExecutionsOutcome;
      typedef Aws::Utils::Outcome<DescribeAnomalyDetectorResult, LookoutMetricsError> DescribeAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<DescribeMetricSetResult, LookoutMetricsError> DescribeMetricSetOutcome;
      typedef Aws::Utils::Outcome<DetectMetricSetConfigResult, LookoutMetricsError> DetectMetricSetConfigOutcome;
      typedef Aws::Utils::Outcome<GetAnomalyGroupResult, LookoutMetricsError> GetAnomalyGroupOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityMetricsResult, LookoutMetricsError> GetDataQualityMetricsOutcome;
      typedef Aws::Utils::Outcome<GetFeedbackResult, LookoutMetricsError> GetFeedbackOutcome;
      typedef Aws::Utils::Outcome<GetSampleDataResult, LookoutMetricsError> GetSampleDataOutcome;
      typedef Aws::Utils::Outcome<ListAlertsResult, LookoutMetricsError> ListAlertsOutcome;
      typedef Aws::Utils::Outcome<ListAnomalyDetectorsResult, LookoutMetricsError> ListAnomalyDetectorsOutcome;
      typedef Aws::Utils::Outcome<ListAnomalyGroupRelatedMetricsResult, LookoutMetricsError> ListAnomalyGroupRelatedMetricsOutcome;
      typedef Aws::Utils::Outcome<ListAnomalyGroupSummariesResult, LookoutMetricsError> ListAnomalyGroupSummariesOutcome;
      typedef Aws::Utils::Outcome<ListAnomalyGroupTimeSeriesResult, LookoutMetricsError> ListAnomalyGroupTimeSeriesOutcome;
      typedef Aws::Utils::Outcome<ListMetricSetsResult, LookoutMetricsError> ListMetricSetsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, LookoutMetricsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutFeedbackResult, LookoutMetricsError> PutFeedbackOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, LookoutMetricsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, LookoutMetricsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAlertResult, LookoutMetricsError> UpdateAlertOutcome;
      typedef Aws::Utils::Outcome<UpdateAnomalyDetectorResult, LookoutMetricsError> UpdateAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<UpdateMetricSetResult, LookoutMetricsError> UpdateMetricSetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ActivateAnomalyDetectorOutcome> ActivateAnomalyDetectorOutcomeCallable;
      typedef std::future<BackTestAnomalyDetectorOutcome> BackTestAnomalyDetectorOutcomeCallable;
      typedef std::future<CreateAlertOutcome> CreateAlertOutcomeCallable;
      typedef std::future<CreateAnomalyDetectorOutcome> CreateAnomalyDetectorOutcomeCallable;
      typedef std::future<CreateMetricSetOutcome> CreateMetricSetOutcomeCallable;
      typedef std::future<DeactivateAnomalyDetectorOutcome> DeactivateAnomalyDetectorOutcomeCallable;
      typedef std::future<DeleteAlertOutcome> DeleteAlertOutcomeCallable;
      typedef std::future<DeleteAnomalyDetectorOutcome> DeleteAnomalyDetectorOutcomeCallable;
      typedef std::future<DescribeAlertOutcome> DescribeAlertOutcomeCallable;
      typedef std::future<DescribeAnomalyDetectionExecutionsOutcome> DescribeAnomalyDetectionExecutionsOutcomeCallable;
      typedef std::future<DescribeAnomalyDetectorOutcome> DescribeAnomalyDetectorOutcomeCallable;
      typedef std::future<DescribeMetricSetOutcome> DescribeMetricSetOutcomeCallable;
      typedef std::future<DetectMetricSetConfigOutcome> DetectMetricSetConfigOutcomeCallable;
      typedef std::future<GetAnomalyGroupOutcome> GetAnomalyGroupOutcomeCallable;
      typedef std::future<GetDataQualityMetricsOutcome> GetDataQualityMetricsOutcomeCallable;
      typedef std::future<GetFeedbackOutcome> GetFeedbackOutcomeCallable;
      typedef std::future<GetSampleDataOutcome> GetSampleDataOutcomeCallable;
      typedef std::future<ListAlertsOutcome> ListAlertsOutcomeCallable;
      typedef std::future<ListAnomalyDetectorsOutcome> ListAnomalyDetectorsOutcomeCallable;
      typedef std::future<ListAnomalyGroupRelatedMetricsOutcome> ListAnomalyGroupRelatedMetricsOutcomeCallable;
      typedef std::future<ListAnomalyGroupSummariesOutcome> ListAnomalyGroupSummariesOutcomeCallable;
      typedef std::future<ListAnomalyGroupTimeSeriesOutcome> ListAnomalyGroupTimeSeriesOutcomeCallable;
      typedef std::future<ListMetricSetsOutcome> ListMetricSetsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutFeedbackOutcome> PutFeedbackOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAlertOutcome> UpdateAlertOutcomeCallable;
      typedef std::future<UpdateAnomalyDetectorOutcome> UpdateAnomalyDetectorOutcomeCallable;
      typedef std::future<UpdateMetricSetOutcome> UpdateMetricSetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LookoutMetricsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LookoutMetricsClient*, const Model::ActivateAnomalyDetectorRequest&, const Model::ActivateAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::BackTestAnomalyDetectorRequest&, const Model::BackTestAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BackTestAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::CreateAlertRequest&, const Model::CreateAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAlertResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::CreateAnomalyDetectorRequest&, const Model::CreateAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::CreateMetricSetRequest&, const Model::CreateMetricSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMetricSetResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DeactivateAnomalyDetectorRequest&, const Model::DeactivateAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DeleteAlertRequest&, const Model::DeleteAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlertResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DeleteAnomalyDetectorRequest&, const Model::DeleteAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeAlertRequest&, const Model::DescribeAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlertResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeAnomalyDetectionExecutionsRequest&, const Model::DescribeAnomalyDetectionExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyDetectionExecutionsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeAnomalyDetectorRequest&, const Model::DescribeAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DescribeMetricSetRequest&, const Model::DescribeMetricSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetricSetResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::DetectMetricSetConfigRequest&, const Model::DetectMetricSetConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectMetricSetConfigResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::GetAnomalyGroupRequest&, const Model::GetAnomalyGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnomalyGroupResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::GetDataQualityMetricsRequest&, const Model::GetDataQualityMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityMetricsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::GetFeedbackRequest&, const Model::GetFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFeedbackResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::GetSampleDataRequest&, const Model::GetSampleDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSampleDataResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAlertsRequest&, const Model::ListAlertsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlertsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyDetectorsRequest&, const Model::ListAnomalyDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyDetectorsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyGroupRelatedMetricsRequest&, const Model::ListAnomalyGroupRelatedMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyGroupRelatedMetricsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyGroupSummariesRequest&, const Model::ListAnomalyGroupSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyGroupSummariesResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListAnomalyGroupTimeSeriesRequest&, const Model::ListAnomalyGroupTimeSeriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomalyGroupTimeSeriesResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListMetricSetsRequest&, const Model::ListMetricSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricSetsResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::PutFeedbackRequest&, const Model::PutFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFeedbackResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::UpdateAlertRequest&, const Model::UpdateAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAlertResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::UpdateAnomalyDetectorRequest&, const Model::UpdateAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const LookoutMetricsClient*, const Model::UpdateMetricSetRequest&, const Model::UpdateMetricSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMetricSetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LookoutMetrics
} // namespace Aws
