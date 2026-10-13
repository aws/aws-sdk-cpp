/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowAliasSummary.h>
#include <aws/core/http/HttpResponse.h>
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
class ListContactFlowAliasesResult {
 public:
  AWS_CONNECT_API ListContactFlowAliasesResult() = default;
  AWS_CONNECT_API ListContactFlowAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListContactFlowAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the flow aliases.</p>
   */
  inline const Aws::Vector<ContactFlowAliasSummary>& GetContactFlowAliasSummaryList() const { return m_contactFlowAliasSummaryList; }
  template <typename ContactFlowAliasSummaryListT = Aws::Vector<ContactFlowAliasSummary>>
  void SetContactFlowAliasSummaryList(ContactFlowAliasSummaryListT&& value) {
    m_contactFlowAliasSummaryListHasBeenSet = true;
    m_contactFlowAliasSummaryList = std::forward<ContactFlowAliasSummaryListT>(value);
  }
  template <typename ContactFlowAliasSummaryListT = Aws::Vector<ContactFlowAliasSummary>>
  ListContactFlowAliasesResult& WithContactFlowAliasSummaryList(ContactFlowAliasSummaryListT&& value) {
    SetContactFlowAliasSummaryList(std::forward<ContactFlowAliasSummaryListT>(value));
    return *this;
  }
  template <typename ContactFlowAliasSummaryListT = ContactFlowAliasSummary>
  ListContactFlowAliasesResult& AddContactFlowAliasSummaryList(ContactFlowAliasSummaryListT&& value) {
    m_contactFlowAliasSummaryListHasBeenSet = true;
    m_contactFlowAliasSummaryList.emplace_back(std::forward<ContactFlowAliasSummaryListT>(value));
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
  ListContactFlowAliasesResult& WithNextToken(NextTokenT&& value) {
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
  ListContactFlowAliasesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ContactFlowAliasSummary> m_contactFlowAliasSummaryList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contactFlowAliasSummaryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
