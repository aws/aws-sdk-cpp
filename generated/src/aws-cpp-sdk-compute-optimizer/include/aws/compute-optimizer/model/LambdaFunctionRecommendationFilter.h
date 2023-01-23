/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/LambdaFunctionRecommendationFilterName.h>
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
   * <p>Describes a filter that returns a more specific list of Lambda function
   * recommendations. Use this filter with the
   * <a>GetLambdaFunctionRecommendations</a> action.</p> <p>You can use
   * <code>EBSFilter</code> with the <a>GetEBSVolumeRecommendations</a> action,
   * <code>JobFilter</code> with the <a>DescribeRecommendationExportJobs</a> action,
   * and <code>Filter</code> with the <a>GetAutoScalingGroupRecommendations</a> and
   * <a>GetEC2InstanceRecommendations</a> actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LambdaFunctionRecommendationFilter">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionRecommendationFilter
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendationFilter();
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p> <p>Specify <code>FindingReasonCode</code> to
     * return recommendations with a specific finding reason code (for example,
     * <code>MemoryUnderprovisioned</code>).</p>
     */
    inline const LambdaFunctionRecommendationFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p> <p>Specify <code>FindingReasonCode</code> to
     * return recommendations with a specific finding reason code (for example,
     * <code>MemoryUnderprovisioned</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p> <p>Specify <code>FindingReasonCode</code> to
     * return recommendations with a specific finding reason code (for example,
     * <code>MemoryUnderprovisioned</code>).</p>
     */
    inline void SetName(const LambdaFunctionRecommendationFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p> <p>Specify <code>FindingReasonCode</code> to
     * return recommendations with a specific finding reason code (for example,
     * <code>MemoryUnderprovisioned</code>).</p>
     */
    inline void SetName(LambdaFunctionRecommendationFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p> <p>Specify <code>FindingReasonCode</code> to
     * return recommendations with a specific finding reason code (for example,
     * <code>MemoryUnderprovisioned</code>).</p>
     */
    inline LambdaFunctionRecommendationFilter& WithName(const LambdaFunctionRecommendationFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p> <p>Specify <code>FindingReasonCode</code> to
     * return recommendations with a specific finding reason code (for example,
     * <code>MemoryUnderprovisioned</code>).</p>
     */
    inline LambdaFunctionRecommendationFilter& WithName(LambdaFunctionRecommendationFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Optimized</code>, <code>NotOptimized</code>, or
     * <code>Unavailable</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code>.</p> </li> <li> <p>Specify
     * <code>MemoryOverprovisioned</code>, <code>MemoryUnderprovisioned</code>,
     * <code>InsufficientData</code>, or <code>Inconclusive</code> if you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Optimized</code>, <code>NotOptimized</code>, or
     * <code>Unavailable</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code>.</p> </li> <li> <p>Specify
     * <code>MemoryOverprovisioned</code>, <code>MemoryUnderprovisioned</code>,
     * <code>InsufficientData</code>, or <code>Inconclusive</code> if you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>.</p> </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Optimized</code>, <code>NotOptimized</code>, or
     * <code>Unavailable</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code>.</p> </li> <li> <p>Specify
     * <code>MemoryOverprovisioned</code>, <code>MemoryUnderprovisioned</code>,
     * <code>InsufficientData</code>, or <code>Inconclusive</code> if you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>.</p> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Optimized</code>, <code>NotOptimized</code>, or
     * <code>Unavailable</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code>.</p> </li> <li> <p>Specify
     * <code>MemoryOverprovisioned</code>, <code>MemoryUnderprovisioned</code>,
     * <code>InsufficientData</code>, or <code>Inconclusive</code> if you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>.</p> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Optimized</code>, <code>NotOptimized</code>, or
     * <code>Unavailable</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code>.</p> </li> <li> <p>Specify
     * <code>MemoryOverprovisioned</code>, <code>MemoryUnderprovisioned</code>,
     * <code>InsufficientData</code>, or <code>Inconclusive</code> if you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>.</p> </li> </ul>
     */
    inline LambdaFunctionRecommendationFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Optimized</code>, <code>NotOptimized</code>, or
     * <code>Unavailable</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code>.</p> </li> <li> <p>Specify
     * <code>MemoryOverprovisioned</code>, <code>MemoryUnderprovisioned</code>,
     * <code>InsufficientData</code>, or <code>Inconclusive</code> if you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>.</p> </li> </ul>
     */
    inline LambdaFunctionRecommendationFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Optimized</code>, <code>NotOptimized</code>, or
     * <code>Unavailable</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code>.</p> </li> <li> <p>Specify
     * <code>MemoryOverprovisioned</code>, <code>MemoryUnderprovisioned</code>,
     * <code>InsufficientData</code>, or <code>Inconclusive</code> if you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>.</p> </li> </ul>
     */
    inline LambdaFunctionRecommendationFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Optimized</code>, <code>NotOptimized</code>, or
     * <code>Unavailable</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code>.</p> </li> <li> <p>Specify
     * <code>MemoryOverprovisioned</code>, <code>MemoryUnderprovisioned</code>,
     * <code>InsufficientData</code>, or <code>Inconclusive</code> if you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>.</p> </li> </ul>
     */
    inline LambdaFunctionRecommendationFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter:</p>
     * <ul> <li> <p>Specify <code>Optimized</code>, <code>NotOptimized</code>, or
     * <code>Unavailable</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code>.</p> </li> <li> <p>Specify
     * <code>MemoryOverprovisioned</code>, <code>MemoryUnderprovisioned</code>,
     * <code>InsufficientData</code>, or <code>Inconclusive</code> if you specify the
     * <code>name</code> parameter as <code>FindingReasonCode</code>.</p> </li> </ul>
     */
    inline LambdaFunctionRecommendationFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    LambdaFunctionRecommendationFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
