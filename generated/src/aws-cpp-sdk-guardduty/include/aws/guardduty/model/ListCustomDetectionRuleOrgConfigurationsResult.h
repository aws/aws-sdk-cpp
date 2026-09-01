/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DetectionRuleOrgConfigurationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {
class ListCustomDetectionRuleOrgConfigurationsResult {
 public:
  AWS_GUARDDUTY_API ListCustomDetectionRuleOrgConfigurationsResult() = default;
  AWS_GUARDDUTY_API ListCustomDetectionRuleOrgConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GUARDDUTY_API ListCustomDetectionRuleOrgConfigurationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of organization configurations for custom detection rules.</p>
   */
  inline const Aws::Vector<DetectionRuleOrgConfigurationSummary>& GetConfigurations() const { return m_configurations; }
  template <typename ConfigurationsT = Aws::Vector<DetectionRuleOrgConfigurationSummary>>
  void SetConfigurations(ConfigurationsT&& value) {
    m_configurationsHasBeenSet = true;
    m_configurations = std::forward<ConfigurationsT>(value);
  }
  template <typename ConfigurationsT = Aws::Vector<DetectionRuleOrgConfigurationSummary>>
  ListCustomDetectionRuleOrgConfigurationsResult& WithConfigurations(ConfigurationsT&& value) {
    SetConfigurations(std::forward<ConfigurationsT>(value));
    return *this;
  }
  template <typename ConfigurationsT = DetectionRuleOrgConfigurationSummary>
  ListCustomDetectionRuleOrgConfigurationsResult& AddConfigurations(ConfigurationsT&& value) {
    m_configurationsHasBeenSet = true;
    m_configurations.emplace_back(std::forward<ConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token to retrieve the next page of results. If this field is
   * empty, there are no additional results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCustomDetectionRuleOrgConfigurationsResult& WithNextToken(NextTokenT&& value) {
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
  ListCustomDetectionRuleOrgConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DetectionRuleOrgConfigurationSummary> m_configurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_configurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
