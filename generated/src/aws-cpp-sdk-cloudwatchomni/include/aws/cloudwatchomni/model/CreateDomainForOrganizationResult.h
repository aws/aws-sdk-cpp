/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/OrganizationDomain.h>
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
class CreateDomainForOrganizationResult {
 public:
  AWS_CLOUDWATCHOMNI_API CreateDomainForOrganizationResult() = default;
  AWS_CLOUDWATCHOMNI_API CreateDomainForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCHOMNI_API CreateDomainForOrganizationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The details of the created organization domain.</p>
   */
  inline const OrganizationDomain& GetOrganizationDomain() const { return m_organizationDomain; }
  template <typename OrganizationDomainT = OrganizationDomain>
  void SetOrganizationDomain(OrganizationDomainT&& value) {
    m_organizationDomainHasBeenSet = true;
    m_organizationDomain = std::forward<OrganizationDomainT>(value);
  }
  template <typename OrganizationDomainT = OrganizationDomain>
  CreateDomainForOrganizationResult& WithOrganizationDomain(OrganizationDomainT&& value) {
    SetOrganizationDomain(std::forward<OrganizationDomainT>(value));
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
  CreateDomainForOrganizationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  OrganizationDomain m_organizationDomain;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_organizationDomainHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
