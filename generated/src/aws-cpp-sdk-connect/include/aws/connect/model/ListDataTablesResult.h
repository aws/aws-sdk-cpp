/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class ListDataTablesResult {
 public:
  AWS_CONNECT_API ListDataTablesResult() = default;
  AWS_CONNECT_API ListDataTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListDataTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Specify the pagination token from a previous request to retrieve the next
   * page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDataTablesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of data table summaries containing basic information about each table
   * including ID, ARN, name, and modification details.</p>
   */
  inline const Aws::Vector<DataTableSummary>& GetDataTableSummaryList() const { return m_dataTableSummaryList; }
  template <typename DataTableSummaryListT = Aws::Vector<DataTableSummary>>
  void SetDataTableSummaryList(DataTableSummaryListT&& value) {
    m_dataTableSummaryListHasBeenSet = true;
    m_dataTableSummaryList = std::forward<DataTableSummaryListT>(value);
  }
  template <typename DataTableSummaryListT = Aws::Vector<DataTableSummary>>
  ListDataTablesResult& WithDataTableSummaryList(DataTableSummaryListT&& value) {
    SetDataTableSummaryList(std::forward<DataTableSummaryListT>(value));
    return *this;
  }
  template <typename DataTableSummaryListT = DataTableSummary>
  ListDataTablesResult& AddDataTableSummaryList(DataTableSummaryListT&& value) {
    m_dataTableSummaryListHasBeenSet = true;
    m_dataTableSummaryList.emplace_back(std::forward<DataTableSummaryListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListDataTablesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<DataTableSummary> m_dataTableSummaryList;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_dataTableSummaryListHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
