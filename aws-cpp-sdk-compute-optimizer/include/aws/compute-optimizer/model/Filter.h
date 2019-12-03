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
   * <p>Describes a filter that returns a more specific list of
   * recommendations.</p><p><h3>See Also:</h3>   <a
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
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to filter the
     * results to a specific findings classification.</p> <p>Specify
     * <code>RecommendationSourceType</code> to filter the results to a specific
     * resource type.</p>
     */
    inline const FilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to filter the
     * results to a specific findings classification.</p> <p>Specify
     * <code>RecommendationSourceType</code> to filter the results to a specific
     * resource type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to filter the
     * results to a specific findings classification.</p> <p>Specify
     * <code>RecommendationSourceType</code> to filter the results to a specific
     * resource type.</p>
     */
    inline void SetName(const FilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to filter the
     * results to a specific findings classification.</p> <p>Specify
     * <code>RecommendationSourceType</code> to filter the results to a specific
     * resource type.</p>
     */
    inline void SetName(FilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to filter the
     * results to a specific findings classification.</p> <p>Specify
     * <code>RecommendationSourceType</code> to filter the results to a specific
     * resource type.</p>
     */
    inline Filter& WithName(const FilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to filter the
     * results to a specific findings classification.</p> <p>Specify
     * <code>RecommendationSourceType</code> to filter the results to a specific
     * resource type.</p>
     */
    inline Filter& WithName(FilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the filter.</p> <p>If you specify the <code>name</code>
     * parameter as <code>Finding</code>, and you're recommendations for an
     * <i>instance</i>, then the valid values are <code>Underprovisioned</code>,
     * <code>Overprovisioned</code>, <code>NotOptimized</code>, or
     * <code>Optimized</code>.</p> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, and you're recommendations for an <i>Auto Scaling
     * group</i>, then the valid values are <code>Optimized</code>, or
     * <code>NotOptimized</code>.</p> <p>If you specify the <code>name</code> parameter
     * as <code>RecommendationSourceType</code>, then the valid values are
     * <code>EC2Instance</code>, or <code>AutoScalingGroup</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value of the filter.</p> <p>If you specify the <code>name</code>
     * parameter as <code>Finding</code>, and you're recommendations for an
     * <i>instance</i>, then the valid values are <code>Underprovisioned</code>,
     * <code>Overprovisioned</code>, <code>NotOptimized</code>, or
     * <code>Optimized</code>.</p> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, and you're recommendations for an <i>Auto Scaling
     * group</i>, then the valid values are <code>Optimized</code>, or
     * <code>NotOptimized</code>.</p> <p>If you specify the <code>name</code> parameter
     * as <code>RecommendationSourceType</code>, then the valid values are
     * <code>EC2Instance</code>, or <code>AutoScalingGroup</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value of the filter.</p> <p>If you specify the <code>name</code>
     * parameter as <code>Finding</code>, and you're recommendations for an
     * <i>instance</i>, then the valid values are <code>Underprovisioned</code>,
     * <code>Overprovisioned</code>, <code>NotOptimized</code>, or
     * <code>Optimized</code>.</p> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, and you're recommendations for an <i>Auto Scaling
     * group</i>, then the valid values are <code>Optimized</code>, or
     * <code>NotOptimized</code>.</p> <p>If you specify the <code>name</code> parameter
     * as <code>RecommendationSourceType</code>, then the valid values are
     * <code>EC2Instance</code>, or <code>AutoScalingGroup</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value of the filter.</p> <p>If you specify the <code>name</code>
     * parameter as <code>Finding</code>, and you're recommendations for an
     * <i>instance</i>, then the valid values are <code>Underprovisioned</code>,
     * <code>Overprovisioned</code>, <code>NotOptimized</code>, or
     * <code>Optimized</code>.</p> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, and you're recommendations for an <i>Auto Scaling
     * group</i>, then the valid values are <code>Optimized</code>, or
     * <code>NotOptimized</code>.</p> <p>If you specify the <code>name</code> parameter
     * as <code>RecommendationSourceType</code>, then the valid values are
     * <code>EC2Instance</code>, or <code>AutoScalingGroup</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value of the filter.</p> <p>If you specify the <code>name</code>
     * parameter as <code>Finding</code>, and you're recommendations for an
     * <i>instance</i>, then the valid values are <code>Underprovisioned</code>,
     * <code>Overprovisioned</code>, <code>NotOptimized</code>, or
     * <code>Optimized</code>.</p> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, and you're recommendations for an <i>Auto Scaling
     * group</i>, then the valid values are <code>Optimized</code>, or
     * <code>NotOptimized</code>.</p> <p>If you specify the <code>name</code> parameter
     * as <code>RecommendationSourceType</code>, then the valid values are
     * <code>EC2Instance</code>, or <code>AutoScalingGroup</code>.</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value of the filter.</p> <p>If you specify the <code>name</code>
     * parameter as <code>Finding</code>, and you're recommendations for an
     * <i>instance</i>, then the valid values are <code>Underprovisioned</code>,
     * <code>Overprovisioned</code>, <code>NotOptimized</code>, or
     * <code>Optimized</code>.</p> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, and you're recommendations for an <i>Auto Scaling
     * group</i>, then the valid values are <code>Optimized</code>, or
     * <code>NotOptimized</code>.</p> <p>If you specify the <code>name</code> parameter
     * as <code>RecommendationSourceType</code>, then the valid values are
     * <code>EC2Instance</code>, or <code>AutoScalingGroup</code>.</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value of the filter.</p> <p>If you specify the <code>name</code>
     * parameter as <code>Finding</code>, and you're recommendations for an
     * <i>instance</i>, then the valid values are <code>Underprovisioned</code>,
     * <code>Overprovisioned</code>, <code>NotOptimized</code>, or
     * <code>Optimized</code>.</p> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, and you're recommendations for an <i>Auto Scaling
     * group</i>, then the valid values are <code>Optimized</code>, or
     * <code>NotOptimized</code>.</p> <p>If you specify the <code>name</code> parameter
     * as <code>RecommendationSourceType</code>, then the valid values are
     * <code>EC2Instance</code>, or <code>AutoScalingGroup</code>.</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value of the filter.</p> <p>If you specify the <code>name</code>
     * parameter as <code>Finding</code>, and you're recommendations for an
     * <i>instance</i>, then the valid values are <code>Underprovisioned</code>,
     * <code>Overprovisioned</code>, <code>NotOptimized</code>, or
     * <code>Optimized</code>.</p> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, and you're recommendations for an <i>Auto Scaling
     * group</i>, then the valid values are <code>Optimized</code>, or
     * <code>NotOptimized</code>.</p> <p>If you specify the <code>name</code> parameter
     * as <code>RecommendationSourceType</code>, then the valid values are
     * <code>EC2Instance</code>, or <code>AutoScalingGroup</code>.</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value of the filter.</p> <p>If you specify the <code>name</code>
     * parameter as <code>Finding</code>, and you're recommendations for an
     * <i>instance</i>, then the valid values are <code>Underprovisioned</code>,
     * <code>Overprovisioned</code>, <code>NotOptimized</code>, or
     * <code>Optimized</code>.</p> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, and you're recommendations for an <i>Auto Scaling
     * group</i>, then the valid values are <code>Optimized</code>, or
     * <code>NotOptimized</code>.</p> <p>If you specify the <code>name</code> parameter
     * as <code>RecommendationSourceType</code>, then the valid values are
     * <code>EC2Instance</code>, or <code>AutoScalingGroup</code>.</p>
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
