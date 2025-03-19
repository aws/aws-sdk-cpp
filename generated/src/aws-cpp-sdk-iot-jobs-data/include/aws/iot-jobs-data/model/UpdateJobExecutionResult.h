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
    AWS_IOTJOBSDATAPLANE_API UpdateJobExecutionResult() = default;
    AWS_IOTJOBSDATAPLANE_API UpdateJobExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTJOBSDATAPLANE_API UpdateJobExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JobExecutionState object.</p>
     */
    inline const JobExecutionState& GetExecutionState() const { return m_executionState; }
    template<typename ExecutionStateT = JobExecutionState>
    void SetExecutionState(ExecutionStateT&& value) { m_executionStateHasBeenSet = true; m_executionState = std::forward<ExecutionStateT>(value); }
    template<typename ExecutionStateT = JobExecutionState>
    UpdateJobExecutionResult& WithExecutionState(ExecutionStateT&& value) { SetExecutionState(std::forward<ExecutionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the Job Documents.</p>
     */
    inline const Aws::String& GetJobDocument() const { return m_jobDocument; }
    template<typename JobDocumentT = Aws::String>
    void SetJobDocument(JobDocumentT&& value) { m_jobDocumentHasBeenSet = true; m_jobDocument = std::forward<JobDocumentT>(value); }
    template<typename JobDocumentT = Aws::String>
    UpdateJobExecutionResult& WithJobDocument(JobDocumentT&& value) { SetJobDocument(std::forward<JobDocumentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateJobExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JobExecutionState m_executionState;
    bool m_executionStateHasBeenSet = false;

    Aws::String m_jobDocument;
    bool m_jobDocumentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
