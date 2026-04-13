/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/HealthStatusCode.h>
#include <aws/bcm-dashboards/model/StatusReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BCMDashboards {
namespace Model {

/**
 * <p>Contains the health status information for a scheduled report, including the
 * status code and any reasons for an unhealthy state.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/HealthStatus">AWS
 * API Reference</a></p>
 */
class HealthStatus {
 public:
  AWS_BCMDASHBOARDS_API HealthStatus() = default;
  AWS_BCMDASHBOARDS_API HealthStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API HealthStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The health status code. <code>HEALTHY</code> indicates the scheduled report
   * is configured properly and has all required permissions to execute.
   * <code>UNHEALTHY</code> indicates the scheduled report is unable to deliver the
   * notification to the default Amazon EventBridge EventBus in your account and your
   * action is needed. The reason for the unhealthy state is captured in the health
   * status reasons.</p>
   */
  inline HealthStatusCode GetStatusCode() const { return m_statusCode; }
  inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
  inline void SetStatusCode(HealthStatusCode value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = value;
  }
  inline HealthStatus& WithStatusCode(HealthStatusCode value) {
    SetStatusCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the health status was last refreshed.</p>
   */
  inline const Aws::Utils::DateTime& GetLastRefreshedAt() const { return m_lastRefreshedAt; }
  inline bool LastRefreshedAtHasBeenSet() const { return m_lastRefreshedAtHasBeenSet; }
  template <typename LastRefreshedAtT = Aws::Utils::DateTime>
  void SetLastRefreshedAt(LastRefreshedAtT&& value) {
    m_lastRefreshedAtHasBeenSet = true;
    m_lastRefreshedAt = std::forward<LastRefreshedAtT>(value);
  }
  template <typename LastRefreshedAtT = Aws::Utils::DateTime>
  HealthStatus& WithLastRefreshedAt(LastRefreshedAtT&& value) {
    SetLastRefreshedAt(std::forward<LastRefreshedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of reasons for the current health status. Only present when the
   * status is <code>UNHEALTHY</code>.</p>
   */
  inline const Aws::Vector<StatusReason>& GetStatusReasons() const { return m_statusReasons; }
  inline bool StatusReasonsHasBeenSet() const { return m_statusReasonsHasBeenSet; }
  template <typename StatusReasonsT = Aws::Vector<StatusReason>>
  void SetStatusReasons(StatusReasonsT&& value) {
    m_statusReasonsHasBeenSet = true;
    m_statusReasons = std::forward<StatusReasonsT>(value);
  }
  template <typename StatusReasonsT = Aws::Vector<StatusReason>>
  HealthStatus& WithStatusReasons(StatusReasonsT&& value) {
    SetStatusReasons(std::forward<StatusReasonsT>(value));
    return *this;
  }
  inline HealthStatus& AddStatusReasons(StatusReason value) {
    m_statusReasonsHasBeenSet = true;
    m_statusReasons.push_back(value);
    return *this;
  }
  ///@}
 private:
  HealthStatusCode m_statusCode{HealthStatusCode::NOT_SET};

  Aws::Utils::DateTime m_lastRefreshedAt{};

  Aws::Vector<StatusReason> m_statusReasons;
  bool m_statusCodeHasBeenSet = false;
  bool m_lastRefreshedAtHasBeenSet = false;
  bool m_statusReasonsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
