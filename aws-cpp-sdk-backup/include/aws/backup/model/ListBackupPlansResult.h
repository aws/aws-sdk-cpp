/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupPlansListMember.h>
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
  class ListBackupPlansResult
  {
  public:
    AWS_BACKUP_API ListBackupPlansResult();
    AWS_BACKUP_API ListBackupPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListBackupPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListBackupPlansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListBackupPlansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListBackupPlansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of backup plan list items containing metadata about your saved
     * backup plans.</p>
     */
    inline const Aws::Vector<BackupPlansListMember>& GetBackupPlansList() const{ return m_backupPlansList; }

    /**
     * <p>An array of backup plan list items containing metadata about your saved
     * backup plans.</p>
     */
    inline void SetBackupPlansList(const Aws::Vector<BackupPlansListMember>& value) { m_backupPlansList = value; }

    /**
     * <p>An array of backup plan list items containing metadata about your saved
     * backup plans.</p>
     */
    inline void SetBackupPlansList(Aws::Vector<BackupPlansListMember>&& value) { m_backupPlansList = std::move(value); }

    /**
     * <p>An array of backup plan list items containing metadata about your saved
     * backup plans.</p>
     */
    inline ListBackupPlansResult& WithBackupPlansList(const Aws::Vector<BackupPlansListMember>& value) { SetBackupPlansList(value); return *this;}

    /**
     * <p>An array of backup plan list items containing metadata about your saved
     * backup plans.</p>
     */
    inline ListBackupPlansResult& WithBackupPlansList(Aws::Vector<BackupPlansListMember>&& value) { SetBackupPlansList(std::move(value)); return *this;}

    /**
     * <p>An array of backup plan list items containing metadata about your saved
     * backup plans.</p>
     */
    inline ListBackupPlansResult& AddBackupPlansList(const BackupPlansListMember& value) { m_backupPlansList.push_back(value); return *this; }

    /**
     * <p>An array of backup plan list items containing metadata about your saved
     * backup plans.</p>
     */
    inline ListBackupPlansResult& AddBackupPlansList(BackupPlansListMember&& value) { m_backupPlansList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<BackupPlansListMember> m_backupPlansList;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
