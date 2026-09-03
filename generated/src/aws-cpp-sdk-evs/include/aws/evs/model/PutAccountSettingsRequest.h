/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/EVSRequest.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/AccountSetting.h>

#include <utility>

namespace Aws {
namespace EVS {
namespace Model {

/**
 * <p>The request for the PutAccountSettings operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/PutAccountSettingsRequest">AWS
 * API Reference</a></p>
 */
class PutAccountSettingsRequest : public EVSRequest {
 public:
  AWS_EVS_API PutAccountSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAccountSettings"; }

  AWS_EVS_API Aws::String SerializePayload() const override;

  AWS_EVS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A list of regional account-level EVS settings to create or update. Only the
   * settings included in this list are modified.</p>
   */
  inline const Aws::Vector<AccountSetting>& GetSettings() const { return m_settings; }
  inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
  template <typename SettingsT = Aws::Vector<AccountSetting>>
  void SetSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings = std::forward<SettingsT>(value);
  }
  template <typename SettingsT = Aws::Vector<AccountSetting>>
  PutAccountSettingsRequest& WithSettings(SettingsT&& value) {
    SetSettings(std::forward<SettingsT>(value));
    return *this;
  }
  template <typename SettingsT = AccountSetting>
  PutAccountSettingsRequest& AddSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings.emplace_back(std::forward<SettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AccountSetting> m_settings;
  bool m_settingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
