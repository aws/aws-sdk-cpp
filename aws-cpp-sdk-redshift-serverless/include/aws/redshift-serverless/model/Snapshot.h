/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift-serverless/model/SnapshotStatus.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>A snapshot object that contains databases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/Snapshot">AWS
   * API Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_REDSHIFTSERVERLESS_API Snapshot();
    AWS_REDSHIFTSERVERLESS_API Snapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountsWithProvisionedRestoreAccess() const{ return m_accountsWithProvisionedRestoreAccess; }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline bool AccountsWithProvisionedRestoreAccessHasBeenSet() const { return m_accountsWithProvisionedRestoreAccessHasBeenSet; }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline void SetAccountsWithProvisionedRestoreAccess(const Aws::Vector<Aws::String>& value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess = value; }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline void SetAccountsWithProvisionedRestoreAccess(Aws::Vector<Aws::String>&& value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess = std::move(value); }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline Snapshot& WithAccountsWithProvisionedRestoreAccess(const Aws::Vector<Aws::String>& value) { SetAccountsWithProvisionedRestoreAccess(value); return *this;}

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline Snapshot& WithAccountsWithProvisionedRestoreAccess(Aws::Vector<Aws::String>&& value) { SetAccountsWithProvisionedRestoreAccess(std::move(value)); return *this;}

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline Snapshot& AddAccountsWithProvisionedRestoreAccess(const Aws::String& value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess.push_back(value); return *this; }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline Snapshot& AddAccountsWithProvisionedRestoreAccess(Aws::String&& value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess.push_back(std::move(value)); return *this; }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a provisioned cluster.</p>
     */
    inline Snapshot& AddAccountsWithProvisionedRestoreAccess(const char* value) { m_accountsWithProvisionedRestoreAccessHasBeenSet = true; m_accountsWithProvisionedRestoreAccess.push_back(value); return *this; }


    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountsWithRestoreAccess() const{ return m_accountsWithRestoreAccess; }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline bool AccountsWithRestoreAccessHasBeenSet() const { return m_accountsWithRestoreAccessHasBeenSet; }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline void SetAccountsWithRestoreAccess(const Aws::Vector<Aws::String>& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess = value; }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline void SetAccountsWithRestoreAccess(Aws::Vector<Aws::String>&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess = std::move(value); }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline Snapshot& WithAccountsWithRestoreAccess(const Aws::Vector<Aws::String>& value) { SetAccountsWithRestoreAccess(value); return *this;}

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline Snapshot& WithAccountsWithRestoreAccess(Aws::Vector<Aws::String>&& value) { SetAccountsWithRestoreAccess(std::move(value)); return *this;}

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline Snapshot& AddAccountsWithRestoreAccess(const Aws::String& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.push_back(value); return *this; }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline Snapshot& AddAccountsWithRestoreAccess(Aws::String&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.push_back(std::move(value)); return *this; }

    /**
     * <p>All of the Amazon Web Services accounts that have access to restore a
     * snapshot to a namespace.</p>
     */
    inline Snapshot& AddAccountsWithRestoreAccess(const char* value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.push_back(value); return *this; }


    /**
     * <p>The size of the incremental backup in megabytes.</p>
     */
    inline double GetActualIncrementalBackupSizeInMegaBytes() const{ return m_actualIncrementalBackupSizeInMegaBytes; }

    /**
     * <p>The size of the incremental backup in megabytes.</p>
     */
    inline bool ActualIncrementalBackupSizeInMegaBytesHasBeenSet() const { return m_actualIncrementalBackupSizeInMegaBytesHasBeenSet; }

    /**
     * <p>The size of the incremental backup in megabytes.</p>
     */
    inline void SetActualIncrementalBackupSizeInMegaBytes(double value) { m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = true; m_actualIncrementalBackupSizeInMegaBytes = value; }

    /**
     * <p>The size of the incremental backup in megabytes.</p>
     */
    inline Snapshot& WithActualIncrementalBackupSizeInMegaBytes(double value) { SetActualIncrementalBackupSizeInMegaBytes(value); return *this;}


    /**
     * <p>The username of the database within a snapshot.</p>
     */
    inline const Aws::String& GetAdminUsername() const{ return m_adminUsername; }

    /**
     * <p>The username of the database within a snapshot.</p>
     */
    inline bool AdminUsernameHasBeenSet() const { return m_adminUsernameHasBeenSet; }

    /**
     * <p>The username of the database within a snapshot.</p>
     */
    inline void SetAdminUsername(const Aws::String& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = value; }

    /**
     * <p>The username of the database within a snapshot.</p>
     */
    inline void SetAdminUsername(Aws::String&& value) { m_adminUsernameHasBeenSet = true; m_adminUsername = std::move(value); }

    /**
     * <p>The username of the database within a snapshot.</p>
     */
    inline void SetAdminUsername(const char* value) { m_adminUsernameHasBeenSet = true; m_adminUsername.assign(value); }

    /**
     * <p>The username of the database within a snapshot.</p>
     */
    inline Snapshot& WithAdminUsername(const Aws::String& value) { SetAdminUsername(value); return *this;}

    /**
     * <p>The username of the database within a snapshot.</p>
     */
    inline Snapshot& WithAdminUsername(Aws::String&& value) { SetAdminUsername(std::move(value)); return *this;}

    /**
     * <p>The username of the database within a snapshot.</p>
     */
    inline Snapshot& WithAdminUsername(const char* value) { SetAdminUsername(value); return *this;}


    /**
     * <p>The size in megabytes of the data that has been backed up to a snapshot.</p>
     */
    inline double GetBackupProgressInMegaBytes() const{ return m_backupProgressInMegaBytes; }

    /**
     * <p>The size in megabytes of the data that has been backed up to a snapshot.</p>
     */
    inline bool BackupProgressInMegaBytesHasBeenSet() const { return m_backupProgressInMegaBytesHasBeenSet; }

    /**
     * <p>The size in megabytes of the data that has been backed up to a snapshot.</p>
     */
    inline void SetBackupProgressInMegaBytes(double value) { m_backupProgressInMegaBytesHasBeenSet = true; m_backupProgressInMegaBytes = value; }

    /**
     * <p>The size in megabytes of the data that has been backed up to a snapshot.</p>
     */
    inline Snapshot& WithBackupProgressInMegaBytes(double value) { SetBackupProgressInMegaBytes(value); return *this;}


    /**
     * <p>The rate at which data is backed up into a snapshot in megabytes per
     * second.</p>
     */
    inline double GetCurrentBackupRateInMegaBytesPerSecond() const{ return m_currentBackupRateInMegaBytesPerSecond; }

    /**
     * <p>The rate at which data is backed up into a snapshot in megabytes per
     * second.</p>
     */
    inline bool CurrentBackupRateInMegaBytesPerSecondHasBeenSet() const { return m_currentBackupRateInMegaBytesPerSecondHasBeenSet; }

    /**
     * <p>The rate at which data is backed up into a snapshot in megabytes per
     * second.</p>
     */
    inline void SetCurrentBackupRateInMegaBytesPerSecond(double value) { m_currentBackupRateInMegaBytesPerSecondHasBeenSet = true; m_currentBackupRateInMegaBytesPerSecond = value; }

    /**
     * <p>The rate at which data is backed up into a snapshot in megabytes per
     * second.</p>
     */
    inline Snapshot& WithCurrentBackupRateInMegaBytesPerSecond(double value) { SetCurrentBackupRateInMegaBytesPerSecond(value); return *this;}


    /**
     * <p>The amount of time it took to back up data into a snapshot.</p>
     */
    inline long long GetElapsedTimeInSeconds() const{ return m_elapsedTimeInSeconds; }

    /**
     * <p>The amount of time it took to back up data into a snapshot.</p>
     */
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }

    /**
     * <p>The amount of time it took to back up data into a snapshot.</p>
     */
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }

    /**
     * <p>The amount of time it took to back up data into a snapshot.</p>
     */
    inline Snapshot& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}


    /**
     * <p>The estimated amount of seconds until the snapshot completes backup.</p>
     */
    inline long long GetEstimatedSecondsToCompletion() const{ return m_estimatedSecondsToCompletion; }

    /**
     * <p>The estimated amount of seconds until the snapshot completes backup.</p>
     */
    inline bool EstimatedSecondsToCompletionHasBeenSet() const { return m_estimatedSecondsToCompletionHasBeenSet; }

    /**
     * <p>The estimated amount of seconds until the snapshot completes backup.</p>
     */
    inline void SetEstimatedSecondsToCompletion(long long value) { m_estimatedSecondsToCompletionHasBeenSet = true; m_estimatedSecondsToCompletion = value; }

    /**
     * <p>The estimated amount of seconds until the snapshot completes backup.</p>
     */
    inline Snapshot& WithEstimatedSecondsToCompletion(long long value) { SetEstimatedSecondsToCompletion(value); return *this;}


    /**
     * <p>The unique identifier of the KMS key used to encrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The unique identifier of the KMS key used to encrypt the snapshot.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The unique identifier of the KMS key used to encrypt the snapshot.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The unique identifier of the KMS key used to encrypt the snapshot.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The unique identifier of the KMS key used to encrypt the snapshot.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The unique identifier of the KMS key used to encrypt the snapshot.</p>
     */
    inline Snapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The unique identifier of the KMS key used to encrypt the snapshot.</p>
     */
    inline Snapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the KMS key used to encrypt the snapshot.</p>
     */
    inline Snapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the snapshot was created
     * from.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the snapshot was created
     * from.</p>
     */
    inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the snapshot was created
     * from.</p>
     */
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the snapshot was created
     * from.</p>
     */
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the snapshot was created
     * from.</p>
     */
    inline void SetNamespaceArn(const char* value) { m_namespaceArnHasBeenSet = true; m_namespaceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the snapshot was created
     * from.</p>
     */
    inline Snapshot& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the snapshot was created
     * from.</p>
     */
    inline Snapshot& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the snapshot was created
     * from.</p>
     */
    inline Snapshot& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}


    /**
     * <p>The name of the namepsace.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namepsace.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the namepsace.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the namepsace.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namepsace.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the namepsace.</p>
     */
    inline Snapshot& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namepsace.</p>
     */
    inline Snapshot& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namepsace.</p>
     */
    inline Snapshot& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The owner Amazon Web Services; account of the snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The owner Amazon Web Services; account of the snapshot.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The owner Amazon Web Services; account of the snapshot.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The owner Amazon Web Services; account of the snapshot.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The owner Amazon Web Services; account of the snapshot.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The owner Amazon Web Services; account of the snapshot.</p>
     */
    inline Snapshot& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The owner Amazon Web Services; account of the snapshot.</p>
     */
    inline Snapshot& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The owner Amazon Web Services; account of the snapshot.</p>
     */
    inline Snapshot& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline Snapshot& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline Snapshot& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline Snapshot& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}


    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }

    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }

    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }

    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline Snapshot& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p>The timestamp of when the snapshot was created.</p>
     */
    inline Snapshot& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}


    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline Snapshot& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of the snapshot.</p>
     */
    inline Snapshot& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot.</p>
     */
    inline Snapshot& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>The amount of days until the snapshot is deleted.</p>
     */
    inline int GetSnapshotRemainingDays() const{ return m_snapshotRemainingDays; }

    /**
     * <p>The amount of days until the snapshot is deleted.</p>
     */
    inline bool SnapshotRemainingDaysHasBeenSet() const { return m_snapshotRemainingDaysHasBeenSet; }

    /**
     * <p>The amount of days until the snapshot is deleted.</p>
     */
    inline void SetSnapshotRemainingDays(int value) { m_snapshotRemainingDaysHasBeenSet = true; m_snapshotRemainingDays = value; }

    /**
     * <p>The amount of days until the snapshot is deleted.</p>
     */
    inline Snapshot& WithSnapshotRemainingDays(int value) { SetSnapshotRemainingDays(value); return *this;}


    /**
     * <p>The period of time, in days, of how long the snapshot is retained.</p>
     */
    inline int GetSnapshotRetentionPeriod() const{ return m_snapshotRetentionPeriod; }

    /**
     * <p>The period of time, in days, of how long the snapshot is retained.</p>
     */
    inline bool SnapshotRetentionPeriodHasBeenSet() const { return m_snapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The period of time, in days, of how long the snapshot is retained.</p>
     */
    inline void SetSnapshotRetentionPeriod(int value) { m_snapshotRetentionPeriodHasBeenSet = true; m_snapshotRetentionPeriod = value; }

    /**
     * <p>The period of time, in days, of how long the snapshot is retained.</p>
     */
    inline Snapshot& WithSnapshotRetentionPeriod(int value) { SetSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>The timestamp of when data within the snapshot started getting retained.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotRetentionStartTime() const{ return m_snapshotRetentionStartTime; }

    /**
     * <p>The timestamp of when data within the snapshot started getting retained.</p>
     */
    inline bool SnapshotRetentionStartTimeHasBeenSet() const { return m_snapshotRetentionStartTimeHasBeenSet; }

    /**
     * <p>The timestamp of when data within the snapshot started getting retained.</p>
     */
    inline void SetSnapshotRetentionStartTime(const Aws::Utils::DateTime& value) { m_snapshotRetentionStartTimeHasBeenSet = true; m_snapshotRetentionStartTime = value; }

    /**
     * <p>The timestamp of when data within the snapshot started getting retained.</p>
     */
    inline void SetSnapshotRetentionStartTime(Aws::Utils::DateTime&& value) { m_snapshotRetentionStartTimeHasBeenSet = true; m_snapshotRetentionStartTime = std::move(value); }

    /**
     * <p>The timestamp of when data within the snapshot started getting retained.</p>
     */
    inline Snapshot& WithSnapshotRetentionStartTime(const Aws::Utils::DateTime& value) { SetSnapshotRetentionStartTime(value); return *this;}

    /**
     * <p>The timestamp of when data within the snapshot started getting retained.</p>
     */
    inline Snapshot& WithSnapshotRetentionStartTime(Aws::Utils::DateTime&& value) { SetSnapshotRetentionStartTime(std::move(value)); return *this;}


    /**
     * <p>The status of the snapshot.</p>
     */
    inline const SnapshotStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the snapshot.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the snapshot.</p>
     */
    inline void SetStatus(const SnapshotStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the snapshot.</p>
     */
    inline void SetStatus(SnapshotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the snapshot.</p>
     */
    inline Snapshot& WithStatus(const SnapshotStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the snapshot.</p>
     */
    inline Snapshot& WithStatus(SnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The total size, in megabytes, of how big the snapshot is.</p>
     */
    inline double GetTotalBackupSizeInMegaBytes() const{ return m_totalBackupSizeInMegaBytes; }

    /**
     * <p>The total size, in megabytes, of how big the snapshot is.</p>
     */
    inline bool TotalBackupSizeInMegaBytesHasBeenSet() const { return m_totalBackupSizeInMegaBytesHasBeenSet; }

    /**
     * <p>The total size, in megabytes, of how big the snapshot is.</p>
     */
    inline void SetTotalBackupSizeInMegaBytes(double value) { m_totalBackupSizeInMegaBytesHasBeenSet = true; m_totalBackupSizeInMegaBytes = value; }

    /**
     * <p>The total size, in megabytes, of how big the snapshot is.</p>
     */
    inline Snapshot& WithTotalBackupSizeInMegaBytes(double value) { SetTotalBackupSizeInMegaBytes(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountsWithProvisionedRestoreAccess;
    bool m_accountsWithProvisionedRestoreAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountsWithRestoreAccess;
    bool m_accountsWithRestoreAccessHasBeenSet = false;

    double m_actualIncrementalBackupSizeInMegaBytes;
    bool m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = false;

    Aws::String m_adminUsername;
    bool m_adminUsernameHasBeenSet = false;

    double m_backupProgressInMegaBytes;
    bool m_backupProgressInMegaBytesHasBeenSet = false;

    double m_currentBackupRateInMegaBytesPerSecond;
    bool m_currentBackupRateInMegaBytesPerSecondHasBeenSet = false;

    long long m_elapsedTimeInSeconds;
    bool m_elapsedTimeInSecondsHasBeenSet = false;

    long long m_estimatedSecondsToCompletion;
    bool m_estimatedSecondsToCompletionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_namespaceArn;
    bool m_namespaceArnHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    int m_snapshotRemainingDays;
    bool m_snapshotRemainingDaysHasBeenSet = false;

    int m_snapshotRetentionPeriod;
    bool m_snapshotRetentionPeriodHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotRetentionStartTime;
    bool m_snapshotRetentionStartTimeHasBeenSet = false;

    SnapshotStatus m_status;
    bool m_statusHasBeenSet = false;

    double m_totalBackupSizeInMegaBytes;
    bool m_totalBackupSizeInMegaBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
