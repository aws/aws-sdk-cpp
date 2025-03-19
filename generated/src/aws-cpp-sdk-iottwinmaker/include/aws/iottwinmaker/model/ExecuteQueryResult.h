/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/ColumnDescription.h>
#include <aws/iottwinmaker/model/Row.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ExecuteQueryResult
  {
  public:
    AWS_IOTTWINMAKER_API ExecuteQueryResult() = default;
    AWS_IOTTWINMAKER_API ExecuteQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ExecuteQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of ColumnDescription objects.</p>
     */
    inline const Aws::Vector<ColumnDescription>& GetColumnDescriptions() const { return m_columnDescriptions; }
    template<typename ColumnDescriptionsT = Aws::Vector<ColumnDescription>>
    void SetColumnDescriptions(ColumnDescriptionsT&& value) { m_columnDescriptionsHasBeenSet = true; m_columnDescriptions = std::forward<ColumnDescriptionsT>(value); }
    template<typename ColumnDescriptionsT = Aws::Vector<ColumnDescription>>
    ExecuteQueryResult& WithColumnDescriptions(ColumnDescriptionsT&& value) { SetColumnDescriptions(std::forward<ColumnDescriptionsT>(value)); return *this;}
    template<typename ColumnDescriptionsT = ColumnDescription>
    ExecuteQueryResult& AddColumnDescriptions(ColumnDescriptionsT&& value) { m_columnDescriptionsHasBeenSet = true; m_columnDescriptions.emplace_back(std::forward<ColumnDescriptionsT>(value)); return *this; }
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

    Aws::Vector<ColumnDescription> m_columnDescriptions;
    bool m_columnDescriptionsHasBeenSet = false;

    Aws::Vector<Row> m_rows;
    bool m_rowsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
