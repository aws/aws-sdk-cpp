/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A structure that contains information about a backed-up
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ProtectedResource">AWS
   * API Reference</a></p>
   */
  class ProtectedResource
  {
  public:
    AWS_BACKUP_API ProtectedResource() = default;
    AWS_BACKUP_API ProtectedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ProtectedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    ProtectedResource& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ProtectedResource& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBackupTime() const { return m_lastBackupTime; }
    inline bool LastBackupTimeHasBeenSet() const { return m_lastBackupTimeHasBeenSet; }
    template<typename LastBackupTimeT = Aws::Utils::DateTime>
    void SetLastBackupTime(LastBackupTimeT&& value) { m_lastBackupTimeHasBeenSet = true; m_lastBackupTime = std::forward<LastBackupTimeT>(value); }
    template<typename LastBackupTimeT = Aws::Utils::DateTime>
    ProtectedResource& WithLastBackupTime(LastBackupTimeT&& value) { SetLastBackupTime(std::forward<LastBackupTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The non-unique name of the resource that belongs to the specified backup.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    ProtectedResource& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the backup vault that contains the most
     * recent backup recovery point.</p>
     */
    inline const Aws::String& GetLastBackupVaultArn() const { return m_lastBackupVaultArn; }
    inline bool LastBackupVaultArnHasBeenSet() const { return m_lastBackupVaultArnHasBeenSet; }
    template<typename LastBackupVaultArnT = Aws::String>
    void SetLastBackupVaultArn(LastBackupVaultArnT&& value) { m_lastBackupVaultArnHasBeenSet = true; m_lastBackupVaultArn = std::forward<LastBackupVaultArnT>(value); }
    template<typename LastBackupVaultArnT = Aws::String>
    ProtectedResource& WithLastBackupVaultArn(LastBackupVaultArnT&& value) { SetLastBackupVaultArn(std::forward<LastBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline const Aws::String& GetLastRecoveryPointArn() const { return m_lastRecoveryPointArn; }
    inline bool LastRecoveryPointArnHasBeenSet() const { return m_lastRecoveryPointArnHasBeenSet; }
    template<typename LastRecoveryPointArnT = Aws::String>
    void SetLastRecoveryPointArn(LastRecoveryPointArnT&& value) { m_lastRecoveryPointArnHasBeenSet = true; m_lastRecoveryPointArn = std::forward<LastRecoveryPointArnT>(value); }
    template<typename LastRecoveryPointArnT = Aws::String>
    ProtectedResource& WithLastRecoveryPointArn(LastRecoveryPointArnT&& value) { SetLastRecoveryPointArn(std::forward<LastRecoveryPointArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastBackupTime{};
    bool m_lastBackupTimeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_lastBackupVaultArn;
    bool m_lastBackupVaultArnHasBeenSet = false;

    Aws::String m_lastRecoveryPointArn;
    bool m_lastRecoveryPointArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
