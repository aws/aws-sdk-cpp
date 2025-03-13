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
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendationFilter() = default;
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionRecommendationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p> <p>Specify <code>FindingReasonCode</code> to
     * return recommendations with a specific finding reason code (for example,
     * <code>MemoryUnderprovisioned</code>).</p> <p>You can filter your Lambda function
     * recommendations by <code>tag:key</code> and <code>tag-key</code> tags.</p> <p>A
     * <code>tag:key</code> is a key and value combination of a tag assigned to your
     * Lambda function recommendations. Use the tag key in the filter name and the tag
     * value as the filter value. For example, to find all Lambda function
     * recommendations that have a tag with the key of <code>Owner</code> and the value
     * of <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> <p>A <code>tag-key</code> is the
     * key of a tag assigned to your Lambda function recommendations. Use this filter
     * to find all of your Lambda function recommendations that have a tag with a
     * specific key. This doesn’t consider the tag value. For example, you can find
     * your Lambda function recommendations with a tag key value of <code>Owner</code>
     * or without any tag keys assigned.</p>
     */
    inline LambdaFunctionRecommendationFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(LambdaFunctionRecommendationFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline LambdaFunctionRecommendationFilter& WithName(LambdaFunctionRecommendationFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    LambdaFunctionRecommendationFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    LambdaFunctionRecommendationFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    LambdaFunctionRecommendationFilterName m_name{LambdaFunctionRecommendationFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
