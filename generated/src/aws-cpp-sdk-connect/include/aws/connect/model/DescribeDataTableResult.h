/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTable.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
class DescribeDataTableResult {
 public:
  AWS_CONNECT_API DescribeDataTableResult() = default;
  AWS_CONNECT_API DescribeDataTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API DescribeDataTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The complete data table information including metadata, configuration, and
   * versioning details.</p>
   */
  inline const DataTable& GetDataTable() const { return m_dataTable; }
  template <typename DataTableT = DataTable>
  void SetDataTable(DataTableT&& value) {
    m_dataTableHasBeenSet = true;
    m_dataTable = std::forward<DataTableT>(value);
  }
  template <typename DataTableT = DataTable>
  DescribeDataTableResult& WithDataTable(DataTableT&& value) {
    SetDataTable(std::forward<DataTableT>(value));
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
  DescribeDataTableResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  DataTable m_dataTable;

  Aws::String m_requestId;
  bool m_dataTableHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
