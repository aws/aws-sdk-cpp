/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/model/JobExecutionState.h>
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
  class UpdateJobExecutionResult
  {
  public:
    AWS_IOTJOBSDATAPLANE_API UpdateJobExecutionResult();
    AWS_IOTJOBSDATAPLANE_API UpdateJobExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTJOBSDATAPLANE_API UpdateJobExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JobExecutionState object.</p>
     */
    inline const JobExecutionState& GetExecutionState() const{ return m_executionState; }

    /**
     * <p>A JobExecutionState object.</p>
     */
    inline void SetExecutionState(const JobExecutionState& value) { m_executionState = value; }

    /**
     * <p>A JobExecutionState object.</p>
     */
    inline void SetExecutionState(JobExecutionState&& value) { m_executionState = std::move(value); }

    /**
     * <p>A JobExecutionState object.</p>
     */
    inline UpdateJobExecutionResult& WithExecutionState(const JobExecutionState& value) { SetExecutionState(value); return *this;}

    /**
     * <p>A JobExecutionState object.</p>
     */
    inline UpdateJobExecutionResult& WithExecutionState(JobExecutionState&& value) { SetExecutionState(std::move(value)); return *this;}


    /**
     * <p>The contents of the Job Documents.</p>
     */
    inline const Aws::String& GetJobDocument() const{ return m_jobDocument; }

    /**
     * <p>The contents of the Job Documents.</p>
     */
    inline void SetJobDocument(const Aws::String& value) { m_jobDocument = value; }

    /**
     * <p>The contents of the Job Documents.</p>
     */
    inline void SetJobDocument(Aws::String&& value) { m_jobDocument = std::move(value); }

    /**
     * <p>The contents of the Job Documents.</p>
     */
    inline void SetJobDocument(const char* value) { m_jobDocument.assign(value); }

    /**
     * <p>The contents of the Job Documents.</p>
     */
    inline UpdateJobExecutionResult& WithJobDocument(const Aws::String& value) { SetJobDocument(value); return *this;}

    /**
     * <p>The contents of the Job Documents.</p>
     */
    inline UpdateJobExecutionResult& WithJobDocument(Aws::String&& value) { SetJobDocument(std::move(value)); return *this;}

    /**
     * <p>The contents of the Job Documents.</p>
     */
    inline UpdateJobExecutionResult& WithJobDocument(const char* value) { SetJobDocument(value); return *this;}

  private:

    JobExecutionState m_executionState;

    Aws::String m_jobDocument;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
