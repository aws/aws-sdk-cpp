/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTable.h>
#include <aws/core/http/HttpResponse.h>
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
namespace CleanRooms {
namespace Model {
class GetIntermediateTableResult {
 public:
  AWS_CLEANROOMS_API GetIntermediateTableResult() = default;
  AWS_CLEANROOMS_API GetIntermediateTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLEANROOMS_API GetIntermediateTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The intermediate table retrieved.</p>
   */
  inline const IntermediateTable& GetIntermediateTable() const { return m_intermediateTable; }
  template <typename IntermediateTableT = IntermediateTable>
  void SetIntermediateTable(IntermediateTableT&& value) {
    m_intermediateTableHasBeenSet = true;
    m_intermediateTable = std::forward<IntermediateTableT>(value);
  }
  template <typename IntermediateTableT = IntermediateTable>
  GetIntermediateTableResult& WithIntermediateTable(IntermediateTableT&& value) {
    SetIntermediateTable(std::forward<IntermediateTableT>(value));
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
  GetIntermediateTableResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  IntermediateTable m_intermediateTable;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_intermediateTableHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
