/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/LambdaFunctionSortBy.h>
#include <aws/inspector2/model/StringFilter.h>
#include <aws/inspector2/model/MapFilter.h>
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
   * <p>The details that define a findings aggregation based on Amazon Web Services
   * Lambda functions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaFunctionAggregation">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionAggregation
  {
  public:
    AWS_INSPECTOR2_API LambdaFunctionAggregation() = default;
    AWS_INSPECTOR2_API LambdaFunctionAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaFunctionAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource IDs to include in the aggregation results.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<StringFilter>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<StringFilter>>
    LambdaFunctionAggregation& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = StringFilter>
    LambdaFunctionAggregation& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Lambda function names to include in the aggregation
     * results.</p>
     */
    inline const Aws::Vector<StringFilter>& GetFunctionNames() const { return m_functionNames; }
    inline bool FunctionNamesHasBeenSet() const { return m_functionNamesHasBeenSet; }
    template<typename FunctionNamesT = Aws::Vector<StringFilter>>
    void SetFunctionNames(FunctionNamesT&& value) { m_functionNamesHasBeenSet = true; m_functionNames = std::forward<FunctionNamesT>(value); }
    template<typename FunctionNamesT = Aws::Vector<StringFilter>>
    LambdaFunctionAggregation& WithFunctionNames(FunctionNamesT&& value) { SetFunctionNames(std::forward<FunctionNamesT>(value)); return *this;}
    template<typename FunctionNamesT = StringFilter>
    LambdaFunctionAggregation& AddFunctionNames(FunctionNamesT&& value) { m_functionNamesHasBeenSet = true; m_functionNames.emplace_back(std::forward<FunctionNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns findings aggregated by Amazon Web Services Lambda function runtime
     * environments.</p>
     */
    inline const Aws::Vector<StringFilter>& GetRuntimes() const { return m_runtimes; }
    inline bool RuntimesHasBeenSet() const { return m_runtimesHasBeenSet; }
    template<typename RuntimesT = Aws::Vector<StringFilter>>
    void SetRuntimes(RuntimesT&& value) { m_runtimesHasBeenSet = true; m_runtimes = std::forward<RuntimesT>(value); }
    template<typename RuntimesT = Aws::Vector<StringFilter>>
    LambdaFunctionAggregation& WithRuntimes(RuntimesT&& value) { SetRuntimes(std::forward<RuntimesT>(value)); return *this;}
    template<typename RuntimesT = StringFilter>
    LambdaFunctionAggregation& AddRuntimes(RuntimesT&& value) { m_runtimesHasBeenSet = true; m_runtimes.emplace_back(std::forward<RuntimesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to include in the aggregation results.</p>
     */
    inline const Aws::Vector<MapFilter>& GetFunctionTags() const { return m_functionTags; }
    inline bool FunctionTagsHasBeenSet() const { return m_functionTagsHasBeenSet; }
    template<typename FunctionTagsT = Aws::Vector<MapFilter>>
    void SetFunctionTags(FunctionTagsT&& value) { m_functionTagsHasBeenSet = true; m_functionTags = std::forward<FunctionTagsT>(value); }
    template<typename FunctionTagsT = Aws::Vector<MapFilter>>
    LambdaFunctionAggregation& WithFunctionTags(FunctionTagsT&& value) { SetFunctionTags(std::forward<FunctionTagsT>(value)); return *this;}
    template<typename FunctionTagsT = MapFilter>
    LambdaFunctionAggregation& AddFunctionTags(FunctionTagsT&& value) { m_functionTagsHasBeenSet = true; m_functionTags.emplace_back(std::forward<FunctionTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order to use for sorting the results.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline LambdaFunctionAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding severity to use for sorting the results.</p>
     */
    inline LambdaFunctionSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(LambdaFunctionSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline LambdaFunctionAggregation& WithSortBy(LambdaFunctionSortBy value) { SetSortBy(value); return *this;}
    ///@}
  private:

    Aws::Vector<StringFilter> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Vector<StringFilter> m_functionNames;
    bool m_functionNamesHasBeenSet = false;

    Aws::Vector<StringFilter> m_runtimes;
    bool m_runtimesHasBeenSet = false;

    Aws::Vector<MapFilter> m_functionTags;
    bool m_functionTagsHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    LambdaFunctionSortBy m_sortBy{LambdaFunctionSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
