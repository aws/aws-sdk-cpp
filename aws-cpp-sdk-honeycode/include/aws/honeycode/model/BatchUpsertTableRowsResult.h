/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/UpsertRowsResult.h>
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
  class BatchUpsertTableRowsResult
  {
  public:
    AWS_HONEYCODE_API BatchUpsertTableRowsResult();
    AWS_HONEYCODE_API BatchUpsertTableRowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HONEYCODE_API BatchUpsertTableRowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline const Aws::Map<Aws::String, UpsertRowsResult>& GetRows() const{ return m_rows; }

    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline void SetRows(const Aws::Map<Aws::String, UpsertRowsResult>& value) { m_rows = value; }

    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline void SetRows(Aws::Map<Aws::String, UpsertRowsResult>&& value) { m_rows = std::move(value); }

    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline BatchUpsertTableRowsResult& WithRows(const Aws::Map<Aws::String, UpsertRowsResult>& value) { SetRows(value); return *this;}

    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline BatchUpsertTableRowsResult& WithRows(Aws::Map<Aws::String, UpsertRowsResult>&& value) { SetRows(std::move(value)); return *this;}

    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline BatchUpsertTableRowsResult& AddRows(const Aws::String& key, const UpsertRowsResult& value) { m_rows.emplace(key, value); return *this; }

    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline BatchUpsertTableRowsResult& AddRows(Aws::String&& key, const UpsertRowsResult& value) { m_rows.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline BatchUpsertTableRowsResult& AddRows(const Aws::String& key, UpsertRowsResult&& value) { m_rows.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline BatchUpsertTableRowsResult& AddRows(Aws::String&& key, UpsertRowsResult&& value) { m_rows.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline BatchUpsertTableRowsResult& AddRows(const char* key, UpsertRowsResult&& value) { m_rows.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map with the batch item id as the key and the result of the upsert
     * operation as the value. The result of the upsert operation specifies whether
     * existing rows were updated or a new row was appended, along with the list of row
     * ids that were affected. </p>
     */
    inline BatchUpsertTableRowsResult& AddRows(const char* key, const UpsertRowsResult& value) { m_rows.emplace(key, value); return *this; }


    /**
     * <p>The updated workbook cursor after updating or appending rows in the
     * table.</p>
     */
    inline long long GetWorkbookCursor() const{ return m_workbookCursor; }

    /**
     * <p>The updated workbook cursor after updating or appending rows in the
     * table.</p>
     */
    inline void SetWorkbookCursor(long long value) { m_workbookCursor = value; }

    /**
     * <p>The updated workbook cursor after updating or appending rows in the
     * table.</p>
     */
    inline BatchUpsertTableRowsResult& WithWorkbookCursor(long long value) { SetWorkbookCursor(value); return *this;}


    /**
     * <p> The list of batch items in the request that could not be updated or appended
     * in the table. Each element in this list contains one item from the request that
     * could not be updated in the table along with the reason why that item could not
     * be updated or appended. </p>
     */
    inline const Aws::Vector<FailedBatchItem>& GetFailedBatchItems() const{ return m_failedBatchItems; }

    /**
     * <p> The list of batch items in the request that could not be updated or appended
     * in the table. Each element in this list contains one item from the request that
     * could not be updated in the table along with the reason why that item could not
     * be updated or appended. </p>
     */
    inline void SetFailedBatchItems(const Aws::Vector<FailedBatchItem>& value) { m_failedBatchItems = value; }

    /**
     * <p> The list of batch items in the request that could not be updated or appended
     * in the table. Each element in this list contains one item from the request that
     * could not be updated in the table along with the reason why that item could not
     * be updated or appended. </p>
     */
    inline void SetFailedBatchItems(Aws::Vector<FailedBatchItem>&& value) { m_failedBatchItems = std::move(value); }

    /**
     * <p> The list of batch items in the request that could not be updated or appended
     * in the table. Each element in this list contains one item from the request that
     * could not be updated in the table along with the reason why that item could not
     * be updated or appended. </p>
     */
    inline BatchUpsertTableRowsResult& WithFailedBatchItems(const Aws::Vector<FailedBatchItem>& value) { SetFailedBatchItems(value); return *this;}

    /**
     * <p> The list of batch items in the request that could not be updated or appended
     * in the table. Each element in this list contains one item from the request that
     * could not be updated in the table along with the reason why that item could not
     * be updated or appended. </p>
     */
    inline BatchUpsertTableRowsResult& WithFailedBatchItems(Aws::Vector<FailedBatchItem>&& value) { SetFailedBatchItems(std::move(value)); return *this;}

    /**
     * <p> The list of batch items in the request that could not be updated or appended
     * in the table. Each element in this list contains one item from the request that
     * could not be updated in the table along with the reason why that item could not
     * be updated or appended. </p>
     */
    inline BatchUpsertTableRowsResult& AddFailedBatchItems(const FailedBatchItem& value) { m_failedBatchItems.push_back(value); return *this; }

    /**
     * <p> The list of batch items in the request that could not be updated or appended
     * in the table. Each element in this list contains one item from the request that
     * could not be updated in the table along with the reason why that item could not
     * be updated or appended. </p>
     */
    inline BatchUpsertTableRowsResult& AddFailedBatchItems(FailedBatchItem&& value) { m_failedBatchItems.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, UpsertRowsResult> m_rows;

    long long m_workbookCursor;

    Aws::Vector<FailedBatchItem> m_failedBatchItems;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
