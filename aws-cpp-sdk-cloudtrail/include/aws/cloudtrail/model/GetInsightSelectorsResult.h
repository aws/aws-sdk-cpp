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
  class GetInsightSelectorsResult
  {
  public:
    AWS_CLOUDTRAIL_API GetInsightSelectorsResult();
    AWS_CLOUDTRAIL_API GetInsightSelectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetInsightSelectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to get Insights
     * selectors.</p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to get Insights
     * selectors.</p>
     */
    inline void SetTrailARN(const Aws::String& value) { m_trailARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to get Insights
     * selectors.</p>
     */
    inline void SetTrailARN(Aws::String&& value) { m_trailARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to get Insights
     * selectors.</p>
     */
    inline void SetTrailARN(const char* value) { m_trailARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to get Insights
     * selectors.</p>
     */
    inline GetInsightSelectorsResult& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to get Insights
     * selectors.</p>
     */
    inline GetInsightSelectorsResult& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to get Insights
     * selectors.</p>
     */
    inline GetInsightSelectorsResult& WithTrailARN(const char* value) { SetTrailARN(value); return *this;}


    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, <code>ApiErrorRateInsight</code> and
     * <code>ApiCallRateInsight</code> are supported as insight types.</p>
     */
    inline const Aws::Vector<InsightSelector>& GetInsightSelectors() const{ return m_insightSelectors; }

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, <code>ApiErrorRateInsight</code> and
     * <code>ApiCallRateInsight</code> are supported as insight types.</p>
     */
    inline void SetInsightSelectors(const Aws::Vector<InsightSelector>& value) { m_insightSelectors = value; }

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, <code>ApiErrorRateInsight</code> and
     * <code>ApiCallRateInsight</code> are supported as insight types.</p>
     */
    inline void SetInsightSelectors(Aws::Vector<InsightSelector>&& value) { m_insightSelectors = std::move(value); }

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, <code>ApiErrorRateInsight</code> and
     * <code>ApiCallRateInsight</code> are supported as insight types.</p>
     */
    inline GetInsightSelectorsResult& WithInsightSelectors(const Aws::Vector<InsightSelector>& value) { SetInsightSelectors(value); return *this;}

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, <code>ApiErrorRateInsight</code> and
     * <code>ApiCallRateInsight</code> are supported as insight types.</p>
     */
    inline GetInsightSelectorsResult& WithInsightSelectors(Aws::Vector<InsightSelector>&& value) { SetInsightSelectors(std::move(value)); return *this;}

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, <code>ApiErrorRateInsight</code> and
     * <code>ApiCallRateInsight</code> are supported as insight types.</p>
     */
    inline GetInsightSelectorsResult& AddInsightSelectors(const InsightSelector& value) { m_insightSelectors.push_back(value); return *this; }

    /**
     * <p>A JSON string that contains the insight types you want to log on a trail. In
     * this release, <code>ApiErrorRateInsight</code> and
     * <code>ApiCallRateInsight</code> are supported as insight types.</p>
     */
    inline GetInsightSelectorsResult& AddInsightSelectors(InsightSelector&& value) { m_insightSelectors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trailARN;

    Aws::Vector<InsightSelector> m_insightSelectors;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
