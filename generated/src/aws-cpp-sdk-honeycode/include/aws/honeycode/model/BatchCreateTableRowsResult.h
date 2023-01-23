/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/FailedBatchItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Honeycode
{
namespace Model
{
  class BatchCreateTableRowsResult
  {
  public:
    AWS_HONEYCODE_API BatchCreateTableRowsResult();
    AWS_HONEYCODE_API BatchCreateTableRowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HONEYCODE_API BatchCreateTableRowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated workbook cursor after adding the new rows at the end of the
     * table.</p>
     */
    inline long long GetWorkbookCursor() const{ return m_workbookCursor; }

    /**
     * <p>The updated workbook cursor after adding the new rows at the end of the
     * table.</p>
     */
    inline void SetWorkbookCursor(long long value) { m_workbookCursor = value; }

    /**
     * <p>The updated workbook cursor after adding the new rows at the end of the
     * table.</p>
     */
    inline BatchCreateTableRowsResult& WithWorkbookCursor(long long value) { SetWorkbookCursor(value); return *this;}


    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCreatedRows() const{ return m_createdRows; }

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline void SetCreatedRows(const Aws::Map<Aws::String, Aws::String>& value) { m_createdRows = value; }

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline void SetCreatedRows(Aws::Map<Aws::String, Aws::String>&& value) { m_createdRows = std::move(value); }

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline BatchCreateTableRowsResult& WithCreatedRows(const Aws::Map<Aws::String, Aws::String>& value) { SetCreatedRows(value); return *this;}

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline BatchCreateTableRowsResult& WithCreatedRows(Aws::Map<Aws::String, Aws::String>&& value) { SetCreatedRows(std::move(value)); return *this;}

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline BatchCreateTableRowsResult& AddCreatedRows(const Aws::String& key, const Aws::String& value) { m_createdRows.emplace(key, value); return *this; }

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline BatchCreateTableRowsResult& AddCreatedRows(Aws::String&& key, const Aws::String& value) { m_createdRows.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline BatchCreateTableRowsResult& AddCreatedRows(const Aws::String& key, Aws::String&& value) { m_createdRows.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline BatchCreateTableRowsResult& AddCreatedRows(Aws::String&& key, Aws::String&& value) { m_createdRows.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline BatchCreateTableRowsResult& AddCreatedRows(const char* key, Aws::String&& value) { m_createdRows.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline BatchCreateTableRowsResult& AddCreatedRows(Aws::String&& key, const char* value) { m_createdRows.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map of batch item id to the row id that was created for that item.</p>
     */
    inline BatchCreateTableRowsResult& AddCreatedRows(const char* key, const char* value) { m_createdRows.emplace(key, value); return *this; }


    /**
     * <p> The list of batch items in the request that could not be added to the table.
     * Each element in this list contains one item from the request that could not be
     * added to the table along with the reason why that item could not be added. </p>
     */
    inline const Aws::Vector<FailedBatchItem>& GetFailedBatchItems() const{ return m_failedBatchItems; }

    /**
     * <p> The list of batch items in the request that could not be added to the table.
     * Each element in this list contains one item from the request that could not be
     * added to the table along with the reason why that item could not be added. </p>
     */
    inline void SetFailedBatchItems(const Aws::Vector<FailedBatchItem>& value) { m_failedBatchItems = value; }

    /**
     * <p> The list of batch items in the request that could not be added to the table.
     * Each element in this list contains one item from the request that could not be
     * added to the table along with the reason why that item could not be added. </p>
     */
    inline void SetFailedBatchItems(Aws::Vector<FailedBatchItem>&& value) { m_failedBatchItems = std::move(value); }

    /**
     * <p> The list of batch items in the request that could not be added to the table.
     * Each element in this list contains one item from the request that could not be
     * added to the table along with the reason why that item could not be added. </p>
     */
    inline BatchCreateTableRowsResult& WithFailedBatchItems(const Aws::Vector<FailedBatchItem>& value) { SetFailedBatchItems(value); return *this;}

    /**
     * <p> The list of batch items in the request that could not be added to the table.
     * Each element in this list contains one item from the request that could not be
     * added to the table along with the reason why that item could not be added. </p>
     */
    inline BatchCreateTableRowsResult& WithFailedBatchItems(Aws::Vector<FailedBatchItem>&& value) { SetFailedBatchItems(std::move(value)); return *this;}

    /**
     * <p> The list of batch items in the request that could not be added to the table.
     * Each element in this list contains one item from the request that could not be
     * added to the table along with the reason why that item could not be added. </p>
     */
    inline BatchCreateTableRowsResult& AddFailedBatchItems(const FailedBatchItem& value) { m_failedBatchItems.push_back(value); return *this; }

    /**
     * <p> The list of batch items in the request that could not be added to the table.
     * Each element in this list contains one item from the request that could not be
     * added to the table along with the reason why that item could not be added. </p>
     */
    inline BatchCreateTableRowsResult& AddFailedBatchItems(FailedBatchItem&& value) { m_failedBatchItems.push_back(std::move(value)); return *this; }

  private:

    long long m_workbookCursor;

    Aws::Map<Aws::String, Aws::String> m_createdRows;

    Aws::Vector<FailedBatchItem> m_failedBatchItems;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
