/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowModuleVersionSummary.h>
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
class ListContactFlowModuleVersionsResult {
 public:
  AWS_CONNECT_API ListContactFlowModuleVersionsResult() = default;
  AWS_CONNECT_API ListContactFlowModuleVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListContactFlowModuleVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the flow module versions.</p>
   */
  inline const Aws::Vector<ContactFlowModuleVersionSummary>& GetContactFlowModuleVersionSummaryList() const {
    return m_contactFlowModuleVersionSummaryList;
  }
  template <typename ContactFlowModuleVersionSummaryListT = Aws::Vector<ContactFlowModuleVersionSummary>>
  void SetContactFlowModuleVersionSummaryList(ContactFlowModuleVersionSummaryListT&& value) {
    m_contactFlowModuleVersionSummaryListHasBeenSet = true;
    m_contactFlowModuleVersionSummaryList = std::forward<ContactFlowModuleVersionSummaryListT>(value);
  }
  template <typename ContactFlowModuleVersionSummaryListT = Aws::Vector<ContactFlowModuleVersionSummary>>
  ListContactFlowModuleVersionsResult& WithContactFlowModuleVersionSummaryList(ContactFlowModuleVersionSummaryListT&& value) {
    SetContactFlowModuleVersionSummaryList(std::forward<ContactFlowModuleVersionSummaryListT>(value));
    return *this;
  }
  template <typename ContactFlowModuleVersionSummaryListT = ContactFlowModuleVersionSummary>
  ListContactFlowModuleVersionsResult& AddContactFlowModuleVersionSummaryList(ContactFlowModuleVersionSummaryListT&& value) {
    m_contactFlowModuleVersionSummaryListHasBeenSet = true;
    m_contactFlowModuleVersionSummaryList.emplace_back(std::forward<ContactFlowModuleVersionSummaryListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there are additional results, this is the token for the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListContactFlowModuleVersionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListContactFlowModuleVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ContactFlowModuleVersionSummary> m_contactFlowModuleVersionSummaryList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_contactFlowModuleVersionSummaryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
