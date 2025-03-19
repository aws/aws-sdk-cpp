/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/JobBookmarkEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{
  class GetJobBookmarkResult
  {
  public:
    AWS_GLUE_API GetJobBookmarkResult() = default;
    AWS_GLUE_API GetJobBookmarkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetJobBookmarkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that defines a point that a job can resume processing.</p>
     */
    inline const JobBookmarkEntry& GetJobBookmarkEntry() const { return m_jobBookmarkEntry; }
    template<typename JobBookmarkEntryT = JobBookmarkEntry>
    void SetJobBookmarkEntry(JobBookmarkEntryT&& value) { m_jobBookmarkEntryHasBeenSet = true; m_jobBookmarkEntry = std::forward<JobBookmarkEntryT>(value); }
    template<typename JobBookmarkEntryT = JobBookmarkEntry>
    GetJobBookmarkResult& WithJobBookmarkEntry(JobBookmarkEntryT&& value) { SetJobBookmarkEntry(std::forward<JobBookmarkEntryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJobBookmarkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JobBookmarkEntry m_jobBookmarkEntry;
    bool m_jobBookmarkEntryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
