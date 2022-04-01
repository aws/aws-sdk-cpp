/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/DimensionGroupDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PI
{
namespace Model
{

  /**
   * <p>The available dimension information for a metric type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/MetricDimensionGroups">AWS
   * API Reference</a></p>
   */
  class AWS_PI_API MetricDimensionGroups
  {
  public:
    MetricDimensionGroups();
    MetricDimensionGroups(Aws::Utils::Json::JsonView jsonValue);
    MetricDimensionGroups& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric type to which the dimension information belongs.</p>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /**
     * <p>The metric type to which the dimension information belongs.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The metric type to which the dimension information belongs.</p>
     */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The metric type to which the dimension information belongs.</p>
     */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The metric type to which the dimension information belongs.</p>
     */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /**
     * <p>The metric type to which the dimension information belongs.</p>
     */
    inline MetricDimensionGroups& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>The metric type to which the dimension information belongs.</p>
     */
    inline MetricDimensionGroups& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>The metric type to which the dimension information belongs.</p>
     */
    inline MetricDimensionGroups& WithMetric(const char* value) { SetMetric(value); return *this;}


    /**
     * <p>The available dimension groups for a metric type.</p>
     */
    inline const Aws::Vector<DimensionGroupDetail>& GetGroups() const{ return m_groups; }

    /**
     * <p>The available dimension groups for a metric type.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The available dimension groups for a metric type.</p>
     */
    inline void SetGroups(const Aws::Vector<DimensionGroupDetail>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The available dimension groups for a metric type.</p>
     */
    inline void SetGroups(Aws::Vector<DimensionGroupDetail>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The available dimension groups for a metric type.</p>
     */
    inline MetricDimensionGroups& WithGroups(const Aws::Vector<DimensionGroupDetail>& value) { SetGroups(value); return *this;}

    /**
     * <p>The available dimension groups for a metric type.</p>
     */
    inline MetricDimensionGroups& WithGroups(Aws::Vector<DimensionGroupDetail>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The available dimension groups for a metric type.</p>
     */
    inline MetricDimensionGroups& AddGroups(const DimensionGroupDetail& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The available dimension groups for a metric type.</p>
     */
    inline MetricDimensionGroups& AddGroups(DimensionGroupDetail&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet;

    Aws::Vector<DimensionGroupDetail> m_groups;
    bool m_groupsHasBeenSet;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
