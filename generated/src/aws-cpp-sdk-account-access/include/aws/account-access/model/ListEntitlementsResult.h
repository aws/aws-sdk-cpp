/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/EntitlementsListMember.h>
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
namespace AccountAccess {
namespace Model {
class ListEntitlementsResult {
 public:
  AWS_ACCOUNTACCESS_API ListEntitlementsResult() = default;
  AWS_ACCOUNTACCESS_API ListEntitlementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCOUNTACCESS_API ListEntitlementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of entitlements for the specified application.</p>
   */
  inline const Aws::Vector<EntitlementsListMember>& GetEntitlements() const { return m_entitlements; }
  template <typename EntitlementsT = Aws::Vector<EntitlementsListMember>>
  void SetEntitlements(EntitlementsT&& value) {
    m_entitlementsHasBeenSet = true;
    m_entitlements = std::forward<EntitlementsT>(value);
  }
  template <typename EntitlementsT = Aws::Vector<EntitlementsListMember>>
  ListEntitlementsResult& WithEntitlements(EntitlementsT&& value) {
    SetEntitlements(std::forward<EntitlementsT>(value));
    return *this;
  }
  template <typename EntitlementsT = EntitlementsListMember>
  ListEntitlementsResult& AddEntitlements(EntitlementsT&& value) {
    m_entitlementsHasBeenSet = true;
    m_entitlements.emplace_back(std::forward<EntitlementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use in a subsequent request to retrieve the next set
   * of results. This value is null when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEntitlementsResult& WithNextToken(NextTokenT&& value) {
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
  ListEntitlementsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<EntitlementsListMember> m_entitlements;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_entitlementsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
