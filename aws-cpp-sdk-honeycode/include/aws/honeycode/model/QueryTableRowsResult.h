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
  class QueryTableRowsResult
  {
  public:
    AWS_HONEYCODE_API QueryTableRowsResult();
    AWS_HONEYCODE_API QueryTableRowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HONEYCODE_API QueryTableRowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline QueryTableRowsResult& WithColumnIds(const Aws::Vector<Aws::String>& value) { SetColumnIds(value); return *this;}

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline QueryTableRowsResult& WithColumnIds(Aws::Vector<Aws::String>&& value) { SetColumnIds(std::move(value)); return *this;}

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline QueryTableRowsResult& AddColumnIds(const Aws::String& value) { m_columnIds.push_back(value); return *this; }

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline QueryTableRowsResult& AddColumnIds(Aws::String&& value) { m_columnIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of columns in the table whose row data is returned in the result.
     * </p>
     */
    inline QueryTableRowsResult& AddColumnIds(const char* value) { m_columnIds.push_back(value); return *this; }


    /**
     * <p> The list of rows in the table that match the query filter. </p>
     */
    inline const Aws::Vector<TableRow>& GetRows() const{ return m_rows; }

    /**
     * <p> The list of rows in the table that match the query filter. </p>
     */
    inline void SetRows(const Aws::Vector<TableRow>& value) { m_rows = value; }

    /**
     * <p> The list of rows in the table that match the query filter. </p>
     */
    inline void SetRows(Aws::Vector<TableRow>&& value) { m_rows = std::move(value); }

    /**
     * <p> The list of rows in the table that match the query filter. </p>
     */
    inline QueryTableRowsResult& WithRows(const Aws::Vector<TableRow>& value) { SetRows(value); return *this;}

    /**
     * <p> The list of rows in the table that match the query filter. </p>
     */
    inline QueryTableRowsResult& WithRows(Aws::Vector<TableRow>&& value) { SetRows(std::move(value)); return *this;}

    /**
     * <p> The list of rows in the table that match the query filter. </p>
     */
    inline QueryTableRowsResult& AddRows(const TableRow& value) { m_rows.push_back(value); return *this; }

    /**
     * <p> The list of rows in the table that match the query filter. </p>
     */
    inline QueryTableRowsResult& AddRows(TableRow&& value) { m_rows.push_back(std::move(value)); return *this; }


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
    inline QueryTableRowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline QueryTableRowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline QueryTableRowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline QueryTableRowsResult& WithWorkbookCursor(long long value) { SetWorkbookCursor(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_columnIds;

    Aws::Vector<TableRow> m_rows;

    Aws::String m_nextToken;

    long long m_workbookCursor;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
