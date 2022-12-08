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
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthMFAConfig();
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthMFAConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthMFAConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The MFA mode for the backend of your Amplify project.</p>
     */
    inline const MFAMode& GetMFAMode() const{ return m_mFAMode; }

    /**
     * <p>The MFA mode for the backend of your Amplify project.</p>
     */
    inline bool MFAModeHasBeenSet() const { return m_mFAModeHasBeenSet; }

    /**
     * <p>The MFA mode for the backend of your Amplify project.</p>
     */
    inline void SetMFAMode(const MFAMode& value) { m_mFAModeHasBeenSet = true; m_mFAMode = value; }

    /**
     * <p>The MFA mode for the backend of your Amplify project.</p>
     */
    inline void SetMFAMode(MFAMode&& value) { m_mFAModeHasBeenSet = true; m_mFAMode = std::move(value); }

    /**
     * <p>The MFA mode for the backend of your Amplify project.</p>
     */
    inline UpdateBackendAuthMFAConfig& WithMFAMode(const MFAMode& value) { SetMFAMode(value); return *this;}

    /**
     * <p>The MFA mode for the backend of your Amplify project.</p>
     */
    inline UpdateBackendAuthMFAConfig& WithMFAMode(MFAMode&& value) { SetMFAMode(std::move(value)); return *this;}


    /**
     * <p>The settings of your MFA configuration for the backend of your Amplify
     * project.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }

    /**
     * <p>The settings of your MFA configuration for the backend of your Amplify
     * project.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The settings of your MFA configuration for the backend of your Amplify
     * project.</p>
     */
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The settings of your MFA configuration for the backend of your Amplify
     * project.</p>
     */
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The settings of your MFA configuration for the backend of your Amplify
     * project.</p>
     */
    inline UpdateBackendAuthMFAConfig& WithSettings(const Settings& value) { SetSettings(value); return *this;}

    /**
     * <p>The settings of your MFA configuration for the backend of your Amplify
     * project.</p>
     */
    inline UpdateBackendAuthMFAConfig& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    MFAMode m_mFAMode;
    bool m_mFAModeHasBeenSet = false;

    Settings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
