/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ActionExecutionResult.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codepipeline/model/ArtifactDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Output details listed for an action execution, such as the action execution
   * result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionExecutionOutput">AWS
   * API Reference</a></p>
   */
  class ActionExecutionOutput
  {
  public:
    AWS_CODEPIPELINE_API ActionExecutionOutput() = default;
    AWS_CODEPIPELINE_API ActionExecutionOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionExecutionOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details of output artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline const Aws::Vector<ArtifactDetail>& GetOutputArtifacts() const { return m_outputArtifacts; }
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }
    template<typename OutputArtifactsT = Aws::Vector<ArtifactDetail>>
    void SetOutputArtifacts(OutputArtifactsT&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::forward<OutputArtifactsT>(value); }
    template<typename OutputArtifactsT = Aws::Vector<ArtifactDetail>>
    ActionExecutionOutput& WithOutputArtifacts(OutputArtifactsT&& value) { SetOutputArtifacts(std::forward<OutputArtifactsT>(value)); return *this;}
    template<typename OutputArtifactsT = ArtifactDetail>
    ActionExecutionOutput& AddOutputArtifacts(OutputArtifactsT&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace_back(std::forward<OutputArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Execution result information listed in the output details for an action
     * execution.</p>
     */
    inline const ActionExecutionResult& GetExecutionResult() const { return m_executionResult; }
    inline bool ExecutionResultHasBeenSet() const { return m_executionResultHasBeenSet; }
    template<typename ExecutionResultT = ActionExecutionResult>
    void SetExecutionResult(ExecutionResultT&& value) { m_executionResultHasBeenSet = true; m_executionResult = std::forward<ExecutionResultT>(value); }
    template<typename ExecutionResultT = ActionExecutionResult>
    ActionExecutionOutput& WithExecutionResult(ExecutionResultT&& value) { SetExecutionResult(std::forward<ExecutionResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOutputVariables() const { return m_outputVariables; }
    inline bool OutputVariablesHasBeenSet() const { return m_outputVariablesHasBeenSet; }
    template<typename OutputVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetOutputVariables(OutputVariablesT&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = std::forward<OutputVariablesT>(value); }
    template<typename OutputVariablesT = Aws::Map<Aws::String, Aws::String>>
    ActionExecutionOutput& WithOutputVariables(OutputVariablesT&& value) { SetOutputVariables(std::forward<OutputVariablesT>(value)); return *this;}
    template<typename OutputVariablesKeyT = Aws::String, typename OutputVariablesValueT = Aws::String>
    ActionExecutionOutput& AddOutputVariables(OutputVariablesKeyT&& key, OutputVariablesValueT&& value) {
      m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::forward<OutputVariablesKeyT>(key), std::forward<OutputVariablesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<ArtifactDetail> m_outputArtifacts;
    bool m_outputArtifactsHasBeenSet = false;

    ActionExecutionResult m_executionResult;
    bool m_executionResultHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_outputVariables;
    bool m_outputVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
