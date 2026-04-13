/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/deadline/Deadline_EXPORTS.h>

#include <utility>

namespace Aws {
namespace deadline {
namespace Model {

/**
 */
class UpdateMonitorSettingsRequest : public DeadlineRequest {
 public:
  AWS_DEADLINE_API UpdateMonitorSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateMonitorSettings"; }

  AWS_DEADLINE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the monitor to update settings for.</p>
   */
  inline const Aws::String& GetMonitorId() const { return m_monitorId; }
  inline bool MonitorIdHasBeenSet() const { return m_monitorIdHasBeenSet; }
  template <typename MonitorIdT = Aws::String>
  void SetMonitorId(MonitorIdT&& value) {
    m_monitorIdHasBeenSet = true;
    m_monitorId = std::forward<MonitorIdT>(value);
  }
  template <typename MonitorIdT = Aws::String>
  UpdateMonitorSettingsRequest& WithMonitorId(MonitorIdT&& value) {
    SetMonitorId(std::forward<MonitorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Monitor settings as key-value pairs. Keys present in the request are
   * upserted; keys absent are left unchanged. Send an empty string value to delete a
   * key.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetSettings() const { return m_settings; }
  inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
  template <typename SettingsT = Aws::Map<Aws::String, Aws::String>>
  void SetSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings = std::forward<SettingsT>(value);
  }
  template <typename SettingsT = Aws::Map<Aws::String, Aws::String>>
  UpdateMonitorSettingsRequest& WithSettings(SettingsT&& value) {
    SetSettings(std::forward<SettingsT>(value));
    return *this;
  }
  template <typename SettingsKeyT = Aws::String, typename SettingsValueT = Aws::String>
  UpdateMonitorSettingsRequest& AddSettings(SettingsKeyT&& key, SettingsValueT&& value) {
    m_settingsHasBeenSet = true;
    m_settings.emplace(std::forward<SettingsKeyT>(key), std::forward<SettingsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_monitorId;

  Aws::Map<Aws::String, Aws::String> m_settings;
  bool m_monitorIdHasBeenSet = false;
  bool m_settingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
