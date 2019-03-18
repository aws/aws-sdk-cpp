/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworkscm/model/BackupType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/BackupStatus.h>
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
namespace OpsWorksCM
{
namespace Model
{

  /**
   * <p>Describes a single backup. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/Backup">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKSCM_API Backup
  {
  public:
    Backup();
    Backup(Aws::Utils::Json::JsonView jsonValue);
    Backup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the backup. </p>
     */
    inline const Aws::String& GetBackupArn() const{ return m_backupArn; }

    /**
     * <p>The ARN of the backup. </p>
     */
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }

    /**
     * <p>The ARN of the backup. </p>
     */
    inline void SetBackupArn(const Aws::String& value) { m_backupArnHasBeenSet = true; m_backupArn = value; }

    /**
     * <p>The ARN of the backup. </p>
     */
    inline void SetBackupArn(Aws::String&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::move(value); }

    /**
     * <p>The ARN of the backup. </p>
     */
    inline void SetBackupArn(const char* value) { m_backupArnHasBeenSet = true; m_backupArn.assign(value); }

    /**
     * <p>The ARN of the backup. </p>
     */
    inline Backup& WithBackupArn(const Aws::String& value) { SetBackupArn(value); return *this;}

    /**
     * <p>The ARN of the backup. </p>
     */
    inline Backup& WithBackupArn(Aws::String&& value) { SetBackupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the backup. </p>
     */
    inline Backup& WithBackupArn(const char* value) { SetBackupArn(value); return *this;}


    /**
     * <p> The generated ID of the backup. Example:
     * <code>myServerName-yyyyMMddHHmmssSSS</code> </p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p> The generated ID of the backup. Example:
     * <code>myServerName-yyyyMMddHHmmssSSS</code> </p>
     */
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    /**
     * <p> The generated ID of the backup. Example:
     * <code>myServerName-yyyyMMddHHmmssSSS</code> </p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p> The generated ID of the backup. Example:
     * <code>myServerName-yyyyMMddHHmmssSSS</code> </p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    /**
     * <p> The generated ID of the backup. Example:
     * <code>myServerName-yyyyMMddHHmmssSSS</code> </p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p> The generated ID of the backup. Example:
     * <code>myServerName-yyyyMMddHHmmssSSS</code> </p>
     */
    inline Backup& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p> The generated ID of the backup. Example:
     * <code>myServerName-yyyyMMddHHmmssSSS</code> </p>
     */
    inline Backup& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p> The generated ID of the backup. Example:
     * <code>myServerName-yyyyMMddHHmmssSSS</code> </p>
     */
    inline Backup& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p> The backup type. Valid values are <code>automated</code> or
     * <code>manual</code>. </p>
     */
    inline const BackupType& GetBackupType() const{ return m_backupType; }

    /**
     * <p> The backup type. Valid values are <code>automated</code> or
     * <code>manual</code>. </p>
     */
    inline bool BackupTypeHasBeenSet() const { return m_backupTypeHasBeenSet; }

    /**
     * <p> The backup type. Valid values are <code>automated</code> or
     * <code>manual</code>. </p>
     */
    inline void SetBackupType(const BackupType& value) { m_backupTypeHasBeenSet = true; m_backupType = value; }

    /**
     * <p> The backup type. Valid values are <code>automated</code> or
     * <code>manual</code>. </p>
     */
    inline void SetBackupType(BackupType&& value) { m_backupTypeHasBeenSet = true; m_backupType = std::move(value); }

    /**
     * <p> The backup type. Valid values are <code>automated</code> or
     * <code>manual</code>. </p>
     */
    inline Backup& WithBackupType(const BackupType& value) { SetBackupType(value); return *this;}

    /**
     * <p> The backup type. Valid values are <code>automated</code> or
     * <code>manual</code>. </p>
     */
    inline Backup& WithBackupType(BackupType&& value) { SetBackupType(std::move(value)); return *this;}


    /**
     * <p> The time stamp when the backup was created in the database. Example:
     * <code>2016-07-29T13:38:47.520Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> The time stamp when the backup was created in the database. Example:
     * <code>2016-07-29T13:38:47.520Z</code> </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p> The time stamp when the backup was created in the database. Example:
     * <code>2016-07-29T13:38:47.520Z</code> </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> The time stamp when the backup was created in the database. Example:
     * <code>2016-07-29T13:38:47.520Z</code> </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p> The time stamp when the backup was created in the database. Example:
     * <code>2016-07-29T13:38:47.520Z</code> </p>
     */
    inline Backup& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> The time stamp when the backup was created in the database. Example:
     * <code>2016-07-29T13:38:47.520Z</code> </p>
     */
    inline Backup& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p> A user-provided description for a manual backup. This field is empty for
     * automated backups. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A user-provided description for a manual backup. This field is empty for
     * automated backups. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A user-provided description for a manual backup. This field is empty for
     * automated backups. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A user-provided description for a manual backup. This field is empty for
     * automated backups. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A user-provided description for a manual backup. This field is empty for
     * automated backups. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A user-provided description for a manual backup. This field is empty for
     * automated backups. </p>
     */
    inline Backup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A user-provided description for a manual backup. This field is empty for
     * automated backups. </p>
     */
    inline Backup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A user-provided description for a manual backup. This field is empty for
     * automated backups. </p>
     */
    inline Backup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The engine type that is obtained from the server when the backup is created.
     * </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p> The engine type that is obtained from the server when the backup is created.
     * </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p> The engine type that is obtained from the server when the backup is created.
     * </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p> The engine type that is obtained from the server when the backup is created.
     * </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p> The engine type that is obtained from the server when the backup is created.
     * </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p> The engine type that is obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p> The engine type that is obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p> The engine type that is obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p> The engine model that is obtained from the server when the backup is
     * created. </p>
     */
    inline const Aws::String& GetEngineModel() const{ return m_engineModel; }

    /**
     * <p> The engine model that is obtained from the server when the backup is
     * created. </p>
     */
    inline bool EngineModelHasBeenSet() const { return m_engineModelHasBeenSet; }

    /**
     * <p> The engine model that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetEngineModel(const Aws::String& value) { m_engineModelHasBeenSet = true; m_engineModel = value; }

    /**
     * <p> The engine model that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetEngineModel(Aws::String&& value) { m_engineModelHasBeenSet = true; m_engineModel = std::move(value); }

    /**
     * <p> The engine model that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetEngineModel(const char* value) { m_engineModelHasBeenSet = true; m_engineModel.assign(value); }

    /**
     * <p> The engine model that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithEngineModel(const Aws::String& value) { SetEngineModel(value); return *this;}

    /**
     * <p> The engine model that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithEngineModel(Aws::String&& value) { SetEngineModel(std::move(value)); return *this;}

    /**
     * <p> The engine model that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithEngineModel(const char* value) { SetEngineModel(value); return *this;}


    /**
     * <p> The engine version that is obtained from the server when the backup is
     * created. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p> The engine version that is obtained from the server when the backup is
     * created. </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p> The engine version that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> The engine version that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p> The engine version that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p> The engine version that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> The engine version that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p> The engine version that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p> The EC2 instance profile ARN that is obtained from the server when the
     * backup is created. Because this value is stored, you are not required to provide
     * the InstanceProfileArn again if you restore a backup. </p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }

    /**
     * <p> The EC2 instance profile ARN that is obtained from the server when the
     * backup is created. Because this value is stored, you are not required to provide
     * the InstanceProfileArn again if you restore a backup. </p>
     */
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }

