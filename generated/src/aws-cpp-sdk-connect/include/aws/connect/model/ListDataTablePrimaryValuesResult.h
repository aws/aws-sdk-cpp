/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RecordPrimaryValue.h>
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
class ListDataTablePrimaryValuesResult {
 public:
  AWS_CONNECT_API ListDataTablePrimaryValuesResult() = default;
  AWS_CONNECT_API ListDataTablePrimaryValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListDataTablePrimaryValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListDataTablePrimaryValuesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of primary value combinations with their record IDs and modification
   * metadata.</p>
   */
  inline const Aws::Vector<RecordPrimaryValue>& GetPrimaryValuesList() const { return m_primaryValuesList; }
  template <typename PrimaryValuesListT = Aws::Vector<RecordPrimaryValue>>
  void SetPrimaryValuesList(PrimaryValuesListT&& value) {
    m_primaryValuesListHasBeenSet = true;
    m_primaryValuesList = std::forward<PrimaryValuesListT>(value);
  }
  template <typename PrimaryValuesListT = Aws::Vector<RecordPrimaryValue>>
  ListDataTablePrimaryValuesResult& WithPrimaryValuesList(PrimaryValuesListT&& value) {
    SetPrimaryValuesList(std::forward<PrimaryValuesListT>(value));
    return *this;
  }
  template <typename PrimaryValuesListT = RecordPrimaryValue>
  ListDataTablePrimaryValuesResult& AddPrimaryValuesList(PrimaryValuesListT&& value) {
    m_primaryValuesListHasBeenSet = true;
    m_primaryValuesList.emplace_back(std::forward<PrimaryValuesListT>(value));
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
  ListDataTablePrimaryValuesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<RecordPrimaryValue> m_primaryValuesList;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_primaryValuesListHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
