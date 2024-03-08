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
    AWS_CLOUDTRAIL_API PutInsightSelectorsResult();
    AWS_CLOUDTRAIL_API PutInsightSelectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API PutInsightSelectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to change or add
     * Insights selectors.</p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to change or add
     * Insights selectors.</p>
     */
    inline void SetTrailARN(const Aws::String& value) { m_trailARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to change or add
     * Insights selectors.</p>
     */
    inline void SetTrailARN(Aws::String&& value) { m_trailARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to change or add
     * Insights selectors.</p>
     */
    inline void SetTrailARN(const char* value) { m_trailARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to change or add
     * Insights selectors.</p>
     */
    inline PutInsightSelectorsResult& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to change or add
     * Insights selectors.</p>
     */
    inline PutInsightSelectorsResult& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a trail for which you want to change or add
     * Insights selectors.</p>
     */
    inline PutInsightSelectorsResult& WithTrailARN(const char* value) { SetTrailARN(value); return *this;}


    /**
     * <p>A JSON string that contains the Insights event types that you want to log on
     * a trail or event data store. The valid Insights types are
     * <code>ApiErrorRateInsight</code> and <code>ApiCallRateInsight</code>.</p>
     */
    inline const Aws::Vector<InsightSelector>& GetInsightSelectors() const{ return m_insightSelectors; }

    /**
     * <p>A JSON string that contains the Insights event types that you want to log on
     * a trail or event data store. The valid Insights types are
     * <code>ApiErrorRateInsight</code> and <code>ApiCallRateInsight</code>.</p>
     */
    inline void SetInsightSelectors(const Aws::Vector<InsightSelector>& value) { m_insightSelectors = value; }

    /**
     * <p>A JSON string that contains the Insights event types that you want to log on
     * a trail or event data store. The valid Insights types are
     * <code>ApiErrorRateInsight</code> and <code>ApiCallRateInsight</code>.</p>
     */
    inline void SetInsightSelectors(Aws::Vector<InsightSelector>&& value) { m_insightSelectors = std::move(value); }

    /**
     * <p>A JSON string that contains the Insights event types that you want to log on
     * a trail or event data store. The valid Insights types are
     * <code>ApiErrorRateInsight</code> and <code>ApiCallRateInsight</code>.</p>
     */
    inline PutInsightSelectorsResult& WithInsightSelectors(const Aws::Vector<InsightSelector>& value) { SetInsightSelectors(value); return *this;}

    /**
     * <p>A JSON string that contains the Insights event types that you want to log on
     * a trail or event data store. The valid Insights types are
     * <code>ApiErrorRateInsight</code> and <code>ApiCallRateInsight</code>.</p>
     */
    inline PutInsightSelectorsResult& WithInsightSelectors(Aws::Vector<InsightSelector>&& value) { SetInsightSelectors(std::move(value)); return *this;}

    /**
     * <p>A JSON string that contains the Insights event types that you want to log on
     * a trail or event data store. The valid Insights types are
     * <code>ApiErrorRateInsight</code> and <code>ApiCallRateInsight</code>.</p>
     */
    inline PutInsightSelectorsResult& AddInsightSelectors(const InsightSelector& value) { m_insightSelectors.push_back(value); return *this; }

    /**
     * <p>A JSON string that contains the Insights event types that you want to log on
     * a trail or event data store. The valid Insights types are
     * <code>ApiErrorRateInsight</code> and <code>ApiCallRateInsight</code>.</p>
     */
    inline PutInsightSelectorsResult& AddInsightSelectors(InsightSelector&& value) { m_insightSelectors.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the source event data store for which you
     * want to change or add Insights selectors.</p>
     */
    inline const Aws::String& GetEventDataStoreArn() const{ return m_eventDataStoreArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source event data store for which you
     * want to change or add Insights selectors.</p>
     */
    inline void SetEventDataStoreArn(const Aws::String& value) { m_eventDataStoreArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source event data store for which you
     * want to change or add Insights selectors.</p>
     */
    inline void SetEventDataStoreArn(Aws::String&& value) { m_eventDataStoreArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source event data store for which you
     * want to change or add Insights selectors.</p>
     */
    inline void SetEventDataStoreArn(const char* value) { m_eventDataStoreArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source event data store for which you
     * want to change or add Insights selectors.</p>
     */
    inline PutInsightSelectorsResult& WithEventDataStoreArn(const Aws::String& value) { SetEventDataStoreArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source event data store for which you
     * want to change or add Insights selectors.</p>
     */
    inline PutInsightSelectorsResult& WithEventDataStoreArn(Aws::String&& value) { SetEventDataStoreArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source event data store for which you
     * want to change or add Insights selectors.</p>
     */
    inline PutInsightSelectorsResult& WithEventDataStoreArn(const char* value) { SetEventDataStoreArn(value); return *this;}


    /**
     * <p> The ARN of the destination event data store that logs Insights events. </p>
     */
    inline const Aws::String& GetInsightsDestination() const{ return m_insightsDestination; }

    /**
     * <p> The ARN of the destination event data store that logs Insights events. </p>
     */
    inline void SetInsightsDestination(const Aws::String& value) { m_insightsDestination = value; }

    /**
     * <p> The ARN of the destination event data store that logs Insights events. </p>
     */
    inline void SetInsightsDestination(Aws::String&& value) { m_insightsDestination = std::move(value); }

    /**
     * <p> The ARN of the destination event data store that logs Insights events. </p>
     */
    inline void SetInsightsDestination(const char* value) { m_insightsDestination.assign(value); }

    /**
     * <p> The ARN of the destination event data store that logs Insights events. </p>
     */
    inline PutInsightSelectorsResult& WithInsightsDestination(const Aws::String& value) { SetInsightsDestination(value); return *this;}

    /**
     * <p> The ARN of the destination event data store that logs Insights events. </p>
     */
    inline PutInsightSelectorsResult& WithInsightsDestination(Aws::String&& value) { SetInsightsDestination(std::move(value)); return *this;}

    /**
     * <p> The ARN of the destination event data store that logs Insights events. </p>
     */
    inline PutInsightSelectorsResult& WithInsightsDestination(const char* value) { SetInsightsDestination(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutInsightSelectorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutInsightSelectorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutInsightSelectorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_trailARN;

    Aws::Vector<InsightSelector> m_insightSelectors;

    Aws::String m_eventDataStoreArn;

    Aws::String m_insightsDestination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
