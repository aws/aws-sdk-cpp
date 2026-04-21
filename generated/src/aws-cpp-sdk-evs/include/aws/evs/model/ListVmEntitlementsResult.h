/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/VmEntitlement.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EVS {
namespace Model {
class ListVmEntitlementsResult {
 public:
  AWS_EVS_API ListVmEntitlementsResult() = default;
  AWS_EVS_API ListVmEntitlementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EVS_API ListVmEntitlementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A unique pagination token for next page results. Make the call again using
   * this token to retrieve the next page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListVmEntitlementsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of entitlements for virtual machines in the environment.</p>
   */
  inline const Aws::Vector<VmEntitlement>& GetEntitlements() const { return m_entitlements; }
  template <typename EntitlementsT = Aws::Vector<VmEntitlement>>
  void SetEntitlements(EntitlementsT&& value) {
    m_entitlementsHasBeenSet = true;
    m_entitlements = std::forward<EntitlementsT>(value);
  }
  template <typename EntitlementsT = Aws::Vector<VmEntitlement>>
  ListVmEntitlementsResult& WithEntitlements(EntitlementsT&& value) {
    SetEntitlements(std::forward<EntitlementsT>(value));
    return *this;
  }
  template <typename EntitlementsT = VmEntitlement>
  ListVmEntitlementsResult& AddEntitlements(EntitlementsT&& value) {
    m_entitlementsHasBeenSet = true;
    m_entitlements.emplace_back(std::forward<EntitlementsT>(value));
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
  ListVmEntitlementsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<VmEntitlement> m_entitlements;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_entitlementsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
