/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ComputeNodeExecutionDetails.h>
#include <aws/iotsitewise/model/ExecutionEnvironmentVariables.h>
#include <aws/iotsitewise/model/PipelineExecutionStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
/**
 * <p>Response structure for DescribePipelineExecution operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribePipelineExecutionResponse">AWS
 * API Reference</a></p>
 */
class DescribePipelineExecutionResult {
 public:
  AWS_IOTSITEWISE_API DescribePipelineExecutionResult() = default;
  AWS_IOTSITEWISE_API DescribePipelineExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API DescribePipelineExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the pipeline execution.</p>
   */
  inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
  template <typename PipelineExecutionIdT = Aws::String>
  void SetPipelineExecutionId(PipelineExecutionIdT&& value) {
    m_pipelineExecutionIdHasBeenSet = true;
    m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value);
  }
  template <typename PipelineExecutionIdT = Aws::String>
  DescribePipelineExecutionResult& WithPipelineExecutionId(PipelineExecutionIdT&& value) {
    SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the pipeline.</p>
   */
  inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
  template <typename PipelineNameT = Aws::String>
  void SetPipelineName(PipelineNameT&& value) {
    m_pipelineNameHasBeenSet = true;
    m_pipelineName = std::forward<PipelineNameT>(value);
  }
  template <typename PipelineNameT = Aws::String>
  DescribePipelineExecutionResult& WithPipelineName(PipelineNameT&& value) {
    SetPipelineName(std::forward<PipelineNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  DescribePipelineExecutionResult& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pipeline version this execution ran against.</p>
   */
  inline const Aws::String& GetPipelineVersion() const { return m_pipelineVersion; }
  template <typename PipelineVersionT = Aws::String>
  void SetPipelineVersion(PipelineVersionT&& value) {
    m_pipelineVersionHasBeenSet = true;
    m_pipelineVersion = std::forward<PipelineVersionT>(value);
  }
  template <typename PipelineVersionT = Aws::String>
  DescribePipelineExecutionResult& WithPipelineVersion(PipelineVersionT&& value) {
    SetPipelineVersion(std::forward<PipelineVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current execution status of the pipeline.</p>
   */
  inline const PipelineExecutionStatus& GetStatus() const { return m_status; }
  template <typename StatusT = PipelineExecutionStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = PipelineExecutionStatus>
  DescribePipelineExecutionResult& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the pipeline execution started, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  DescribePipelineExecutionResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the pipeline execution completed, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  DescribePipelineExecutionResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment variables provided as input for the pipeline execution.</p>
   */
  inline const ExecutionEnvironmentVariables& GetRequestEnvironmentVariables() const { return m_requestEnvironmentVariables; }
  template <typename RequestEnvironmentVariablesT = ExecutionEnvironmentVariables>
  void SetRequestEnvironmentVariables(RequestEnvironmentVariablesT&& value) {
    m_requestEnvironmentVariablesHasBeenSet = true;
    m_requestEnvironmentVariables = std::forward<RequestEnvironmentVariablesT>(value);
  }
  template <typename RequestEnvironmentVariablesT = ExecutionEnvironmentVariables>
  DescribePipelineExecutionResult& WithRequestEnvironmentVariables(RequestEnvironmentVariablesT&& value) {
    SetRequestEnvironmentVariables(std::forward<RequestEnvironmentVariablesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scheduling priority for the execution. When not specified, defaults to lowest
   * priority.</p>
   */
  inline int GetExecutionPriority() const { return m_executionPriority; }
  inline void SetExecutionPriority(int value) {
    m_executionPriorityHasBeenSet = true;
    m_executionPriority = value;
  }
  inline DescribePipelineExecutionResult& WithExecutionPriority(int value) {
    SetExecutionPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of compute node execution details within this pipeline execution.</p>
   */
  inline const Aws::Vector<ComputeNodeExecutionDetails>& GetComputeNodeExecutionDetails() const { return m_computeNodeExecutionDetails; }
  template <typename ComputeNodeExecutionDetailsT = Aws::Vector<ComputeNodeExecutionDetails>>
  void SetComputeNodeExecutionDetails(ComputeNodeExecutionDetailsT&& value) {
    m_computeNodeExecutionDetailsHasBeenSet = true;
    m_computeNodeExecutionDetails = std::forward<ComputeNodeExecutionDetailsT>(value);
  }
  template <typename ComputeNodeExecutionDetailsT = Aws::Vector<ComputeNodeExecutionDetails>>
  DescribePipelineExecutionResult& WithComputeNodeExecutionDetails(ComputeNodeExecutionDetailsT&& value) {
    SetComputeNodeExecutionDetails(std::forward<ComputeNodeExecutionDetailsT>(value));
    return *this;
  }
  template <typename ComputeNodeExecutionDetailsT = ComputeNodeExecutionDetails>
  DescribePipelineExecutionResult& AddComputeNodeExecutionDetails(ComputeNodeExecutionDetailsT&& value) {
    m_computeNodeExecutionDetailsHasBeenSet = true;
    m_computeNodeExecutionDetails.emplace_back(std::forward<ComputeNodeExecutionDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to be used for the next set of paginated results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribePipelineExecutionResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribePipelineExecutionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_pipelineExecutionId;

  Aws::String m_pipelineName;

  Aws::String m_workspaceName;

  Aws::String m_pipelineVersion;

  PipelineExecutionStatus m_status;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  ExecutionEnvironmentVariables m_requestEnvironmentVariables;

  int m_executionPriority{0};

  Aws::Vector<ComputeNodeExecutionDetails> m_computeNodeExecutionDetails;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_pipelineExecutionIdHasBeenSet = false;
  bool m_pipelineNameHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_pipelineVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_requestEnvironmentVariablesHasBeenSet = false;
  bool m_executionPriorityHasBeenSet = false;
  bool m_computeNodeExecutionDetailsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
