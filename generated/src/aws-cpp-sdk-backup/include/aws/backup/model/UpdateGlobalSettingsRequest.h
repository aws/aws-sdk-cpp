/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class UpdateGlobalSettingsRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API UpdateGlobalSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalSettings"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGlobalSettings() const{ return m_globalSettings; }

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline bool GlobalSettingsHasBeenSet() const { return m_globalSettingsHasBeenSet; }

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline void SetGlobalSettings(const Aws::Map<Aws::String, Aws::String>& value) { m_globalSettingsHasBeenSet = true; m_globalSettings = value; }

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline void SetGlobalSettings(Aws::Map<Aws::String, Aws::String>&& value) { m_globalSettingsHasBeenSet = true; m_globalSettings = std::move(value); }

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline UpdateGlobalSettingsRequest& WithGlobalSettings(const Aws::Map<Aws::String, Aws::String>& value) { SetGlobalSettings(value); return *this;}

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline UpdateGlobalSettingsRequest& WithGlobalSettings(Aws::Map<Aws::String, Aws::String>&& value) { SetGlobalSettings(std::move(value)); return *this;}

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline UpdateGlobalSettingsRequest& AddGlobalSettings(const Aws::String& key, const Aws::String& value) { m_globalSettingsHasBeenSet = true; m_globalSettings.emplace(key, value); return *this; }

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline UpdateGlobalSettingsRequest& AddGlobalSettings(Aws::String&& key, const Aws::String& value) { m_globalSettingsHasBeenSet = true; m_globalSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline UpdateGlobalSettingsRequest& AddGlobalSettings(const Aws::String& key, Aws::String&& value) { m_globalSettingsHasBeenSet = true; m_globalSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline UpdateGlobalSettingsRequest& AddGlobalSettings(Aws::String&& key, Aws::String&& value) { m_globalSettingsHasBeenSet = true; m_globalSettings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline UpdateGlobalSettingsRequest& AddGlobalSettings(const char* key, Aws::String&& value) { m_globalSettingsHasBeenSet = true; m_globalSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline UpdateGlobalSettingsRequest& AddGlobalSettings(Aws::String&& key, const char* value) { m_globalSettingsHasBeenSet = true; m_globalSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>A value for <code>isCrossAccountBackupEnabled</code> and a Region. Example:
     * <code>update-global-settings --global-settings isCrossAccountBackupEnabled=false
     * --region us-west-2</code>.</p>
     */
    inline UpdateGlobalSettingsRequest& AddGlobalSettings(const char* key, const char* value) { m_globalSettingsHasBeenSet = true; m_globalSettings.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_globalSettings;
    bool m_globalSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
