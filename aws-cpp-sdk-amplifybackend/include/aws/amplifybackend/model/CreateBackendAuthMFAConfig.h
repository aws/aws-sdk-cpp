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
   * <p>Describes whether to apply multi-factor authentication policies for your
   * Amazon Cognito user pool configured as a part of your Amplify
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuthMFAConfig">AWS
   * API Reference</a></p>
   */
  class CreateBackendAuthMFAConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateBackendAuthMFAConfig();
    AWS_AMPLIFYBACKEND_API CreateBackendAuthMFAConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthMFAConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether MFA should be [ON, OFF, or OPTIONAL] for authentication in
     * your Amplify project.</p>
     */
    inline const MFAMode& GetMFAMode() const{ return m_mFAMode; }

    /**
     * <p>Describes whether MFA should be [ON, OFF, or OPTIONAL] for authentication in
     * your Amplify project.</p>
     */
    inline bool MFAModeHasBeenSet() const { return m_mFAModeHasBeenSet; }

    /**
     * <p>Describes whether MFA should be [ON, OFF, or OPTIONAL] for authentication in
     * your Amplify project.</p>
     */
    inline void SetMFAMode(const MFAMode& value) { m_mFAModeHasBeenSet = true; m_mFAMode = value; }

    /**
     * <p>Describes whether MFA should be [ON, OFF, or OPTIONAL] for authentication in
     * your Amplify project.</p>
     */
    inline void SetMFAMode(MFAMode&& value) { m_mFAModeHasBeenSet = true; m_mFAMode = std::move(value); }

    /**
     * <p>Describes whether MFA should be [ON, OFF, or OPTIONAL] for authentication in
     * your Amplify project.</p>
     */
    inline CreateBackendAuthMFAConfig& WithMFAMode(const MFAMode& value) { SetMFAMode(value); return *this;}

    /**
     * <p>Describes whether MFA should be [ON, OFF, or OPTIONAL] for authentication in
     * your Amplify project.</p>
     */
    inline CreateBackendAuthMFAConfig& WithMFAMode(MFAMode&& value) { SetMFAMode(std::move(value)); return *this;}


    /**
     * <p>Describes the configuration settings and methods for your Amplify app users
     * to use MFA.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }

    /**
     * <p>Describes the configuration settings and methods for your Amplify app users
     * to use MFA.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Describes the configuration settings and methods for your Amplify app users
     * to use MFA.</p>
     */
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Describes the configuration settings and methods for your Amplify app users
     * to use MFA.</p>
     */
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Describes the configuration settings and methods for your Amplify app users
     * to use MFA.</p>
     */
    inline CreateBackendAuthMFAConfig& WithSettings(const Settings& value) { SetSettings(value); return *this;}

    /**
     * <p>Describes the configuration settings and methods for your Amplify app users
     * to use MFA.</p>
     */
    inline CreateBackendAuthMFAConfig& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    MFAMode m_mFAMode;
    bool m_mFAModeHasBeenSet = false;

    Settings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
