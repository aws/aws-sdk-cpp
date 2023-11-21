/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ColumnInfo.h>
#include <aws/iotsitewise/model/Row.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ExecuteQueryResult
  {
  public:
    AWS_IOTSITEWISE_API ExecuteQueryResult();
    AWS_IOTSITEWISE_API ExecuteQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ExecuteQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents a single column in the query results.</p>
     */
    inline const Aws::Vector<ColumnInfo>& GetColumns() const{ return m_columns; }

    /**
     * <p>Represents a single column in the query results.</p>
     */
    inline void SetColumns(const Aws::Vector<ColumnInfo>& value) { m_columns = value; }

    /**
     * <p>Represents a single column in the query results.</p>
     */
    inline void SetColumns(Aws::Vector<ColumnInfo>&& value) { m_columns = std::move(value); }

    /**
     * <p>Represents a single column in the query results.</p>
     */
    inline ExecuteQueryResult& WithColumns(const Aws::Vector<ColumnInfo>& value) { SetColumns(value); return *this;}

    /**
     * <p>Represents a single column in the query results.</p>
     */
    inline ExecuteQueryResult& WithColumns(Aws::Vector<ColumnInfo>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>Represents a single column in the query results.</p>
     */
    inline ExecuteQueryResult& AddColumns(const ColumnInfo& value) { m_columns.push_back(value); return *this; }

    /**
     * <p>Represents a single column in the query results.</p>
     */
    inline ExecuteQueryResult& AddColumns(ColumnInfo&& value) { m_columns.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline const Aws::Vector<Row>& GetRows() const{ return m_rows; }

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline void SetRows(const Aws::Vector<Row>& value) { m_rows = value; }

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline void SetRows(Aws::Vector<Row>&& value) { m_rows = std::move(value); }

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline ExecuteQueryResult& WithRows(const Aws::Vector<Row>& value) { SetRows(value); return *this;}

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline ExecuteQueryResult& WithRows(Aws::Vector<Row>&& value) { SetRows(std::move(value)); return *this;}

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline ExecuteQueryResult& AddRows(const Row& value) { m_rows.push_back(value); return *this; }

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline ExecuteQueryResult& AddRows(Row&& value) { m_rows.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ExecuteQueryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ExecuteQueryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ExecuteQueryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExecuteQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExecuteQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExecuteQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ColumnInfo> m_columns;

    Aws::Vector<Row> m_rows;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
