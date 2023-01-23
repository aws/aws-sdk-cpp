/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/BackupVaultListMember.h>
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
  class ListBackupVaultsResult
  {
  public:
    AWS_BACKUP_API ListBackupVaultsResult();
    AWS_BACKUP_API ListBackupVaultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListBackupVaultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of backup vault list members containing vault metadata, including
     * Amazon Resource Name (ARN), display name, creation date, number of saved
     * recovery points, and encryption information if the resources saved in the backup
     * vault are encrypted.</p>
     */
    inline const Aws::Vector<BackupVaultListMember>& GetBackupVaultList() const{ return m_backupVaultList; }

    /**
     * <p>An array of backup vault list members containing vault metadata, including
     * Amazon Resource Name (ARN), display name, creation date, number of saved
     * recovery points, and encryption information if the resources saved in the backup
     * vault are encrypted.</p>
     */
    inline void SetBackupVaultList(const Aws::Vector<BackupVaultListMember>& value) { m_backupVaultList = value; }

    /**
     * <p>An array of backup vault list members containing vault metadata, including
     * Amazon Resource Name (ARN), display name, creation date, number of saved
     * recovery points, and encryption information if the resources saved in the backup
     * vault are encrypted.</p>
     */
    inline void SetBackupVaultList(Aws::Vector<BackupVaultListMember>&& value) { m_backupVaultList = std::move(value); }

    /**
     * <p>An array of backup vault list members containing vault metadata, including
     * Amazon Resource Name (ARN), display name, creation date, number of saved
     * recovery points, and encryption information if the resources saved in the backup
     * vault are encrypted.</p>
     */
    inline ListBackupVaultsResult& WithBackupVaultList(const Aws::Vector<BackupVaultListMember>& value) { SetBackupVaultList(value); return *this;}

    /**
     * <p>An array of backup vault list members containing vault metadata, including
     * Amazon Resource Name (ARN), display name, creation date, number of saved
     * recovery points, and encryption information if the resources saved in the backup
     * vault are encrypted.</p>
     */
    inline ListBackupVaultsResult& WithBackupVaultList(Aws::Vector<BackupVaultListMember>&& value) { SetBackupVaultList(std::move(value)); return *this;}

    /**
     * <p>An array of backup vault list members containing vault metadata, including
     * Amazon Resource Name (ARN), display name, creation date, number of saved
     * recovery points, and encryption information if the resources saved in the backup
     * vault are encrypted.</p>
     */
    inline ListBackupVaultsResult& AddBackupVaultList(const BackupVaultListMember& value) { m_backupVaultList.push_back(value); return *this; }

    /**
     * <p>An array of backup vault list members containing vault metadata, including
     * Amazon Resource Name (ARN), display name, creation date, number of saved
     * recovery points, and encryption information if the resources saved in the backup
     * vault are encrypted.</p>
     */
    inline ListBackupVaultsResult& AddBackupVaultList(BackupVaultListMember&& value) { m_backupVaultList.push_back(std::move(value)); return *this; }


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
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListBackupVaultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListBackupVaultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListBackupVaultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BackupVaultListMember> m_backupVaultList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
