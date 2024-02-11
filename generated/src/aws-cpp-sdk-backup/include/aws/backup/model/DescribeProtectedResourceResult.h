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
  class DescribeProtectedResourceResult
  {
  public:
    AWS_BACKUP_API DescribeProtectedResourceResult();
    AWS_BACKUP_API DescribeProtectedResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeProtectedResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline DescribeProtectedResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline DescribeProtectedResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline DescribeProtectedResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline DescribeProtectedResourceResult& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline DescribeProtectedResourceResult& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline DescribeProtectedResourceResult& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The date and time that a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBackupTime() const{ return m_lastBackupTime; }

    /**
     * <p>The date and time that a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastBackupTime(const Aws::Utils::DateTime& value) { m_lastBackupTime = value; }

    /**
     * <p>The date and time that a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastBackupTime(Aws::Utils::DateTime&& value) { m_lastBackupTime = std::move(value); }

    /**
     * <p>The date and time that a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeProtectedResourceResult& WithLastBackupTime(const Aws::Utils::DateTime& value) { SetLastBackupTime(value); return *this;}

    /**
     * <p>The date and time that a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeProtectedResourceResult& WithLastBackupTime(Aws::Utils::DateTime&& value) { SetLastBackupTime(std::move(value)); return *this;}


    /**
     * <p>This is the non-unique name of the resource that belongs to the specified
     * backup.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>This is the non-unique name of the resource that belongs to the specified
     * backup.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceName = value; }

    /**
     * <p>This is the non-unique name of the resource that belongs to the specified
     * backup.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceName = std::move(value); }

    /**
     * <p>This is the non-unique name of the resource that belongs to the specified
     * backup.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceName.assign(value); }

    /**
     * <p>This is the non-unique name of the resource that belongs to the specified
     * backup.</p>
     */
    inline DescribeProtectedResourceResult& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>This is the non-unique name of the resource that belongs to the specified
     * backup.</p>
     */
    inline DescribeProtectedResourceResult& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>This is the non-unique name of the resource that belongs to the specified
     * backup.</p>
     */
    inline DescribeProtectedResourceResult& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>This is the ARN (Amazon Resource Name) of the backup vault that contains the
     * most recent backup recovery point.</p>
     */
    inline const Aws::String& GetLastBackupVaultArn() const{ return m_lastBackupVaultArn; }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the backup vault that contains the
     * most recent backup recovery point.</p>
     */
    inline void SetLastBackupVaultArn(const Aws::String& value) { m_lastBackupVaultArn = value; }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the backup vault that contains the
     * most recent backup recovery point.</p>
     */
    inline void SetLastBackupVaultArn(Aws::String&& value) { m_lastBackupVaultArn = std::move(value); }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the backup vault that contains the
     * most recent backup recovery point.</p>
     */
    inline void SetLastBackupVaultArn(const char* value) { m_lastBackupVaultArn.assign(value); }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the backup vault that contains the
     * most recent backup recovery point.</p>
     */
    inline DescribeProtectedResourceResult& WithLastBackupVaultArn(const Aws::String& value) { SetLastBackupVaultArn(value); return *this;}

    /**
     * <p>This is the ARN (Amazon Resource Name) of the backup vault that contains the
     * most recent backup recovery point.</p>
     */
    inline DescribeProtectedResourceResult& WithLastBackupVaultArn(Aws::String&& value) { SetLastBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>This is the ARN (Amazon Resource Name) of the backup vault that contains the
     * most recent backup recovery point.</p>
     */
    inline DescribeProtectedResourceResult& WithLastBackupVaultArn(const char* value) { SetLastBackupVaultArn(value); return *this;}


    /**
     * <p>This is the ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline const Aws::String& GetLastRecoveryPointArn() const{ return m_lastRecoveryPointArn; }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline void SetLastRecoveryPointArn(const Aws::String& value) { m_lastRecoveryPointArn = value; }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline void SetLastRecoveryPointArn(Aws::String&& value) { m_lastRecoveryPointArn = std::move(value); }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline void SetLastRecoveryPointArn(const char* value) { m_lastRecoveryPointArn.assign(value); }

    /**
     * <p>This is the ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline DescribeProtectedResourceResult& WithLastRecoveryPointArn(const Aws::String& value) { SetLastRecoveryPointArn(value); return *this;}

    /**
     * <p>This is the ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline DescribeProtectedResourceResult& WithLastRecoveryPointArn(Aws::String&& value) { SetLastRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>This is the ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline DescribeProtectedResourceResult& WithLastRecoveryPointArn(const char* value) { SetLastRecoveryPointArn(value); return *this;}


    /**
     * <p>This is the time in minutes the most recent restore job took to complete.</p>
     */
    inline long long GetLatestRestoreExecutionTimeMinutes() const{ return m_latestRestoreExecutionTimeMinutes; }

    /**
     * <p>This is the time in minutes the most recent restore job took to complete.</p>
     */
    inline void SetLatestRestoreExecutionTimeMinutes(long long value) { m_latestRestoreExecutionTimeMinutes = value; }

    /**
     * <p>This is the time in minutes the most recent restore job took to complete.</p>
     */
    inline DescribeProtectedResourceResult& WithLatestRestoreExecutionTimeMinutes(long long value) { SetLatestRestoreExecutionTimeMinutes(value); return *this;}


    /**
     * <p>This is the creation date of the most recent restore job.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestoreJobCreationDate() const{ return m_latestRestoreJobCreationDate; }

    /**
     * <p>This is the creation date of the most recent restore job.</p>
     */
    inline void SetLatestRestoreJobCreationDate(const Aws::Utils::DateTime& value) { m_latestRestoreJobCreationDate = value; }

    /**
     * <p>This is the creation date of the most recent restore job.</p>
     */
    inline void SetLatestRestoreJobCreationDate(Aws::Utils::DateTime&& value) { m_latestRestoreJobCreationDate = std::move(value); }

    /**
     * <p>This is the creation date of the most recent restore job.</p>
     */
    inline DescribeProtectedResourceResult& WithLatestRestoreJobCreationDate(const Aws::Utils::DateTime& value) { SetLatestRestoreJobCreationDate(value); return *this;}

    /**
     * <p>This is the creation date of the most recent restore job.</p>
     */
    inline DescribeProtectedResourceResult& WithLatestRestoreJobCreationDate(Aws::Utils::DateTime&& value) { SetLatestRestoreJobCreationDate(std::move(value)); return *this;}


    /**
     * <p>This is the date the most recent recovery point was created.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestoreRecoveryPointCreationDate() const{ return m_latestRestoreRecoveryPointCreationDate; }

    /**
     * <p>This is the date the most recent recovery point was created.</p>
     */
    inline void SetLatestRestoreRecoveryPointCreationDate(const Aws::Utils::DateTime& value) { m_latestRestoreRecoveryPointCreationDate = value; }

    /**
     * <p>This is the date the most recent recovery point was created.</p>
     */
    inline void SetLatestRestoreRecoveryPointCreationDate(Aws::Utils::DateTime&& value) { m_latestRestoreRecoveryPointCreationDate = std::move(value); }

    /**
     * <p>This is the date the most recent recovery point was created.</p>
     */
    inline DescribeProtectedResourceResult& WithLatestRestoreRecoveryPointCreationDate(const Aws::Utils::DateTime& value) { SetLatestRestoreRecoveryPointCreationDate(value); return *this;}

    /**
     * <p>This is the date the most recent recovery point was created.</p>
     */
    inline DescribeProtectedResourceResult& WithLatestRestoreRecoveryPointCreationDate(Aws::Utils::DateTime&& value) { SetLatestRestoreRecoveryPointCreationDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeProtectedResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeProtectedResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeProtectedResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_resourceArn;

    Aws::String m_resourceType;

    Aws::Utils::DateTime m_lastBackupTime;

    Aws::String m_resourceName;

    Aws::String m_lastBackupVaultArn;

    Aws::String m_lastRecoveryPointArn;

    long long m_latestRestoreExecutionTimeMinutes;

    Aws::Utils::DateTime m_latestRestoreJobCreationDate;

    Aws::Utils::DateTime m_latestRestoreRecoveryPointCreationDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
