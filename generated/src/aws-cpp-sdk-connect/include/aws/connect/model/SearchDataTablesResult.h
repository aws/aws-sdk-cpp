/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTable.h>
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
class SearchDataTablesResult {
 public:
  AWS_CONNECT_API SearchDataTablesResult() = default;
  AWS_CONNECT_API SearchDataTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API SearchDataTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of data tables matching the search criteria with the same structure
   * as DescribeTable except Version, VersionDescription, and LockVersion are
   * omitted.</p>
   */
  inline const Aws::Vector<DataTable>& GetDataTables() const { return m_dataTables; }
  template <typename DataTablesT = Aws::Vector<DataTable>>
  void SetDataTables(DataTablesT&& value) {
    m_dataTablesHasBeenSet = true;
    m_dataTables = std::forward<DataTablesT>(value);
  }
  template <typename DataTablesT = Aws::Vector<DataTable>>
  SearchDataTablesResult& WithDataTables(DataTablesT&& value) {
    SetDataTables(std::forward<DataTablesT>(value));
    return *this;
  }
  template <typename DataTablesT = DataTable>
  SearchDataTablesResult& AddDataTables(DataTablesT&& value) {
    m_dataTablesHasBeenSet = true;
    m_dataTables.emplace_back(std::forward<DataTablesT>(value));
    return *this;
  }
  ///@}

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
  SearchDataTablesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approximate number of data tables that matched the search criteria.</p>
   */
  inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
  inline void SetApproximateTotalCount(long long value) {
    m_approximateTotalCountHasBeenSet = true;
    m_approximateTotalCount = value;
  }
  inline SearchDataTablesResult& WithApproximateTotalCount(long long value) {
    SetApproximateTotalCount(value);
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
  SearchDataTablesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<DataTable> m_dataTables;
  bool m_dataTablesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  long long m_approximateTotalCount{0};
  bool m_approximateTotalCountHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
