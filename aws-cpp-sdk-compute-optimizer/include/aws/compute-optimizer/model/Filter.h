/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/FilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes a filter that returns a more specific list of recommendations.</p>
   * <p>This filter is used with the <code>GetAutoScalingGroupRecommendations</code>
   * and <code>GetEC2InstanceRecommendations</code> actions.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/Filter">AWS
   * API Reference</a></p>
   */
  class AWS_COMPUTEOPTIMIZER_API Filter
  {
  public:
    Filter();
    Filter(Aws::Utils::Json::JsonView jsonValue);
    Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (e.g.,
     * <code>Overprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (e.g., <code>AutoScalingGroup</code>).</p>
     */
    inline const FilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (e.g.,
     * <code>Overprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (e.g., <code>AutoScalingGroup</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (e.g.,
     * <code>Overprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (e.g., <code>AutoScalingGroup</code>).</p>
     */
    inline void SetName(const FilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (e.g.,
     * <code>Overprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (e.g., <code>AutoScalingGroup</code>).</p>
     */
    inline void SetName(FilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (e.g.,
     * <code>Overprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (e.g., <code>AutoScalingGroup</code>).</p>
     */
    inline Filter& WithName(const FilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (e.g.,
     * <code>Overprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (e.g., <code>AutoScalingGroup</code>).</p>
     */
    inline Filter& WithName(FilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specified the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specified the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specified the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specified the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specified the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specified the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specified the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specified the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specified the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specified the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specified the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specified the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specified the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specified the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specified the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> </ul>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specified the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specified the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specified the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> </ul>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specified the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specified the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specified the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> </ul>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specified the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specified the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specified the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> </ul>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specified the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specified the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specified the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> </ul>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    FilterName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
