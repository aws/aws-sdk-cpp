/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/CloudWatchMetricsStat.h>
#include <aws/devops-guru/model/CloudWatchMetricsDimension.h>
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
namespace DevOpsGuru
{
namespace Model
{

  class AWS_DEVOPSGURU_API CloudWatchMetricsDetail
  {
  public:
    CloudWatchMetricsDetail();
    CloudWatchMetricsDetail(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchMetricsDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<CloudWatchMetricsDimension>& GetDimensions() const{ return m_dimensions; }

    
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    
    inline void SetDimensions(const Aws::Vector<CloudWatchMetricsDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    
    inline void SetDimensions(Aws::Vector<CloudWatchMetricsDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    
    inline CloudWatchMetricsDetail& WithDimensions(const Aws::Vector<CloudWatchMetricsDimension>& value) { SetDimensions(value); return *this;}

    
    inline CloudWatchMetricsDetail& WithDimensions(Aws::Vector<CloudWatchMetricsDimension>&& value) { SetDimensions(std::move(value)); return *this;}

    
    inline CloudWatchMetricsDetail& AddDimensions(const CloudWatchMetricsDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    
    inline CloudWatchMetricsDetail& AddDimensions(CloudWatchMetricsDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    
    inline CloudWatchMetricsDetail& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    
    inline CloudWatchMetricsDetail& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    
    inline CloudWatchMetricsDetail& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    
    inline CloudWatchMetricsDetail& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    
    inline CloudWatchMetricsDetail& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    
    inline CloudWatchMetricsDetail& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    
    inline int GetPeriod() const{ return m_period; }

    
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    
    inline CloudWatchMetricsDetail& WithPeriod(int value) { SetPeriod(value); return *this;}


    
    inline const CloudWatchMetricsStat& GetStat() const{ return m_stat; }

    
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }

    
    inline void SetStat(const CloudWatchMetricsStat& value) { m_statHasBeenSet = true; m_stat = value; }

    
    inline void SetStat(CloudWatchMetricsStat&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }

    
    inline CloudWatchMetricsDetail& WithStat(const CloudWatchMetricsStat& value) { SetStat(value); return *this;}

    
    inline CloudWatchMetricsDetail& WithStat(CloudWatchMetricsStat&& value) { SetStat(std::move(value)); return *this;}


    
    inline const Aws::String& GetUnit() const{ return m_unit; }

    
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    
    inline CloudWatchMetricsDetail& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    
    inline CloudWatchMetricsDetail& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    
    inline CloudWatchMetricsDetail& WithUnit(const char* value) { SetUnit(value); return *this;}

  private:

    Aws::Vector<CloudWatchMetricsDimension> m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    int m_period;
    bool m_periodHasBeenSet;

    CloudWatchMetricsStat m_stat;
    bool m_statHasBeenSet;

    Aws::String m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
