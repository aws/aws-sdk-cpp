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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreJobsListMember.h>
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
  class AWS_BACKUP_API ListRestoreJobsResult
  {
  public:
    ListRestoreJobsResult();
    ListRestoreJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRestoreJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that contain detailed information about jobs to restore
     * saved resources.</p>
     */
    inline const Aws::Vector<RestoreJobsListMember>& GetRestoreJobs() const{ return m_restoreJobs; }

    /**
     * <p>An array of objects that contain detailed information about jobs to restore
     * saved resources.</p>
     */
    inline void SetRestoreJobs(const Aws::Vector<RestoreJobsListMember>& value) { m_restoreJobs = value; }

    /**
     * <p>An array of objects that contain detailed information about jobs to restore
     * saved resources.</p>
     */
    inline void SetRestoreJobs(Aws::Vector<RestoreJobsListMember>&& value) { m_restoreJobs = std::move(value); }

    /**
     * <p>An array of objects that contain detailed information about jobs to restore
     * saved resources.</p>
     */
    inline ListRestoreJobsResult& WithRestoreJobs(const Aws::Vector<RestoreJobsListMember>& value) { SetRestoreJobs(value); return *this;}

    /**
     * <p>An array of objects that contain detailed information about jobs to restore
     * saved resources.</p>
     */
    inline ListRestoreJobsResult& WithRestoreJobs(Aws::Vector<RestoreJobsListMember>&& value) { SetRestoreJobs(std::move(value)); return *this;}

    /**
     * <p>An array of objects that contain detailed information about jobs to restore
     * saved resources.</p>
     */
    inline ListRestoreJobsResult& AddRestoreJobs(const RestoreJobsListMember& value) { m_restoreJobs.push_back(value); return *this; }

    /**
     * <p>An array of objects that contain detailed information about jobs to restore
     * saved resources.</p>
     */
    inline ListRestoreJobsResult& AddRestoreJobs(RestoreJobsListMember&& value) { m_restoreJobs.push_back(std::move(value)); return *this; }


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
    inline ListRestoreJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRestoreJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRestoreJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RestoreJobsListMember> m_restoreJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
