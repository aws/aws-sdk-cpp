/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/TableCell.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Information about a row in a table excerpt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/TableRow">AWS API
   * Reference</a></p>
   */
  class TableRow
  {
  public:
    AWS_KENDRA_API TableRow();
    AWS_KENDRA_API TableRow(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API TableRow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of table cells in a row.</p>
     */
    inline const Aws::Vector<TableCell>& GetCells() const{ return m_cells; }

    /**
     * <p>A list of table cells in a row.</p>
     */
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }

    /**
     * <p>A list of table cells in a row.</p>
     */
    inline void SetCells(const Aws::Vector<TableCell>& value) { m_cellsHasBeenSet = true; m_cells = value; }

    /**
     * <p>A list of table cells in a row.</p>
     */
    inline void SetCells(Aws::Vector<TableCell>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }

    /**
     * <p>A list of table cells in a row.</p>
     */
    inline TableRow& WithCells(const Aws::Vector<TableCell>& value) { SetCells(value); return *this;}

    /**
     * <p>A list of table cells in a row.</p>
     */
    inline TableRow& WithCells(Aws::Vector<TableCell>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>A list of table cells in a row.</p>
     */
    inline TableRow& AddCells(const TableCell& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * <p>A list of table cells in a row.</p>
     */
    inline TableRow& AddCells(TableCell&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TableCell> m_cells;
    bool m_cellsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
