/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/InsightSelector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{
  class PutInsightSelectorsResult
  {
  public:
    AWS_CLOUDTRAIL_API PutInsightSelectorsResult() = default;
    AWS_CLOUDTRAIL_API PutInsightSelectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API PutInsightSelectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to change or add
     * Insights selectors.</p>
     */
    inline const Aws::String& GetTrailARN() const { return m_trailARN; }
    template<typename TrailARNT = Aws::String>
    void SetTrailARN(TrailARNT&& value) { m_trailARNHasBeenSet = true; m_trailARN = std::forward<TrailARNT>(value); }
    template<typename TrailARNT = Aws::String>
    PutInsightSelectorsResult& WithTrailARN(TrailARNT&& value) { SetTrailARN(std::forward<TrailARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string that contains the Insights event types that you want to log on
     * a trail or event data store. The valid Insights types are
     * <code>ApiErrorRateInsight</code> and <code>ApiCallRateInsight</code>.</p>
     */
    inline const Aws::Vector<InsightSelector>& GetInsightSelectors() const { return m_insightSelectors; }
    template<typename InsightSelectorsT = Aws::Vector<InsightSelector>>
    void SetInsightSelectors(InsightSelectorsT&& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors = std::forward<InsightSelectorsT>(value); }
    template<typename InsightSelectorsT = Aws::Vector<InsightSelector>>
    PutInsightSelectorsResult& WithInsightSelectors(InsightSelectorsT&& value) { SetInsightSelectors(std::forward<InsightSelectorsT>(value)); return *this;}
    template<typename InsightSelectorsT = InsightSelector>
    PutInsightSelectorsResult& AddInsightSelectors(InsightSelectorsT&& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors.emplace_back(std::forward<InsightSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source event data store for which you
     * want to change or add Insights selectors.</p>
     */
    inline const Aws::String& GetEventDataStoreArn() const { return m_eventDataStoreArn; }
    template<typename EventDataStoreArnT = Aws::String>
    void SetEventDataStoreArn(EventDataStoreArnT&& value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn = std::forward<EventDataStoreArnT>(value); }
    template<typename EventDataStoreArnT = Aws::String>
    PutInsightSelectorsResult& WithEventDataStoreArn(EventDataStoreArnT&& value) { SetEventDataStoreArn(std::forward<EventDataStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the destination event data store that logs Insights events. </p>
     */
    inline const Aws::String& GetInsightsDestination() const { return m_insightsDestination; }
    template<typename InsightsDestinationT = Aws::String>
    void SetInsightsDestination(InsightsDestinationT&& value) { m_insightsDestinationHasBeenSet = true; m_insightsDestination = std::forward<InsightsDestinationT>(value); }
    template<typename InsightsDestinationT = Aws::String>
    PutInsightSelectorsResult& WithInsightsDestination(InsightsDestinationT&& value) { SetInsightsDestination(std::forward<InsightsDestinationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutInsightSelectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trailARN;
    bool m_trailARNHasBeenSet = false;

    Aws::Vector<InsightSelector> m_insightSelectors;
    bool m_insightSelectorsHasBeenSet = false;

    Aws::String m_eventDataStoreArn;
    bool m_eventDataStoreArnHasBeenSet = false;

    Aws::String m_insightsDestination;
    bool m_insightsDestinationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
