/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/OrganizationEnrollmentConfiguration.h>
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
class ListOrganizationEnrollmentConfigurationsResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListOrganizationEnrollmentConfigurationsResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListOrganizationEnrollmentConfigurationsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListOrganizationEnrollmentConfigurationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p> The organization enrollment configurations stored on each target in this
   * page of results. </p>
   */
  inline const Aws::Vector<OrganizationEnrollmentConfiguration>& GetOrganizationEnrollmentConfigurations() const {
    return m_organizationEnrollmentConfigurations;
  }
  template <typename OrganizationEnrollmentConfigurationsT = Aws::Vector<OrganizationEnrollmentConfiguration>>
  void SetOrganizationEnrollmentConfigurations(OrganizationEnrollmentConfigurationsT&& value) {
    m_organizationEnrollmentConfigurationsHasBeenSet = true;
    m_organizationEnrollmentConfigurations = std::forward<OrganizationEnrollmentConfigurationsT>(value);
  }
  template <typename OrganizationEnrollmentConfigurationsT = Aws::Vector<OrganizationEnrollmentConfiguration>>
  ListOrganizationEnrollmentConfigurationsResult& WithOrganizationEnrollmentConfigurations(OrganizationEnrollmentConfigurationsT&& value) {
    SetOrganizationEnrollmentConfigurations(std::forward<OrganizationEnrollmentConfigurationsT>(value));
    return *this;
  }
  template <typename OrganizationEnrollmentConfigurationsT = OrganizationEnrollmentConfiguration>
  ListOrganizationEnrollmentConfigurationsResult& AddOrganizationEnrollmentConfigurations(OrganizationEnrollmentConfigurationsT&& value) {
    m_organizationEnrollmentConfigurationsHasBeenSet = true;
    m_organizationEnrollmentConfigurations.emplace_back(std::forward<OrganizationEnrollmentConfigurationsT>(value));
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
  ListOrganizationEnrollmentConfigurationsResult& WithNextToken(NextTokenT&& value) {
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
  ListOrganizationEnrollmentConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<OrganizationEnrollmentConfiguration> m_organizationEnrollmentConfigurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_organizationEnrollmentConfigurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
