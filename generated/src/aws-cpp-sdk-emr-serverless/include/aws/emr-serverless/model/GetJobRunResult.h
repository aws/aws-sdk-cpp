/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/JobRun.h>
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
namespace EMRServerless
{
namespace Model
{
  class GetJobRunResult
  {
  public:
    AWS_EMRSERVERLESS_API GetJobRunResult();
    AWS_EMRSERVERLESS_API GetJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API GetJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The output displays information about the job run.</p>
     */
    inline const JobRun& GetJobRun() const{ return m_jobRun; }

    /**
     * <p>The output displays information about the job run.</p>
     */
    inline void SetJobRun(const JobRun& value) { m_jobRun = value; }

    /**
     * <p>The output displays information about the job run.</p>
     */
    inline void SetJobRun(JobRun&& value) { m_jobRun = std::move(value); }

    /**
     * <p>The output displays information about the job run.</p>
     */
    inline GetJobRunResult& WithJobRun(const JobRun& value) { SetJobRun(value); return *this;}

    /**
     * <p>The output displays information about the job run.</p>
     */
    inline GetJobRunResult& WithJobRun(JobRun&& value) { SetJobRun(std::move(value)); return *this;}

  private:

    JobRun m_jobRun;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
