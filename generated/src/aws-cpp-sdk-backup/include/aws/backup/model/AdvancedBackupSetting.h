/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>The backup options for each resource type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/AdvancedBackupSetting">AWS
   * API Reference</a></p>
   */
  class AdvancedBackupSetting
  {
  public:
    AWS_BACKUP_API AdvancedBackupSetting() = default;
    AWS_BACKUP_API AdvancedBackupSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API AdvancedBackupSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies an object containing resource type and backup options. The only
     * supported resource type is Amazon EC2 instances with Windows Volume Shadow Copy
     * Service (VSS). For a CloudFormation example, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/integrate-cloudformation-with-aws-backup.html">sample
     * CloudFormation template to enable Windows VSS</a> in the <i>Backup User
     * Guide</i>.</p> <p>Valid values: <code>EC2</code>.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    AdvancedBackupSetting& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows VSS backup jobs.</p> <p>Valid values: </p> <p>Set to
     * <code>"WindowsVSS":"enabled"</code> to enable the <code>WindowsVSS</code> backup
     * option and create a Windows VSS backup. </p> <p>Set to
     * <code>"WindowsVSS":"disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p> <p>If you specify
     * an invalid option, you get an <code>InvalidParameterValueException</code>
     * exception.</p> <p>For more information about Windows VSS backups, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/windows-backups.html">Creating
     * a VSS-Enabled Windows Backup</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupOptions() const { return m_backupOptions; }
    inline bool BackupOptionsHasBeenSet() const { return m_backupOptionsHasBeenSet; }
    template<typename BackupOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetBackupOptions(BackupOptionsT&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions = std::forward<BackupOptionsT>(value); }
    template<typename BackupOptionsT = Aws::Map<Aws::String, Aws::String>>
    AdvancedBackupSetting& WithBackupOptions(BackupOptionsT&& value) { SetBackupOptions(std::forward<BackupOptionsT>(value)); return *this;}
    template<typename BackupOptionsKeyT = Aws::String, typename BackupOptionsValueT = Aws::String>
    AdvancedBackupSetting& AddBackupOptions(BackupOptionsKeyT&& key, BackupOptionsValueT&& value) {
      m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(std::forward<BackupOptionsKeyT>(key), std::forward<BackupOptionsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupOptions;
    bool m_backupOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
