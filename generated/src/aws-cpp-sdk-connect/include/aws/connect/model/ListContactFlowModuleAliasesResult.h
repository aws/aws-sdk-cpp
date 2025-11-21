/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowModuleAliasSummary.h>
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
class ListContactFlowModuleAliasesResult {
 public:
  AWS_CONNECT_API ListContactFlowModuleAliasesResult() = default;
  AWS_CONNECT_API ListContactFlowModuleAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListContactFlowModuleAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the flow module aliases.</p>
   */
  inline const Aws::Vector<ContactFlowModuleAliasSummary>& GetContactFlowModuleAliasSummaryList() const {
    return m_contactFlowModuleAliasSummaryList;
  }
  template <typename ContactFlowModuleAliasSummaryListT = Aws::Vector<ContactFlowModuleAliasSummary>>
  void SetContactFlowModuleAliasSummaryList(ContactFlowModuleAliasSummaryListT&& value) {
    m_contactFlowModuleAliasSummaryListHasBeenSet = true;
    m_contactFlowModuleAliasSummaryList = std::forward<ContactFlowModuleAliasSummaryListT>(value);
  }
  template <typename ContactFlowModuleAliasSummaryListT = Aws::Vector<ContactFlowModuleAliasSummary>>
  ListContactFlowModuleAliasesResult& WithContactFlowModuleAliasSummaryList(ContactFlowModuleAliasSummaryListT&& value) {
    SetContactFlowModuleAliasSummaryList(std::forward<ContactFlowModuleAliasSummaryListT>(value));
    return *this;
  }
  template <typename ContactFlowModuleAliasSummaryListT = ContactFlowModuleAliasSummary>
  ListContactFlowModuleAliasesResult& AddContactFlowModuleAliasSummaryList(ContactFlowModuleAliasSummaryListT&& value) {
    m_contactFlowModuleAliasSummaryListHasBeenSet = true;
    m_contactFlowModuleAliasSummaryList.emplace_back(std::forward<ContactFlowModuleAliasSummaryListT>(value));
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
  ListContactFlowModuleAliasesResult& WithNextToken(NextTokenT&& value) {
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
  ListContactFlowModuleAliasesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ContactFlowModuleAliasSummary> m_contactFlowModuleAliasSummaryList;
  bool m_contactFlowModuleAliasSummaryListHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
