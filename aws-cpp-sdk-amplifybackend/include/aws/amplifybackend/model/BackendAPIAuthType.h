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
    AWS_AMPLIFYBACKEND_API BackendAPIAuthType();
    AWS_AMPLIFYBACKEND_API BackendAPIAuthType(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendAPIAuthType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the authentication mode.</p>
     */
    inline const Mode& GetMode() const{ return m_mode; }

    /**
     * <p>Describes the authentication mode.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Describes the authentication mode.</p>
     */
    inline void SetMode(const Mode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Describes the authentication mode.</p>
     */
    inline void SetMode(Mode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Describes the authentication mode.</p>
     */
    inline BackendAPIAuthType& WithMode(const Mode& value) { SetMode(value); return *this;}

    /**
     * <p>Describes the authentication mode.</p>
     */
    inline BackendAPIAuthType& WithMode(Mode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>Describes settings for the authentication mode.</p>
     */
    inline const BackendAPIAppSyncAuthSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Describes settings for the authentication mode.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Describes settings for the authentication mode.</p>
     */
    inline void SetSettings(const BackendAPIAppSyncAuthSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Describes settings for the authentication mode.</p>
     */
    inline void SetSettings(BackendAPIAppSyncAuthSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Describes settings for the authentication mode.</p>
     */
    inline BackendAPIAuthType& WithSettings(const BackendAPIAppSyncAuthSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Describes settings for the authentication mode.</p>
     */
    inline BackendAPIAuthType& WithSettings(BackendAPIAppSyncAuthSettings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    Mode m_mode;
    bool m_modeHasBeenSet = false;

    BackendAPIAppSyncAuthSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
