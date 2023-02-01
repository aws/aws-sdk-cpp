/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/JobRun.h>
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
namespace EMRContainers
{
namespace Model
{
  class DescribeJobRunResult
  {
  public:
    AWS_EMRCONTAINERS_API DescribeJobRunResult();
    AWS_EMRCONTAINERS_API DescribeJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API DescribeJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The output displays information about a job run.</p>
     */
    inline const JobRun& GetJobRun() const{ return m_jobRun; }

    /**
     * <p>The output displays information about a job run.</p>
     */
    inline void SetJobRun(const JobRun& value) { m_jobRun = value; }

    /**
     * <p>The output displays information about a job run.</p>
     */
    inline void SetJobRun(JobRun&& value) { m_jobRun = std::move(value); }

    /**
     * <p>The output displays information about a job run.</p>
     */
    inline DescribeJobRunResult& WithJobRun(const JobRun& value) { SetJobRun(value); return *this;}

    /**
     * <p>The output displays information about a job run.</p>
     */
    inline DescribeJobRunResult& WithJobRun(JobRun&& value) { SetJobRun(std::move(value)); return *this;}

  private:

    JobRun m_jobRun;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
