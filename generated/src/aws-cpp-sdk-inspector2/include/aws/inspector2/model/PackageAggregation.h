/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/PackageSortBy.h>
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
    AWS_INSPECTOR2_API PackageAggregation() = default;
    AWS_INSPECTOR2_API PackageAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API PackageAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The names of packages to aggregate findings on.</p>
     */
    inline const Aws::Vector<StringFilter>& GetPackageNames() const { return m_packageNames; }
    inline bool PackageNamesHasBeenSet() const { return m_packageNamesHasBeenSet; }
    template<typename PackageNamesT = Aws::Vector<StringFilter>>
    void SetPackageNames(PackageNamesT&& value) { m_packageNamesHasBeenSet = true; m_packageNames = std::forward<PackageNamesT>(value); }
    template<typename PackageNamesT = Aws::Vector<StringFilter>>
    PackageAggregation& WithPackageNames(PackageNamesT&& value) { SetPackageNames(std::forward<PackageNamesT>(value)); return *this;}
    template<typename PackageNamesT = StringFilter>
    PackageAggregation& AddPackageNames(PackageNamesT&& value) { m_packageNamesHasBeenSet = true; m_packageNames.emplace_back(std::forward<PackageNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline PackageAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline PackageSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(PackageSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline PackageAggregation& WithSortBy(PackageSortBy value) { SetSortBy(value); return *this;}
    ///@}
  private:

    Aws::Vector<StringFilter> m_packageNames;
    bool m_packageNamesHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    PackageSortBy m_sortBy{PackageSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
