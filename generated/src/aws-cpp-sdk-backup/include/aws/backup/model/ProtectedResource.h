﻿/**
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
    AWS_BACKUP_API ProtectedResource();
    AWS_BACKUP_API ProtectedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ProtectedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ProtectedResource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ProtectedResource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ProtectedResource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ProtectedResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ProtectedResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ProtectedResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBackupTime() const{ return m_lastBackupTime; }
    inline bool LastBackupTimeHasBeenSet() const { return m_lastBackupTimeHasBeenSet; }
    inline void SetLastBackupTime(const Aws::Utils::DateTime& value) { m_lastBackupTimeHasBeenSet = true; m_lastBackupTime = value; }
    inline void SetLastBackupTime(Aws::Utils::DateTime&& value) { m_lastBackupTimeHasBeenSet = true; m_lastBackupTime = std::move(value); }
    inline ProtectedResource& WithLastBackupTime(const Aws::Utils::DateTime& value) { SetLastBackupTime(value); return *this;}
    inline ProtectedResource& WithLastBackupTime(Aws::Utils::DateTime&& value) { SetLastBackupTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the non-unique name of the resource that belongs to the specified
     * backup.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline ProtectedResource& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline ProtectedResource& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline ProtectedResource& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the ARN (Amazon Resource Name) of the backup vault that contains the
     * most recent backup recovery point.</p>
     */
    inline const Aws::String& GetLastBackupVaultArn() const{ return m_lastBackupVaultArn; }
    inline bool LastBackupVaultArnHasBeenSet() const { return m_lastBackupVaultArnHasBeenSet; }
    inline void SetLastBackupVaultArn(const Aws::String& value) { m_lastBackupVaultArnHasBeenSet = true; m_lastBackupVaultArn = value; }
    inline void SetLastBackupVaultArn(Aws::String&& value) { m_lastBackupVaultArnHasBeenSet = true; m_lastBackupVaultArn = std::move(value); }
    inline void SetLastBackupVaultArn(const char* value) { m_lastBackupVaultArnHasBeenSet = true; m_lastBackupVaultArn.assign(value); }
    inline ProtectedResource& WithLastBackupVaultArn(const Aws::String& value) { SetLastBackupVaultArn(value); return *this;}
    inline ProtectedResource& WithLastBackupVaultArn(Aws::String&& value) { SetLastBackupVaultArn(std::move(value)); return *this;}
    inline ProtectedResource& WithLastBackupVaultArn(const char* value) { SetLastBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline const Aws::String& GetLastRecoveryPointArn() const{ return m_lastRecoveryPointArn; }
    inline bool LastRecoveryPointArnHasBeenSet() const { return m_lastRecoveryPointArnHasBeenSet; }
    inline void SetLastRecoveryPointArn(const Aws::String& value) { m_lastRecoveryPointArnHasBeenSet = true; m_lastRecoveryPointArn = value; }
    inline void SetLastRecoveryPointArn(Aws::String&& value) { m_lastRecoveryPointArnHasBeenSet = true; m_lastRecoveryPointArn = std::move(value); }
    inline void SetLastRecoveryPointArn(const char* value) { m_lastRecoveryPointArnHasBeenSet = true; m_lastRecoveryPointArn.assign(value); }
    inline ProtectedResource& WithLastRecoveryPointArn(const Aws::String& value) { SetLastRecoveryPointArn(value); return *this;}
    inline ProtectedResource& WithLastRecoveryPointArn(Aws::String&& value) { SetLastRecoveryPointArn(std::move(value)); return *this;}
    inline ProtectedResource& WithLastRecoveryPointArn(const char* value) { SetLastRecoveryPointArn(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastBackupTime;
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
