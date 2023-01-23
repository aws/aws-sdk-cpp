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
    AWS_BACKUP_API ListRecoveryPointsByBackupVaultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecoveryPointsByBackupVault"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>  <p>Backup vault name might not be
     * available when a supported service creates the backup.</p> 
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>  <p>Backup vault name might not be
     * available when a supported service creates the backup.</p> 
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>  <p>Backup vault name might not be
     * available when a supported service creates the backup.</p> 
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>  <p>Backup vault name might not be
     * available when a supported service creates the backup.</p> 
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>  <p>Backup vault name might not be
     * available when a supported service creates the backup.</p> 
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>  <p>Backup vault name might not be
     * available when a supported service creates the backup.</p> 
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>  <p>Backup vault name might not be
     * available when a supported service creates the backup.</p> 
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>  <p>Backup vault name might not be
     * available when a supported service creates the backup.</p> 
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Returns only recovery points that match the specified resource Amazon
     * Resource Name (ARN).</p>
     */
    inline const Aws::String& GetByResourceArn() const{ return m_byResourceArn; }

    /**
     * <p>Returns only recovery points that match the specified resource Amazon
     * Resource Name (ARN).</p>
     */
    inline bool ByResourceArnHasBeenSet() const { return m_byResourceArnHasBeenSet; }

    /**
     * <p>Returns only recovery points that match the specified resource Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetByResourceArn(const Aws::String& value) { m_byResourceArnHasBeenSet = true; m_byResourceArn = value; }

    /**
     * <p>Returns only recovery points that match the specified resource Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetByResourceArn(Aws::String&& value) { m_byResourceArnHasBeenSet = true; m_byResourceArn = std::move(value); }

    /**
     * <p>Returns only recovery points that match the specified resource Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetByResourceArn(const char* value) { m_byResourceArnHasBeenSet = true; m_byResourceArn.assign(value); }

    /**
     * <p>Returns only recovery points that match the specified resource Amazon
     * Resource Name (ARN).</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByResourceArn(const Aws::String& value) { SetByResourceArn(value); return *this;}

    /**
     * <p>Returns only recovery points that match the specified resource Amazon
     * Resource Name (ARN).</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByResourceArn(Aws::String&& value) { SetByResourceArn(std::move(value)); return *this;}

    /**
     * <p>Returns only recovery points that match the specified resource Amazon
     * Resource Name (ARN).</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByResourceArn(const char* value) { SetByResourceArn(value); return *this;}


    /**
     * <p>Returns only recovery points that match the specified resource type.</p>
     */
    inline const Aws::String& GetByResourceType() const{ return m_byResourceType; }

    /**
     * <p>Returns only recovery points that match the specified resource type.</p>
     */
    inline bool ByResourceTypeHasBeenSet() const { return m_byResourceTypeHasBeenSet; }

    /**
     * <p>Returns only recovery points that match the specified resource type.</p>
     */
    inline void SetByResourceType(const Aws::String& value) { m_byResourceTypeHasBeenSet = true; m_byResourceType = value; }

    /**
     * <p>Returns only recovery points that match the specified resource type.</p>
     */
    inline void SetByResourceType(Aws::String&& value) { m_byResourceTypeHasBeenSet = true; m_byResourceType = std::move(value); }

    /**
     * <p>Returns only recovery points that match the specified resource type.</p>
     */
    inline void SetByResourceType(const char* value) { m_byResourceTypeHasBeenSet = true; m_byResourceType.assign(value); }

    /**
     * <p>Returns only recovery points that match the specified resource type.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByResourceType(const Aws::String& value) { SetByResourceType(value); return *this;}

    /**
     * <p>Returns only recovery points that match the specified resource type.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByResourceType(Aws::String&& value) { SetByResourceType(std::move(value)); return *this;}

    /**
     * <p>Returns only recovery points that match the specified resource type.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByResourceType(const char* value) { SetByResourceType(value); return *this;}


    /**
     * <p>Returns only recovery points that match the specified backup plan ID.</p>
     */
    inline const Aws::String& GetByBackupPlanId() const{ return m_byBackupPlanId; }

    /**
     * <p>Returns only recovery points that match the specified backup plan ID.</p>
     */
    inline bool ByBackupPlanIdHasBeenSet() const { return m_byBackupPlanIdHasBeenSet; }

    /**
     * <p>Returns only recovery points that match the specified backup plan ID.</p>
     */
    inline void SetByBackupPlanId(const Aws::String& value) { m_byBackupPlanIdHasBeenSet = true; m_byBackupPlanId = value; }

    /**
     * <p>Returns only recovery points that match the specified backup plan ID.</p>
     */
    inline void SetByBackupPlanId(Aws::String&& value) { m_byBackupPlanIdHasBeenSet = true; m_byBackupPlanId = std::move(value); }

    /**
     * <p>Returns only recovery points that match the specified backup plan ID.</p>
     */
    inline void SetByBackupPlanId(const char* value) { m_byBackupPlanIdHasBeenSet = true; m_byBackupPlanId.assign(value); }

    /**
     * <p>Returns only recovery points that match the specified backup plan ID.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByBackupPlanId(const Aws::String& value) { SetByBackupPlanId(value); return *this;}

    /**
     * <p>Returns only recovery points that match the specified backup plan ID.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByBackupPlanId(Aws::String&& value) { SetByBackupPlanId(std::move(value)); return *this;}

    /**
     * <p>Returns only recovery points that match the specified backup plan ID.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByBackupPlanId(const char* value) { SetByBackupPlanId(value); return *this;}


    /**
     * <p>Returns only recovery points that were created before the specified
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedBefore() const{ return m_byCreatedBefore; }

    /**
     * <p>Returns only recovery points that were created before the specified
     * timestamp.</p>
     */
    inline bool ByCreatedBeforeHasBeenSet() const { return m_byCreatedBeforeHasBeenSet; }

    /**
     * <p>Returns only recovery points that were created before the specified
     * timestamp.</p>
     */
    inline void SetByCreatedBefore(const Aws::Utils::DateTime& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = value; }

    /**
     * <p>Returns only recovery points that were created before the specified
     * timestamp.</p>
     */
    inline void SetByCreatedBefore(Aws::Utils::DateTime&& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = std::move(value); }

    /**
     * <p>Returns only recovery points that were created before the specified
     * timestamp.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByCreatedBefore(const Aws::Utils::DateTime& value) { SetByCreatedBefore(value); return *this;}

    /**
     * <p>Returns only recovery points that were created before the specified
     * timestamp.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByCreatedBefore(Aws::Utils::DateTime&& value) { SetByCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>Returns only recovery points that were created after the specified
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedAfter() const{ return m_byCreatedAfter; }

    /**
     * <p>Returns only recovery points that were created after the specified
     * timestamp.</p>
     */
    inline bool ByCreatedAfterHasBeenSet() const { return m_byCreatedAfterHasBeenSet; }

    /**
     * <p>Returns only recovery points that were created after the specified
     * timestamp.</p>
     */
    inline void SetByCreatedAfter(const Aws::Utils::DateTime& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = value; }

    /**
     * <p>Returns only recovery points that were created after the specified
     * timestamp.</p>
     */
    inline void SetByCreatedAfter(Aws::Utils::DateTime&& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = std::move(value); }

    /**
     * <p>Returns only recovery points that were created after the specified
     * timestamp.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByCreatedAfter(const Aws::Utils::DateTime& value) { SetByCreatedAfter(value); return *this;}

    /**
     * <p>Returns only recovery points that were created after the specified
     * timestamp.</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByCreatedAfter(Aws::Utils::DateTime&& value) { SetByCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>This returns only recovery points that match the specified parent (composite)
     * recovery point Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetByParentRecoveryPointArn() const{ return m_byParentRecoveryPointArn; }

    /**
     * <p>This returns only recovery points that match the specified parent (composite)
     * recovery point Amazon Resource Name (ARN).</p>
     */
    inline bool ByParentRecoveryPointArnHasBeenSet() const { return m_byParentRecoveryPointArnHasBeenSet; }

    /**
     * <p>This returns only recovery points that match the specified parent (composite)
     * recovery point Amazon Resource Name (ARN).</p>
     */
    inline void SetByParentRecoveryPointArn(const Aws::String& value) { m_byParentRecoveryPointArnHasBeenSet = true; m_byParentRecoveryPointArn = value; }

    /**
     * <p>This returns only recovery points that match the specified parent (composite)
     * recovery point Amazon Resource Name (ARN).</p>
     */
    inline void SetByParentRecoveryPointArn(Aws::String&& value) { m_byParentRecoveryPointArnHasBeenSet = true; m_byParentRecoveryPointArn = std::move(value); }

    /**
     * <p>This returns only recovery points that match the specified parent (composite)
     * recovery point Amazon Resource Name (ARN).</p>
     */
    inline void SetByParentRecoveryPointArn(const char* value) { m_byParentRecoveryPointArnHasBeenSet = true; m_byParentRecoveryPointArn.assign(value); }

    /**
     * <p>This returns only recovery points that match the specified parent (composite)
     * recovery point Amazon Resource Name (ARN).</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByParentRecoveryPointArn(const Aws::String& value) { SetByParentRecoveryPointArn(value); return *this;}

    /**
     * <p>This returns only recovery points that match the specified parent (composite)
     * recovery point Amazon Resource Name (ARN).</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByParentRecoveryPointArn(Aws::String&& value) { SetByParentRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>This returns only recovery points that match the specified parent (composite)
     * recovery point Amazon Resource Name (ARN).</p>
     */
    inline ListRecoveryPointsByBackupVaultRequest& WithByParentRecoveryPointArn(const char* value) { SetByParentRecoveryPointArn(value); return *this;}

  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_byResourceArn;
    bool m_byResourceArnHasBeenSet = false;

    Aws::String m_byResourceType;
    bool m_byResourceTypeHasBeenSet = false;

    Aws::String m_byBackupPlanId;
    bool m_byBackupPlanIdHasBeenSet = false;

    Aws::Utils::DateTime m_byCreatedBefore;
    bool m_byCreatedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_byCreatedAfter;
    bool m_byCreatedAfterHasBeenSet = false;

    Aws::String m_byParentRecoveryPointArn;
    bool m_byParentRecoveryPointArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
