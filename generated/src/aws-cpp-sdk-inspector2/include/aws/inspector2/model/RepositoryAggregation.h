/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/RepositorySortBy.h>
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
   * <p>The details that define an aggregation based on repository.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/RepositoryAggregation">AWS
   * API Reference</a></p>
   */
  class RepositoryAggregation
  {
  public:
    AWS_INSPECTOR2_API RepositoryAggregation() = default;
    AWS_INSPECTOR2_API RepositoryAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API RepositoryAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The names of repositories to aggregate findings on.</p>
     */
    inline const Aws::Vector<StringFilter>& GetRepositories() const { return m_repositories; }
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }
    template<typename RepositoriesT = Aws::Vector<StringFilter>>
    void SetRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::forward<RepositoriesT>(value); }
    template<typename RepositoriesT = Aws::Vector<StringFilter>>
    RepositoryAggregation& WithRepositories(RepositoriesT&& value) { SetRepositories(std::forward<RepositoriesT>(value)); return *this;}
    template<typename RepositoriesT = StringFilter>
    RepositoryAggregation& AddRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories.emplace_back(std::forward<RepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline RepositoryAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline RepositorySortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(RepositorySortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline RepositoryAggregation& WithSortBy(RepositorySortBy value) { SetSortBy(value); return *this;}
    ///@}
  private:

    Aws::Vector<StringFilter> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    RepositorySortBy m_sortBy{RepositorySortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
