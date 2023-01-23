/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/model/JobExecution.h>
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
namespace IoTJobsDataPlane
{
namespace Model
{
  class DescribeJobExecutionResult
  {
  public:
    AWS_IOTJOBSDATAPLANE_API DescribeJobExecutionResult();
    AWS_IOTJOBSDATAPLANE_API DescribeJobExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTJOBSDATAPLANE_API DescribeJobExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains data about a job execution.</p>
     */
    inline const JobExecution& GetExecution() const{ return m_execution; }

    /**
     * <p>Contains data about a job execution.</p>
     */
    inline void SetExecution(const JobExecution& value) { m_execution = value; }

    /**
     * <p>Contains data about a job execution.</p>
     */
    inline void SetExecution(JobExecution&& value) { m_execution = std::move(value); }

    /**
     * <p>Contains data about a job execution.</p>
     */
    inline DescribeJobExecutionResult& WithExecution(const JobExecution& value) { SetExecution(value); return *this;}

    /**
     * <p>Contains data about a job execution.</p>
     */
    inline DescribeJobExecutionResult& WithExecution(JobExecution&& value) { SetExecution(std::move(value)); return *this;}

  private:

    JobExecution m_execution;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
