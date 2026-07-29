/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Request structure for CancelPipelineExecution operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CancelPipelineExecutionRequest">AWS
 * API Reference</a></p>
 */
class CancelPipelineExecutionRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API CancelPipelineExecutionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelPipelineExecution"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  CancelPipelineExecutionRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the pipeline.</p>
   */
  inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
  inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
  template <typename PipelineNameT = Aws::String>
  void SetPipelineName(PipelineNameT&& value) {
    m_pipelineNameHasBeenSet = true;
    m_pipelineName = std::forward<PipelineNameT>(value);
  }
  template <typename PipelineNameT = Aws::String>
  CancelPipelineExecutionRequest& WithPipelineName(PipelineNameT&& value) {
    SetPipelineName(std::forward<PipelineNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the pipeline execution.</p>
   */
  inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
  inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
  template <typename PipelineExecutionIdT = Aws::String>
  void SetPipelineExecutionId(PipelineExecutionIdT&& value) {
    m_pipelineExecutionIdHasBeenSet = true;
    m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value);
  }
  template <typename PipelineExecutionIdT = Aws::String>
  CancelPipelineExecutionRequest& WithPipelineExecutionId(PipelineExecutionIdT&& value) {
    SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing why the pipeline execution is being cancelled.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  CancelPipelineExecutionRequest& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  Aws::String m_pipelineName;

  Aws::String m_pipelineExecutionId;

  Aws::String m_reason;
  bool m_workspaceNameHasBeenSet = false;
  bool m_pipelineNameHasBeenSet = false;
  bool m_pipelineExecutionIdHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
