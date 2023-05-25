/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/PackageSortBy.h>
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
   * <p>The details that define an aggregation based on operating system package
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/PackageAggregation">AWS
   * API Reference</a></p>
   */
  class PackageAggregation
  {
  public:
    AWS_INSPECTOR2_API PackageAggregation();
    AWS_INSPECTOR2_API PackageAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API PackageAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The names of packages to aggregate findings on.</p>
     */
    inline const Aws::Vector<StringFilter>& GetPackageNames() const{ return m_packageNames; }

    /**
     * <p>The names of packages to aggregate findings on.</p>
     */
    inline bool PackageNamesHasBeenSet() const { return m_packageNamesHasBeenSet; }

    /**
     * <p>The names of packages to aggregate findings on.</p>
     */
    inline void SetPackageNames(const Aws::Vector<StringFilter>& value) { m_packageNamesHasBeenSet = true; m_packageNames = value; }

    /**
     * <p>The names of packages to aggregate findings on.</p>
     */
    inline void SetPackageNames(Aws::Vector<StringFilter>&& value) { m_packageNamesHasBeenSet = true; m_packageNames = std::move(value); }

    /**
     * <p>The names of packages to aggregate findings on.</p>
     */
    inline PackageAggregation& WithPackageNames(const Aws::Vector<StringFilter>& value) { SetPackageNames(value); return *this;}

    /**
     * <p>The names of packages to aggregate findings on.</p>
     */
    inline PackageAggregation& WithPackageNames(Aws::Vector<StringFilter>&& value) { SetPackageNames(std::move(value)); return *this;}

    /**
     * <p>The names of packages to aggregate findings on.</p>
     */
    inline PackageAggregation& AddPackageNames(const StringFilter& value) { m_packageNamesHasBeenSet = true; m_packageNames.push_back(value); return *this; }

    /**
     * <p>The names of packages to aggregate findings on.</p>
     */
    inline PackageAggregation& AddPackageNames(StringFilter&& value) { m_packageNamesHasBeenSet = true; m_packageNames.push_back(std::move(value)); return *this; }


    /**
     * <p>The value to sort results by.</p>
     */
    inline const PackageSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline void SetSortBy(const PackageSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline void SetSortBy(PackageSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value to sort results by.</p>
     */
    inline PackageAggregation& WithSortBy(const PackageSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value to sort results by.</p>
     */
    inline PackageAggregation& WithSortBy(PackageSortBy&& value) { SetSortBy(std::move(value)); return *this;}


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
    inline PackageAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order to sort results by.</p>
     */
    inline PackageAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Vector<StringFilter> m_packageNames;
    bool m_packageNamesHasBeenSet = false;

    PackageSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
