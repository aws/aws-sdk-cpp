/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/TableRow.h>
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
  class ListTableRowsResult
  {
  public:
    AWS_HONEYCODE_API ListTableRowsResult();
    AWS_HONEYCODE_API ListTableRowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HONEYCODE_API ListTableRowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnIds() const{ return m_columnIds; }

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline void SetColumnIds(const Aws::Vector<Aws::String>& value) { m_columnIds = value; }

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline void SetColumnIds(Aws::Vector<Aws::String>&& value) { m_columnIds = std::move(value); }

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline ListTableRowsResult& WithColumnIds(const Aws::Vector<Aws::String>& value) { SetColumnIds(value); return *this;}

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline ListTableRowsResult& WithColumnIds(Aws::Vector<Aws::String>&& value) { SetColumnIds(std::move(value)); return *this;}

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline ListTableRowsResult& AddColumnIds(const Aws::String& value) { m_columnIds.push_back(value); return *this; }

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline ListTableRowsResult& AddColumnIds(Aws::String&& value) { m_columnIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline ListTableRowsResult& AddColumnIds(const char* value) { m_columnIds.push_back(value); return *this; }


    /**
     * <p> The list of rows in the table. Note that this result is paginated, so this
     * list contains a maximum of 100 rows. </p>
     */
    inline const Aws::Vector<TableRow>& GetRows() const{ return m_rows; }

    /**
     * <p> The list of rows in the table. Note that this result is paginated, so this
     * list contains a maximum of 100 rows. </p>
     */
    inline void SetRows(const Aws::Vector<TableRow>& value) { m_rows = value; }

    /**
     * <p> The list of rows in the table. Note that this result is paginated, so this
     * list contains a maximum of 100 rows. </p>
     */
    inline void SetRows(Aws::Vector<TableRow>&& value) { m_rows = std::move(value); }

    /**
     * <p> The list of rows in the table. Note that this result is paginated, so this
     * list contains a maximum of 100 rows. </p>
     */
    inline ListTableRowsResult& WithRows(const Aws::Vector<TableRow>& value) { SetRows(value); return *this;}

    /**
     * <p> The list of rows in the table. Note that this result is paginated, so this
     * list contains a maximum of 100 rows. </p>
     */
    inline ListTableRowsResult& WithRows(Aws::Vector<TableRow>&& value) { SetRows(std::move(value)); return *this;}

    /**
     * <p> The list of rows in the table. Note that this result is paginated, so this
     * list contains a maximum of 100 rows. </p>
     */
    inline ListTableRowsResult& AddRows(const TableRow& value) { m_rows.push_back(value); return *this; }

    /**
     * <p> The list of rows in the table. Note that this result is paginated, so this
     * list contains a maximum of 100 rows. </p>
     */
    inline ListTableRowsResult& AddRows(TableRow&& value) { m_rows.push_back(std::move(value)); return *this; }


    /**
     * <p> The list of row ids included in the request that were not found in the
     * table. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRowIdsNotFound() const{ return m_rowIdsNotFound; }

    /**
     * <p> The list of row ids included in the request that were not found in the
     * table. </p>
     */
    inline void SetRowIdsNotFound(const Aws::Vector<Aws::String>& value) { m_rowIdsNotFound = value; }

    /**
     * <p> The list of row ids included in the request that were not found in the
     * table. </p>
     */
    inline void SetRowIdsNotFound(Aws::Vector<Aws::String>&& value) { m_rowIdsNotFound = std::move(value); }

    /**
     * <p> The list of row ids included in the request that were not found in the
     * table. </p>
     */
    inline ListTableRowsResult& WithRowIdsNotFound(const Aws::Vector<Aws::String>& value) { SetRowIdsNotFound(value); return *this;}

    /**
     * <p> The list of row ids included in the request that were not found in the
     * table. </p>
     */
    inline ListTableRowsResult& WithRowIdsNotFound(Aws::Vector<Aws::String>&& value) { SetRowIdsNotFound(std::move(value)); return *this;}

    /**
     * <p> The list of row ids included in the request that were not found in the
     * table. </p>
     */
    inline ListTableRowsResult& AddRowIdsNotFound(const Aws::String& value) { m_rowIdsNotFound.push_back(value); return *this; }

    /**
     * <p> The list of row ids included in the request that were not found in the
     * table. </p>
     */
    inline ListTableRowsResult& AddRowIdsNotFound(Aws::String&& value) { m_rowIdsNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of row ids included in the request that were not found in the
     * table. </p>
     */
    inline ListTableRowsResult& AddRowIdsNotFound(const char* value) { m_rowIdsNotFound.push_back(value); return *this; }


    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline ListTableRowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline ListTableRowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline ListTableRowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Indicates the cursor of the workbook at which the data returned by this
     * request is read. Workbook cursor keeps increasing with every update and the
     * increments are not sequential. </p>
     */
    inline long long GetWorkbookCursor() const{ return m_workbookCursor; }

    /**
     * <p> Indicates the cursor of the workbook at which the data returned by this
     * request is read. Workbook cursor keeps increasing with every update and the
     * increments are not sequential. </p>
     */
    inline void SetWorkbookCursor(long long value) { m_workbookCursor = value; }

    /**
     * <p> Indicates the cursor of the workbook at which the data returned by this
     * request is read. Workbook cursor keeps increasing with every update and the
     * increments are not sequential. </p>
     */
    inline ListTableRowsResult& WithWorkbookCursor(long long value) { SetWorkbookCursor(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_columnIds;

    Aws::Vector<TableRow> m_rows;

    Aws::Vector<Aws::String> m_rowIdsNotFound;

    Aws::String m_nextToken;

    long long m_workbookCursor;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
