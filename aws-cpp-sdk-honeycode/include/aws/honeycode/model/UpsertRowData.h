/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/Filter.h>
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
   * <p> Data needed to upsert rows in a table as part of a single item in the
   * BatchUpsertTableRows request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/UpsertRowData">AWS
   * API Reference</a></p>
   */
  class UpsertRowData
  {
  public:
    AWS_HONEYCODE_API UpsertRowData();
    AWS_HONEYCODE_API UpsertRowData(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API UpsertRowData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An external identifier that represents a single item in the request that is
     * being upserted as part of the BatchUpsertTableRows request. This can be any
     * string that you can use to identify the item in the request. The
     * BatchUpsertTableRows API puts the batch item id in the results to allow you to
     * link data in the request to data in the results. </p>
     */
    inline const Aws::String& GetBatchItemId() const{ return m_batchItemId; }

    /**
     * <p> An external identifier that represents a single item in the request that is
     * being upserted as part of the BatchUpsertTableRows request. This can be any
     * string that you can use to identify the item in the request. The
     * BatchUpsertTableRows API puts the batch item id in the results to allow you to
     * link data in the request to data in the results. </p>
     */
    inline bool BatchItemIdHasBeenSet() const { return m_batchItemIdHasBeenSet; }

    /**
     * <p> An external identifier that represents a single item in the request that is
     * being upserted as part of the BatchUpsertTableRows request. This can be any
     * string that you can use to identify the item in the request. The
     * BatchUpsertTableRows API puts the batch item id in the results to allow you to
     * link data in the request to data in the results. </p>
     */
    inline void SetBatchItemId(const Aws::String& value) { m_batchItemIdHasBeenSet = true; m_batchItemId = value; }

    /**
     * <p> An external identifier that represents a single item in the request that is
     * being upserted as part of the BatchUpsertTableRows request. This can be any
     * string that you can use to identify the item in the request. The
     * BatchUpsertTableRows API puts the batch item id in the results to allow you to
     * link data in the request to data in the results. </p>
     */
    inline void SetBatchItemId(Aws::String&& value) { m_batchItemIdHasBeenSet = true; m_batchItemId = std::move(value); }

    /**
     * <p> An external identifier that represents a single item in the request that is
     * being upserted as part of the BatchUpsertTableRows request. This can be any
     * string that you can use to identify the item in the request. The
     * BatchUpsertTableRows API puts the batch item id in the results to allow you to
     * link data in the request to data in the results. </p>
     */
    inline void SetBatchItemId(const char* value) { m_batchItemIdHasBeenSet = true; m_batchItemId.assign(value); }

    /**
     * <p> An external identifier that represents a single item in the request that is
     * being upserted as part of the BatchUpsertTableRows request. This can be any
     * string that you can use to identify the item in the request. The
     * BatchUpsertTableRows API puts the batch item id in the results to allow you to
     * link data in the request to data in the results. </p>
     */
    inline UpsertRowData& WithBatchItemId(const Aws::String& value) { SetBatchItemId(value); return *this;}

    /**
     * <p> An external identifier that represents a single item in the request that is
     * being upserted as part of the BatchUpsertTableRows request. This can be any
     * string that you can use to identify the item in the request. The
     * BatchUpsertTableRows API puts the batch item id in the results to allow you to
     * link data in the request to data in the results. </p>
     */
    inline UpsertRowData& WithBatchItemId(Aws::String&& value) { SetBatchItemId(std::move(value)); return *this;}

    /**
     * <p> An external identifier that represents a single item in the request that is
     * being upserted as part of the BatchUpsertTableRows request. This can be any
     * string that you can use to identify the item in the request. The
     * BatchUpsertTableRows API puts the batch item id in the results to allow you to
     * link data in the request to data in the results. </p>
     */
    inline UpsertRowData& WithBatchItemId(const char* value) { SetBatchItemId(value); return *this;}


    /**
     * <p> The filter formula to use to find existing matching rows to update. The
     * formula needs to return zero or more rows. If the formula returns 0 rows, then a
     * new row will be appended in the target table. If the formula returns one or more
     * rows, then the returned rows will be updated. </p> <p> Note that the filter
     * formula needs to return rows from the target table for the upsert operation to
     * succeed. If the filter formula has a syntax error or it doesn't evaluate to zero
     * or more rows in the target table for any one item in the input list, then the
     * entire BatchUpsertTableRows request fails and no updates are made to the table.
     * </p>
     */
    inline const Filter& GetFilter() const{ return m_filter; }

    /**
     * <p> The filter formula to use to find existing matching rows to update. The
     * formula needs to return zero or more rows. If the formula returns 0 rows, then a
     * new row will be appended in the target table. If the formula returns one or more
     * rows, then the returned rows will be updated. </p> <p> Note that the filter
     * formula needs to return rows from the target table for the upsert operation to
     * succeed. If the filter formula has a syntax error or it doesn't evaluate to zero
     * or more rows in the target table for any one item in the input list, then the
     * entire BatchUpsertTableRows request fails and no updates are made to the table.
     * </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p> The filter formula to use to find existing matching rows to update. The
     * formula needs to return zero or more rows. If the formula returns 0 rows, then a
     * new row will be appended in the target table. If the formula returns one or more
     * rows, then the returned rows will be updated. </p> <p> Note that the filter
     * formula needs to return rows from the target table for the upsert operation to
     * succeed. If the filter formula has a syntax error or it doesn't evaluate to zero
     * or more rows in the target table for any one item in the input list, then the
     * entire BatchUpsertTableRows request fails and no updates are made to the table.
     * </p>
     */
    inline void SetFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p> The filter formula to use to find existing matching rows to update. The
     * formula needs to return zero or more rows. If the formula returns 0 rows, then a
     * new row will be appended in the target table. If the formula returns one or more
     * rows, then the returned rows will be updated. </p> <p> Note that the filter
     * formula needs to return rows from the target table for the upsert operation to
     * succeed. If the filter formula has a syntax error or it doesn't evaluate to zero
     * or more rows in the target table for any one item in the input list, then the
     * entire BatchUpsertTableRows request fails and no updates are made to the table.
     * </p>
     */
    inline void SetFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p> The filter formula to use to find existing matching rows to update. The
     * formula needs to return zero or more rows. If the formula returns 0 rows, then a
     * new row will be appended in the target table. If the formula returns one or more
     * rows, then the returned rows will be updated. </p> <p> Note that the filter
     * formula needs to return rows from the target table for the upsert operation to
     * succeed. If the filter formula has a syntax error or it doesn't evaluate to zero
     * or more rows in the target table for any one item in the input list, then the
     * entire BatchUpsertTableRows request fails and no updates are made to the table.
     * </p>
     */
    inline UpsertRowData& WithFilter(const Filter& value) { SetFilter(value); return *this;}

    /**
     * <p> The filter formula to use to find existing matching rows to update. The
     * formula needs to return zero or more rows. If the formula returns 0 rows, then a
     * new row will be appended in the target table. If the formula returns one or more
     * rows, then the returned rows will be updated. </p> <p> Note that the filter
     * formula needs to return rows from the target table for the upsert operation to
     * succeed. If the filter formula has a syntax error or it doesn't evaluate to zero
     * or more rows in the target table for any one item in the input list, then the
     * entire BatchUpsertTableRows request fails and no updates are made to the table.
     * </p>
     */
    inline UpsertRowData& WithFilter(Filter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline const Aws::Map<Aws::String, CellInput>& GetCellsToUpdate() const{ return m_cellsToUpdate; }

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline bool CellsToUpdateHasBeenSet() const { return m_cellsToUpdateHasBeenSet; }

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline void SetCellsToUpdate(const Aws::Map<Aws::String, CellInput>& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate = value; }

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline void SetCellsToUpdate(Aws::Map<Aws::String, CellInput>&& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate = std::move(value); }

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline UpsertRowData& WithCellsToUpdate(const Aws::Map<Aws::String, CellInput>& value) { SetCellsToUpdate(value); return *this;}

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline UpsertRowData& WithCellsToUpdate(Aws::Map<Aws::String, CellInput>&& value) { SetCellsToUpdate(std::move(value)); return *this;}

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline UpsertRowData& AddCellsToUpdate(const Aws::String& key, const CellInput& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(key, value); return *this; }

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline UpsertRowData& AddCellsToUpdate(Aws::String&& key, const CellInput& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline UpsertRowData& AddCellsToUpdate(const Aws::String& key, CellInput&& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline UpsertRowData& AddCellsToUpdate(Aws::String&& key, CellInput&& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline UpsertRowData& AddCellsToUpdate(const char* key, CellInput&& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map representing the cells to update for the matching rows or an appended
     * row. The key is the column id of the cell and the value is the CellInput object
     * that represents the data to set in that cell. </p>
     */
    inline UpsertRowData& AddCellsToUpdate(const char* key, const CellInput& value) { m_cellsToUpdateHasBeenSet = true; m_cellsToUpdate.emplace(key, value); return *this; }

  private:

    Aws::String m_batchItemId;
    bool m_batchItemIdHasBeenSet = false;

    Filter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Map<Aws::String, CellInput> m_cellsToUpdate;
    bool m_cellsToUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
