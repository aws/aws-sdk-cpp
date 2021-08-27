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
  class AWS_CLOUDTRAIL_API PutInsightSelectorsRequest : public CloudTrailRequest
  {
  public:
    PutInsightSelectorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInsightSelectors"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p>
     */
    inline const Aws::String& GetTrailName() const{ return m_trailName; }

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p>
     */
    inline bool TrailNameHasBeenSet() const { return m_trailNameHasBeenSet; }

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p>
     */
    inline void SetTrailName(const Aws::String& value) { m_trailNameHasBeenSet = true; m_trailName = value; }

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p>
     */
    inline void SetTrailName(Aws::String&& value) { m_trailNameHasBeenSet = true; m_trailName = std::move(value); }

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p>
     */
    inline void SetTrailName(const char* value) { m_trailNameHasBeenSet = true; m_trailName.assign(value); }

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p>
     */
    inline PutInsightSelectorsRequest& WithTrailName(const Aws::String& value) { SetTrailName(value); return *this;}

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p>
     */
    inline PutInsightSelectorsRequest& WithTrailName(Aws::String&& value) { SetTrailName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudTrail trail for which you want to change or add Insights
     * selectors.</p>
     */
    inline PutInsightSelectorsRequest& WithTrailName(const char* value) { SetTrailName(value); return *this;}


    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, only <code>ApiCallRateInsight</code> is supported as an insight
     * type.</p>
     */
    inline const Aws::Vector<InsightSelector>& GetInsightSelectors() const{ return m_insightSelectors; }

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, only <code>ApiCallRateInsight</code> is supported as an insight
     * type.</p>
     */
    inline bool InsightSelectorsHasBeenSet() const { return m_insightSelectorsHasBeenSet; }

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, only <code>ApiCallRateInsight</code> is supported as an insight
     * type.</p>
     */
    inline void SetInsightSelectors(const Aws::Vector<InsightSelector>& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors = value; }

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, only <code>ApiCallRateInsight</code> is supported as an insight
     * type.</p>
     */
    inline void SetInsightSelectors(Aws::Vector<InsightSelector>&& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors = std::move(value); }

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, only <code>ApiCallRateInsight</code> is supported as an insight
     * type.</p>
     */
    inline PutInsightSelectorsRequest& WithInsightSelectors(const Aws::Vector<InsightSelector>& value) { SetInsightSelectors(value); return *this;}

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, only <code>ApiCallRateInsight</code> is supported as an insight
     * type.</p>
     */
    inline PutInsightSelectorsRequest& WithInsightSelectors(Aws::Vector<InsightSelector>&& value) { SetInsightSelectors(std::move(value)); return *this;}

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, only <code>ApiCallRateInsight</code> is supported as an insight
     * type.</p>
     */
    inline PutInsightSelectorsRequest& AddInsightSelectors(const InsightSelector& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors.push_back(value); return *this; }

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, only <code>ApiCallRateInsight</code> is supported as an insight
     * type.</p>
     */
    inline PutInsightSelectorsRequest& AddInsightSelectors(InsightSelector&& value) { m_insightSelectorsHasBeenSet = true; m_insightSelectors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trailName;
    bool m_trailNameHasBeenSet;

    Aws::Vector<InsightSelector> m_insightSelectors;
    bool m_insightSelectorsHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
