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
  class ListReportJobsRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListReportJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReportJobs"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Returns only report jobs with the specified report plan name.</p>
     */
    inline const Aws::String& GetByReportPlanName() const{ return m_byReportPlanName; }

    /**
     * <p>Returns only report jobs with the specified report plan name.</p>
     */
    inline bool ByReportPlanNameHasBeenSet() const { return m_byReportPlanNameHasBeenSet; }

    /**
     * <p>Returns only report jobs with the specified report plan name.</p>
     */
    inline void SetByReportPlanName(const Aws::String& value) { m_byReportPlanNameHasBeenSet = true; m_byReportPlanName = value; }

    /**
     * <p>Returns only report jobs with the specified report plan name.</p>
     */
    inline void SetByReportPlanName(Aws::String&& value) { m_byReportPlanNameHasBeenSet = true; m_byReportPlanName = std::move(value); }

    /**
     * <p>Returns only report jobs with the specified report plan name.</p>
     */
    inline void SetByReportPlanName(const char* value) { m_byReportPlanNameHasBeenSet = true; m_byReportPlanName.assign(value); }

    /**
     * <p>Returns only report jobs with the specified report plan name.</p>
     */
    inline ListReportJobsRequest& WithByReportPlanName(const Aws::String& value) { SetByReportPlanName(value); return *this;}

    /**
     * <p>Returns only report jobs with the specified report plan name.</p>
     */
    inline ListReportJobsRequest& WithByReportPlanName(Aws::String&& value) { SetByReportPlanName(std::move(value)); return *this;}

    /**
     * <p>Returns only report jobs with the specified report plan name.</p>
     */
    inline ListReportJobsRequest& WithByReportPlanName(const char* value) { SetByReportPlanName(value); return *this;}


    /**
     * <p>Returns only report jobs that were created before the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreationBefore() const{ return m_byCreationBefore; }

    /**
     * <p>Returns only report jobs that were created before the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline bool ByCreationBeforeHasBeenSet() const { return m_byCreationBeforeHasBeenSet; }

    /**
     * <p>Returns only report jobs that were created before the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline void SetByCreationBefore(const Aws::Utils::DateTime& value) { m_byCreationBeforeHasBeenSet = true; m_byCreationBefore = value; }

    /**
     * <p>Returns only report jobs that were created before the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline void SetByCreationBefore(Aws::Utils::DateTime&& value) { m_byCreationBeforeHasBeenSet = true; m_byCreationBefore = std::move(value); }

    /**
     * <p>Returns only report jobs that were created before the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline ListReportJobsRequest& WithByCreationBefore(const Aws::Utils::DateTime& value) { SetByCreationBefore(value); return *this;}

    /**
     * <p>Returns only report jobs that were created before the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline ListReportJobsRequest& WithByCreationBefore(Aws::Utils::DateTime&& value) { SetByCreationBefore(std::move(value)); return *this;}


    /**
     * <p>Returns only report jobs that were created after the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreationAfter() const{ return m_byCreationAfter; }

    /**
     * <p>Returns only report jobs that were created after the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline bool ByCreationAfterHasBeenSet() const { return m_byCreationAfterHasBeenSet; }

    /**
     * <p>Returns only report jobs that were created after the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline void SetByCreationAfter(const Aws::Utils::DateTime& value) { m_byCreationAfterHasBeenSet = true; m_byCreationAfter = value; }

    /**
     * <p>Returns only report jobs that were created after the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline void SetByCreationAfter(Aws::Utils::DateTime&& value) { m_byCreationAfterHasBeenSet = true; m_byCreationAfter = std::move(value); }

    /**
     * <p>Returns only report jobs that were created after the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline ListReportJobsRequest& WithByCreationAfter(const Aws::Utils::DateTime& value) { SetByCreationAfter(value); return *this;}

    /**
     * <p>Returns only report jobs that were created after the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline ListReportJobsRequest& WithByCreationAfter(Aws::Utils::DateTime&& value) { SetByCreationAfter(std::move(value)); return *this;}


    /**
     * <p>Returns only report jobs that are in the specified status. The statuses
     * are:</p> <p> <code>CREATED | RUNNING | COMPLETED | FAILED</code> </p>
     */
    inline const Aws::String& GetByStatus() const{ return m_byStatus; }

    /**
     * <p>Returns only report jobs that are in the specified status. The statuses
     * are:</p> <p> <code>CREATED | RUNNING | COMPLETED | FAILED</code> </p>
     */
    inline bool ByStatusHasBeenSet() const { return m_byStatusHasBeenSet; }

    /**
     * <p>Returns only report jobs that are in the specified status. The statuses
     * are:</p> <p> <code>CREATED | RUNNING | COMPLETED | FAILED</code> </p>
     */
    inline void SetByStatus(const Aws::String& value) { m_byStatusHasBeenSet = true; m_byStatus = value; }

    /**
     * <p>Returns only report jobs that are in the specified status. The statuses
     * are:</p> <p> <code>CREATED | RUNNING | COMPLETED | FAILED</code> </p>
     */
    inline void SetByStatus(Aws::String&& value) { m_byStatusHasBeenSet = true; m_byStatus = std::move(value); }

    /**
     * <p>Returns only report jobs that are in the specified status. The statuses
     * are:</p> <p> <code>CREATED | RUNNING | COMPLETED | FAILED</code> </p>
     */
    inline void SetByStatus(const char* value) { m_byStatusHasBeenSet = true; m_byStatus.assign(value); }

    /**
     * <p>Returns only report jobs that are in the specified status. The statuses
     * are:</p> <p> <code>CREATED | RUNNING | COMPLETED | FAILED</code> </p>
     */
    inline ListReportJobsRequest& WithByStatus(const Aws::String& value) { SetByStatus(value); return *this;}

    /**
     * <p>Returns only report jobs that are in the specified status. The statuses
     * are:</p> <p> <code>CREATED | RUNNING | COMPLETED | FAILED</code> </p>
     */
    inline ListReportJobsRequest& WithByStatus(Aws::String&& value) { SetByStatus(std::move(value)); return *this;}

    /**
     * <p>Returns only report jobs that are in the specified status. The statuses
     * are:</p> <p> <code>CREATED | RUNNING | COMPLETED | FAILED</code> </p>
     */
    inline ListReportJobsRequest& WithByStatus(const char* value) { SetByStatus(value); return *this;}


    /**
     * <p>The number of desired results from 1 to 1000. Optional. If unspecified, the
     * query will return 1 MB of data.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of desired results from 1 to 1000. Optional. If unspecified, the
     * query will return 1 MB of data.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of desired results from 1 to 1000. Optional. If unspecified, the
     * query will return 1 MB of data.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of desired results from 1 to 1000. Optional. If unspecified, the
     * query will return 1 MB of data.</p>
     */
    inline ListReportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListReportJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListReportJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListReportJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_byReportPlanName;
    bool m_byReportPlanNameHasBeenSet = false;

    Aws::Utils::DateTime m_byCreationBefore;
    bool m_byCreationBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_byCreationAfter;
    bool m_byCreationAfterHasBeenSet = false;

    Aws::String m_byStatus;
    bool m_byStatusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
