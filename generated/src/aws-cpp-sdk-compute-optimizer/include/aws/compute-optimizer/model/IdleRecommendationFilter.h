/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/IdleRecommendationFilterName.h>
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
   * <p>Describes a filter that returns a more specific list of idle resource
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/IdleRecommendationFilter">AWS
   * API Reference</a></p>
   */
  class IdleRecommendationFilter
  {
  public:
    AWS_COMPUTEOPTIMIZER_API IdleRecommendationFilter() = default;
    AWS_COMPUTEOPTIMIZER_API IdleRecommendationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API IdleRecommendationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the filter. </p> <p> Specify <code>Finding</code> to return
     * recommendations with a specific finding classification. </p> <p>You can filter
     * your idle resource recommendations by <code>tag:key</code> and
     * <code>tag-key</code> tags.</p> <p>A <code>tag:key</code> is a key and value
     * combination of a tag assigned to your idle resource recommendations. Use the tag
     * key in the filter name and the tag value as the filter value. For example, to
     * find all idle resource service recommendations that have a tag with the key of
     * <code>Owner</code> and the value of <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> <p>A <code>tag-key</code> is the key of a tag assigned to your idle
     * resource recommendations. Use this filter to find all of your idle resource
     * recommendations that have a tag with a specific key. This doesn’t consider the
     * tag value. For example, you can find your idle resource service recommendations
     * with a tag key value of <code>Owner</code> or without any tag keys assigned.</p>
     */
    inline IdleRecommendationFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(IdleRecommendationFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline IdleRecommendationFilter& WithName(IdleRecommendationFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    IdleRecommendationFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    IdleRecommendationFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    IdleRecommendationFilterName m_name{IdleRecommendationFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
