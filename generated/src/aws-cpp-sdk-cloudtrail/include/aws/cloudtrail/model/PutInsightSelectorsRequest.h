/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/InsightSelector.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class PutInsightSelectorsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API PutInsightSelectorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInsightSelectors"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p> <p>You cannot use this parameter with the
     * <code>EventDataStore</code> and <code>InsightsDestination</code> parameters.</p>
     */
    inline const Aws::String& GetTrailName() const { return m_trailName; }
    inline bool TrailNameHasBeenSet() const { return m_trailNameHasBeenSet; }
    template<typename TrailNameT = Aws::String>
    void SetTrailName(TrailNameT&& value) { m_trailNameHasBeenSet = true; m_trailName = std::forward<TrailNameT>(value); }
    template<typename TrailNameT = Aws::String>
    PutInsightSelectorsRequest& WithTrailName(TrailNameT&& value) { SetTrailName(std::forward<TrailNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string that contains the Insights types you want to log on a trail or
     * event data store. <code>ApiCallRateInsight</code> and
     * <code>ApiErrorRateInsight</code> are valid Insight types.</p> <p>The
     * <code>ApiCallRateInsight</code> Insights type analyzes write-only management API
     * calls that are aggregated per minute against a baseline API call volume.</p>
     * <p>The <code>ApiErrorRateInsight</code> Insights type analyzes management API
     * calls that result in error codes. The error is shown if the API call is
     * unsuccessful.</p>
     */
    inline const Aws::Vector<InsightSelector>& GetInsightSelectors() const { return m_insightSelectors; }
    inline bool InsightSelectorsHasBeenSet() const { return m_insightSelectorsHasBeenSet; }
    template<typename InsightSelectorsT = Aws::Vector<InsightSelector>>
    void SetInsightSelectors(InsightSelectorsT&& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors = std::forward<InsightSelectorsT>(value); }
    template<typename InsightSelectorsT = Aws::Vector<InsightSelector>>
    PutInsightSelectorsRequest& WithInsightSelectors(InsightSelectorsT&& value) { SetInsightSelectors(std::forward<InsightSelectorsT>(value)); return *this;}
    template<typename InsightSelectorsT = InsightSelector>
    PutInsightSelectorsRequest& AddInsightSelectors(InsightSelectorsT&& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors.emplace_back(std::forward<InsightSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN (or ID suffix of the ARN) of the source event data store for which
     * you want to change or add Insights selectors. To enable Insights on an event
     * data store, you must provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters.</p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline const Aws::String& GetEventDataStore() const { return m_eventDataStore; }
    inline bool EventDataStoreHasBeenSet() const { return m_eventDataStoreHasBeenSet; }
    template<typename EventDataStoreT = Aws::String>
    void SetEventDataStore(EventDataStoreT&& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = std::forward<EventDataStoreT>(value); }
    template<typename EventDataStoreT = Aws::String>
    PutInsightSelectorsRequest& WithEventDataStore(EventDataStoreT&& value) { SetEventDataStore(std::forward<EventDataStoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN (or ID suffix of the ARN) of the destination event data store that
     * logs Insights events. To enable Insights on an event data store, you must
     * provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters. </p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline const Aws::String& GetInsightsDestination() const { return m_insightsDestination; }
    inline bool InsightsDestinationHasBeenSet() const { return m_insightsDestinationHasBeenSet; }
    template<typename InsightsDestinationT = Aws::String>
    void SetInsightsDestination(InsightsDestinationT&& value) { m_insightsDestinationHasBeenSet = true; m_insightsDestination = std::forward<InsightsDestinationT>(value); }
    template<typename InsightsDestinationT = Aws::String>
    PutInsightSelectorsRequest& WithInsightsDestination(InsightsDestinationT&& value) { SetInsightsDestination(std::forward<InsightsDestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trailName;
    bool m_trailNameHasBeenSet = false;

    Aws::Vector<InsightSelector> m_insightSelectors;
    bool m_insightSelectorsHasBeenSet = false;

    Aws::String m_eventDataStore;
    bool m_eventDataStoreHasBeenSet = false;

    Aws::String m_insightsDestination;
    bool m_insightsDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
