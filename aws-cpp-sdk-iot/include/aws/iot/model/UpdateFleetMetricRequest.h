/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AggregationType.h>
#include <aws/iot/model/FleetMetricUnit.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateFleetMetricRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateFleetMetricRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleetMetric"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the fleet metric to update.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the fleet metric to update.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the fleet metric to update.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the fleet metric to update.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the fleet metric to update.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the fleet metric to update.</p>
     */
    inline UpdateFleetMetricRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the fleet metric to update.</p>
     */
    inline UpdateFleetMetricRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet metric to update.</p>
     */
    inline UpdateFleetMetricRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The search query string.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The search query string.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The search query string.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The search query string.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The search query string.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The search query string.</p>
     */
    inline UpdateFleetMetricRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The search query string.</p>
     */
    inline UpdateFleetMetricRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The search query string.</p>
     */
    inline UpdateFleetMetricRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The type of the aggregation query.</p>
     */
    inline const AggregationType& GetAggregationType() const{ return m_aggregationType; }

    /**
     * <p>The type of the aggregation query.</p>
     */
    inline bool AggregationTypeHasBeenSet() const { return m_aggregationTypeHasBeenSet; }

    /**
     * <p>The type of the aggregation query.</p>
     */
    inline void SetAggregationType(const AggregationType& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = value; }

    /**
     * <p>The type of the aggregation query.</p>
     */
    inline void SetAggregationType(AggregationType&& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = std::move(value); }

    /**
     * <p>The type of the aggregation query.</p>
     */
    inline UpdateFleetMetricRequest& WithAggregationType(const AggregationType& value) { SetAggregationType(value); return *this;}

    /**
     * <p>The type of the aggregation query.</p>
     */
    inline UpdateFleetMetricRequest& WithAggregationType(AggregationType&& value) { SetAggregationType(std::move(value)); return *this;}


    /**
     * <p>The time in seconds between fleet metric emissions. Range [60(1 min), 86400(1
     * day)] and must be multiple of 60.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The time in seconds between fleet metric emissions. Range [60(1 min), 86400(1
     * day)] and must be multiple of 60.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The time in seconds between fleet metric emissions. Range [60(1 min), 86400(1
     * day)] and must be multiple of 60.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The time in seconds between fleet metric emissions. Range [60(1 min), 86400(1
     * day)] and must be multiple of 60.</p>
     */
    inline UpdateFleetMetricRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The field to aggregate.</p>
     */
    inline const Aws::String& GetAggregationField() const{ return m_aggregationField; }

    /**
     * <p>The field to aggregate.</p>
     */
    inline bool AggregationFieldHasBeenSet() const { return m_aggregationFieldHasBeenSet; }

    /**
     * <p>The field to aggregate.</p>
     */
    inline void SetAggregationField(const Aws::String& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = value; }

    /**
     * <p>The field to aggregate.</p>
     */
    inline void SetAggregationField(Aws::String&& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = std::move(value); }

    /**
     * <p>The field to aggregate.</p>
     */
    inline void SetAggregationField(const char* value) { m_aggregationFieldHasBeenSet = true; m_aggregationField.assign(value); }

    /**
     * <p>The field to aggregate.</p>
     */
    inline UpdateFleetMetricRequest& WithAggregationField(const Aws::String& value) { SetAggregationField(value); return *this;}

    /**
     * <p>The field to aggregate.</p>
     */
    inline UpdateFleetMetricRequest& WithAggregationField(Aws::String&& value) { SetAggregationField(std::move(value)); return *this;}

    /**
     * <p>The field to aggregate.</p>
     */
    inline UpdateFleetMetricRequest& WithAggregationField(const char* value) { SetAggregationField(value); return *this;}


    /**
     * <p>The description of the fleet metric.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the fleet metric.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the fleet metric.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the fleet metric.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the fleet metric.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the fleet metric.</p>
     */
    inline UpdateFleetMetricRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the fleet metric.</p>
     */
    inline UpdateFleetMetricRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the fleet metric.</p>
     */
    inline UpdateFleetMetricRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version of the query.</p>
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }

    /**
     * <p>The version of the query.</p>
     */
    inline bool QueryVersionHasBeenSet() const { return m_queryVersionHasBeenSet; }

    /**
     * <p>The version of the query.</p>
     */
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersionHasBeenSet = true; m_queryVersion = value; }

    /**
     * <p>The version of the query.</p>
     */
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::move(value); }

    /**
     * <p>The version of the query.</p>
     */
    inline void SetQueryVersion(const char* value) { m_queryVersionHasBeenSet = true; m_queryVersion.assign(value); }

    /**
     * <p>The version of the query.</p>
     */
    inline UpdateFleetMetricRequest& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}

    /**
     * <p>The version of the query.</p>
     */
    inline UpdateFleetMetricRequest& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the query.</p>
     */
    inline UpdateFleetMetricRequest& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}


    /**
     * <p>The name of the index to search.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the index to search.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the index to search.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the index to search.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the index to search.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the index to search.</p>
     */
    inline UpdateFleetMetricRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the index to search.</p>
     */
    inline UpdateFleetMetricRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the index to search.</p>
     */
    inline UpdateFleetMetricRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>Used to support unit transformation such as milliseconds to seconds. The unit
     * must be supported by <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDatum.html">CW
     * metric</a>.</p>
     */
    inline const FleetMetricUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>Used to support unit transformation such as milliseconds to seconds. The unit
     * must be supported by <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDatum.html">CW
     * metric</a>.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>Used to support unit transformation such as milliseconds to seconds. The unit
     * must be supported by <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDatum.html">CW
     * metric</a>.</p>
     */
    inline void SetUnit(const FleetMetricUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>Used to support unit transformation such as milliseconds to seconds. The unit
     * must be supported by <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDatum.html">CW
     * metric</a>.</p>
     */
    inline void SetUnit(FleetMetricUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>Used to support unit transformation such as milliseconds to seconds. The unit
     * must be supported by <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDatum.html">CW
     * metric</a>.</p>
     */
    inline UpdateFleetMetricRequest& WithUnit(const FleetMetricUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>Used to support unit transformation such as milliseconds to seconds. The unit
     * must be supported by <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDatum.html">CW
     * metric</a>.</p>
     */
    inline UpdateFleetMetricRequest& WithUnit(FleetMetricUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The expected version of the fleet metric record in the registry.</p>
     */
    inline long long GetExpectedVersion() const{ return m_expectedVersion; }

    /**
     * <p>The expected version of the fleet metric record in the registry.</p>
     */
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }

    /**
     * <p>The expected version of the fleet metric record in the registry.</p>
     */
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }

    /**
     * <p>The expected version of the fleet metric record in the registry.</p>
     */
    inline UpdateFleetMetricRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    AggregationType m_aggregationType;
    bool m_aggregationTypeHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_aggregationField;
    bool m_aggregationFieldHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_queryVersion;
    bool m_queryVersionHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    FleetMetricUnit m_unit;
    bool m_unitHasBeenSet = false;

    long long m_expectedVersion;
    bool m_expectedVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
