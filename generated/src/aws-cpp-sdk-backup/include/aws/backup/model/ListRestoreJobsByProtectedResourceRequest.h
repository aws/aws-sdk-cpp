/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreJobStatus.h>
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
  class ListRestoreJobsByProtectedResourceRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListRestoreJobsByProtectedResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRestoreJobsByProtectedResource"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Returns only restore jobs that match the specified resource Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    ListRestoreJobsByProtectedResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only restore jobs associated with the specified job status.</p>
     */
    inline RestoreJobStatus GetByStatus() const { return m_byStatus; }
    inline bool ByStatusHasBeenSet() const { return m_byStatusHasBeenSet; }
    inline void SetByStatus(RestoreJobStatus value) { m_byStatusHasBeenSet = true; m_byStatus = value; }
    inline ListRestoreJobsByProtectedResourceRequest& WithByStatus(RestoreJobStatus value) { SetByStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only restore jobs of recovery points that were created after the
     * specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByRecoveryPointCreationDateAfter() const { return m_byRecoveryPointCreationDateAfter; }
    inline bool ByRecoveryPointCreationDateAfterHasBeenSet() const { return m_byRecoveryPointCreationDateAfterHasBeenSet; }
    template<typename ByRecoveryPointCreationDateAfterT = Aws::Utils::DateTime>
    void SetByRecoveryPointCreationDateAfter(ByRecoveryPointCreationDateAfterT&& value) { m_byRecoveryPointCreationDateAfterHasBeenSet = true; m_byRecoveryPointCreationDateAfter = std::forward<ByRecoveryPointCreationDateAfterT>(value); }
    template<typename ByRecoveryPointCreationDateAfterT = Aws::Utils::DateTime>
    ListRestoreJobsByProtectedResourceRequest& WithByRecoveryPointCreationDateAfter(ByRecoveryPointCreationDateAfterT&& value) { SetByRecoveryPointCreationDateAfter(std::forward<ByRecoveryPointCreationDateAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only restore jobs of recovery points that were created before the
     * specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByRecoveryPointCreationDateBefore() const { return m_byRecoveryPointCreationDateBefore; }
    inline bool ByRecoveryPointCreationDateBeforeHasBeenSet() const { return m_byRecoveryPointCreationDateBeforeHasBeenSet; }
    template<typename ByRecoveryPointCreationDateBeforeT = Aws::Utils::DateTime>
    void SetByRecoveryPointCreationDateBefore(ByRecoveryPointCreationDateBeforeT&& value) { m_byRecoveryPointCreationDateBeforeHasBeenSet = true; m_byRecoveryPointCreationDateBefore = std::forward<ByRecoveryPointCreationDateBeforeT>(value); }
    template<typename ByRecoveryPointCreationDateBeforeT = Aws::Utils::DateTime>
    ListRestoreJobsByProtectedResourceRequest& WithByRecoveryPointCreationDateBefore(ByRecoveryPointCreationDateBeforeT&& value) { SetByRecoveryPointCreationDateBefore(std::forward<ByRecoveryPointCreationDateBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request ismade to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRestoreJobsByProtectedResourceRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRestoreJobsByProtectedResourceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    RestoreJobStatus m_byStatus{RestoreJobStatus::NOT_SET};
    bool m_byStatusHasBeenSet = false;

    Aws::Utils::DateTime m_byRecoveryPointCreationDateAfter{};
    bool m_byRecoveryPointCreationDateAfterHasBeenSet = false;

    Aws::Utils::DateTime m_byRecoveryPointCreationDateBefore{};
    bool m_byRecoveryPointCreationDateBeforeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
