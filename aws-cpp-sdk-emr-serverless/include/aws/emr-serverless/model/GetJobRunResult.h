/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerlessWebService_EXPORTS.h>
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
namespace EMRServerlessWebService
{
namespace Model
{
  class AWS_EMRSERVERLESSWEBSERVICE_API GetJobRunResult
  {
  public:
    GetJobRunResult();
    GetJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
} // namespace EMRServerlessWebService
} // namespace Aws
