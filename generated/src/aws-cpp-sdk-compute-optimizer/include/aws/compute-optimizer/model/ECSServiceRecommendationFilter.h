/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/ECSServiceRecommendationFilterName.h>
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
   * <p> Describes a filter that returns a more specific list of Amazon ECS service
   * recommendations. Use this filter with the <a>GetECSServiceRecommendations</a>
   * action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ECSServiceRecommendationFilter">AWS
   * API Reference</a></p>
   */
  class ECSServiceRecommendationFilter
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationFilter();
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the filter. </p> <p> Specify <code>Finding</code> to return
     * recommendations with a specific finding classification. </p> <p> Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code. </p>
     */
    inline const ECSServiceRecommendationFilterName& GetName() const{ return m_name; }

    /**
     * <p> The name of the filter. </p> <p> Specify <code>Finding</code> to return
     * recommendations with a specific finding classification. </p> <p> Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the filter. </p> <p> Specify <code>Finding</code> to return
     * recommendations with a specific finding classification. </p> <p> Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code. </p>
     */
    inline void SetName(const ECSServiceRecommendationFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the filter. </p> <p> Specify <code>Finding</code> to return
     * recommendations with a specific finding classification. </p> <p> Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code. </p>
     */
    inline void SetName(ECSServiceRecommendationFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the filter. </p> <p> Specify <code>Finding</code> to return
     * recommendations with a specific finding classification. </p> <p> Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code. </p>
     */
    inline ECSServiceRecommendationFilter& WithName(const ECSServiceRecommendationFilterName& value) { SetName(value); return *this;}

    /**
     * <p> The name of the filter. </p> <p> Specify <code>Finding</code> to return
     * recommendations with a specific finding classification. </p> <p> Specify
     * <code>FindingReasonCode</code> to return recommendations with a specific finding
     * reason code. </p>
     */
    inline ECSServiceRecommendationFilter& WithName(ECSServiceRecommendationFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p> The value of the filter. </p> <p>The valid values for this parameter are as
     * follows:</p> <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, specify <code>Optimized</code>, <code>NotOptimized</code>,
     * or <code>Unavailable</code>.</p> </li> <li> <p>If you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>, specify
     * <code>CPUUnderprovisioned</code>, <code>CPUOverprovisioned</code>,
     * <code>MemoryUnderprovisioned</code>, or <code>MemoryOverprovisioned</code>.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p> The value of the filter. </p> <p>The valid values for this parameter are as
     * follows:</p> <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, specify <code>Optimized</code>, <code>NotOptimized</code>,
     * or <code>Unavailable</code>.</p> </li> <li> <p>If you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>, specify
     * <code>CPUUnderprovisioned</code>, <code>CPUOverprovisioned</code>,
     * <code>MemoryUnderprovisioned</code>, or <code>MemoryOverprovisioned</code>.</p>
     * </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p> The value of the filter. </p> <p>The valid values for this parameter are as
     * follows:</p> <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, specify <code>Optimized</code>, <code>NotOptimized</code>,
     * or <code>Unavailable</code>.</p> </li> <li> <p>If you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>, specify
     * <code>CPUUnderprovisioned</code>, <code>CPUOverprovisioned</code>,
     * <code>MemoryUnderprovisioned</code>, or <code>MemoryOverprovisioned</code>.</p>
     * </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p> The value of the filter. </p> <p>The valid values for this parameter are as
     * follows:</p> <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, specify <code>Optimized</code>, <code>NotOptimized</code>,
     * or <code>Unavailable</code>.</p> </li> <li> <p>If you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>, specify
     * <code>CPUUnderprovisioned</code>, <code>CPUOverprovisioned</code>,
     * <code>MemoryUnderprovisioned</code>, or <code>MemoryOverprovisioned</code>.</p>
     * </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p> The value of the filter. </p> <p>The valid values for this parameter are as
     * follows:</p> <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, specify <code>Optimized</code>, <code>NotOptimized</code>,
     * or <code>Unavailable</code>.</p> </li> <li> <p>If you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>, specify
     * <code>CPUUnderprovisioned</code>, <code>CPUOverprovisioned</code>,
     * <code>MemoryUnderprovisioned</code>, or <code>MemoryOverprovisioned</code>.</p>
     * </li> </ul>
     */
    inline ECSServiceRecommendationFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p> The value of the filter. </p> <p>The valid values for this parameter are as
     * follows:</p> <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, specify <code>Optimized</code>, <code>NotOptimized</code>,
     * or <code>Unavailable</code>.</p> </li> <li> <p>If you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>, specify
     * <code>CPUUnderprovisioned</code>, <code>CPUOverprovisioned</code>,
     * <code>MemoryUnderprovisioned</code>, or <code>MemoryOverprovisioned</code>.</p>
     * </li> </ul>
     */
    inline ECSServiceRecommendationFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p> The value of the filter. </p> <p>The valid values for this parameter are as
     * follows:</p> <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, specify <code>Optimized</code>, <code>NotOptimized</code>,
     * or <code>Unavailable</code>.</p> </li> <li> <p>If you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>, specify
     * <code>CPUUnderprovisioned</code>, <code>CPUOverprovisioned</code>,
     * <code>MemoryUnderprovisioned</code>, or <code>MemoryOverprovisioned</code>.</p>
     * </li> </ul>
     */
    inline ECSServiceRecommendationFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p> The value of the filter. </p> <p>The valid values for this parameter are as
     * follows:</p> <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, specify <code>Optimized</code>, <code>NotOptimized</code>,
     * or <code>Unavailable</code>.</p> </li> <li> <p>If you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>, specify
     * <code>CPUUnderprovisioned</code>, <code>CPUOverprovisioned</code>,
     * <code>MemoryUnderprovisioned</code>, or <code>MemoryOverprovisioned</code>.</p>
     * </li> </ul>
     */
    inline ECSServiceRecommendationFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p> The value of the filter. </p> <p>The valid values for this parameter are as
     * follows:</p> <ul> <li> <p>If you specify the <code>name</code> parameter as
     * <code>Finding</code>, specify <code>Optimized</code>, <code>NotOptimized</code>,
     * or <code>Unavailable</code>.</p> </li> <li> <p>If you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>, specify
     * <code>CPUUnderprovisioned</code>, <code>CPUOverprovisioned</code>,
     * <code>MemoryUnderprovisioned</code>, or <code>MemoryOverprovisioned</code>.</p>
     * </li> </ul>
     */
    inline ECSServiceRecommendationFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    ECSServiceRecommendationFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
