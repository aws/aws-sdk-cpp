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
    AWS_BACKUP_API ListReportJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReportJobs"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Returns only report jobs with the specified report plan name.</p>
     */
    inline const Aws::String& GetByReportPlanName() const { return m_byReportPlanName; }
    inline bool ByReportPlanNameHasBeenSet() const { return m_byReportPlanNameHasBeenSet; }
    template<typename ByReportPlanNameT = Aws::String>
    void SetByReportPlanName(ByReportPlanNameT&& value) { m_byReportPlanNameHasBeenSet = true; m_byReportPlanName = std::forward<ByReportPlanNameT>(value); }
    template<typename ByReportPlanNameT = Aws::String>
    ListReportJobsRequest& WithByReportPlanName(ByReportPlanNameT&& value) { SetByReportPlanName(std::forward<ByReportPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only report jobs that were created before the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreationBefore() const { return m_byCreationBefore; }
    inline bool ByCreationBeforeHasBeenSet() const { return m_byCreationBeforeHasBeenSet; }
    template<typename ByCreationBeforeT = Aws::Utils::DateTime>
    void SetByCreationBefore(ByCreationBeforeT&& value) { m_byCreationBeforeHasBeenSet = true; m_byCreationBefore = std::forward<ByCreationBeforeT>(value); }
    template<typename ByCreationBeforeT = Aws::Utils::DateTime>
    ListReportJobsRequest& WithByCreationBefore(ByCreationBeforeT&& value) { SetByCreationBefore(std::forward<ByCreationBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only report jobs that were created after the date and time specified
     * in Unix format and Coordinated Universal Time (UTC). For example, the value
     * 1516925490 represents Friday, January 26, 2018 12:11:30 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreationAfter() const { return m_byCreationAfter; }
    inline bool ByCreationAfterHasBeenSet() const { return m_byCreationAfterHasBeenSet; }
    template<typename ByCreationAfterT = Aws::Utils::DateTime>
    void SetByCreationAfter(ByCreationAfterT&& value) { m_byCreationAfterHasBeenSet = true; m_byCreationAfter = std::forward<ByCreationAfterT>(value); }
    template<typename ByCreationAfterT = Aws::Utils::DateTime>
    ListReportJobsRequest& WithByCreationAfter(ByCreationAfterT&& value) { SetByCreationAfter(std::forward<ByCreationAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only report jobs that are in the specified status. The statuses
     * are:</p> <p> <code>CREATED | RUNNING | COMPLETED | FAILED</code> </p>
     */
    inline const Aws::String& GetByStatus() const { return m_byStatus; }
    inline bool ByStatusHasBeenSet() const { return m_byStatusHasBeenSet; }
    template<typename ByStatusT = Aws::String>
    void SetByStatus(ByStatusT&& value) { m_byStatusHasBeenSet = true; m_byStatus = std::forward<ByStatusT>(value); }
    template<typename ByStatusT = Aws::String>
    ListReportJobsRequest& WithByStatus(ByStatusT&& value) { SetByStatus(std::forward<ByStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of desired results from 1 to 1000. Optional. If unspecified, the
     * query will return 1 MB of data.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReportJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_byReportPlanName;
    bool m_byReportPlanNameHasBeenSet = false;

    Aws::Utils::DateTime m_byCreationBefore{};
    bool m_byCreationBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_byCreationAfter{};
    bool m_byCreationAfterHasBeenSet = false;

    Aws::String m_byStatus;
    bool m_byStatusHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
