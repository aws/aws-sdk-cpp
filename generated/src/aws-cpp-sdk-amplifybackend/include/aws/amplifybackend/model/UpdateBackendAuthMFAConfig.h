/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/model/MFAMode.h>
#include <aws/amplifybackend/model/Settings.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Updates the multi-factor authentication (MFA) configuration for the backend
   * of your Amplify project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuthMFAConfig">AWS
   * API Reference</a></p>
   */
  class UpdateBackendAuthMFAConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthMFAConfig() = default;
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthMFAConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthMFAConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MFA mode for the backend of your Amplify project.</p>
     */
    inline MFAMode GetMFAMode() const { return m_mFAMode; }
    inline bool MFAModeHasBeenSet() const { return m_mFAModeHasBeenSet; }
    inline void SetMFAMode(MFAMode value) { m_mFAModeHasBeenSet = true; m_mFAMode = value; }
    inline UpdateBackendAuthMFAConfig& WithMFAMode(MFAMode value) { SetMFAMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings of your MFA configuration for the backend of your Amplify
     * project.</p>
     */
    inline const Settings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = Settings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = Settings>
    UpdateBackendAuthMFAConfig& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}
  private:

    MFAMode m_mFAMode{MFAMode::NOT_SET};
    bool m_mFAModeHasBeenSet = false;

    Settings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
