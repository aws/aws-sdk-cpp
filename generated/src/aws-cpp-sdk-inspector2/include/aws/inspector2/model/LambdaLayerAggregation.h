/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/LambdaLayerSortBy.h>
#include <aws/inspector2/model/StringFilter.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The details that define a findings aggregation based on an Amazon Web
   * Services Lambda function's layers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaLayerAggregation">AWS
   * API Reference</a></p>
   */
  class LambdaLayerAggregation
  {
  public:
    AWS_INSPECTOR2_API LambdaLayerAggregation() = default;
    AWS_INSPECTOR2_API LambdaLayerAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaLayerAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The names of the Amazon Web Services Lambda functions associated with the
     * layers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetFunctionNames() const { return m_functionNames; }
    inline bool FunctionNamesHasBeenSet() const { return m_functionNamesHasBeenSet; }
    template<typename FunctionNamesT = Aws::Vector<StringFilter>>
    void SetFunctionNames(FunctionNamesT&& value) { m_functionNamesHasBeenSet = true; m_functionNames = std::forward<FunctionNamesT>(value); }
    template<typename FunctionNamesT = Aws::Vector<StringFilter>>
    LambdaLayerAggregation& WithFunctionNames(FunctionNamesT&& value) { SetFunctionNames(std::forward<FunctionNamesT>(value)); return *this;}
    template<typename FunctionNamesT = StringFilter>
    LambdaLayerAggregation& AddFunctionNames(FunctionNamesT&& value) { m_functionNamesHasBeenSet = true; m_functionNames.emplace_back(std::forward<FunctionNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource IDs for the Amazon Web Services Lambda function layers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<StringFilter>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<StringFilter>>
    LambdaLayerAggregation& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = StringFilter>
    LambdaLayerAggregation& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Lambda function
     * layer. </p>
     */
    inline const Aws::Vector<StringFilter>& GetLayerArns() const { return m_layerArns; }
    inline bool LayerArnsHasBeenSet() const { return m_layerArnsHasBeenSet; }
    template<typename LayerArnsT = Aws::Vector<StringFilter>>
    void SetLayerArns(LayerArnsT&& value) { m_layerArnsHasBeenSet = true; m_layerArns = std::forward<LayerArnsT>(value); }
    template<typename LayerArnsT = Aws::Vector<StringFilter>>
    LambdaLayerAggregation& WithLayerArns(LayerArnsT&& value) { SetLayerArns(std::forward<LayerArnsT>(value)); return *this;}
    template<typename LayerArnsT = StringFilter>
    LambdaLayerAggregation& AddLayerArns(LayerArnsT&& value) { m_layerArnsHasBeenSet = true; m_layerArns.emplace_back(std::forward<LayerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order to use for sorting the results.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline LambdaLayerAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline LambdaLayerSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(LambdaLayerSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline LambdaLayerAggregation& WithSortBy(LambdaLayerSortBy value) { SetSortBy(value); return *this;}
    ///@}
  private:

    Aws::Vector<StringFilter> m_functionNames;
    bool m_functionNamesHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Vector<StringFilter> m_layerArns;
    bool m_layerArnsHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    LambdaLayerSortBy m_sortBy{LambdaLayerSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
