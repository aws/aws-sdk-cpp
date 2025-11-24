/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/EnrollmentStatus.h>
#include <aws/compute-optimizer-automation/model/OrganizationRuleMode.h>
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
namespace ComputeOptimizerAutomation {
namespace Model {
class GetEnrollmentConfigurationResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API GetEnrollmentConfigurationResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API GetEnrollmentConfigurationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API GetEnrollmentConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The current enrollment status. </p>
   */
  inline EnrollmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(EnrollmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetEnrollmentConfigurationResult& WithStatus(EnrollmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The reason for the current enrollment status. </p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  GetEnrollmentConfigurationResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the management account can create Automation rules that
   * implement optimization actions for this account. </p>
   */
  inline OrganizationRuleMode GetOrganizationRuleMode() const { return m_organizationRuleMode; }
  inline void SetOrganizationRuleMode(OrganizationRuleMode value) {
    m_organizationRuleModeHasBeenSet = true;
    m_organizationRuleMode = value;
  }
  inline GetEnrollmentConfigurationResult& WithOrganizationRuleMode(OrganizationRuleMode value) {
    SetOrganizationRuleMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp of the last update to the enrollment configuration. </p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    m_lastUpdatedTimestampHasBeenSet = true;
    m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value);
  }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  GetEnrollmentConfigurationResult& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value));
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
  GetEnrollmentConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  EnrollmentStatus m_status{EnrollmentStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_statusReason;
  bool m_statusReasonHasBeenSet = false;

  OrganizationRuleMode m_organizationRuleMode{OrganizationRuleMode::NOT_SET};
  bool m_organizationRuleModeHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedTimestamp{};
  bool m_lastUpdatedTimestampHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
