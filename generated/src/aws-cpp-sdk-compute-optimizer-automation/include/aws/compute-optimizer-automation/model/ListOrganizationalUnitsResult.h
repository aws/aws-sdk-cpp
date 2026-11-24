/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/OrganizationalUnitInfo.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ComputeOptimizerAutomation {
namespace Model {
class ListOrganizationalUnitsResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListOrganizationalUnitsResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListOrganizationalUnitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListOrganizationalUnitsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p> The organizational units and organization root returned in this page of
   * results, including the organization rule mode that applies to each. </p>
   */
  inline const Aws::Vector<OrganizationalUnitInfo>& GetOrganizationalUnits() const { return m_organizationalUnits; }
  template <typename OrganizationalUnitsT = Aws::Vector<OrganizationalUnitInfo>>
  void SetOrganizationalUnits(OrganizationalUnitsT&& value) {
    m_organizationalUnitsHasBeenSet = true;
    m_organizationalUnits = std::forward<OrganizationalUnitsT>(value);
  }
  template <typename OrganizationalUnitsT = Aws::Vector<OrganizationalUnitInfo>>
  ListOrganizationalUnitsResult& WithOrganizationalUnits(OrganizationalUnitsT&& value) {
    SetOrganizationalUnits(std::forward<OrganizationalUnitsT>(value));
    return *this;
  }
  template <typename OrganizationalUnitsT = OrganizationalUnitInfo>
  ListOrganizationalUnitsResult& AddOrganizationalUnits(OrganizationalUnitsT&& value) {
    m_organizationalUnitsHasBeenSet = true;
    m_organizationalUnits.emplace_back(std::forward<OrganizationalUnitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token to use to retrieve the next page of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListOrganizationalUnitsResult& WithNextToken(NextTokenT&& value) {
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
  ListOrganizationalUnitsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<OrganizationalUnitInfo> m_organizationalUnits;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_organizationalUnitsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
