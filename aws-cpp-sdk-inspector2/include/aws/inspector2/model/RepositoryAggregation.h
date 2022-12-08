/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/RepositorySortBy.h>
#include <aws/inspector2/model/SortOrder.h>
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
    AWS_INSPECTOR2_API RepositoryAggregation();
    AWS_INSPECTOR2_API RepositoryAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API RepositoryAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The names of repositories to aggregate findings on.</p>
     */
    inline const Aws::Vector<StringFilter>& GetRepositories() const{ return m_repositories; }

    /**
     * <p>The names of repositories to aggregate findings on.</p>
     */
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }

    /**
     * <p>The names of repositories to aggregate findings on.</p>
     */
    inline void SetRepositories(const Aws::Vector<StringFilter>& value) { m_repositoriesHasBeenSet = true; m_repositories = value; }

    /**
     * <p>The names of repositories to aggregate findings on.</p>
     */
    inline void SetRepositories(Aws::Vector<StringFilter>&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::move(value); }

    /**
     * <p>The names of repositories to aggregate findings on.</p>
     */
    inline RepositoryAggregation& WithRepositories(const Aws::Vector<StringFilter>& value) { SetRepositories(value); return *this;}

    /**
     * <p>The names of repositories to aggregate findings on.</p>
     */
    inline RepositoryAggregation& WithRepositories(Aws::Vector<StringFilter>&& value) { SetRepositories(std::move(value)); return *this;}

    /**
     * <p>The names of repositories to aggregate findings on.</p>
     */
    inline RepositoryAggregation& AddRepositories(const StringFilter& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(value); return *this; }

    /**
     * <p>The names of repositories to aggregate findings on.</p>
     */
    inline RepositoryAggregation& AddRepositories(StringFilter&& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(std::move(value)); return *this; }


    /**
     * <p>The value to sort results by.</p>
     */
    inline const RepositorySortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline void SetSortBy(const RepositorySortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline void SetSortBy(RepositorySortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value to sort results by.</p>
     */
    inline RepositoryAggregation& WithSortBy(const RepositorySortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value to sort results by.</p>
     */
    inline RepositoryAggregation& WithSortBy(RepositorySortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The order to sort results by.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order to sort results by.</p>
     */
    inline RepositoryAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order to sort results by.</p>
     */
    inline RepositoryAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Vector<StringFilter> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    RepositorySortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
