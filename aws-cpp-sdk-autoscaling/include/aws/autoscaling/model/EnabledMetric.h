/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes an enabled metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnabledMetric">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API EnabledMetric
  {
  public:
    EnabledMetric();
    EnabledMetric(const Aws::Utils::Xml::XmlNode& xmlNode);
    EnabledMetric& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One of the following metrics:</p> <ul> <li> <p> <code>GroupMinSize</code>
     * </p> </li> <li> <p> <code>GroupMaxSize</code> </p> </li> <li> <p>
     * <code>GroupDesiredCapacity</code> </p> </li> <li> <p>
     * <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /**
     * <p>One of the following metrics:</p> <ul> <li> <p> <code>GroupMinSize</code>
     * </p> </li> <li> <p> <code>GroupMaxSize</code> </p> </li> <li> <p>
     * <code>GroupDesiredCapacity</code> </p> </li> <li> <p>
     * <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>One of the following metrics:</p> <ul> <li> <p> <code>GroupMinSize</code>
     * </p> </li> <li> <p> <code>GroupMaxSize</code> </p> </li> <li> <p>
     * <code>GroupDesiredCapacity</code> </p> </li> <li> <p>
     * <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>One of the following metrics:</p> <ul> <li> <p> <code>GroupMinSize</code>
     * </p> </li> <li> <p> <code>GroupMaxSize</code> </p> </li> <li> <p>
     * <code>GroupDesiredCapacity</code> </p> </li> <li> <p>
     * <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>One of the following metrics:</p> <ul> <li> <p> <code>GroupMinSize</code>
     * </p> </li> <li> <p> <code>GroupMaxSize</code> </p> </li> <li> <p>
     * <code>GroupDesiredCapacity</code> </p> </li> <li> <p>
     * <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /**
     * <p>One of the following metrics:</p> <ul> <li> <p> <code>GroupMinSize</code>
     * </p> </li> <li> <p> <code>GroupMaxSize</code> </p> </li> <li> <p>
     * <code>GroupDesiredCapacity</code> </p> </li> <li> <p>
     * <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline EnabledMetric& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>One of the following metrics:</p> <ul> <li> <p> <code>GroupMinSize</code>
     * </p> </li> <li> <p> <code>GroupMaxSize</code> </p> </li> <li> <p>
     * <code>GroupDesiredCapacity</code> </p> </li> <li> <p>
     * <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline EnabledMetric& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>One of the following metrics:</p> <ul> <li> <p> <code>GroupMinSize</code>
     * </p> </li> <li> <p> <code>GroupMaxSize</code> </p> </li> <li> <p>
     * <code>GroupDesiredCapacity</code> </p> </li> <li> <p>
     * <code>GroupInServiceInstances</code> </p> </li> <li> <p>
     * <code>GroupPendingInstances</code> </p> </li> <li> <p>
     * <code>GroupStandbyInstances</code> </p> </li> <li> <p>
     * <code>GroupTerminatingInstances</code> </p> </li> <li> <p>
     * <code>GroupTotalInstances</code> </p> </li> </ul>
     */
    inline EnabledMetric& WithMetric(const char* value) { SetMetric(value); return *this;}


    /**
     * <p>The granularity of the metric. The only valid value is
     * <code>1Minute</code>.</p>
     */
    inline const Aws::String& GetGranularity() const{ return m_granularity; }

    /**
     * <p>The granularity of the metric. The only valid value is
     * <code>1Minute</code>.</p>
     */
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }

    /**
     * <p>The granularity of the metric. The only valid value is
     * <code>1Minute</code>.</p>
     */
    inline void SetGranularity(const Aws::String& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>The granularity of the metric. The only valid value is
     * <code>1Minute</code>.</p>
     */
    inline void SetGranularity(Aws::String&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }

    /**
     * <p>The granularity of the metric. The only valid value is
     * <code>1Minute</code>.</p>
     */
    inline void SetGranularity(const char* value) { m_granularityHasBeenSet = true; m_granularity.assign(value); }

    /**
     * <p>The granularity of the metric. The only valid value is
     * <code>1Minute</code>.</p>
     */
    inline EnabledMetric& WithGranularity(const Aws::String& value) { SetGranularity(value); return *this;}

    /**
     * <p>The granularity of the metric. The only valid value is
     * <code>1Minute</code>.</p>
     */
    inline EnabledMetric& WithGranularity(Aws::String&& value) { SetGranularity(std::move(value)); return *this;}

    /**
     * <p>The granularity of the metric. The only valid value is
     * <code>1Minute</code>.</p>
     */
    inline EnabledMetric& WithGranularity(const char* value) { SetGranularity(value); return *this;}

  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet;

    Aws::String m_granularity;
    bool m_granularityHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
