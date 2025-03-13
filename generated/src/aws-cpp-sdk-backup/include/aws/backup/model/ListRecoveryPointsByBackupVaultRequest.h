/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Backup
{
namespace Model
{

  /**
   */
  class ListRecoveryPointsByBackupVaultRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListRecoveryPointsByBackupVaultRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecoveryPointsByBackupVault"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created.</p>  <p>Backup vault
     * name might not be available when a supported service creates the backup.</p>
     * 
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    ListRecoveryPointsByBackupVaultRequest& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter will sort the list of recovery points by account ID.</p>
     */
    inline const Aws::String& GetBackupVaultAccountId() const { return m_backupVaultAccountId; }
    inline bool BackupVaultAccountIdHasBeenSet() const { return m_backupVaultAccountIdHasBeenSet; }
    template<typename BackupVaultAccountIdT = Aws::String>
    void SetBackupVaultAccountId(BackupVaultAccountIdT&& value) { m_backupVaultAccountIdHasBeenSet = true; m_backupVaultAccountId = std::forward<BackupVaultAccountIdT>(value); }
    template<typename BackupVaultAccountIdT = Aws::String>
    ListRecoveryPointsByBackupVaultRequest& WithBackupVaultAccountId(BackupVaultAccountIdT&& value) { SetBackupVaultAccountId(std::forward<BackupVaultAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecoveryPointsByBackupVaultRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRecoveryPointsByBackupVaultRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only recovery points that match the specified resource Amazon
     * Resource Name (ARN).</p>
     */
    inline const Aws::String& GetByResourceArn() const { return m_byResourceArn; }
    inline bool ByResourceArnHasBeenSet() const { return m_byResourceArnHasBeenSet; }
    template<typename ByResourceArnT = Aws::String>
    void SetByResourceArn(ByResourceArnT&& value) { m_byResourceArnHasBeenSet = true; m_byResourceArn = std::forward<ByResourceArnT>(value); }
    template<typename ByResourceArnT = Aws::String>
    ListRecoveryPointsByBackupVaultRequest& WithByResourceArn(ByResourceArnT&& value) { SetByResourceArn(std::forward<ByResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only recovery points that match the specified resource type(s):</p>
     * <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p>
     * <code>CloudFormation</code> for CloudFormation</p> </li> <li> <p>
     * <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p>
     * </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p>
     * <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li> <p>
     * <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Redshift</code> for Amazon
     * Redshift</p> </li> <li> <p> <code>S3</code> for Amazon Simple Storage Service
     * (Amazon S3)</p> </li> <li> <p> <code>SAP HANA on Amazon EC2</code> for SAP HANA
     * databases on Amazon Elastic Compute Cloud instances</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>Timestream</code> for Amazon Timestream</p> </li> <li> <p>
     * <code>VirtualMachine</code> for VMware virtual machines</p> </li> </ul>
     */
    inline const Aws::String& GetByResourceType() const { return m_byResourceType; }
    inline bool ByResourceTypeHasBeenSet() const { return m_byResourceTypeHasBeenSet; }
    template<typename ByResourceTypeT = Aws::String>
    void SetByResourceType(ByResourceTypeT&& value) { m_byResourceTypeHasBeenSet = true; m_byResourceType = std::forward<ByResourceTypeT>(value); }
    template<typename ByResourceTypeT = Aws::String>
    ListRecoveryPointsByBackupVaultRequest& WithByResourceType(ByResourceTypeT&& value) { SetByResourceType(std::forward<ByResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only recovery points that match the specified backup plan ID.</p>
     */
    inline const Aws::String& GetByBackupPlanId() const { return m_byBackupPlanId; }
    inline bool ByBackupPlanIdHasBeenSet() const { return m_byBackupPlanIdHasBeenSet; }
    template<typename ByBackupPlanIdT = Aws::String>
    void SetByBackupPlanId(ByBackupPlanIdT&& value) { m_byBackupPlanIdHasBeenSet = true; m_byBackupPlanId = std::forward<ByBackupPlanIdT>(value); }
    template<typename ByBackupPlanIdT = Aws::String>
    ListRecoveryPointsByBackupVaultRequest& WithByBackupPlanId(ByBackupPlanIdT&& value) { SetByBackupPlanId(std::forward<ByBackupPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only recovery points that were created before the specified
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedBefore() const { return m_byCreatedBefore; }
    inline bool ByCreatedBeforeHasBeenSet() const { return m_byCreatedBeforeHasBeenSet; }
    template<typename ByCreatedBeforeT = Aws::Utils::DateTime>
    void SetByCreatedBefore(ByCreatedBeforeT&& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = std::forward<ByCreatedBeforeT>(value); }
    template<typename ByCreatedBeforeT = Aws::Utils::DateTime>
    ListRecoveryPointsByBackupVaultRequest& WithByCreatedBefore(ByCreatedBeforeT&& value) { SetByCreatedBefore(std::forward<ByCreatedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only recovery points that were created after the specified
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedAfter() const { return m_byCreatedAfter; }
    inline bool ByCreatedAfterHasBeenSet() const { return m_byCreatedAfterHasBeenSet; }
    template<typename ByCreatedAfterT = Aws::Utils::DateTime>
    void SetByCreatedAfter(ByCreatedAfterT&& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = std::forward<ByCreatedAfterT>(value); }
    template<typename ByCreatedAfterT = Aws::Utils::DateTime>
    ListRecoveryPointsByBackupVaultRequest& WithByCreatedAfter(ByCreatedAfterT&& value) { SetByCreatedAfter(std::forward<ByCreatedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This returns only recovery points that match the specified parent (composite)
     * recovery point Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetByParentRecoveryPointArn() const { return m_byParentRecoveryPointArn; }
    inline bool ByParentRecoveryPointArnHasBeenSet() const { return m_byParentRecoveryPointArnHasBeenSet; }
    template<typename ByParentRecoveryPointArnT = Aws::String>
    void SetByParentRecoveryPointArn(ByParentRecoveryPointArnT&& value) { m_byParentRecoveryPointArnHasBeenSet = true; m_byParentRecoveryPointArn = std::forward<ByParentRecoveryPointArnT>(value); }
    template<typename ByParentRecoveryPointArnT = Aws::String>
    ListRecoveryPointsByBackupVaultRequest& WithByParentRecoveryPointArn(ByParentRecoveryPointArnT&& value) { SetByParentRecoveryPointArn(std::forward<ByParentRecoveryPointArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_backupVaultAccountId;
    bool m_backupVaultAccountIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_byResourceArn;
    bool m_byResourceArnHasBeenSet = false;

    Aws::String m_byResourceType;
    bool m_byResourceTypeHasBeenSet = false;

    Aws::String m_byBackupPlanId;
    bool m_byBackupPlanIdHasBeenSet = false;

    Aws::Utils::DateTime m_byCreatedBefore{};
    bool m_byCreatedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_byCreatedAfter{};
    bool m_byCreatedAfterHasBeenSet = false;

    Aws::String m_byParentRecoveryPointArn;
    bool m_byParentRecoveryPointArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
