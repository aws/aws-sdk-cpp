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
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/CreateRowData">AWS
   * API Reference</a></p>
   */
  class CreateRowData
  {
  public:
    AWS_HONEYCODE_API CreateRowData();
    AWS_HONEYCODE_API CreateRowData(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API CreateRowData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An external identifier that represents the single row that is being created
     * as part of the BatchCreateTableRows request. This can be any string that you can
     * use to identify the row in the request. The BatchCreateTableRows API puts the
     * batch item id in the results to allow you to link data in the request to data in
     * the results. </p>
     */
    inline const Aws::String& GetBatchItemId() const{ return m_batchItemId; }

    /**
     * <p> An external identifier that represents the single row that is being created
     * as part of the BatchCreateTableRows request. This can be any string that you can
     * use to identify the row in the request. The BatchCreateTableRows API puts the
     * batch item id in the results to allow you to link data in the request to data in
     * the results. </p>
     */
    inline bool BatchItemIdHasBeenSet() const { return m_batchItemIdHasBeenSet; }

    /**
     * <p> An external identifier that represents the single row that is being created
     * as part of the BatchCreateTableRows request. This can be any string that you can
     * use to identify the row in the request. The BatchCreateTableRows API puts the
     * batch item id in the results to allow you to link data in the request to data in
     * the results. </p>
     */
    inline void SetBatchItemId(const Aws::String& value) { m_batchItemIdHasBeenSet = true; m_batchItemId = value; }

    /**
     * <p> An external identifier that represents the single row that is being created
     * as part of the BatchCreateTableRows request. This can be any string that you can
     * use to identify the row in the request. The BatchCreateTableRows API puts the
     * batch item id in the results to allow you to link data in the request to data in
     * the results. </p>
     */
    inline void SetBatchItemId(Aws::String&& value) { m_batchItemIdHasBeenSet = true; m_batchItemId = std::move(value); }

    /**
     * <p> An external identifier that represents the single row that is being created
     * as part of the BatchCreateTableRows request. This can be any string that you can
     * use to identify the row in the request. The BatchCreateTableRows API puts the
     * batch item id in the results to allow you to link data in the request to data in
     * the results. </p>
     */
    inline void SetBatchItemId(const char* value) { m_batchItemIdHasBeenSet = true; m_batchItemId.assign(value); }

    /**
     * <p> An external identifier that represents the single row that is being created
     * as part of the BatchCreateTableRows request. This can be any string that you can
     * use to identify the row in the request. The BatchCreateTableRows API puts the
     * batch item id in the results to allow you to link data in the request to data in
     * the results. </p>
     */
    inline CreateRowData& WithBatchItemId(const Aws::String& value) { SetBatchItemId(value); return *this;}

    /**
     * <p> An external identifier that represents the single row that is being created
     * as part of the BatchCreateTableRows request. This can be any string that you can
     * use to identify the row in the request. The BatchCreateTableRows API puts the
     * batch item id in the results to allow you to link data in the request to data in
     * the results. </p>
     */
    inline CreateRowData& WithBatchItemId(Aws::String&& value) { SetBatchItemId(std::move(value)); return *this;}

    /**
     * <p> An external identifier that represents the single row that is being created
     * as part of the BatchCreateTableRows request. This can be any string that you can
     * use to identify the row in the request. The BatchCreateTableRows API puts the
     * batch item id in the results to allow you to link data in the request to data in
     * the results. </p>
     */
    inline CreateRowData& WithBatchItemId(const char* value) { SetBatchItemId(value); return *this;}


    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline const Aws::Map<Aws::String, CellInput>& GetCellsToCreate() const{ return m_cellsToCreate; }

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline bool CellsToCreateHasBeenSet() const { return m_cellsToCreateHasBeenSet; }

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline void SetCellsToCreate(const Aws::Map<Aws::String, CellInput>& value) { m_cellsToCreateHasBeenSet = true; m_cellsToCreate = value; }

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline void SetCellsToCreate(Aws::Map<Aws::String, CellInput>&& value) { m_cellsToCreateHasBeenSet = true; m_cellsToCreate = std::move(value); }

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline CreateRowData& WithCellsToCreate(const Aws::Map<Aws::String, CellInput>& value) { SetCellsToCreate(value); return *this;}

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline CreateRowData& WithCellsToCreate(Aws::Map<Aws::String, CellInput>&& value) { SetCellsToCreate(std::move(value)); return *this;}

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline CreateRowData& AddCellsToCreate(const Aws::String& key, const CellInput& value) { m_cellsToCreateHasBeenSet = true; m_cellsToCreate.emplace(key, value); return *this; }

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline CreateRowData& AddCellsToCreate(Aws::String&& key, const CellInput& value) { m_cellsToCreateHasBeenSet = true; m_cellsToCreate.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline CreateRowData& AddCellsToCreate(const Aws::String& key, CellInput&& value) { m_cellsToCreateHasBeenSet = true; m_cellsToCreate.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline CreateRowData& AddCellsToCreate(Aws::String&& key, CellInput&& value) { m_cellsToCreateHasBeenSet = true; m_cellsToCreate.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline CreateRowData& AddCellsToCreate(const char* key, CellInput&& value) { m_cellsToCreateHasBeenSet = true; m_cellsToCreate.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map representing the cells to create in the new row. The key is the column
     * id of the cell and the value is the CellInput object that represents the data to
     * set in that cell. </p>
     */
    inline CreateRowData& AddCellsToCreate(const char* key, const CellInput& value) { m_cellsToCreateHasBeenSet = true; m_cellsToCreate.emplace(key, value); return *this; }

  private:

    Aws::String m_batchItemId;
    bool m_batchItemIdHasBeenSet = false;

    Aws::Map<Aws::String, CellInput> m_cellsToCreate;
    bool m_cellsToCreateHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
