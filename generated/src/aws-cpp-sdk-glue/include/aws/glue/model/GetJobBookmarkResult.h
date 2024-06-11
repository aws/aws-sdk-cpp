﻿/**
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
    AWS_GLUE_API GetJobBookmarkResult();
    AWS_GLUE_API GetJobBookmarkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetJobBookmarkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that defines a point that a job can resume processing.</p>
     */
    inline const JobBookmarkEntry& GetJobBookmarkEntry() const{ return m_jobBookmarkEntry; }
    inline void SetJobBookmarkEntry(const JobBookmarkEntry& value) { m_jobBookmarkEntry = value; }
    inline void SetJobBookmarkEntry(JobBookmarkEntry&& value) { m_jobBookmarkEntry = std::move(value); }
    inline GetJobBookmarkResult& WithJobBookmarkEntry(const JobBookmarkEntry& value) { SetJobBookmarkEntry(value); return *this;}
    inline GetJobBookmarkResult& WithJobBookmarkEntry(JobBookmarkEntry&& value) { SetJobBookmarkEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetJobBookmarkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetJobBookmarkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetJobBookmarkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    JobBookmarkEntry m_jobBookmarkEntry;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
