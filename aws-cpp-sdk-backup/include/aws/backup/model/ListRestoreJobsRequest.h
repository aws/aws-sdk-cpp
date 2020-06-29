/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/RestoreJobStatus.h>
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
  class AWS_BACKUP_API ListRestoreJobsRequest : public BackupRequest
  {
  public:
    ListRestoreJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRestoreJobs"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline ListRestoreJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRestoreJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>maxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRestoreJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListRestoreJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The account ID to list the jobs from. Returns only restore jobs associated
     * with the specified account ID.</p>
     */
    inline const Aws::String& GetByAccountId() const{ return m_byAccountId; }

    /**
     * <p>The account ID to list the jobs from. Returns only restore jobs associated
     * with the specified account ID.</p>
     */
    inline bool ByAccountIdHasBeenSet() const { return m_byAccountIdHasBeenSet; }

    /**
     * <p>The account ID to list the jobs from. Returns only restore jobs associated
     * with the specified account ID.</p>
     */
    inline void SetByAccountId(const Aws::String& value) { m_byAccountIdHasBeenSet = true; m_byAccountId = value; }

    /**
     * <p>The account ID to list the jobs from. Returns only restore jobs associated
     * with the specified account ID.</p>
     */
    inline void SetByAccountId(Aws::String&& value) { m_byAccountIdHasBeenSet = true; m_byAccountId = std::move(value); }

    /**
     * <p>The account ID to list the jobs from. Returns only restore jobs associated
     * with the specified account ID.</p>
     */
    inline void SetByAccountId(const char* value) { m_byAccountIdHasBeenSet = true; m_byAccountId.assign(value); }

    /**
     * <p>The account ID to list the jobs from. Returns only restore jobs associated
     * with the specified account ID.</p>
     */
    inline ListRestoreJobsRequest& WithByAccountId(const Aws::String& value) { SetByAccountId(value); return *this;}

    /**
     * <p>The account ID to list the jobs from. Returns only restore jobs associated
     * with the specified account ID.</p>
     */
    inline ListRestoreJobsRequest& WithByAccountId(Aws::String&& value) { SetByAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID to list the jobs from. Returns only restore jobs associated
     * with the specified account ID.</p>
     */
    inline ListRestoreJobsRequest& WithByAccountId(const char* value) { SetByAccountId(value); return *this;}


    /**
     * <p>Returns only restore jobs that were created before the specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedBefore() const{ return m_byCreatedBefore; }

    /**
     * <p>Returns only restore jobs that were created before the specified date.</p>
     */
    inline bool ByCreatedBeforeHasBeenSet() const { return m_byCreatedBeforeHasBeenSet; }

    /**
     * <p>Returns only restore jobs that were created before the specified date.</p>
     */
    inline void SetByCreatedBefore(const Aws::Utils::DateTime& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = value; }

    /**
     * <p>Returns only restore jobs that were created before the specified date.</p>
     */
    inline void SetByCreatedBefore(Aws::Utils::DateTime&& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = std::move(value); }

    /**
     * <p>Returns only restore jobs that were created before the specified date.</p>
     */
    inline ListRestoreJobsRequest& WithByCreatedBefore(const Aws::Utils::DateTime& value) { SetByCreatedBefore(value); return *this;}

    /**
     * <p>Returns only restore jobs that were created before the specified date.</p>
     */
    inline ListRestoreJobsRequest& WithByCreatedBefore(Aws::Utils::DateTime&& value) { SetByCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>Returns only restore jobs that were created after the specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedAfter() const{ return m_byCreatedAfter; }

    /**
     * <p>Returns only restore jobs that were created after the specified date.</p>
     */
    inline bool ByCreatedAfterHasBeenSet() const { return m_byCreatedAfterHasBeenSet; }

    /**
     * <p>Returns only restore jobs that were created after the specified date.</p>
     */
    inline void SetByCreatedAfter(const Aws::Utils::DateTime& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = value; }

    /**
     * <p>Returns only restore jobs that were created after the specified date.</p>
     */
    inline void SetByCreatedAfter(Aws::Utils::DateTime&& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = std::move(value); }

    /**
     * <p>Returns only restore jobs that were created after the specified date.</p>
     */
    inline ListRestoreJobsRequest& WithByCreatedAfter(const Aws::Utils::DateTime& value) { SetByCreatedAfter(value); return *this;}

    /**
     * <p>Returns only restore jobs that were created after the specified date.</p>
     */
    inline ListRestoreJobsRequest& WithByCreatedAfter(Aws::Utils::DateTime&& value) { SetByCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>Returns only restore jobs associated with the specified job status.</p>
     */
    inline const RestoreJobStatus& GetByStatus() const{ return m_byStatus; }

    /**
     * <p>Returns only restore jobs associated with the specified job status.</p>
     */
    inline bool ByStatusHasBeenSet() const { return m_byStatusHasBeenSet; }

    /**
     * <p>Returns only restore jobs associated with the specified job status.</p>
     */
    inline void SetByStatus(const RestoreJobStatus& value) { m_byStatusHasBeenSet = true; m_byStatus = value; }

    /**
     * <p>Returns only restore jobs associated with the specified job status.</p>
     */
    inline void SetByStatus(RestoreJobStatus&& value) { m_byStatusHasBeenSet = true; m_byStatus = std::move(value); }

    /**
     * <p>Returns only restore jobs associated with the specified job status.</p>
     */
    inline ListRestoreJobsRequest& WithByStatus(const RestoreJobStatus& value) { SetByStatus(value); return *this;}

    /**
     * <p>Returns only restore jobs associated with the specified job status.</p>
     */
    inline ListRestoreJobsRequest& WithByStatus(RestoreJobStatus&& value) { SetByStatus(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_byAccountId;
    bool m_byAccountIdHasBeenSet;

    Aws::Utils::DateTime m_byCreatedBefore;
    bool m_byCreatedBeforeHasBeenSet;

    Aws::Utils::DateTime m_byCreatedAfter;
    bool m_byCreatedAfterHasBeenSet;

    RestoreJobStatus m_byStatus;
    bool m_byStatusHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
