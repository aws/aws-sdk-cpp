/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/OrganizationAccessGrant.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {
class GetDomainAccessGrantForOrganizationResult {
 public:
  AWS_CLOUDWATCHOMNI_API GetDomainAccessGrantForOrganizationResult() = default;
  AWS_CLOUDWATCHOMNI_API GetDomainAccessGrantForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCHOMNI_API GetDomainAccessGrantForOrganizationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The retrieved organization access grant.</p>
   */
  inline const OrganizationAccessGrant& GetAccessGrant() const { return m_accessGrant; }
  template <typename AccessGrantT = OrganizationAccessGrant>
  void SetAccessGrant(AccessGrantT&& value) {
    m_accessGrantHasBeenSet = true;
    m_accessGrant = std::forward<AccessGrantT>(value);
  }
  template <typename AccessGrantT = OrganizationAccessGrant>
  GetDomainAccessGrantForOrganizationResult& WithAccessGrant(AccessGrantT&& value) {
    SetAccessGrant(std::forward<AccessGrantT>(value));
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
  GetDomainAccessGrantForOrganizationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  OrganizationAccessGrant m_accessGrant;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accessGrantHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
