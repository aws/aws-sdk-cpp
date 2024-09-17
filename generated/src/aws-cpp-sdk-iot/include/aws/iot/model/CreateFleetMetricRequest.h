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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateFleetMetricRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateFleetMetricRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleetMetric"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the fleet metric to create.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline CreateFleetMetricRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline CreateFleetMetricRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline CreateFleetMetricRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search query string.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline CreateFleetMetricRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline CreateFleetMetricRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline CreateFleetMetricRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the aggregation query.</p>
     */
    inline const AggregationType& GetAggregationType() const{ return m_aggregationType; }
    inline bool AggregationTypeHasBeenSet() const { return m_aggregationTypeHasBeenSet; }
    inline void SetAggregationType(const AggregationType& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = value; }
    inline void SetAggregationType(AggregationType&& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = std::move(value); }
    inline CreateFleetMetricRequest& WithAggregationType(const AggregationType& value) { SetAggregationType(value); return *this;}
    inline CreateFleetMetricRequest& WithAggregationType(AggregationType&& value) { SetAggregationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in seconds between fleet metric emissions. Range [60(1 min), 86400(1
     * day)] and must be multiple of 60.</p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline CreateFleetMetricRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to aggregate.</p>
     */
    inline const Aws::String& GetAggregationField() const{ return m_aggregationField; }
    inline bool AggregationFieldHasBeenSet() const { return m_aggregationFieldHasBeenSet; }
    inline void SetAggregationField(const Aws::String& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = value; }
    inline void SetAggregationField(Aws::String&& value) { m_aggregationFieldHasBeenSet = true; m_aggregationField = std::move(value); }
    inline void SetAggregationField(const char* value) { m_aggregationFieldHasBeenSet = true; m_aggregationField.assign(value); }
    inline CreateFleetMetricRequest& WithAggregationField(const Aws::String& value) { SetAggregationField(value); return *this;}
    inline CreateFleetMetricRequest& WithAggregationField(Aws::String&& value) { SetAggregationField(std::move(value)); return *this;}
    inline CreateFleetMetricRequest& WithAggregationField(const char* value) { SetAggregationField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet metric description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateFleetMetricRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateFleetMetricRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateFleetMetricRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query version.</p>
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }
    inline bool QueryVersionHasBeenSet() const { return m_queryVersionHasBeenSet; }
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersionHasBeenSet = true; m_queryVersion = value; }
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::move(value); }
    inline void SetQueryVersion(const char* value) { m_queryVersionHasBeenSet = true; m_queryVersion.assign(value); }
    inline CreateFleetMetricRequest& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}
    inline CreateFleetMetricRequest& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}
    inline CreateFleetMetricRequest& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index to search.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline CreateFleetMetricRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline CreateFleetMetricRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline CreateFleetMetricRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to support unit transformation such as milliseconds to seconds. The unit
     * must be supported by <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDatum.html">CW
     * metric</a>. Default to null.</p>
     */
    inline const FleetMetricUnit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const FleetMetricUnit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(FleetMetricUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline CreateFleetMetricRequest& WithUnit(const FleetMetricUnit& value) { SetUnit(value); return *this;}
    inline CreateFleetMetricRequest& WithUnit(FleetMetricUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata, which can be used to manage the fleet metric.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateFleetMetricRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateFleetMetricRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateFleetMetricRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateFleetMetricRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
