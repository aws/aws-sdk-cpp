/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/LogEventConfiguration.h>
#include <aws/iot/model/LogLevel.h>

#include <utility>

namespace Aws {
namespace IoT {
namespace Model {

/**
 */
class SetV2LoggingOptionsRequest : public IoTRequest {
 public:
  AWS_IOT_API SetV2LoggingOptionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SetV2LoggingOptions"; }

  AWS_IOT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the role that allows IoT to write to Cloudwatch logs.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  SetV2LoggingOptionsRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default logging level.</p>
   */
  inline LogLevel GetDefaultLogLevel() const { return m_defaultLogLevel; }
  inline bool DefaultLogLevelHasBeenSet() const { return m_defaultLogLevelHasBeenSet; }
  inline void SetDefaultLogLevel(LogLevel value) {
    m_defaultLogLevelHasBeenSet = true;
    m_defaultLogLevel = value;
  }
  inline SetV2LoggingOptionsRequest& WithDefaultLogLevel(LogLevel value) {
    SetDefaultLogLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If true all logs are disabled. The default is false.</p>
   */
  inline bool GetDisableAllLogs() const { return m_disableAllLogs; }
  inline bool DisableAllLogsHasBeenSet() const { return m_disableAllLogsHasBeenSet; }
  inline void SetDisableAllLogs(bool value) {
    m_disableAllLogsHasBeenSet = true;
    m_disableAllLogs = value;
  }
  inline SetV2LoggingOptionsRequest& WithDisableAllLogs(bool value) {
    SetDisableAllLogs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of event configurations that override account-level logging. </p>
   */
  inline const Aws::Vector<LogEventConfiguration>& GetEventConfigurations() const { return m_eventConfigurations; }
  inline bool EventConfigurationsHasBeenSet() const { return m_eventConfigurationsHasBeenSet; }
  template <typename EventConfigurationsT = Aws::Vector<LogEventConfiguration>>
  void SetEventConfigurations(EventConfigurationsT&& value) {
    m_eventConfigurationsHasBeenSet = true;
    m_eventConfigurations = std::forward<EventConfigurationsT>(value);
  }
  template <typename EventConfigurationsT = Aws::Vector<LogEventConfiguration>>
  SetV2LoggingOptionsRequest& WithEventConfigurations(EventConfigurationsT&& value) {
    SetEventConfigurations(std::forward<EventConfigurationsT>(value));
    return *this;
  }
  template <typename EventConfigurationsT = LogEventConfiguration>
  SetV2LoggingOptionsRequest& AddEventConfigurations(EventConfigurationsT&& value) {
    m_eventConfigurationsHasBeenSet = true;
    m_eventConfigurations.emplace_back(std::forward<EventConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;

  LogLevel m_defaultLogLevel{LogLevel::NOT_SET};

  bool m_disableAllLogs{false};

  Aws::Vector<LogEventConfiguration> m_eventConfigurations;
  bool m_roleArnHasBeenSet = false;
  bool m_defaultLogLevelHasBeenSet = false;
  bool m_disableAllLogsHasBeenSet = false;
  bool m_eventConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
