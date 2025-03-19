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
    AWS_BACKUP_API DescribeProtectedResourceResult() = default;
    AWS_BACKUP_API DescribeProtectedResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeProtectedResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    DescribeProtectedResourceResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon EBS volume or an Amazon RDS database.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    DescribeProtectedResourceResult& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a resource was last backed up, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastBackupTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastBackupTime() const { return m_lastBackupTime; }
    template<typename LastBackupTimeT = Aws::Utils::DateTime>
    void SetLastBackupTime(LastBackupTimeT&& value) { m_lastBackupTimeHasBeenSet = true; m_lastBackupTime = std::forward<LastBackupTimeT>(value); }
    template<typename LastBackupTimeT = Aws::Utils::DateTime>
    DescribeProtectedResourceResult& WithLastBackupTime(LastBackupTimeT&& value) { SetLastBackupTime(std::forward<LastBackupTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource that belongs to the specified backup.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    DescribeProtectedResourceResult& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the backup vault that contains the most
     * recent backup recovery point.</p>
     */
    inline const Aws::String& GetLastBackupVaultArn() const { return m_lastBackupVaultArn; }
    template<typename LastBackupVaultArnT = Aws::String>
    void SetLastBackupVaultArn(LastBackupVaultArnT&& value) { m_lastBackupVaultArnHasBeenSet = true; m_lastBackupVaultArn = std::forward<LastBackupVaultArnT>(value); }
    template<typename LastBackupVaultArnT = Aws::String>
    DescribeProtectedResourceResult& WithLastBackupVaultArn(LastBackupVaultArnT&& value) { SetLastBackupVaultArn(std::forward<LastBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the most recent recovery point.</p>
     */
    inline const Aws::String& GetLastRecoveryPointArn() const { return m_lastRecoveryPointArn; }
    template<typename LastRecoveryPointArnT = Aws::String>
    void SetLastRecoveryPointArn(LastRecoveryPointArnT&& value) { m_lastRecoveryPointArnHasBeenSet = true; m_lastRecoveryPointArn = std::forward<LastRecoveryPointArnT>(value); }
    template<typename LastRecoveryPointArnT = Aws::String>
    DescribeProtectedResourceResult& WithLastRecoveryPointArn(LastRecoveryPointArnT&& value) { SetLastRecoveryPointArn(std::forward<LastRecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in minutes, that the most recent restore job took to complete.</p>
     */
    inline long long GetLatestRestoreExecutionTimeMinutes() const { return m_latestRestoreExecutionTimeMinutes; }
    inline void SetLatestRestoreExecutionTimeMinutes(long long value) { m_latestRestoreExecutionTimeMinutesHasBeenSet = true; m_latestRestoreExecutionTimeMinutes = value; }
    inline DescribeProtectedResourceResult& WithLatestRestoreExecutionTimeMinutes(long long value) { SetLatestRestoreExecutionTimeMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date of the most recent restore job.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestoreJobCreationDate() const { return m_latestRestoreJobCreationDate; }
    template<typename LatestRestoreJobCreationDateT = Aws::Utils::DateTime>
    void SetLatestRestoreJobCreationDate(LatestRestoreJobCreationDateT&& value) { m_latestRestoreJobCreationDateHasBeenSet = true; m_latestRestoreJobCreationDate = std::forward<LatestRestoreJobCreationDateT>(value); }
    template<typename LatestRestoreJobCreationDateT = Aws::Utils::DateTime>
    DescribeProtectedResourceResult& WithLatestRestoreJobCreationDate(LatestRestoreJobCreationDateT&& value) { SetLatestRestoreJobCreationDate(std::forward<LatestRestoreJobCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the most recent recovery point was created.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestoreRecoveryPointCreationDate() const { return m_latestRestoreRecoveryPointCreationDate; }
    template<typename LatestRestoreRecoveryPointCreationDateT = Aws::Utils::DateTime>
    void SetLatestRestoreRecoveryPointCreationDate(LatestRestoreRecoveryPointCreationDateT&& value) { m_latestRestoreRecoveryPointCreationDateHasBeenSet = true; m_latestRestoreRecoveryPointCreationDate = std::forward<LatestRestoreRecoveryPointCreationDateT>(value); }
    template<typename LatestRestoreRecoveryPointCreationDateT = Aws::Utils::DateTime>
    DescribeProtectedResourceResult& WithLatestRestoreRecoveryPointCreationDate(LatestRestoreRecoveryPointCreationDateT&& value) { SetLatestRestoreRecoveryPointCreationDate(std::forward<LatestRestoreRecoveryPointCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProtectedResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    long long m_latestRestoreExecutionTimeMinutes{0};
    bool m_latestRestoreExecutionTimeMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_latestRestoreJobCreationDate{};
    bool m_latestRestoreJobCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_latestRestoreRecoveryPointCreationDate{};
    bool m_latestRestoreRecoveryPointCreationDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
