/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
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
namespace AccountAccess {
namespace Model {
class CreateEntitlementResult {
 public:
  AWS_ACCOUNTACCESS_API CreateEntitlementResult() = default;
  AWS_ACCOUNTACCESS_API CreateEntitlementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCOUNTACCESS_API CreateEntitlementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the created entitlement.</p>
   */
  inline const Aws::String& GetEntitlementId() const { return m_entitlementId; }
  template <typename EntitlementIdT = Aws::String>
  void SetEntitlementId(EntitlementIdT&& value) {
    m_entitlementIdHasBeenSet = true;
    m_entitlementId = std::forward<EntitlementIdT>(value);
  }
  template <typename EntitlementIdT = Aws::String>
  CreateEntitlementResult& WithEntitlementId(EntitlementIdT&& value) {
    SetEntitlementId(std::forward<EntitlementIdT>(value));
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
  CreateEntitlementResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_entitlementId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_entitlementIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
