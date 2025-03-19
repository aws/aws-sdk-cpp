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
    AWS_IOTSITEWISE_API ExecuteQueryResult() = default;
    AWS_IOTSITEWISE_API ExecuteQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ExecuteQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents a single column in the query results.</p>
     */
    inline const Aws::Vector<ColumnInfo>& GetColumns() const { return m_columns; }
    template<typename ColumnsT = Aws::Vector<ColumnInfo>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<ColumnInfo>>
    ExecuteQueryResult& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = ColumnInfo>
    ExecuteQueryResult& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline const Aws::Vector<Row>& GetRows() const { return m_rows; }
    template<typename RowsT = Aws::Vector<Row>>
    void SetRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows = std::forward<RowsT>(value); }
    template<typename RowsT = Aws::Vector<Row>>
    ExecuteQueryResult& WithRows(RowsT&& value) { SetRows(std::forward<RowsT>(value)); return *this;}
    template<typename RowsT = Row>
    ExecuteQueryResult& AddRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows.emplace_back(std::forward<RowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ExecuteQueryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExecuteQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ColumnInfo> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::Vector<Row> m_rows;
    bool m_rowsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
