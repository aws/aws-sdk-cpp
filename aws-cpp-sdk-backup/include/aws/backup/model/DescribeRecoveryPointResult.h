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
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RecoveryPointCreator.h>
#include <aws/backup/model/RecoveryPointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/CalculatedLifecycle.h>
#include <aws/backup/model/Lifecycle.h>
#include <aws/backup/model/StorageClass.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class AWS_BACKUP_API DescribeRecoveryPointResult
  {
  public:
    DescribeRecoveryPointResult();
    DescribeRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArn = value; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline DescribeRecoveryPointResult& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline DescribeRecoveryPointResult& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline DescribeRecoveryPointResult& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a saved resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>An ARN that uniquely identifies a saved resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>An ARN that uniquely identifies a saved resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a saved resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a saved resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline DescribeRecoveryPointResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a saved resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline DescribeRecoveryPointResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a saved resource. The format of the ARN
     * depends on the resource type.</p>
     */
    inline DescribeRecoveryPointResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The type of AWS resource to save as a recovery point; for example, an Amazon
     * Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database Service
     * (Amazon RDS) database.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of AWS resource to save as a recovery point; for example, an Amazon
     * Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database Service
     * (Amazon RDS) database.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceType = value; }

    /**
     * <p>The type of AWS resource to save as a recovery point; for example, an Amazon
     * Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database Service
     * (Amazon RDS) database.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceType = std::move(value); }

    /**
     * <p>The type of AWS resource to save as a recovery point; for example, an Amazon
     * Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database Service
     * (Amazon RDS) database.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceType.assign(value); }

    /**
     * <p>The type of AWS resource to save as a recovery point; for example, an Amazon
     * Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database Service
     * (Amazon RDS) database.</p>
     */
    inline DescribeRecoveryPointResult& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of AWS resource to save as a recovery point; for example, an Amazon
     * Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database Service
     * (Amazon RDS) database.</p>
     */
    inline DescribeRecoveryPointResult& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of AWS resource to save as a recovery point; for example, an Amazon
     * Elastic Block Store (Amazon EBS) volume or an Amazon Relational Database Service
     * (Amazon RDS) database.</p>
     */
    inline DescribeRecoveryPointResult& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline const RecoveryPointCreator& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline void SetCreatedBy(const RecoveryPointCreator& value) { m_createdBy = value; }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline void SetCreatedBy(RecoveryPointCreator&& value) { m_createdBy = std::move(value); }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline DescribeRecoveryPointResult& WithCreatedBy(const RecoveryPointCreator& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * used to create it.</p>
     */
    inline DescribeRecoveryPointResult& WithCreatedBy(RecoveryPointCreator&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArn = value; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArn = std::move(value); }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArn.assign(value); }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>A status code specifying the state of the recovery point.</p> <note> <p>A
     * partial status indicates that the recovery point was not successfully re-created
     * and must be retried.</p> </note>
     */
    inline const RecoveryPointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status code specifying the state of the recovery point.</p> <note> <p>A
     * partial status indicates that the recovery point was not successfully re-created
     * and must be retried.</p> </note>
     */
    inline void SetStatus(const RecoveryPointStatus& value) { m_status = value; }

    /**
     * <p>A status code specifying the state of the recovery point.</p> <note> <p>A
     * partial status indicates that the recovery point was not successfully re-created
     * and must be retried.</p> </note>
     */
    inline void SetStatus(RecoveryPointStatus&& value) { m_status = std::move(value); }

    /**
     * <p>A status code specifying the state of the recovery point.</p> <note> <p>A
     * partial status indicates that the recovery point was not successfully re-created
     * and must be retried.</p> </note>
     */
    inline DescribeRecoveryPointResult& WithStatus(const RecoveryPointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status code specifying the state of the recovery point.</p> <note> <p>A
     * partial status indicates that the recovery point was not successfully re-created
     * and must be retried.</p> </note>
     */
    inline DescribeRecoveryPointResult& WithStatus(RecoveryPointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that a recovery point is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that a recovery point is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time that a recovery point is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time that a recovery point is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeRecoveryPointResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that a recovery point is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeRecoveryPointResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDate = value; }

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDate = std::move(value); }

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeRecoveryPointResult& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeRecoveryPointResult& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}


    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }

    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline DescribeRecoveryPointResult& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}


    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline const CalculatedLifecycle& GetCalculatedLifecycle() const{ return m_calculatedLifecycle; }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline void SetCalculatedLifecycle(const CalculatedLifecycle& value) { m_calculatedLifecycle = value; }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline void SetCalculatedLifecycle(CalculatedLifecycle&& value) { m_calculatedLifecycle = std::move(value); }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline DescribeRecoveryPointResult& WithCalculatedLifecycle(const CalculatedLifecycle& value) { SetCalculatedLifecycle(value); return *this;}

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline DescribeRecoveryPointResult& WithCalculatedLifecycle(CalculatedLifecycle&& value) { SetCalculatedLifecycle(std::move(value)); return *this;}


    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups that
     * are transitioned to cold storage must be stored in cold storage for a minimum of
     * 90 days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline const Lifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups that
     * are transitioned to cold storage must be stored in cold storage for a minimum of
     * 90 days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline void SetLifecycle(const Lifecycle& value) { m_lifecycle = value; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups that
     * are transitioned to cold storage must be stored in cold storage for a minimum of
     * 90 days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline void SetLifecycle(Lifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups that
     * are transitioned to cold storage must be stored in cold storage for a minimum of
     * 90 days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline DescribeRecoveryPointResult& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups that
     * are transitioned to cold storage must be stored in cold storage for a minimum of
     * 90 days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline DescribeRecoveryPointResult& WithLifecycle(Lifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>The server-side encryption key used to protect your backups; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The server-side encryption key used to protect your backups; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArn = value; }

    /**
     * <p>The server-side encryption key used to protect your backups; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The server-side encryption key used to protect your backups; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArn.assign(value); }

    /**
     * <p>The server-side encryption key used to protect your backups; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The server-side encryption key used to protect your backups; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The server-side encryption key used to protect your backups; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted.</p>
     */
    inline bool GetIsEncrypted() const{ return m_isEncrypted; }

    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted.</p>
     */
    inline void SetIsEncrypted(bool value) { m_isEncrypted = value; }

    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted.</p>
     */
    inline DescribeRecoveryPointResult& WithIsEncrypted(bool value) { SetIsEncrypted(value); return *this;}


    /**
     * <p>Specifies the storage class of the recovery point. Valid values are
     * <code>WARM</code> or <code>COLD</code>.</p>
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are
     * <code>WARM</code> or <code>COLD</code>.</p>
     */
    inline void SetStorageClass(const StorageClass& value) { m_storageClass = value; }

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are
     * <code>WARM</code> or <code>COLD</code>.</p>
     */
    inline void SetStorageClass(StorageClass&& value) { m_storageClass = std::move(value); }

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are
     * <code>WARM</code> or <code>COLD</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are
     * <code>WARM</code> or <code>COLD</code>.</p>
     */
    inline DescribeRecoveryPointResult& WithStorageClass(StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}


    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRestoreTime() const{ return m_lastRestoreTime; }

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastRestoreTime(const Aws::Utils::DateTime& value) { m_lastRestoreTime = value; }

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastRestoreTime(Aws::Utils::DateTime&& value) { m_lastRestoreTime = std::move(value); }

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeRecoveryPointResult& WithLastRestoreTime(const Aws::Utils::DateTime& value) { SetLastRestoreTime(value); return *this;}

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeRecoveryPointResult& WithLastRestoreTime(Aws::Utils::DateTime&& value) { SetLastRestoreTime(std::move(value)); return *this;}

  private:

    Aws::String m_recoveryPointArn;

    Aws::String m_backupVaultName;

    Aws::String m_backupVaultArn;

    Aws::String m_resourceArn;

    Aws::String m_resourceType;

    RecoveryPointCreator m_createdBy;

    Aws::String m_iamRoleArn;

    RecoveryPointStatus m_status;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_completionDate;

    long long m_backupSizeInBytes;

    CalculatedLifecycle m_calculatedLifecycle;

    Lifecycle m_lifecycle;

    Aws::String m_encryptionKeyArn;

    bool m_isEncrypted;

    StorageClass m_storageClass;

    Aws::Utils::DateTime m_lastRestoreTime;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
