/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableFieldWells.h>
#include <aws/quicksight/model/TableSortConfiguration.h>
#include <aws/quicksight/model/TableOptions.h>
#include <aws/quicksight/model/TotalOptions.h>
#include <aws/quicksight/model/TableFieldOptions.h>
#include <aws/quicksight/model/TablePaginatedReportOptions.h>
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
   * <p>The configuration for a <code>TableVisual</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableConfiguration">AWS
   * API Reference</a></p>
   */
  class TableConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TableConfiguration();
    AWS_QUICKSIGHT_API TableConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const TableFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const TableFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(TableFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline TableConfiguration& WithFieldWells(const TableFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline TableConfiguration& WithFieldWells(TableFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration for a <code>TableVisual</code>.</p>
     */
    inline const TableSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration for a <code>TableVisual</code>.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration for a <code>TableVisual</code>.</p>
     */
    inline void SetSortConfiguration(const TableSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration for a <code>TableVisual</code>.</p>
     */
    inline void SetSortConfiguration(TableSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration for a <code>TableVisual</code>.</p>
     */
    inline TableConfiguration& WithSortConfiguration(const TableSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration for a <code>TableVisual</code>.</p>
     */
    inline TableConfiguration& WithSortConfiguration(TableSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The table options for a table visual.</p>
     */
    inline const TableOptions& GetTableOptions() const{ return m_tableOptions; }

    /**
     * <p>The table options for a table visual.</p>
     */
    inline bool TableOptionsHasBeenSet() const { return m_tableOptionsHasBeenSet; }

    /**
     * <p>The table options for a table visual.</p>
     */
    inline void SetTableOptions(const TableOptions& value) { m_tableOptionsHasBeenSet = true; m_tableOptions = value; }

    /**
     * <p>The table options for a table visual.</p>
     */
    inline void SetTableOptions(TableOptions&& value) { m_tableOptionsHasBeenSet = true; m_tableOptions = std::move(value); }

    /**
     * <p>The table options for a table visual.</p>
     */
    inline TableConfiguration& WithTableOptions(const TableOptions& value) { SetTableOptions(value); return *this;}

    /**
     * <p>The table options for a table visual.</p>
     */
    inline TableConfiguration& WithTableOptions(TableOptions&& value) { SetTableOptions(std::move(value)); return *this;}


    /**
     * <p>The total options for a table visual.</p>
     */
    inline const TotalOptions& GetTotalOptions() const{ return m_totalOptions; }

    /**
     * <p>The total options for a table visual.</p>
     */
    inline bool TotalOptionsHasBeenSet() const { return m_totalOptionsHasBeenSet; }

    /**
     * <p>The total options for a table visual.</p>
     */
    inline void SetTotalOptions(const TotalOptions& value) { m_totalOptionsHasBeenSet = true; m_totalOptions = value; }

    /**
     * <p>The total options for a table visual.</p>
     */
    inline void SetTotalOptions(TotalOptions&& value) { m_totalOptionsHasBeenSet = true; m_totalOptions = std::move(value); }

    /**
     * <p>The total options for a table visual.</p>
     */
    inline TableConfiguration& WithTotalOptions(const TotalOptions& value) { SetTotalOptions(value); return *this;}

    /**
     * <p>The total options for a table visual.</p>
     */
    inline TableConfiguration& WithTotalOptions(TotalOptions&& value) { SetTotalOptions(std::move(value)); return *this;}


    /**
     * <p>The field options for a table visual.</p>
     */
    inline const TableFieldOptions& GetFieldOptions() const{ return m_fieldOptions; }

    /**
     * <p>The field options for a table visual.</p>
     */
    inline bool FieldOptionsHasBeenSet() const { return m_fieldOptionsHasBeenSet; }

    /**
     * <p>The field options for a table visual.</p>
     */
    inline void SetFieldOptions(const TableFieldOptions& value) { m_fieldOptionsHasBeenSet = true; m_fieldOptions = value; }

    /**
     * <p>The field options for a table visual.</p>
     */
    inline void SetFieldOptions(TableFieldOptions&& value) { m_fieldOptionsHasBeenSet = true; m_fieldOptions = std::move(value); }

    /**
     * <p>The field options for a table visual.</p>
     */
    inline TableConfiguration& WithFieldOptions(const TableFieldOptions& value) { SetFieldOptions(value); return *this;}

    /**
     * <p>The field options for a table visual.</p>
     */
    inline TableConfiguration& WithFieldOptions(TableFieldOptions&& value) { SetFieldOptions(std::move(value)); return *this;}


    /**
     * <p>The paginated report options for a table visual.</p>
     */
    inline const TablePaginatedReportOptions& GetPaginatedReportOptions() const{ return m_paginatedReportOptions; }

    /**
     * <p>The paginated report options for a table visual.</p>
     */
    inline bool PaginatedReportOptionsHasBeenSet() const { return m_paginatedReportOptionsHasBeenSet; }

    /**
     * <p>The paginated report options for a table visual.</p>
     */
    inline void SetPaginatedReportOptions(const TablePaginatedReportOptions& value) { m_paginatedReportOptionsHasBeenSet = true; m_paginatedReportOptions = value; }

    /**
     * <p>The paginated report options for a table visual.</p>
     */
    inline void SetPaginatedReportOptions(TablePaginatedReportOptions&& value) { m_paginatedReportOptionsHasBeenSet = true; m_paginatedReportOptions = std::move(value); }

    /**
     * <p>The paginated report options for a table visual.</p>
     */
    inline TableConfiguration& WithPaginatedReportOptions(const TablePaginatedReportOptions& value) { SetPaginatedReportOptions(value); return *this;}

    /**
     * <p>The paginated report options for a table visual.</p>
     */
    inline TableConfiguration& WithPaginatedReportOptions(TablePaginatedReportOptions&& value) { SetPaginatedReportOptions(std::move(value)); return *this;}

  private:

    TableFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    TableSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    TableOptions m_tableOptions;
    bool m_tableOptionsHasBeenSet = false;

    TotalOptions m_totalOptions;
    bool m_totalOptionsHasBeenSet = false;

    TableFieldOptions m_fieldOptions;
    bool m_fieldOptionsHasBeenSet = false;

    TablePaginatedReportOptions m_paginatedReportOptions;
    bool m_paginatedReportOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
