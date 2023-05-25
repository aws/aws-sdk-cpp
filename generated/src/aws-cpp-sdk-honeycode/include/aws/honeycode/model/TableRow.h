/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/honeycode/model/Cell.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>An object that contains attributes about a single row in a
   * table</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/TableRow">AWS
   * API Reference</a></p>
   */
  class TableRow
  {
  public:
    AWS_HONEYCODE_API TableRow();
    AWS_HONEYCODE_API TableRow(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API TableRow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The id of the row in the table.</p>
     */
    inline const Aws::String& GetRowId() const{ return m_rowId; }

    /**
     * <p>The id of the row in the table.</p>
     */
    inline bool RowIdHasBeenSet() const { return m_rowIdHasBeenSet; }

    /**
     * <p>The id of the row in the table.</p>
     */
    inline void SetRowId(const Aws::String& value) { m_rowIdHasBeenSet = true; m_rowId = value; }

    /**
     * <p>The id of the row in the table.</p>
     */
    inline void SetRowId(Aws::String&& value) { m_rowIdHasBeenSet = true; m_rowId = std::move(value); }

    /**
     * <p>The id of the row in the table.</p>
     */
    inline void SetRowId(const char* value) { m_rowIdHasBeenSet = true; m_rowId.assign(value); }

    /**
     * <p>The id of the row in the table.</p>
     */
    inline TableRow& WithRowId(const Aws::String& value) { SetRowId(value); return *this;}

    /**
     * <p>The id of the row in the table.</p>
     */
    inline TableRow& WithRowId(Aws::String&& value) { SetRowId(std::move(value)); return *this;}

    /**
     * <p>The id of the row in the table.</p>
     */
    inline TableRow& WithRowId(const char* value) { SetRowId(value); return *this;}


    /**
     * <p>A list of cells in the table row. The cells appear in the same order as the
     * columns of the table. </p>
     */
    inline const Aws::Vector<Cell>& GetCells() const{ return m_cells; }

    /**
     * <p>A list of cells in the table row. The cells appear in the same order as the
     * columns of the table. </p>
     */
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }

    /**
     * <p>A list of cells in the table row. The cells appear in the same order as the
     * columns of the table. </p>
     */
    inline void SetCells(const Aws::Vector<Cell>& value) { m_cellsHasBeenSet = true; m_cells = value; }

    /**
     * <p>A list of cells in the table row. The cells appear in the same order as the
     * columns of the table. </p>
     */
    inline void SetCells(Aws::Vector<Cell>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }

    /**
     * <p>A list of cells in the table row. The cells appear in the same order as the
     * columns of the table. </p>
     */
    inline TableRow& WithCells(const Aws::Vector<Cell>& value) { SetCells(value); return *this;}

    /**
     * <p>A list of cells in the table row. The cells appear in the same order as the
     * columns of the table. </p>
     */
    inline TableRow& WithCells(Aws::Vector<Cell>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>A list of cells in the table row. The cells appear in the same order as the
     * columns of the table. </p>
     */
    inline TableRow& AddCells(const Cell& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * <p>A list of cells in the table row. The cells appear in the same order as the
     * columns of the table. </p>
     */
    inline TableRow& AddCells(Cell&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_rowId;
    bool m_rowIdHasBeenSet = false;

    Aws::Vector<Cell> m_cells;
    bool m_cellsHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
