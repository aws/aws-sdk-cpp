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
    AWS_CLOUDTRAIL_API PutInsightSelectorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInsightSelectors"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p> <p>You cannot use this parameter with the
     * <code>EventDataStore</code> and <code>InsightsDestination</code> parameters.</p>
     */
    inline const Aws::String& GetTrailName() const{ return m_trailName; }

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p> <p>You cannot use this parameter with the
     * <code>EventDataStore</code> and <code>InsightsDestination</code> parameters.</p>
     */
    inline bool TrailNameHasBeenSet() const { return m_trailNameHasBeenSet; }

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p> <p>You cannot use this parameter with the
     * <code>EventDataStore</code> and <code>InsightsDestination</code> parameters.</p>
     */
    inline void SetTrailName(const Aws::String& value) { m_trailNameHasBeenSet = true; m_trailName = value; }

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p> <p>You cannot use this parameter with the
     * <code>EventDataStore</code> and <code>InsightsDestination</code> parameters.</p>
     */
    inline void SetTrailName(Aws::String&& value) { m_trailNameHasBeenSet = true; m_trailName = std::move(value); }

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p> <p>You cannot use this parameter with the
     * <code>EventDataStore</code> and <code>InsightsDestination</code> parameters.</p>
     */
    inline void SetTrailName(const char* value) { m_trailNameHasBeenSet = true; m_trailName.assign(value); }

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p> <p>You cannot use this parameter with the
     * <code>EventDataStore</code> and <code>InsightsDestination</code> parameters.</p>
     */
    inline PutInsightSelectorsRequest& WithTrailName(const Aws::String& value) { SetTrailName(value); return *this;}

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p> <p>You cannot use this parameter with the
     * <code>EventDataStore</code> and <code>InsightsDestination</code> parameters.</p>
     */
    inline PutInsightSelectorsRequest& WithTrailName(Aws::String&& value) { SetTrailName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p> <p>You cannot use this parameter with the
     * <code>EventDataStore</code> and <code>InsightsDestination</code> parameters.</p>
     */
    inline PutInsightSelectorsRequest& WithTrailName(const char* value) { SetTrailName(value); return *this;}


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
    inline const Aws::Vector<InsightSelector>& GetInsightSelectors() const{ return m_insightSelectors; }

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
    inline bool InsightSelectorsHasBeenSet() const { return m_insightSelectorsHasBeenSet; }

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
    inline void SetInsightSelectors(const Aws::Vector<InsightSelector>& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors = value; }

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
    inline void SetInsightSelectors(Aws::Vector<InsightSelector>&& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors = std::move(value); }

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
    inline PutInsightSelectorsRequest& WithInsightSelectors(const Aws::Vector<InsightSelector>& value) { SetInsightSelectors(value); return *this;}

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
    inline PutInsightSelectorsRequest& WithInsightSelectors(Aws::Vector<InsightSelector>&& value) { SetInsightSelectors(std::move(value)); return *this;}

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
    inline PutInsightSelectorsRequest& AddInsightSelectors(const InsightSelector& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors.push_back(value); return *this; }

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
    inline PutInsightSelectorsRequest& AddInsightSelectors(InsightSelector&& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN (or ID suffix of the ARN) of the source event data store for which
     * you want to change or add Insights selectors. To enable Insights on an event
     * data store, you must provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters.</p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline const Aws::String& GetEventDataStore() const{ return m_eventDataStore; }

    /**
     * <p>The ARN (or ID suffix of the ARN) of the source event data store for which
     * you want to change or add Insights selectors. To enable Insights on an event
     * data store, you must provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters.</p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline bool EventDataStoreHasBeenSet() const { return m_eventDataStoreHasBeenSet; }

    /**
     * <p>The ARN (or ID suffix of the ARN) of the source event data store for which
     * you want to change or add Insights selectors. To enable Insights on an event
     * data store, you must provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters.</p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline void SetEventDataStore(const Aws::String& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = value; }

    /**
     * <p>The ARN (or ID suffix of the ARN) of the source event data store for which
     * you want to change or add Insights selectors. To enable Insights on an event
     * data store, you must provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters.</p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline void SetEventDataStore(Aws::String&& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = std::move(value); }

    /**
     * <p>The ARN (or ID suffix of the ARN) of the source event data store for which
     * you want to change or add Insights selectors. To enable Insights on an event
     * data store, you must provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters.</p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline void SetEventDataStore(const char* value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore.assign(value); }

    /**
     * <p>The ARN (or ID suffix of the ARN) of the source event data store for which
     * you want to change or add Insights selectors. To enable Insights on an event
     * data store, you must provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters.</p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline PutInsightSelectorsRequest& WithEventDataStore(const Aws::String& value) { SetEventDataStore(value); return *this;}

    /**
     * <p>The ARN (or ID suffix of the ARN) of the source event data store for which
     * you want to change or add Insights selectors. To enable Insights on an event
     * data store, you must provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters.</p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline PutInsightSelectorsRequest& WithEventDataStore(Aws::String&& value) { SetEventDataStore(std::move(value)); return *this;}

    /**
     * <p>The ARN (or ID suffix of the ARN) of the source event data store for which
     * you want to change or add Insights selectors. To enable Insights on an event
     * data store, you must provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters.</p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline PutInsightSelectorsRequest& WithEventDataStore(const char* value) { SetEventDataStore(value); return *this;}


    /**
     * <p> The ARN (or ID suffix of the ARN) of the destination event data store that
     * logs Insights events. To enable Insights on an event data store, you must
     * provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters. </p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline const Aws::String& GetInsightsDestination() const{ return m_insightsDestination; }

    /**
     * <p> The ARN (or ID suffix of the ARN) of the destination event data store that
     * logs Insights events. To enable Insights on an event data store, you must
     * provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters. </p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline bool InsightsDestinationHasBeenSet() const { return m_insightsDestinationHasBeenSet; }

    /**
     * <p> The ARN (or ID suffix of the ARN) of the destination event data store that
     * logs Insights events. To enable Insights on an event data store, you must
     * provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters. </p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline void SetInsightsDestination(const Aws::String& value) { m_insightsDestinationHasBeenSet = true; m_insightsDestination = value; }

    /**
     * <p> The ARN (or ID suffix of the ARN) of the destination event data store that
     * logs Insights events. To enable Insights on an event data store, you must
     * provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters. </p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline void SetInsightsDestination(Aws::String&& value) { m_insightsDestinationHasBeenSet = true; m_insightsDestination = std::move(value); }

    /**
     * <p> The ARN (or ID suffix of the ARN) of the destination event data store that
     * logs Insights events. To enable Insights on an event data store, you must
     * provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters. </p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline void SetInsightsDestination(const char* value) { m_insightsDestinationHasBeenSet = true; m_insightsDestination.assign(value); }

    /**
     * <p> The ARN (or ID suffix of the ARN) of the destination event data store that
     * logs Insights events. To enable Insights on an event data store, you must
     * provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters. </p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline PutInsightSelectorsRequest& WithInsightsDestination(const Aws::String& value) { SetInsightsDestination(value); return *this;}

    /**
     * <p> The ARN (or ID suffix of the ARN) of the destination event data store that
     * logs Insights events. To enable Insights on an event data store, you must
     * provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters. </p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline PutInsightSelectorsRequest& WithInsightsDestination(Aws::String&& value) { SetInsightsDestination(std::move(value)); return *this;}

    /**
     * <p> The ARN (or ID suffix of the ARN) of the destination event data store that
     * logs Insights events. To enable Insights on an event data store, you must
     * provide both the <code>EventDataStore</code> and
     * <code>InsightsDestination</code> parameters. </p> <p>You cannot use this
     * parameter with the <code>TrailName</code> parameter.</p>
     */
    inline PutInsightSelectorsRequest& WithInsightsDestination(const char* value) { SetInsightsDestination(value); return *this;}

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
