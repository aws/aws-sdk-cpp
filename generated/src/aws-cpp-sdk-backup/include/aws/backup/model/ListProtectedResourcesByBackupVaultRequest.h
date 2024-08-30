/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListProtectedResourcesByBackupVaultRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListProtectedResourcesByBackupVaultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProtectedResourcesByBackupVault"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The list of protected resources by backup vault within the vault(s) you
     * specify by name.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }
    inline ListProtectedResourcesByBackupVaultRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline ListProtectedResourcesByBackupVaultRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline ListProtectedResourcesByBackupVaultRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of protected resources by backup vault within the vault(s) you
     * specify by account ID.</p>
     */
    inline const Aws::String& GetBackupVaultAccountId() const{ return m_backupVaultAccountId; }
    inline bool BackupVaultAccountIdHasBeenSet() const { return m_backupVaultAccountIdHasBeenSet; }
    inline void SetBackupVaultAccountId(const Aws::String& value) { m_backupVaultAccountIdHasBeenSet = true; m_backupVaultAccountId = value; }
    inline void SetBackupVaultAccountId(Aws::String&& value) { m_backupVaultAccountIdHasBeenSet = true; m_backupVaultAccountId = std::move(value); }
    inline void SetBackupVaultAccountId(const char* value) { m_backupVaultAccountIdHasBeenSet = true; m_backupVaultAccountId.assign(value); }
    inline ListProtectedResourcesByBackupVaultRequest& WithBackupVaultAccountId(const Aws::String& value) { SetBackupVaultAccountId(value); return *this;}
    inline ListProtectedResourcesByBackupVaultRequest& WithBackupVaultAccountId(Aws::String&& value) { SetBackupVaultAccountId(std::move(value)); return *this;}
    inline ListProtectedResourcesByBackupVaultRequest& WithBackupVaultAccountId(const char* value) { SetBackupVaultAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListProtectedResourcesByBackupVaultRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProtectedResourcesByBackupVaultRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProtectedResourcesByBackupVaultRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListProtectedResourcesByBackupVaultRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_backupVaultAccountId;
    bool m_backupVaultAccountIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
