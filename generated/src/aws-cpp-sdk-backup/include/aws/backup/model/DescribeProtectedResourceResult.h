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


    ///@{
    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline DescribeProtectedResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline DescribeProtectedResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline DescribeProtectedResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const Aws::String& value) { m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceType.assign(value); }
    inline DescribeProtectedResourceResult& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline DescribeProtectedResourceResult& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline DescribeProtectedResourceResult& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBackupTime() const{ return m_lastBackupTime; }
    inline void SetLastBackupTime(const Aws::Utils::DateTime& value) { m_lastBackupTime = value; }
    inline void SetLastBackupTime(Aws::Utils::DateTime&& value) { m_lastBackupTime = std::move(value); }
    inline DescribeProtectedResourceResult& WithLastBackupTime(const Aws::Utils::DateTime& value) { SetLastBackupTime(value); return *this;}
    inline DescribeProtectedResourceResult& WithLastBackupTime(Aws::Utils::DateTime&& value) { SetLastBackupTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource that belongs to the specified backup.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline void SetResourceName(const Aws::String& value) { m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceName.assign(value); }
    inline DescribeProtectedResourceResult& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline DescribeProtectedResourceResult& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline DescribeProtectedResourceResult& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the backup vault that contains the most
     * recent backup recovery point.</p>
     */
    inline const Aws::String& GetLastBackupVaultArn() const{ return m_lastBackupVaultArn; }
    inline void SetLastBackupVaultArn(const Aws::String& value) { m_lastBackupVaultArn = value; }
    inline void SetLastBackupVaultArn(Aws::String&& value) { m_lastBackupVaultArn = std::move(value); }
    inline void SetLastBackupVaultArn(const char* value) { m_lastBackupVaultArn.assign(value); }
    inline DescribeProtectedResourceResult& WithLastBackupVaultArn(const Aws::String& value) { SetLastBackupVaultArn(value); return *this;}
    inline DescribeProtectedResourceResult& WithLastBackupVaultArn(Aws::String&& value) { SetLastBackupVaultArn(std::move(value)); return *this;}
    inline DescribeProtectedResourceResult& WithLastBackupVaultArn(const char* value) { SetLastBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline const Aws::String& GetLastRecoveryPointArn() const{ return m_lastRecoveryPointArn; }
    inline void SetLastRecoveryPointArn(const Aws::String& value) { m_lastRecoveryPointArn = value; }
    inline void SetLastRecoveryPointArn(Aws::String&& value) { m_lastRecoveryPointArn = std::move(value); }
    inline void SetLastRecoveryPointArn(const char* value) { m_lastRecoveryPointArn.assign(value); }
    inline DescribeProtectedResourceResult& WithLastRecoveryPointArn(const Aws::String& value) { SetLastRecoveryPointArn(value); return *this;}
    inline DescribeProtectedResourceResult& WithLastRecoveryPointArn(Aws::String&& value) { SetLastRecoveryPointArn(std::move(value)); return *this;}
    inline DescribeProtectedResourceResult& WithLastRecoveryPointArn(const char* value) { SetLastRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in minutes, that the most recent restore job took to complete.</p>
     */
    inline long long GetLatestRestoreExecutionTimeMinutes() const{ return m_latestRestoreExecutionTimeMinutes; }
    inline void SetLatestRestoreExecutionTimeMinutes(long long value) { m_latestRestoreExecutionTimeMinutes = value; }
    inline DescribeProtectedResourceResult& WithLatestRestoreExecutionTimeMinutes(long long value) { SetLatestRestoreExecutionTimeMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date of the most recent restore job.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestoreJobCreationDate() const{ return m_latestRestoreJobCreationDate; }
    inline void SetLatestRestoreJobCreationDate(const Aws::Utils::DateTime& value) { m_latestRestoreJobCreationDate = value; }
    inline void SetLatestRestoreJobCreationDate(Aws::Utils::DateTime&& value) { m_latestRestoreJobCreationDate = std::move(value); }
    inline DescribeProtectedResourceResult& WithLatestRestoreJobCreationDate(const Aws::Utils::DateTime& value) { SetLatestRestoreJobCreationDate(value); return *this;}
    inline DescribeProtectedResourceResult& WithLatestRestoreJobCreationDate(Aws::Utils::DateTime&& value) { SetLatestRestoreJobCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the most recent recovery point was created.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestoreRecoveryPointCreationDate() const{ return m_latestRestoreRecoveryPointCreationDate; }
    inline void SetLatestRestoreRecoveryPointCreationDate(const Aws::Utils::DateTime& value) { m_latestRestoreRecoveryPointCreationDate = value; }
    inline void SetLatestRestoreRecoveryPointCreationDate(Aws::Utils::DateTime&& value) { m_latestRestoreRecoveryPointCreationDate = std::move(value); }
    inline DescribeProtectedResourceResult& WithLatestRestoreRecoveryPointCreationDate(const Aws::Utils::DateTime& value) { SetLatestRestoreRecoveryPointCreationDate(value); return *this;}
    inline DescribeProtectedResourceResult& WithLatestRestoreRecoveryPointCreationDate(Aws::Utils::DateTime&& value) { SetLatestRestoreRecoveryPointCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeProtectedResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeProtectedResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeProtectedResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
