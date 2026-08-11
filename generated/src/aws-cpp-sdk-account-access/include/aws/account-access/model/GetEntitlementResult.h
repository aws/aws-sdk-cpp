/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/EntitlementDetails.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
class GetEntitlementResult {
 public:
  AWS_ACCOUNTACCESS_API GetEntitlementResult() = default;
  AWS_ACCOUNTACCESS_API GetEntitlementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCOUNTACCESS_API GetEntitlementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the application that the entitlement belongs to.</p>
   */
  inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
  template <typename ApplicationArnT = Aws::String>
  void SetApplicationArn(ApplicationArnT&& value) {
    m_applicationArnHasBeenSet = true;
    m_applicationArn = std::forward<ApplicationArnT>(value);
  }
  template <typename ApplicationArnT = Aws::String>
  GetEntitlementResult& WithApplicationArn(ApplicationArnT&& value) {
    SetApplicationArn(std::forward<ApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the entitlement.</p>
   */
  inline const Aws::String& GetEntitlementId() const { return m_entitlementId; }
  template <typename EntitlementIdT = Aws::String>
  void SetEntitlementId(EntitlementIdT&& value) {
    m_entitlementIdHasBeenSet = true;
    m_entitlementId = std::forward<EntitlementIdT>(value);
  }
  template <typename EntitlementIdT = Aws::String>
  GetEntitlementResult& WithEntitlementId(EntitlementIdT&& value) {
    SetEntitlementId(std::forward<EntitlementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entitlement details, including the principal, IAM role, and target
   * account.</p>
   */
  inline const EntitlementDetails& GetEntitlement() const { return m_entitlement; }
  template <typename EntitlementT = EntitlementDetails>
  void SetEntitlement(EntitlementT&& value) {
    m_entitlementHasBeenSet = true;
    m_entitlement = std::forward<EntitlementT>(value);
  }
  template <typename EntitlementT = EntitlementDetails>
  GetEntitlementResult& WithEntitlement(EntitlementT&& value) {
    SetEntitlement(std::forward<EntitlementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the entitlement was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetEntitlementResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
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
  GetEntitlementResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_applicationArn;

  Aws::String m_entitlementId;

  EntitlementDetails m_entitlement;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_applicationArnHasBeenSet = false;
  bool m_entitlementIdHasBeenSet = false;
  bool m_entitlementHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
