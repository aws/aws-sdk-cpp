/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/TableColumn.h>
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
  class ListTableColumnsResult
  {
  public:
    AWS_HONEYCODE_API ListTableColumnsResult();
    AWS_HONEYCODE_API ListTableColumnsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HONEYCODE_API ListTableColumnsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of columns in the table. </p>
     */
    inline const Aws::Vector<TableColumn>& GetTableColumns() const{ return m_tableColumns; }

    /**
     * <p> The list of columns in the table. </p>
     */
    inline void SetTableColumns(const Aws::Vector<TableColumn>& value) { m_tableColumns = value; }

    /**
     * <p> The list of columns in the table. </p>
     */
    inline void SetTableColumns(Aws::Vector<TableColumn>&& value) { m_tableColumns = std::move(value); }

    /**
     * <p> The list of columns in the table. </p>
     */
    inline ListTableColumnsResult& WithTableColumns(const Aws::Vector<TableColumn>& value) { SetTableColumns(value); return *this;}

    /**
     * <p> The list of columns in the table. </p>
     */
    inline ListTableColumnsResult& WithTableColumns(Aws::Vector<TableColumn>&& value) { SetTableColumns(std::move(value)); return *this;}

    /**
     * <p> The list of columns in the table. </p>
     */
    inline ListTableColumnsResult& AddTableColumns(const TableColumn& value) { m_tableColumns.push_back(value); return *this; }

    /**
     * <p> The list of columns in the table. </p>
     */
    inline ListTableColumnsResult& AddTableColumns(TableColumn&& value) { m_tableColumns.push_back(std::move(value)); return *this; }


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
    inline ListTableColumnsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline ListTableColumnsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline ListTableColumnsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListTableColumnsResult& WithWorkbookCursor(long long value) { SetWorkbookCursor(value); return *this;}

  private:

    Aws::Vector<TableColumn> m_tableColumns;

    Aws::String m_nextToken;

    long long m_workbookCursor;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
