﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/model/JobExecution.h>
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


    ///@{
    /**
     * <p>Contains data about a job execution.</p>
     */
    inline const JobExecution& GetExecution() const{ return m_execution; }
    inline void SetExecution(const JobExecution& value) { m_execution = value; }
    inline void SetExecution(JobExecution&& value) { m_execution = std::move(value); }
    inline DescribeJobExecutionResult& WithExecution(const JobExecution& value) { SetExecution(value); return *this;}
    inline DescribeJobExecutionResult& WithExecution(JobExecution&& value) { SetExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeJobExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeJobExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeJobExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    JobExecution m_execution;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
