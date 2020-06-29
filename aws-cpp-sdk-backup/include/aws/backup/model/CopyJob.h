/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/CopyJobState.h>
#include <aws/backup/model/RecoveryPointCreator.h>
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
   * <p>Contains detailed information about a copy job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CopyJob">AWS API
   * Reference</a></p>
   */
  class AWS_BACKUP_API CopyJob
  {
  public:
    CopyJob();
    CopyJob(Aws::Utils::Json::JsonView jsonValue);
    CopyJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account ID that owns the copy job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID that owns the copy job.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID that owns the copy job.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID that owns the copy job.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID that owns the copy job.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID that owns the copy job.</p>
     */
    inline CopyJob& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID that owns the copy job.</p>
     */
    inline CopyJob& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID that owns the copy job.</p>
     */
    inline CopyJob& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline const Aws::String& GetCopyJobId() const{ return m_copyJobId; }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline bool CopyJobIdHasBeenSet() const { return m_copyJobIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline void SetCopyJobId(const Aws::String& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = value; }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline void SetCopyJobId(Aws::String&& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = std::move(value); }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline void SetCopyJobId(const char* value) { m_copyJobIdHasBeenSet = true; m_copyJobId.assign(value); }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline CopyJob& WithCopyJobId(const Aws::String& value) { SetCopyJobId(value); return *this;}

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline CopyJob& WithCopyJobId(Aws::String&& value) { SetCopyJobId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline CopyJob& WithCopyJobId(const char* value) { SetCopyJobId(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source copy vault;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const{ return m_sourceBackupVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source copy vault;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline bool SourceBackupVaultArnHasBeenSet() const { return m_sourceBackupVaultArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source copy vault;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline void SetSourceBackupVaultArn(const Aws::String& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source copy vault;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline void SetSourceBackupVaultArn(Aws::String&& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source copy vault;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline void SetSourceBackupVaultArn(const char* value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source copy vault;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline CopyJob& WithSourceBackupVaultArn(const Aws::String& value) { SetSourceBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source copy vault;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline CopyJob& WithSourceBackupVaultArn(Aws::String&& value) { SetSourceBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a source copy vault;
     * for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>. </p>
     */
    inline CopyJob& WithSourceBackupVaultArn(const char* value) { SetSourceBackupVaultArn(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a source recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetSourceRecoveryPointArn() const{ return m_sourceRecoveryPointArn; }

    /**
     * <p>An ARN that uniquely identifies a source recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline bool SourceRecoveryPointArnHasBeenSet() const { return m_sourceRecoveryPointArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a source recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetSourceRecoveryPointArn(const Aws::String& value) { m_sourceRecoveryPointArnHasBeenSet = true; m_sourceRecoveryPointArn = value; }

    /**
     * <p>An ARN that uniquely identifies a source recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetSourceRecoveryPointArn(Aws::String&& value) { m_sourceRecoveryPointArnHasBeenSet = true; m_sourceRecoveryPointArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a source recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetSourceRecoveryPointArn(const char* value) { m_sourceRecoveryPointArnHasBeenSet = true; m_sourceRecoveryPointArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a source recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline CopyJob& WithSourceRecoveryPointArn(const Aws::String& value) { SetSourceRecoveryPointArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a source recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline CopyJob& WithSourceRecoveryPointArn(Aws::String&& value) { SetSourceRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a source recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline CopyJob& WithSourceRecoveryPointArn(const char* value) { SetSourceRecoveryPointArn(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination copy
     * vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetDestinationBackupVaultArn() const{ return m_destinationBackupVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination copy
     * vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline bool DestinationBackupVaultArnHasBeenSet() const { return m_destinationBackupVaultArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination copy
     * vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetDestinationBackupVaultArn(const Aws::String& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination copy
     * vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetDestinationBackupVaultArn(Aws::String&& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination copy
     * vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetDestinationBackupVaultArn(const char* value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination copy
     * vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline CopyJob& WithDestinationBackupVaultArn(const Aws::String& value) { SetDestinationBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination copy
     * vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline CopyJob& WithDestinationBackupVaultArn(Aws::String&& value) { SetDestinationBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination copy
     * vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline CopyJob& WithDestinationBackupVaultArn(const char* value) { SetDestinationBackupVaultArn(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a destination recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetDestinationRecoveryPointArn() const{ return m_destinationRecoveryPointArn; }

    /**
     * <p>An ARN that uniquely identifies a destination recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline bool DestinationRecoveryPointArnHasBeenSet() const { return m_destinationRecoveryPointArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a destination recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetDestinationRecoveryPointArn(const Aws::String& value) { m_destinationRecoveryPointArnHasBeenSet = true; m_destinationRecoveryPointArn = value; }

    /**
     * <p>An ARN that uniquely identifies a destination recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetDestinationRecoveryPointArn(Aws::String&& value) { m_destinationRecoveryPointArnHasBeenSet = true; m_destinationRecoveryPointArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a destination recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetDestinationRecoveryPointArn(const char* value) { m_destinationRecoveryPointArnHasBeenSet = true; m_destinationRecoveryPointArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a destination recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline CopyJob& WithDestinationRecoveryPointArn(const Aws::String& value) { SetDestinationRecoveryPointArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a destination recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline CopyJob& WithDestinationRecoveryPointArn(Aws::String&& value) { SetDestinationRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a destination recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline CopyJob& WithDestinationRecoveryPointArn(const char* value) { SetDestinationRecoveryPointArn(value); return *this;}


    /**
     * <p>The AWS resource to be copied; for example, an Amazon Elastic Block Store
     * (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The AWS resource to be copied; for example, an Amazon Elastic Block Store
     * (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The AWS resource to be copied; for example, an Amazon Elastic Block Store
     * (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The AWS resource to be copied; for example, an Amazon Elastic Block Store
     * (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The AWS resource to be copied; for example, an Amazon Elastic Block Store
     * (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The AWS resource to be copied; for example, an Amazon Elastic Block Store
     * (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline CopyJob& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The AWS resource to be copied; for example, an Amazon Elastic Block Store
     * (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline CopyJob& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The AWS resource to be copied; for example, an Amazon Elastic Block Store
     * (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline CopyJob& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The date and time a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline CopyJob& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time a copy job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline CopyJob& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time a copy job is completed, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }

    /**
     * <p>The date and time a copy job is completed, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }

    /**
     * <p>The date and time a copy job is completed, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }

    /**
     * <p>The date and time a copy job is completed, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }

    /**
     * <p>The date and time a copy job is completed, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline CopyJob& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The date and time a copy job is completed, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline CopyJob& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}


    /**
     * <p>The current state of a copy job.</p>
     */
    inline const CopyJobState& GetState() const{ return m_state; }

    /**
     * <p>The current state of a copy job.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of a copy job.</p>
     */
    inline void SetState(const CopyJobState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of a copy job.</p>
     */
    inline void SetState(CopyJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of a copy job.</p>
     */
    inline CopyJob& WithState(const CopyJobState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of a copy job.</p>
     */
    inline CopyJob& WithState(CopyJobState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A detailed message explaining the status of the job to copy a resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed message explaining the status of the job to copy a resource.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A detailed message explaining the status of the job to copy a resource.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A detailed message explaining the status of the job to copy a resource.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A detailed message explaining the status of the job to copy a resource.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A detailed message explaining the status of the job to copy a resource.</p>
     */
    inline CopyJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed message explaining the status of the job to copy a resource.</p>
     */
    inline CopyJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed message explaining the status of the job to copy a resource.</p>
     */
    inline CopyJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The size, in bytes, of a copy job.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }

    /**
     * <p>The size, in bytes, of a copy job.</p>
     */
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }

    /**
     * <p>The size, in bytes, of a copy job.</p>
     */
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of a copy job.</p>
     */
    inline CopyJob& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}


    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline CopyJob& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline CopyJob& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline CopyJob& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    
    inline const RecoveryPointCreator& GetCreatedBy() const{ return m_createdBy; }

    
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    
    inline void SetCreatedBy(const RecoveryPointCreator& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    
    inline void SetCreatedBy(RecoveryPointCreator&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    
    inline CopyJob& WithCreatedBy(const RecoveryPointCreator& value) { SetCreatedBy(value); return *this;}

    
    inline CopyJob& WithCreatedBy(RecoveryPointCreator&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>The type of AWS resource to be copied; for example, an Amazon Elastic Block
     * Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of AWS resource to be copied; for example, an Amazon Elastic Block
     * Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of AWS resource to be copied; for example, an Amazon Elastic Block
     * Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of AWS resource to be copied; for example, an Amazon Elastic Block
     * Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of AWS resource to be copied; for example, an Amazon Elastic Block
     * Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of AWS resource to be copied; for example, an Amazon Elastic Block
     * Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline CopyJob& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of AWS resource to be copied; for example, an Amazon Elastic Block
     * Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline CopyJob& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of AWS resource to be copied; for example, an Amazon Elastic Block
     * Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon RDS)
     * database.</p>
     */
    inline CopyJob& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_copyJobId;
    bool m_copyJobIdHasBeenSet;

    Aws::String m_sourceBackupVaultArn;
    bool m_sourceBackupVaultArnHasBeenSet;

    Aws::String m_sourceRecoveryPointArn;
    bool m_sourceRecoveryPointArnHasBeenSet;

    Aws::String m_destinationBackupVaultArn;
    bool m_destinationBackupVaultArnHasBeenSet;

    Aws::String m_destinationRecoveryPointArn;
    bool m_destinationRecoveryPointArnHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::Utils::DateTime m_completionDate;
    bool m_completionDateHasBeenSet;

    CopyJobState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    long long m_backupSizeInBytes;
    bool m_backupSizeInBytesHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    RecoveryPointCreator m_createdBy;
    bool m_createdByHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
