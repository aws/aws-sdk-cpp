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
#include <aws/backup/model/Lifecycle.h>
#include <aws/backup/model/CalculatedLifecycle.h>
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
  class AWS_BACKUP_API UpdateRecoveryPointLifecycleResult
  {
  public:
    UpdateRecoveryPointLifecycleResult();
    UpdateRecoveryPointLifecycleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateRecoveryPointLifecycleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateRecoveryPointLifecycleResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline UpdateRecoveryPointLifecycleResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline UpdateRecoveryPointLifecycleResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline UpdateRecoveryPointLifecycleResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline UpdateRecoveryPointLifecycleResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline UpdateRecoveryPointLifecycleResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline const Lifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline void SetLifecycle(const Lifecycle& value) { m_lifecycle = value; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline void SetLifecycle(Lifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline UpdateRecoveryPointLifecycleResult& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline UpdateRecoveryPointLifecycleResult& WithLifecycle(Lifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


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
    inline UpdateRecoveryPointLifecycleResult& WithCalculatedLifecycle(const CalculatedLifecycle& value) { SetCalculatedLifecycle(value); return *this;}

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline UpdateRecoveryPointLifecycleResult& WithCalculatedLifecycle(CalculatedLifecycle&& value) { SetCalculatedLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_backupVaultArn;

    Aws::String m_recoveryPointArn;

    Lifecycle m_lifecycle;

    CalculatedLifecycle m_calculatedLifecycle;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
