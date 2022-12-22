/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableAggregatedFieldWells.h>
#include <aws/quicksight/model/TableUnaggregatedFieldWells.h>
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
   * <p>The field wells for a table visual.</p> <p>This is a union type structure.
   * For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableFieldWells">AWS
   * API Reference</a></p>
   */
  class TableFieldWells
  {
  public:
    AWS_QUICKSIGHT_API TableFieldWells();
    AWS_QUICKSIGHT_API TableFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated field well for the table.</p>
     */
    inline const TableAggregatedFieldWells& GetTableAggregatedFieldWells() const{ return m_tableAggregatedFieldWells; }

    /**
     * <p>The aggregated field well for the table.</p>
     */
    inline bool TableAggregatedFieldWellsHasBeenSet() const { return m_tableAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The aggregated field well for the table.</p>
     */
    inline void SetTableAggregatedFieldWells(const TableAggregatedFieldWells& value) { m_tableAggregatedFieldWellsHasBeenSet = true; m_tableAggregatedFieldWells = value; }

    /**
     * <p>The aggregated field well for the table.</p>
     */
    inline void SetTableAggregatedFieldWells(TableAggregatedFieldWells&& value) { m_tableAggregatedFieldWellsHasBeenSet = true; m_tableAggregatedFieldWells = std::move(value); }

    /**
     * <p>The aggregated field well for the table.</p>
     */
    inline TableFieldWells& WithTableAggregatedFieldWells(const TableAggregatedFieldWells& value) { SetTableAggregatedFieldWells(value); return *this;}

    /**
     * <p>The aggregated field well for the table.</p>
     */
    inline TableFieldWells& WithTableAggregatedFieldWells(TableAggregatedFieldWells&& value) { SetTableAggregatedFieldWells(std::move(value)); return *this;}


    /**
     * <p>The unaggregated field well for the table.</p>
     */
    inline const TableUnaggregatedFieldWells& GetTableUnaggregatedFieldWells() const{ return m_tableUnaggregatedFieldWells; }

    /**
     * <p>The unaggregated field well for the table.</p>
     */
    inline bool TableUnaggregatedFieldWellsHasBeenSet() const { return m_tableUnaggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The unaggregated field well for the table.</p>
     */
    inline void SetTableUnaggregatedFieldWells(const TableUnaggregatedFieldWells& value) { m_tableUnaggregatedFieldWellsHasBeenSet = true; m_tableUnaggregatedFieldWells = value; }

    /**
     * <p>The unaggregated field well for the table.</p>
     */
    inline void SetTableUnaggregatedFieldWells(TableUnaggregatedFieldWells&& value) { m_tableUnaggregatedFieldWellsHasBeenSet = true; m_tableUnaggregatedFieldWells = std::move(value); }

    /**
     * <p>The unaggregated field well for the table.</p>
     */
    inline TableFieldWells& WithTableUnaggregatedFieldWells(const TableUnaggregatedFieldWells& value) { SetTableUnaggregatedFieldWells(value); return *this;}

    /**
     * <p>The unaggregated field well for the table.</p>
     */
    inline TableFieldWells& WithTableUnaggregatedFieldWells(TableUnaggregatedFieldWells&& value) { SetTableUnaggregatedFieldWells(std::move(value)); return *this;}

  private:

    TableAggregatedFieldWells m_tableAggregatedFieldWells;
    bool m_tableAggregatedFieldWellsHasBeenSet = false;

    TableUnaggregatedFieldWells m_tableUnaggregatedFieldWells;
    bool m_tableUnaggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
