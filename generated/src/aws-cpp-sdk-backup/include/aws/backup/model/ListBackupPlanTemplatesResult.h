/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupPlanTemplatesListMember.h>
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
  class ListBackupPlanTemplatesResult
  {
  public:
    AWS_BACKUP_API ListBackupPlanTemplatesResult();
    AWS_BACKUP_API ListBackupPlanTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListBackupPlanTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListBackupPlanTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListBackupPlanTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListBackupPlanTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of template list items containing metadata about your saved
     * templates.</p>
     */
    inline const Aws::Vector<BackupPlanTemplatesListMember>& GetBackupPlanTemplatesList() const{ return m_backupPlanTemplatesList; }

    /**
     * <p>An array of template list items containing metadata about your saved
     * templates.</p>
     */
    inline void SetBackupPlanTemplatesList(const Aws::Vector<BackupPlanTemplatesListMember>& value) { m_backupPlanTemplatesList = value; }

    /**
     * <p>An array of template list items containing metadata about your saved
     * templates.</p>
     */
    inline void SetBackupPlanTemplatesList(Aws::Vector<BackupPlanTemplatesListMember>&& value) { m_backupPlanTemplatesList = std::move(value); }

    /**
     * <p>An array of template list items containing metadata about your saved
     * templates.</p>
     */
    inline ListBackupPlanTemplatesResult& WithBackupPlanTemplatesList(const Aws::Vector<BackupPlanTemplatesListMember>& value) { SetBackupPlanTemplatesList(value); return *this;}

    /**
     * <p>An array of template list items containing metadata about your saved
     * templates.</p>
     */
    inline ListBackupPlanTemplatesResult& WithBackupPlanTemplatesList(Aws::Vector<BackupPlanTemplatesListMember>&& value) { SetBackupPlanTemplatesList(std::move(value)); return *this;}

    /**
     * <p>An array of template list items containing metadata about your saved
     * templates.</p>
     */
    inline ListBackupPlanTemplatesResult& AddBackupPlanTemplatesList(const BackupPlanTemplatesListMember& value) { m_backupPlanTemplatesList.push_back(value); return *this; }

    /**
     * <p>An array of template list items containing metadata about your saved
     * templates.</p>
     */
    inline ListBackupPlanTemplatesResult& AddBackupPlanTemplatesList(BackupPlanTemplatesListMember&& value) { m_backupPlanTemplatesList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<BackupPlanTemplatesListMember> m_backupPlanTemplatesList;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
