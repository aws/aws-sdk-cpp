/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/honeycode/model/CellInput.h>
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
   * <p> Data needed to create a single row in a table as part of the
   * BatchCreateTableRows request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/UpdateRowData">AWS
   * API Reference</a></p>
   */
  class UpdateRowData
  {
  public:
    AWS_HONEYCODE_API UpdateRowData();
    AWS_HONEYCODE_API UpdateRowData(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API UpdateRowData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The id of the row that needs to be updated. </p>
     */
    inline const Aws::String& GetRowId() const{ return m_rowId; }

    /**
     * <p> The id of the row that needs to be updated. </p>
     */
    inline bool RowIdHasBeenSet() const { return m_rowIdHasBeenSet; }

    /**
     * <p> The id of the row that needs to be updated. </p>
     */
    inline void SetRowId(const Aws::String& value) { m_rowIdHasBeenSet = true; m_rowId = value; }

    /**
     * <p> The id of the row that needs to be updated. </p>
     */
    inline void SetRowId(Aws::String&& value) { m_rowIdHasBeenSet = true; m_rowId = std::move(value); }

    /**
     * <p> The id of the row that needs to be updated. </p>
     */
    inline void SetRowId(const char* value) { m_rowIdHasBeenSet = true; m_rowId.assign(value); }

    /**
     * <p> The id of the row that needs to be updated. </p>
     */
    inline UpdateRowData& WithRowId(const Aws::String& value) { SetRowId(value); return *this;}

    /**
     * <p> The id of the row that needs to be updated. </p>
     */
    inline UpdateRowData& WithRowId(Aws::String&& value) { SetRowId(std::move(value)); return *this;}

    /**
     * <p> The id of the row that needs to be updated. </p>
     */
    inline UpdateRowData& WithRowId(const char* value) { SetRowId(value); return *this;}


    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline const Aws::Map<Aws::String, CellInput>& GetCellsToUpdate() const{ return m_cellsToUpdate; }

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline bool CellsToUpdateHasBeenSet() const { return m_cellsToUpdateHasBeenSet; }

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline void SetCellsToUpdate(const Aws::Map<Aws::String, CellInput>& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate = value; }

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline void SetCellsToUpdate(Aws::Map<Aws::String, CellInput>&& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate = std::move(value); }

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline UpdateRowData& WithCellsToUpdate(const Aws::Map<Aws::String, CellInput>& value) { SetCellsToUpdate(value); return *this;}

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline UpdateRowData& WithCellsToUpdate(Aws::Map<Aws::String, CellInput>&& value) { SetCellsToUpdate(std::move(value)); return *this;}

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline UpdateRowData& AddCellsToUpdate(const Aws::String& key, const CellInput& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(key, value); return *this; }

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline UpdateRowData& AddCellsToUpdate(Aws::String&& key, const CellInput& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline UpdateRowData& AddCellsToUpdate(const Aws::String& key, CellInput&& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline UpdateRowData& AddCellsToUpdate(Aws::String&& key, CellInput&& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline UpdateRowData& AddCellsToUpdate(const char* key, CellInput&& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map representing the cells to update in the given row. The key is the
     * column id of the cell and the value is the CellInput object that represents the
     * data to set in that cell. </p>
     */
    inline UpdateRowData& AddCellsToUpdate(const char* key, const CellInput& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(key, value); return *this; }

  private:

    Aws::String m_rowId;
    bool m_rowIdHasBeenSet = false;

    Aws::Map<Aws::String, CellInput> m_cellsToUpdate;
    bool m_cellsToUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
