/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DimensionValueOperator.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListMetricValuesRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListMetricValuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMetricValues"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the thing for which security profile metric values are
     * returned.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing for which security profile metric values are
     * returned.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing for which security profile metric values are
     * returned.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing for which security profile metric values are
     * returned.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing for which security profile metric values are
     * returned.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing for which security profile metric values are
     * returned.</p>
     */
    inline ListMetricValuesRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing for which security profile metric values are
     * returned.</p>
     */
    inline ListMetricValuesRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing for which security profile metric values are
     * returned.</p>
     */
    inline ListMetricValuesRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The name of the security profile metric for which values are returned.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the security profile metric for which values are returned.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the security profile metric for which values are returned.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the security profile metric for which values are returned.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the security profile metric for which values are returned.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the security profile metric for which values are returned.</p>
     */
    inline ListMetricValuesRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the security profile metric for which values are returned.</p>
     */
    inline ListMetricValuesRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the security profile metric for which values are returned.</p>
     */
    inline ListMetricValuesRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The dimension name.</p>
     */
    inline const Aws::String& GetDimensionName() const{ return m_dimensionName; }

    /**
     * <p>The dimension name.</p>
     */
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }

    /**
     * <p>The dimension name.</p>
     */
    inline void SetDimensionName(const Aws::String& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = value; }

    /**
     * <p>The dimension name.</p>
     */
    inline void SetDimensionName(Aws::String&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::move(value); }

    /**
     * <p>The dimension name.</p>
     */
    inline void SetDimensionName(const char* value) { m_dimensionNameHasBeenSet = true; m_dimensionName.assign(value); }

    /**
     * <p>The dimension name.</p>
     */
    inline ListMetricValuesRequest& WithDimensionName(const Aws::String& value) { SetDimensionName(value); return *this;}

    /**
     * <p>The dimension name.</p>
     */
    inline ListMetricValuesRequest& WithDimensionName(Aws::String&& value) { SetDimensionName(std::move(value)); return *this;}

    /**
     * <p>The dimension name.</p>
     */
    inline ListMetricValuesRequest& WithDimensionName(const char* value) { SetDimensionName(value); return *this;}


    /**
     * <p>The dimension value operator.</p>
     */
    inline const DimensionValueOperator& GetDimensionValueOperator() const{ return m_dimensionValueOperator; }

    /**
     * <p>The dimension value operator.</p>
     */
    inline bool DimensionValueOperatorHasBeenSet() const { return m_dimensionValueOperatorHasBeenSet; }

    /**
     * <p>The dimension value operator.</p>
     */
    inline void SetDimensionValueOperator(const DimensionValueOperator& value) { m_dimensionValueOperatorHasBeenSet = true; m_dimensionValueOperator = value; }

    /**
     * <p>The dimension value operator.</p>
     */
    inline void SetDimensionValueOperator(DimensionValueOperator&& value) { m_dimensionValueOperatorHasBeenSet = true; m_dimensionValueOperator = std::move(value); }

    /**
     * <p>The dimension value operator.</p>
     */
    inline ListMetricValuesRequest& WithDimensionValueOperator(const DimensionValueOperator& value) { SetDimensionValueOperator(value); return *this;}

    /**
     * <p>The dimension value operator.</p>
     */
    inline ListMetricValuesRequest& WithDimensionValueOperator(DimensionValueOperator&& value) { SetDimensionValueOperator(std::move(value)); return *this;}


    /**
     * <p>The start of the time period for which metric values are returned.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time period for which metric values are returned.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time period for which metric values are returned.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time period for which metric values are returned.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time period for which metric values are returned.</p>
     */
    inline ListMetricValuesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time period for which metric values are returned.</p>
     */
    inline ListMetricValuesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time period for which metric values are returned.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time period for which metric values are returned.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time period for which metric values are returned.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time period for which metric values are returned.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time period for which metric values are returned.</p>
     */
    inline ListMetricValuesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time period for which metric values are returned.</p>
     */
    inline ListMetricValuesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline ListMetricValuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListMetricValuesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListMetricValuesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListMetricValuesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    DimensionValueOperator m_dimensionValueOperator;
    bool m_dimensionValueOperatorHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
