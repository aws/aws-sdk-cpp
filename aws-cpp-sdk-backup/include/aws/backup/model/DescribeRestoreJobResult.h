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
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/RestoreJobStatus.h>
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
  class AWS_BACKUP_API DescribeRestoreJobResult
  {
  public:
    DescribeRestoreJobResult();
    DescribeRestoreJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRestoreJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline const Aws::String& GetRestoreJobId() const{ return m_restoreJobId; }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline void SetRestoreJobId(const Aws::String& value) { m_restoreJobId = value; }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline void SetRestoreJobId(Aws::String&& value) { m_restoreJobId = std::move(value); }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline void SetRestoreJobId(const char* value) { m_restoreJobId.assign(value); }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline DescribeRestoreJobResult& WithRestoreJobId(const Aws::String& value) { SetRestoreJobId(value); return *this;}

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline DescribeRestoreJobResult& WithRestoreJobId(Aws::String&& value) { SetRestoreJobId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline DescribeRestoreJobResult& WithRestoreJobId(const char* value) { SetRestoreJobId(value); return *this;}


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
    inline DescribeRestoreJobResult& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline DescribeRestoreJobResult& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline DescribeRestoreJobResult& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


    /**
     * <p>The date and time that a restore job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that a restore job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time that a restore job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time that a restore job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeRestoreJobResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that a restore job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeRestoreJobResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that a job to restore a recovery point is completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }

    /**
     * <p>The date and time that a job to restore a recovery point is completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDate = value; }

    /**
     * <p>The date and time that a job to restore a recovery point is completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDate = std::move(value); }

    /**
     * <p>The date and time that a job to restore a recovery point is completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeRestoreJobResult& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The date and time that a job to restore a recovery point is completed, in
     * Unix format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeRestoreJobResult& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}


    /**
     * <p>Status code specifying the state of the job that is initiated by AWS Backup
     * to restore a recovery point.</p>
     */
    inline const RestoreJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status code specifying the state of the job that is initiated by AWS Backup
     * to restore a recovery point.</p>
     */
    inline void SetStatus(const RestoreJobStatus& value) { m_status = value; }

    /**
     * <p>Status code specifying the state of the job that is initiated by AWS Backup
     * to restore a recovery point.</p>
     */
    inline void SetStatus(RestoreJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Status code specifying the state of the job that is initiated by AWS Backup
     * to restore a recovery point.</p>
     */
    inline DescribeRestoreJobResult& WithStatus(const RestoreJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status code specifying the state of the job that is initiated by AWS Backup
     * to restore a recovery point.</p>
     */
    inline DescribeRestoreJobResult& WithStatus(RestoreJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A detailed message explaining the status of a job to restore a recovery
     * point.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed message explaining the status of a job to restore a recovery
     * point.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>A detailed message explaining the status of a job to restore a recovery
     * point.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>A detailed message explaining the status of a job to restore a recovery
     * point.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>A detailed message explaining the status of a job to restore a recovery
     * point.</p>
     */
    inline DescribeRestoreJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed message explaining the status of a job to restore a recovery
     * point.</p>
     */
    inline DescribeRestoreJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed message explaining the status of a job to restore a recovery
     * point.</p>
     */
    inline DescribeRestoreJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Contains an estimated percentage that is complete of a job at the time the
     * job status was queried.</p>
     */
    inline const Aws::String& GetPercentDone() const{ return m_percentDone; }

    /**
     * <p>Contains an estimated percentage that is complete of a job at the time the
     * job status was queried.</p>
     */
    inline void SetPercentDone(const Aws::String& value) { m_percentDone = value; }

    /**
     * <p>Contains an estimated percentage that is complete of a job at the time the
     * job status was queried.</p>
     */
    inline void SetPercentDone(Aws::String&& value) { m_percentDone = std::move(value); }

    /**
     * <p>Contains an estimated percentage that is complete of a job at the time the
     * job status was queried.</p>
     */
    inline void SetPercentDone(const char* value) { m_percentDone.assign(value); }

    /**
     * <p>Contains an estimated percentage that is complete of a job at the time the
     * job status was queried.</p>
     */
    inline DescribeRestoreJobResult& WithPercentDone(const Aws::String& value) { SetPercentDone(value); return *this;}

    /**
     * <p>Contains an estimated percentage that is complete of a job at the time the
     * job status was queried.</p>
     */
    inline DescribeRestoreJobResult& WithPercentDone(Aws::String&& value) { SetPercentDone(std::move(value)); return *this;}

    /**
     * <p>Contains an estimated percentage that is complete of a job at the time the
     * job status was queried.</p>
     */
    inline DescribeRestoreJobResult& WithPercentDone(const char* value) { SetPercentDone(value); return *this;}


    /**
     * <p>The size, in bytes, of the restored resource.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }

    /**
     * <p>The size, in bytes, of the restored resource.</p>
     */
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the restored resource.</p>
     */
    inline DescribeRestoreJobResult& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}


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
    inline DescribeRestoreJobResult& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline DescribeRestoreJobResult& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline DescribeRestoreJobResult& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The amount of time in minutes that a job restoring a recovery point is
     * expected to take.</p>
     */
    inline long long GetExpectedCompletionTimeMinutes() const{ return m_expectedCompletionTimeMinutes; }

    /**
     * <p>The amount of time in minutes that a job restoring a recovery point is
     * expected to take.</p>
     */
    inline void SetExpectedCompletionTimeMinutes(long long value) { m_expectedCompletionTimeMinutes = value; }

    /**
     * <p>The amount of time in minutes that a job restoring a recovery point is
     * expected to take.</p>
     */
    inline DescribeRestoreJobResult& WithExpectedCompletionTimeMinutes(long long value) { SetExpectedCompletionTimeMinutes(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource whose
     * recovery point is being restored. The format of the ARN depends on the resource
     * type of the backed-up resource.</p>
     */
    inline const Aws::String& GetCreatedResourceArn() const{ return m_createdResourceArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource whose
     * recovery point is being restored. The format of the ARN depends on the resource
     * type of the backed-up resource.</p>
     */
    inline void SetCreatedResourceArn(const Aws::String& value) { m_createdResourceArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource whose
     * recovery point is being restored. The format of the ARN depends on the resource
     * type of the backed-up resource.</p>
     */
    inline void SetCreatedResourceArn(Aws::String&& value) { m_createdResourceArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource whose
     * recovery point is being restored. The format of the ARN depends on the resource
     * type of the backed-up resource.</p>
     */
    inline void SetCreatedResourceArn(const char* value) { m_createdResourceArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource whose
     * recovery point is being restored. The format of the ARN depends on the resource
     * type of the backed-up resource.</p>
     */
    inline DescribeRestoreJobResult& WithCreatedResourceArn(const Aws::String& value) { SetCreatedResourceArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource whose
     * recovery point is being restored. The format of the ARN depends on the resource
     * type of the backed-up resource.</p>
     */
    inline DescribeRestoreJobResult& WithCreatedResourceArn(Aws::String&& value) { SetCreatedResourceArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource whose
     * recovery point is being restored. The format of the ARN depends on the resource
     * type of the backed-up resource.</p>
     */
    inline DescribeRestoreJobResult& WithCreatedResourceArn(const char* value) { SetCreatedResourceArn(value); return *this;}

  private:

    Aws::String m_restoreJobId;

    Aws::String m_recoveryPointArn;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_completionDate;

    RestoreJobStatus m_status;

    Aws::String m_statusMessage;

    Aws::String m_percentDone;

    long long m_backupSizeInBytes;

    Aws::String m_iamRoleArn;

    long long m_expectedCompletionTimeMinutes;

    Aws::String m_createdResourceArn;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
