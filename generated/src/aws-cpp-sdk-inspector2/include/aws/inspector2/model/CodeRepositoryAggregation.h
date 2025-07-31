/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/CodeRepositorySortBy.h>
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
   * <p>The details that define an aggregation based on code
   * repositories.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeRepositoryAggregation">AWS
   * API Reference</a></p>
   */
  class CodeRepositoryAggregation
  {
  public:
    AWS_INSPECTOR2_API CodeRepositoryAggregation() = default;
    AWS_INSPECTOR2_API CodeRepositoryAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeRepositoryAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The project names to include in the aggregation results.</p>
     */
    inline const Aws::Vector<StringFilter>& GetProjectNames() const { return m_projectNames; }
    inline bool ProjectNamesHasBeenSet() const { return m_projectNamesHasBeenSet; }
    template<typename ProjectNamesT = Aws::Vector<StringFilter>>
    void SetProjectNames(ProjectNamesT&& value) { m_projectNamesHasBeenSet = true; m_projectNames = std::forward<ProjectNamesT>(value); }
    template<typename ProjectNamesT = Aws::Vector<StringFilter>>
    CodeRepositoryAggregation& WithProjectNames(ProjectNamesT&& value) { SetProjectNames(std::forward<ProjectNamesT>(value)); return *this;}
    template<typename ProjectNamesT = StringFilter>
    CodeRepositoryAggregation& AddProjectNames(ProjectNamesT&& value) { m_projectNamesHasBeenSet = true; m_projectNames.emplace_back(std::forward<ProjectNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The repository provider types to include in the aggregation results.</p>
     */
    inline const Aws::Vector<StringFilter>& GetProviderTypes() const { return m_providerTypes; }
    inline bool ProviderTypesHasBeenSet() const { return m_providerTypesHasBeenSet; }
    template<typename ProviderTypesT = Aws::Vector<StringFilter>>
    void SetProviderTypes(ProviderTypesT&& value) { m_providerTypesHasBeenSet = true; m_providerTypes = std::forward<ProviderTypesT>(value); }
    template<typename ProviderTypesT = Aws::Vector<StringFilter>>
    CodeRepositoryAggregation& WithProviderTypes(ProviderTypesT&& value) { SetProviderTypes(std::forward<ProviderTypesT>(value)); return *this;}
    template<typename ProviderTypesT = StringFilter>
    CodeRepositoryAggregation& AddProviderTypes(ProviderTypesT&& value) { m_providerTypesHasBeenSet = true; m_providerTypes.emplace_back(std::forward<ProviderTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order to sort results by (ascending or descending) in the code repository
     * aggregation.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline CodeRepositoryAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by in the code repository aggregation.</p>
     */
    inline CodeRepositorySortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(CodeRepositorySortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline CodeRepositoryAggregation& WithSortBy(CodeRepositorySortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource IDs to include in the aggregation results.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<StringFilter>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<StringFilter>>
    CodeRepositoryAggregation& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = StringFilter>
    CodeRepositoryAggregation& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StringFilter> m_projectNames;
    bool m_projectNamesHasBeenSet = false;

    Aws::Vector<StringFilter> m_providerTypes;
    bool m_providerTypesHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    CodeRepositorySortBy m_sortBy{CodeRepositorySortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
