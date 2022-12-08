/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/PaginationConfiguration.h>
#include <aws/quicksight/model/FieldSortOptions.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The sort configuration for a <code>TableVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableSortConfiguration">AWS
   * API Reference</a></p>
   */
  class TableSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TableSortConfiguration();
    AWS_QUICKSIGHT_API TableSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field sort options for rows in the table.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetRowSort() const{ return m_rowSort; }

    /**
     * <p>The field sort options for rows in the table.</p>
     */
    inline bool RowSortHasBeenSet() const { return m_rowSortHasBeenSet; }

    /**
     * <p>The field sort options for rows in the table.</p>
     */
    inline void SetRowSort(const Aws::Vector<FieldSortOptions>& value) { m_rowSortHasBeenSet = true; m_rowSort = value; }

    /**
     * <p>The field sort options for rows in the table.</p>
     */
    inline void SetRowSort(Aws::Vector<FieldSortOptions>&& value) { m_rowSortHasBeenSet = true; m_rowSort = std::move(value); }

    /**
     * <p>The field sort options for rows in the table.</p>
     */
    inline TableSortConfiguration& WithRowSort(const Aws::Vector<FieldSortOptions>& value) { SetRowSort(value); return *this;}

    /**
     * <p>The field sort options for rows in the table.</p>
     */
    inline TableSortConfiguration& WithRowSort(Aws::Vector<FieldSortOptions>&& value) { SetRowSort(std::move(value)); return *this;}

    /**
     * <p>The field sort options for rows in the table.</p>
     */
    inline TableSortConfiguration& AddRowSort(const FieldSortOptions& value) { m_rowSortHasBeenSet = true; m_rowSort.push_back(value); return *this; }

    /**
     * <p>The field sort options for rows in the table.</p>
     */
    inline TableSortConfiguration& AddRowSort(FieldSortOptions&& value) { m_rowSortHasBeenSet = true; m_rowSort.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination configuration (page size, page number) for the table.</p>
     */
    inline const PaginationConfiguration& GetPaginationConfiguration() const{ return m_paginationConfiguration; }

    /**
     * <p>The pagination configuration (page size, page number) for the table.</p>
     */
    inline bool PaginationConfigurationHasBeenSet() const { return m_paginationConfigurationHasBeenSet; }

    /**
     * <p>The pagination configuration (page size, page number) for the table.</p>
     */
    inline void SetPaginationConfiguration(const PaginationConfiguration& value) { m_paginationConfigurationHasBeenSet = true; m_paginationConfiguration = value; }

    /**
     * <p>The pagination configuration (page size, page number) for the table.</p>
     */
    inline void SetPaginationConfiguration(PaginationConfiguration&& value) { m_paginationConfigurationHasBeenSet = true; m_paginationConfiguration = std::move(value); }

    /**
     * <p>The pagination configuration (page size, page number) for the table.</p>
     */
    inline TableSortConfiguration& WithPaginationConfiguration(const PaginationConfiguration& value) { SetPaginationConfiguration(value); return *this;}

    /**
     * <p>The pagination configuration (page size, page number) for the table.</p>
     */
    inline TableSortConfiguration& WithPaginationConfiguration(PaginationConfiguration&& value) { SetPaginationConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<FieldSortOptions> m_rowSort;
    bool m_rowSortHasBeenSet = false;

    PaginationConfiguration m_paginationConfiguration;
    bool m_paginationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
