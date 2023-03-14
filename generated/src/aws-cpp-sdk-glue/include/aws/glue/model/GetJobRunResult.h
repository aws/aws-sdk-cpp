/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/JobRun.h>
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
  class GetJobRunResult
  {
  public:
    AWS_GLUE_API GetJobRunResult();
    AWS_GLUE_API GetJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested job-run metadata.</p>
     */
    inline const JobRun& GetJobRun() const{ return m_jobRun; }

    /**
     * <p>The requested job-run metadata.</p>
     */
    inline void SetJobRun(const JobRun& value) { m_jobRun = value; }

    /**
     * <p>The requested job-run metadata.</p>
     */
    inline void SetJobRun(JobRun&& value) { m_jobRun = std::move(value); }

    /**
     * <p>The requested job-run metadata.</p>
     */
    inline GetJobRunResult& WithJobRun(const JobRun& value) { SetJobRun(value); return *this;}

    /**
     * <p>The requested job-run metadata.</p>
     */
    inline GetJobRunResult& WithJobRun(JobRun&& value) { SetJobRun(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetJobRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetJobRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetJobRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JobRun m_jobRun;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
