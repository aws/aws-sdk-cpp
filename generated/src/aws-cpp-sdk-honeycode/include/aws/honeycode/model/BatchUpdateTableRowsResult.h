/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchUpdateTableRowsResult
  {
  public:
    AWS_HONEYCODE_API BatchUpdateTableRowsResult();
    AWS_HONEYCODE_API BatchUpdateTableRowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HONEYCODE_API BatchUpdateTableRowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline BatchUpdateTableRowsResult& WithWorkbookCursor(long long value) { SetWorkbookCursor(value); return *this;}


    /**
     * <p> The list of batch items in the request that could not be updated in the
     * table. Each element in this list contains one item from the request that could
     * not be updated in the table along with the reason why that item could not be
     * updated. </p>
     */
    inline const Aws::Vector<FailedBatchItem>& GetFailedBatchItems() const{ return m_failedBatchItems; }

    /**
     * <p> The list of batch items in the request that could not be updated in the
     * table. Each element in this list contains one item from the request that could
     * not be updated in the table along with the reason why that item could not be
     * updated. </p>
     */
    inline void SetFailedBatchItems(const Aws::Vector<FailedBatchItem>& value) { m_failedBatchItems = value; }

    /**
     * <p> The list of batch items in the request that could not be updated in the
     * table. Each element in this list contains one item from the request that could
     * not be updated in the table along with the reason why that item could not be
     * updated. </p>
     */
    inline void SetFailedBatchItems(Aws::Vector<FailedBatchItem>&& value) { m_failedBatchItems = std::move(value); }

    /**
     * <p> The list of batch items in the request that could not be updated in the
     * table. Each element in this list contains one item from the request that could
     * not be updated in the table along with the reason why that item could not be
     * updated. </p>
     */
    inline BatchUpdateTableRowsResult& WithFailedBatchItems(const Aws::Vector<FailedBatchItem>& value) { SetFailedBatchItems(value); return *this;}

    /**
     * <p> The list of batch items in the request that could not be updated in the
     * table. Each element in this list contains one item from the request that could
     * not be updated in the table along with the reason why that item could not be
     * updated. </p>
     */
    inline BatchUpdateTableRowsResult& WithFailedBatchItems(Aws::Vector<FailedBatchItem>&& value) { SetFailedBatchItems(std::move(value)); return *this;}

    /**
     * <p> The list of batch items in the request that could not be updated in the
     * table. Each element in this list contains one item from the request that could
     * not be updated in the table along with the reason why that item could not be
     * updated. </p>
     */
    inline BatchUpdateTableRowsResult& AddFailedBatchItems(const FailedBatchItem& value) { m_failedBatchItems.push_back(value); return *this; }

    /**
     * <p> The list of batch items in the request that could not be updated in the
     * table. Each element in this list contains one item from the request that could
     * not be updated in the table along with the reason why that item could not be
     * updated. </p>
     */
    inline BatchUpdateTableRowsResult& AddFailedBatchItems(FailedBatchItem&& value) { m_failedBatchItems.push_back(std::move(value)); return *this; }

  private:

    long long m_workbookCursor;

    Aws::Vector<FailedBatchItem> m_failedBatchItems;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
