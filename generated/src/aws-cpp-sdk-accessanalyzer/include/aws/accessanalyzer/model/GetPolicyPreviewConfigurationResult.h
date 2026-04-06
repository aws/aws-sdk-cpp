/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/PolicyPreviewConfiguration.h>
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
namespace AccessAnalyzer {
namespace Model {
class GetPolicyPreviewConfigurationResult {
 public:
  AWS_ACCESSANALYZER_API GetPolicyPreviewConfigurationResult() = default;
  AWS_ACCESSANALYZER_API GetPolicyPreviewConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCESSANALYZER_API GetPolicyPreviewConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of policy preview configurations for the account.</p>
   */
  inline const Aws::Vector<PolicyPreviewConfiguration>& GetPolicyPreviewConfigurations() const { return m_policyPreviewConfigurations; }
  template <typename PolicyPreviewConfigurationsT = Aws::Vector<PolicyPreviewConfiguration>>
  void SetPolicyPreviewConfigurations(PolicyPreviewConfigurationsT&& value) {
    m_policyPreviewConfigurationsHasBeenSet = true;
    m_policyPreviewConfigurations = std::forward<PolicyPreviewConfigurationsT>(value);
  }
  template <typename PolicyPreviewConfigurationsT = Aws::Vector<PolicyPreviewConfiguration>>
  GetPolicyPreviewConfigurationResult& WithPolicyPreviewConfigurations(PolicyPreviewConfigurationsT&& value) {
    SetPolicyPreviewConfigurations(std::forward<PolicyPreviewConfigurationsT>(value));
    return *this;
  }
  template <typename PolicyPreviewConfigurationsT = PolicyPreviewConfiguration>
  GetPolicyPreviewConfigurationResult& AddPolicyPreviewConfigurations(PolicyPreviewConfigurationsT&& value) {
    m_policyPreviewConfigurationsHasBeenSet = true;
    m_policyPreviewConfigurations.emplace_back(std::forward<PolicyPreviewConfigurationsT>(value));
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
  GetPolicyPreviewConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PolicyPreviewConfiguration> m_policyPreviewConfigurations;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_policyPreviewConfigurationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
