/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/EBSFilterName.h>
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
   * <p>Describes a filter that returns a more specific list of Amazon Elastic Block
   * Store (Amazon EBS) volume recommendations. Use this filter with the
   * <a>GetEBSVolumeRecommendations</a> action.</p> <p>You can use
   * <code>LambdaFunctionRecommendationFilter</code> with the
   * <a>GetLambdaFunctionRecommendations</a> action, <code>JobFilter</code> with the
   * <a>DescribeRecommendationExportJobs</a> action, and <code>Filter</code> with the
   * <a>GetAutoScalingGroupRecommendations</a> and
   * <a>GetEC2InstanceRecommendations</a> actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/EBSFilter">AWS
   * API Reference</a></p>
   */
  class EBSFilter
  {
  public:
    AWS_COMPUTEOPTIMIZER_API EBSFilter();
    AWS_COMPUTEOPTIMIZER_API EBSFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API EBSFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p>
     */
    inline const EBSFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p>
     */
    inline void SetName(const EBSFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p>
     */
    inline void SetName(EBSFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p>
     */
    inline EBSFilter& WithName(const EBSFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>NotOptimized</code>).</p>
     */
    inline EBSFilter& WithName(EBSFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Optimized</code>,
     * or <code>NotOptimized</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Optimized</code>,
     * or <code>NotOptimized</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Optimized</code>,
     * or <code>NotOptimized</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Optimized</code>,
     * or <code>NotOptimized</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Optimized</code>,
     * or <code>NotOptimized</code>.</p>
     */
    inline EBSFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Optimized</code>,
     * or <code>NotOptimized</code>.</p>
     */
    inline EBSFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Optimized</code>,
     * or <code>NotOptimized</code>.</p>
     */
    inline EBSFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Optimized</code>,
     * or <code>NotOptimized</code>.</p>
     */
    inline EBSFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values are <code>Optimized</code>,
     * or <code>NotOptimized</code>.</p>
     */
    inline EBSFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    EBSFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
