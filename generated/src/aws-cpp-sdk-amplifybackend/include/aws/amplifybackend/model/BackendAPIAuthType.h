/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/model/Mode.h>
#include <aws/amplifybackend/model/BackendAPIAppSyncAuthSettings.h>
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
   * <p>Describes the auth types for your configured data models.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/BackendAPIAuthType">AWS
   * API Reference</a></p>
   */
  class BackendAPIAuthType
  {
  public:
    AWS_AMPLIFYBACKEND_API BackendAPIAuthType() = default;
    AWS_AMPLIFYBACKEND_API BackendAPIAuthType(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendAPIAuthType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the authentication mode.</p>
     */
    inline Mode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(Mode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline BackendAPIAuthType& WithMode(Mode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes settings for the authentication mode.</p>
     */
    inline const BackendAPIAppSyncAuthSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = BackendAPIAppSyncAuthSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = BackendAPIAppSyncAuthSettings>
    BackendAPIAuthType& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}
  private:

    Mode m_mode{Mode::NOT_SET};
    bool m_modeHasBeenSet = false;

    BackendAPIAppSyncAuthSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
