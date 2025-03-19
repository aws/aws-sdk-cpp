/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/CopyJob.h>
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
  class ListCopyJobsResult
  {
  public:
    AWS_BACKUP_API ListCopyJobsResult() = default;
    AWS_BACKUP_API ListCopyJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListCopyJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures containing metadata about your copy jobs returned in
     * JSON format. </p>
     */
    inline const Aws::Vector<CopyJob>& GetCopyJobs() const { return m_copyJobs; }
    template<typename CopyJobsT = Aws::Vector<CopyJob>>
    void SetCopyJobs(CopyJobsT&& value) { m_copyJobsHasBeenSet = true; m_copyJobs = std::forward<CopyJobsT>(value); }
    template<typename CopyJobsT = Aws::Vector<CopyJob>>
    ListCopyJobsResult& WithCopyJobs(CopyJobsT&& value) { SetCopyJobs(std::forward<CopyJobsT>(value)); return *this;}
    template<typename CopyJobsT = CopyJob>
    ListCopyJobsResult& AddCopyJobs(CopyJobsT&& value) { m_copyJobsHasBeenSet = true; m_copyJobs.emplace_back(std::forward<CopyJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return MaxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCopyJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCopyJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CopyJob> m_copyJobs;
    bool m_copyJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
