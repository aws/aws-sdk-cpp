/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ExecutionEnvironmentVariables.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Request structure for StartPipelineExecution operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/StartPipelineExecutionRequest">AWS
 * API Reference</a></p>
 */
class StartPipelineExecutionRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API StartPipelineExecutionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartPipelineExecution"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workspace containing the pipeline.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  StartPipelineExecutionRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the pipeline to execute.</p>
   */
  inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
  inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
  template <typename PipelineNameT = Aws::String>
  void SetPipelineName(PipelineNameT&& value) {
    m_pipelineNameHasBeenSet = true;
    m_pipelineName = std::forward<PipelineNameT>(value);
  }
  template <typename PipelineNameT = Aws::String>
  StartPipelineExecutionRequest& WithPipelineName(PipelineNameT&& value) {
    SetPipelineName(std::forward<PipelineNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Runtime environment variable overrides for the execution. Includes global
   * variables that apply to all compute nodes and computeNodes for per-node
   * overrides. These take the highest priority in the environment variable
   * hierarchy.</p>
   */
  inline const ExecutionEnvironmentVariables& GetExecutionEnvironmentVariableOverrides() const {
    return m_executionEnvironmentVariableOverrides;
  }
  inline bool ExecutionEnvironmentVariableOverridesHasBeenSet() const { return m_executionEnvironmentVariableOverridesHasBeenSet; }
  template <typename ExecutionEnvironmentVariableOverridesT = ExecutionEnvironmentVariables>
  void SetExecutionEnvironmentVariableOverrides(ExecutionEnvironmentVariableOverridesT&& value) {
    m_executionEnvironmentVariableOverridesHasBeenSet = true;
    m_executionEnvironmentVariableOverrides = std::forward<ExecutionEnvironmentVariableOverridesT>(value);
  }
  template <typename ExecutionEnvironmentVariableOverridesT = ExecutionEnvironmentVariables>
  StartPipelineExecutionRequest& WithExecutionEnvironmentVariableOverrides(ExecutionEnvironmentVariableOverridesT&& value) {
    SetExecutionEnvironmentVariableOverrides(std::forward<ExecutionEnvironmentVariableOverridesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scheduling priority for the execution. Lower values indicate higher priority.
   * Defaults to 2 when not specified.</p>
   */
  inline int GetExecutionPriority() const { return m_executionPriority; }
  inline bool ExecutionPriorityHasBeenSet() const { return m_executionPriorityHasBeenSet; }
  inline void SetExecutionPriority(int value) {
    m_executionPriorityHasBeenSet = true;
    m_executionPriority = value;
  }
  inline StartPipelineExecutionRequest& WithExecutionPriority(int value) {
    SetExecutionPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you retry a request that completed successfully
   * using the same client token, the server returns the cached result from the
   * original successful request without performing the operation again.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartPipelineExecutionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  Aws::String m_pipelineName;

  ExecutionEnvironmentVariables m_executionEnvironmentVariableOverrides;

  int m_executionPriority{0};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_workspaceNameHasBeenSet = false;
  bool m_pipelineNameHasBeenSet = false;
  bool m_executionEnvironmentVariableOverridesHasBeenSet = false;
  bool m_executionPriorityHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
