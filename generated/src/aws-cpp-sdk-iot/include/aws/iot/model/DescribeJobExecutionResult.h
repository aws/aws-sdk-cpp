/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/JobExecution.h>
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
namespace IoT
{
namespace Model
{
  class DescribeJobExecutionResult
  {
  public:
    AWS_IOT_API DescribeJobExecutionResult();
    AWS_IOT_API DescribeJobExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeJobExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the job execution.</p>
     */
    inline const JobExecution& GetExecution() const{ return m_execution; }

    /**
     * <p>Information about the job execution.</p>
     */
    inline void SetExecution(const JobExecution& value) { m_execution = value; }

    /**
     * <p>Information about the job execution.</p>
     */
    inline void SetExecution(JobExecution&& value) { m_execution = std::move(value); }

    /**
     * <p>Information about the job execution.</p>
     */
    inline DescribeJobExecutionResult& WithExecution(const JobExecution& value) { SetExecution(value); return *this;}

    /**
     * <p>Information about the job execution.</p>
     */
    inline DescribeJobExecutionResult& WithExecution(JobExecution&& value) { SetExecution(std::move(value)); return *this;}

  private:

    JobExecution m_execution;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
