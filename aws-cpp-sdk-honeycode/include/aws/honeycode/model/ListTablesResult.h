/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/Table.h>
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
  class ListTablesResult
  {
  public:
    AWS_HONEYCODE_API ListTablesResult();
    AWS_HONEYCODE_API ListTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HONEYCODE_API ListTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of tables in the workbook. </p>
     */
    inline const Aws::Vector<Table>& GetTables() const{ return m_tables; }

    /**
     * <p> The list of tables in the workbook. </p>
     */
    inline void SetTables(const Aws::Vector<Table>& value) { m_tables = value; }

    /**
     * <p> The list of tables in the workbook. </p>
     */
    inline void SetTables(Aws::Vector<Table>&& value) { m_tables = std::move(value); }

    /**
     * <p> The list of tables in the workbook. </p>
     */
    inline ListTablesResult& WithTables(const Aws::Vector<Table>& value) { SetTables(value); return *this;}

    /**
     * <p> The list of tables in the workbook. </p>
     */
    inline ListTablesResult& WithTables(Aws::Vector<Table>&& value) { SetTables(std::move(value)); return *this;}

    /**
     * <p> The list of tables in the workbook. </p>
     */
    inline ListTablesResult& AddTables(const Table& value) { m_tables.push_back(value); return *this; }

    /**
     * <p> The list of tables in the workbook. </p>
     */
    inline ListTablesResult& AddTables(Table&& value) { m_tables.push_back(std::move(value)); return *this; }


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
    inline ListTablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline ListTablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the request has been loaded. </p>
     */
    inline ListTablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListTablesResult& WithWorkbookCursor(long long value) { SetWorkbookCursor(value); return *this;}

  private:

    Aws::Vector<Table> m_tables;

    Aws::String m_nextToken;

    long long m_workbookCursor;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
