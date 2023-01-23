/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>The persistent application settings for users of a stack.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ApplicationSettings">AWS
   * API Reference</a></p>
   */
  class ApplicationSettings
  {
  public:
    AWS_APPSTREAM_API ApplicationSettings();
    AWS_APPSTREAM_API ApplicationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ApplicationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables or disables persistent application settings for users during their
     * streaming sessions. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables or disables persistent application settings for users during their
     * streaming sessions. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enables or disables persistent application settings for users during their
     * streaming sessions. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables or disables persistent application settings for users during their
     * streaming sessions. </p>
     */
    inline ApplicationSettings& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored. You can allow the same persistent application settings to
     * be used across multiple stacks by specifying the same settings group for each
     * stack. </p>
     */
    inline const Aws::String& GetSettingsGroup() const{ return m_settingsGroup; }

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored. You can allow the same persistent application settings to
     * be used across multiple stacks by specifying the same settings group for each
     * stack. </p>
     */
    inline bool SettingsGroupHasBeenSet() const { return m_settingsGroupHasBeenSet; }

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored. You can allow the same persistent application settings to
     * be used across multiple stacks by specifying the same settings group for each
     * stack. </p>
     */
    inline void SetSettingsGroup(const Aws::String& value) { m_settingsGroupHasBeenSet = true; m_settingsGroup = value; }

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored. You can allow the same persistent application settings to
     * be used across multiple stacks by specifying the same settings group for each
     * stack. </p>
     */
    inline void SetSettingsGroup(Aws::String&& value) { m_settingsGroupHasBeenSet = true; m_settingsGroup = std::move(value); }

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored. You can allow the same persistent application settings to
     * be used across multiple stacks by specifying the same settings group for each
     * stack. </p>
     */
    inline void SetSettingsGroup(const char* value) { m_settingsGroupHasBeenSet = true; m_settingsGroup.assign(value); }

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored. You can allow the same persistent application settings to
     * be used across multiple stacks by specifying the same settings group for each
     * stack. </p>
     */
    inline ApplicationSettings& WithSettingsGroup(const Aws::String& value) { SetSettingsGroup(value); return *this;}

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored. You can allow the same persistent application settings to
     * be used across multiple stacks by specifying the same settings group for each
     * stack. </p>
     */
    inline ApplicationSettings& WithSettingsGroup(Aws::String&& value) { SetSettingsGroup(std::move(value)); return *this;}

    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored. You can allow the same persistent application settings to
     * be used across multiple stacks by specifying the same settings group for each
     * stack. </p>
     */
    inline ApplicationSettings& WithSettingsGroup(const char* value) { SetSettingsGroup(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_settingsGroup;
    bool m_settingsGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
