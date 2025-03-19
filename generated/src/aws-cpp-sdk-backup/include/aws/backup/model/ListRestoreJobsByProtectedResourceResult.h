/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListRestoreJobsByProtectedResourceResult
  {
  public:
    AWS_BACKUP_API ListRestoreJobsByProtectedResourceResult() = default;
    AWS_BACKUP_API ListRestoreJobsByProtectedResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRestoreJobsByProtectedResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that contain detailed information about jobs to restore
     * saved resources.&gt;</p>
     */
    inline const Aws::Vector<RestoreJobsListMember>& GetRestoreJobs() const { return m_restoreJobs; }
    template<typename RestoreJobsT = Aws::Vector<RestoreJobsListMember>>
    void SetRestoreJobs(RestoreJobsT&& value) { m_restoreJobsHasBeenSet = true; m_restoreJobs = std::forward<RestoreJobsT>(value); }
    template<typename RestoreJobsT = Aws::Vector<RestoreJobsListMember>>
    ListRestoreJobsByProtectedResourceResult& WithRestoreJobs(RestoreJobsT&& value) { SetRestoreJobs(std::forward<RestoreJobsT>(value)); return *this;}
    template<typename RestoreJobsT = RestoreJobsListMember>
    ListRestoreJobsByProtectedResourceResult& AddRestoreJobs(RestoreJobsT&& value) { m_restoreJobsHasBeenSet = true; m_restoreJobs.emplace_back(std::forward<RestoreJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows youto return more items in your list starting at
     * the location pointed to by the next token</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRestoreJobsByProtectedResourceResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRestoreJobsByProtectedResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RestoreJobsListMember> m_restoreJobs;
    bool m_restoreJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
