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
  class StartNextPendingJobExecutionResult
  {
  public:
    AWS_IOTJOBSDATAPLANE_API StartNextPendingJobExecutionResult();
    AWS_IOTJOBSDATAPLANE_API StartNextPendingJobExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTJOBSDATAPLANE_API StartNextPendingJobExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JobExecution object.</p>
     */
    inline const JobExecution& GetExecution() const{ return m_execution; }

    /**
     * <p>A JobExecution object.</p>
     */
    inline void SetExecution(const JobExecution& value) { m_execution = value; }

    /**
     * <p>A JobExecution object.</p>
     */
    inline void SetExecution(JobExecution&& value) { m_execution = std::move(value); }

    /**
     * <p>A JobExecution object.</p>
     */
    inline StartNextPendingJobExecutionResult& WithExecution(const JobExecution& value) { SetExecution(value); return *this;}

    /**
     * <p>A JobExecution object.</p>
     */
    inline StartNextPendingJobExecutionResult& WithExecution(JobExecution&& value) { SetExecution(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartNextPendingJobExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartNextPendingJobExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartNextPendingJobExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JobExecution m_execution;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