    /**
     * <p> The EC2 instance profile ARN that is obtained from the server when the
     * backup is created. Because this value is stored, you are not required to provide
     * the InstanceProfileArn again if you restore a backup. </p>
     */
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }

    /**
     * <p> The EC2 instance profile ARN that is obtained from the server when the
     * backup is created. Because this value is stored, you are not required to provide
     * the InstanceProfileArn again if you restore a backup. </p>
     */
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }

    /**
     * <p> The EC2 instance profile ARN that is obtained from the server when the
     * backup is created. Because this value is stored, you are not required to provide
     * the InstanceProfileArn again if you restore a backup. </p>
     */
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }

    /**
     * <p> The EC2 instance profile ARN that is obtained from the server when the
     * backup is created. Because this value is stored, you are not required to provide
     * the InstanceProfileArn again if you restore a backup. </p>
     */
    inline Backup& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}

    /**
     * <p> The EC2 instance profile ARN that is obtained from the server when the
     * backup is created. Because this value is stored, you are not required to provide
     * the InstanceProfileArn again if you restore a backup. </p>
     */
    inline Backup& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}

    /**
     * <p> The EC2 instance profile ARN that is obtained from the server when the
     * backup is created. Because this value is stored, you are not required to provide
     * the InstanceProfileArn again if you restore a backup. </p>
     */
    inline Backup& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}


    /**
     * <p> The instance type that is obtained from the server when the backup is
     * created. </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p> The instance type that is obtained from the server when the backup is
     * created. </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p> The instance type that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p> The instance type that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p> The instance type that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p> The instance type that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p> The instance type that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p> The instance type that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p> The key pair that is obtained from the server when the backup is created.
     * </p>
     */
    inline const Aws::String& GetKeyPair() const{ return m_keyPair; }

    /**
     * <p> The key pair that is obtained from the server when the backup is created.
     * </p>
     */
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }

    /**
     * <p> The key pair that is obtained from the server when the backup is created.
     * </p>
     */
    inline void SetKeyPair(const Aws::String& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }

    /**
     * <p> The key pair that is obtained from the server when the backup is created.
     * </p>
     */
    inline void SetKeyPair(Aws::String&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::move(value); }

    /**
     * <p> The key pair that is obtained from the server when the backup is created.
     * </p>
     */
    inline void SetKeyPair(const char* value) { m_keyPairHasBeenSet = true; m_keyPair.assign(value); }

    /**
     * <p> The key pair that is obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& WithKeyPair(const Aws::String& value) { SetKeyPair(value); return *this;}

    /**
     * <p> The key pair that is obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& WithKeyPair(Aws::String&& value) { SetKeyPair(std::move(value)); return *this;}

    /**
     * <p> The key pair that is obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& WithKeyPair(const char* value) { SetKeyPair(value); return *this;}


    /**
     * <p> The preferred backup period that is obtained from the server when the backup
     * is created. </p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p> The preferred backup period that is obtained from the server when the backup
     * is created. </p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p> The preferred backup period that is obtained from the server when the backup
     * is created. </p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> The preferred backup period that is obtained from the server when the backup
     * is created. </p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p> The preferred backup period that is obtained from the server when the backup
     * is created. </p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p> The preferred backup period that is obtained from the server when the backup
     * is created. </p>
     */
    inline Backup& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> The preferred backup period that is obtained from the server when the backup
     * is created. </p>
     */
    inline Backup& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p> The preferred backup period that is obtained from the server when the backup
     * is created. </p>
     */
    inline Backup& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p> The preferred maintenance period that is obtained from the server when the
     * backup is created. </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p> The preferred maintenance period that is obtained from the server when the
     * backup is created. </p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p> The preferred maintenance period that is obtained from the server when the
     * backup is created. </p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p> The preferred maintenance period that is obtained from the server when the
     * backup is created. </p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p> The preferred maintenance period that is obtained from the server when the
     * backup is created. </p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p> The preferred maintenance period that is obtained from the server when the
     * backup is created. </p>
     */
    inline Backup& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> The preferred maintenance period that is obtained from the server when the
     * backup is created. </p>
     */
    inline Backup& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p> The preferred maintenance period that is obtained from the server when the
     * backup is created. </p>
     */
    inline Backup& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p> The Amazon S3 URL of the backup's log file. </p>
     */
    inline const Aws::String& GetS3LogUrl() const{ return m_s3LogUrl; }

    /**
     * <p> The Amazon S3 URL of the backup's log file. </p>
     */
    inline bool S3LogUrlHasBeenSet() const { return m_s3LogUrlHasBeenSet; }

    /**
     * <p> The Amazon S3 URL of the backup's log file. </p>
     */
    inline void SetS3LogUrl(const Aws::String& value) { m_s3LogUrlHasBeenSet = true; m_s3LogUrl = value; }

    /**
     * <p> The Amazon S3 URL of the backup's log file. </p>
     */
    inline void SetS3LogUrl(Aws::String&& value) { m_s3LogUrlHasBeenSet = true; m_s3LogUrl = std::move(value); }

    /**
     * <p> The Amazon S3 URL of the backup's log file. </p>
     */
    inline void SetS3LogUrl(const char* value) { m_s3LogUrlHasBeenSet = true; m_s3LogUrl.assign(value); }

    /**
     * <p> The Amazon S3 URL of the backup's log file. </p>
     */
    inline Backup& WithS3LogUrl(const Aws::String& value) { SetS3LogUrl(value); return *this;}

    /**
     * <p> The Amazon S3 URL of the backup's log file. </p>
     */
    inline Backup& WithS3LogUrl(Aws::String&& value) { SetS3LogUrl(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 URL of the backup's log file. </p>
     */
    inline Backup& WithS3LogUrl(const char* value) { SetS3LogUrl(value); return *this;}


    /**
     * <p> The security group IDs that are obtained from the server when the backup is
     * created. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p> The security group IDs that are obtained from the server when the backup is
     * created. </p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p> The security group IDs that are obtained from the server when the backup is
     * created. </p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p> The security group IDs that are obtained from the server when the backup is
     * created. </p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p> The security group IDs that are obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p> The security group IDs that are obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p> The security group IDs that are obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p> The security group IDs that are obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The security group IDs that are obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p> The name of the server from which the backup was made. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p> The name of the server from which the backup was made. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p> The name of the server from which the backup was made. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p> The name of the server from which the backup was made. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p> The name of the server from which the backup was made. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p> The name of the server from which the backup was made. </p>
     */
    inline Backup& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p> The name of the server from which the backup was made. </p>
     */
    inline Backup& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p> The name of the server from which the backup was made. </p>
     */
    inline Backup& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p> The service role ARN that is obtained from the server when the backup is
     * created. </p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p> The service role ARN that is obtained from the server when the backup is
     * created. </p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p> The service role ARN that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p> The service role ARN that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p> The service role ARN that is obtained from the server when the backup is
     * created. </p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p> The service role ARN that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p> The service role ARN that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p> The service role ARN that is obtained from the server when the backup is
     * created. </p>
     */
    inline Backup& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>The status of a backup while in progress. </p>
     */
    inline const BackupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a backup while in progress. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a backup while in progress. </p>
     */
    inline void SetStatus(const BackupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a backup while in progress. </p>
     */
    inline void SetStatus(BackupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a backup while in progress. </p>
     */
    inline Backup& WithStatus(const BackupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a backup while in progress. </p>
     */
    inline Backup& WithStatus(BackupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> An informational message about backup status. </p>
     */
    inline const Aws::String& GetStatusDescription() const{ return m_statusDescription; }

    /**
     * <p> An informational message about backup status. </p>
     */
    inline bool StatusDescriptionHasBeenSet() const { return m_statusDescriptionHasBeenSet; }

    /**
     * <p> An informational message about backup status. </p>
     */
    inline void SetStatusDescription(const Aws::String& value) { m_statusDescriptionHasBeenSet = true; m_statusDescription = value; }

    /**
     * <p> An informational message about backup status. </p>
     */
    inline void SetStatusDescription(Aws::String&& value) { m_statusDescriptionHasBeenSet = true; m_statusDescription = std::move(value); }

    /**
     * <p> An informational message about backup status. </p>
     */
    inline void SetStatusDescription(const char* value) { m_statusDescriptionHasBeenSet = true; m_statusDescription.assign(value); }

    /**
     * <p> An informational message about backup status. </p>
     */
    inline Backup& WithStatusDescription(const Aws::String& value) { SetStatusDescription(value); return *this;}

    /**
     * <p> An informational message about backup status. </p>
     */
    inline Backup& WithStatusDescription(Aws::String&& value) { SetStatusDescription(std::move(value)); return *this;}

    /**
     * <p> An informational message about backup status. </p>
     */
    inline Backup& WithStatusDescription(const char* value) { SetStatusDescription(value); return *this;}


    /**
     * <p> The subnet IDs that are obtained from the server when the backup is created.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p> The subnet IDs that are obtained from the server when the backup is created.
     * </p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p> The subnet IDs that are obtained from the server when the backup is created.
     * </p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p> The subnet IDs that are obtained from the server when the backup is created.
     * </p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p> The subnet IDs that are obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p> The subnet IDs that are obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p> The subnet IDs that are obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p> The subnet IDs that are obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The subnet IDs that are obtained from the server when the backup is created.
     * </p>
     */
    inline Backup& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p> The version of AWS OpsWorks CM-specific tools that is obtained from the
     * server when the backup is created. </p>
     */
    inline const Aws::String& GetToolsVersion() const{ return m_toolsVersion; }

    /**
     * <p> The version of AWS OpsWorks CM-specific tools that is obtained from the
     * server when the backup is created. </p>
     */
    inline bool ToolsVersionHasBeenSet() const { return m_toolsVersionHasBeenSet; }

    /**
     * <p> The version of AWS OpsWorks CM-specific tools that is obtained from the
     * server when the backup is created. </p>
     */
    inline void SetToolsVersion(const Aws::String& value) { m_toolsVersionHasBeenSet = true; m_toolsVersion = value; }

    /**
     * <p> The version of AWS OpsWorks CM-specific tools that is obtained from the
     * server when the backup is created. </p>
     */
    inline void SetToolsVersion(Aws::String&& value) { m_toolsVersionHasBeenSet = true; m_toolsVersion = std::move(value); }

    /**
     * <p> The version of AWS OpsWorks CM-specific tools that is obtained from the
     * server when the backup is created. </p>
     */
    inline void SetToolsVersion(const char* value) { m_toolsVersionHasBeenSet = true; m_toolsVersion.assign(value); }

    /**
     * <p> The version of AWS OpsWorks CM-specific tools that is obtained from the
     * server when the backup is created. </p>
     */
    inline Backup& WithToolsVersion(const Aws::String& value) { SetToolsVersion(value); return *this;}

    /**
     * <p> The version of AWS OpsWorks CM-specific tools that is obtained from the
     * server when the backup is created. </p>
     */
    inline Backup& WithToolsVersion(Aws::String&& value) { SetToolsVersion(std::move(value)); return *this;}

    /**
     * <p> The version of AWS OpsWorks CM-specific tools that is obtained from the
     * server when the backup is created. </p>
     */
    inline Backup& WithToolsVersion(const char* value) { SetToolsVersion(value); return *this;}


    /**
     * <p> The IAM user ARN of the requester for manual backups. This field is empty
     * for automated backups. </p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p> The IAM user ARN of the requester for manual backups. This field is empty
     * for automated backups. </p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p> The IAM user ARN of the requester for manual backups. This field is empty
     * for automated backups. </p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p> The IAM user ARN of the requester for manual backups. This field is empty
     * for automated backups. </p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p> The IAM user ARN of the requester for manual backups. This field is empty
     * for automated backups. </p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p> The IAM user ARN of the requester for manual backups. This field is empty
     * for automated backups. </p>
     */
    inline Backup& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p> The IAM user ARN of the requester for manual backups. This field is empty
     * for automated backups. </p>
     */
    inline Backup& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p> The IAM user ARN of the requester for manual backups. This field is empty
     * for automated backups. </p>
     */
    inline Backup& WithUserArn(const char* value) { SetUserArn(value); return *this;}

  private:

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet;

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;

    BackupType m_backupType;
    bool m_backupTypeHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineModel;
    bool m_engineModelHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_s3LogUrl;
    bool m_s3LogUrlHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

    BackupStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusDescription;
    bool m_statusDescriptionHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::String m_toolsVersion;
    bool m_toolsVersionHasBeenSet;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
