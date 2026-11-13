/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/account-access-runtime/model/AccessDetails.h>
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
namespace AccountAccessRuntime {
namespace Model {
class ListRolesResult {
 public:
  AWS_ACCOUNTACCESSRUNTIME_API ListRolesResult() = default;
  AWS_ACCOUNTACCESSRUNTIME_API ListRolesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCOUNTACCESSRUNTIME_API ListRolesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of roles that you can access in the tenant. Each entry describes an
   * Amazon Web Services account and a role.</p>
   */
  inline const Aws::Vector<AccessDetails>& GetRoles() const { return m_roles; }
  template <typename RolesT = Aws::Vector<AccessDetails>>
  void SetRoles(RolesT&& value) {
    m_rolesHasBeenSet = true;
    m_roles = std::forward<RolesT>(value);
  }
  template <typename RolesT = Aws::Vector<AccessDetails>>
  ListRolesResult& WithRoles(RolesT&& value) {
    SetRoles(std::forward<RolesT>(value));
    return *this;
  }
  template <typename RolesT = AccessDetails>
  ListRolesResult& AddRoles(RolesT&& value) {
    m_rolesHasBeenSet = true;
    m_roles.emplace_back(std::forward<RolesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to include in a subsequent <code>ListRoles</code>
   * request to retrieve the next page of results. This value is absent when there
   * are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRolesResult& WithNextToken(NextTokenT&& value) {
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
  ListRolesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AccessDetails> m_roles;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rolesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
