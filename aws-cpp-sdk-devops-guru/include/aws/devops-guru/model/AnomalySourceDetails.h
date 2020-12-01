/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/CloudWatchMetricsDetail.h>
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

  class AWS_DEVOPSGURU_API AnomalySourceDetails
  {
  public:
    AnomalySourceDetails();
    AnomalySourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AnomalySourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<CloudWatchMetricsDetail>& GetCloudWatchMetrics() const{ return m_cloudWatchMetrics; }

    
    inline bool CloudWatchMetricsHasBeenSet() const { return m_cloudWatchMetricsHasBeenSet; }

    
    inline void SetCloudWatchMetrics(const Aws::Vector<CloudWatchMetricsDetail>& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = value; }

    
    inline void SetCloudWatchMetrics(Aws::Vector<CloudWatchMetricsDetail>&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics = std::move(value); }

    
    inline AnomalySourceDetails& WithCloudWatchMetrics(const Aws::Vector<CloudWatchMetricsDetail>& value) { SetCloudWatchMetrics(value); return *this;}

    
    inline AnomalySourceDetails& WithCloudWatchMetrics(Aws::Vector<CloudWatchMetricsDetail>&& value) { SetCloudWatchMetrics(std::move(value)); return *this;}

    
    inline AnomalySourceDetails& AddCloudWatchMetrics(const CloudWatchMetricsDetail& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics.push_back(value); return *this; }

    
    inline AnomalySourceDetails& AddCloudWatchMetrics(CloudWatchMetricsDetail&& value) { m_cloudWatchMetricsHasBeenSet = true; m_cloudWatchMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CloudWatchMetricsDetail> m_cloudWatchMetrics;
    bool m_cloudWatchMetricsHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
