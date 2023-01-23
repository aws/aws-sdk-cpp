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
    AWS_CODEPIPELINE_API ActionExecutionOutput();
    AWS_CODEPIPELINE_API ActionExecutionOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionExecutionOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details of output artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline const Aws::Vector<ArtifactDetail>& GetOutputArtifacts() const{ return m_outputArtifacts; }

    /**
     * <p>Details of output artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }

    /**
     * <p>Details of output artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline void SetOutputArtifacts(const Aws::Vector<ArtifactDetail>& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = value; }

    /**
     * <p>Details of output artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline void SetOutputArtifacts(Aws::Vector<ArtifactDetail>&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::move(value); }

    /**
     * <p>Details of output artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline ActionExecutionOutput& WithOutputArtifacts(const Aws::Vector<ArtifactDetail>& value) { SetOutputArtifacts(value); return *this;}

    /**
     * <p>Details of output artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline ActionExecutionOutput& WithOutputArtifacts(Aws::Vector<ArtifactDetail>&& value) { SetOutputArtifacts(std::move(value)); return *this;}

    /**
     * <p>Details of output artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline ActionExecutionOutput& AddOutputArtifacts(const ArtifactDetail& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.push_back(value); return *this; }

    /**
     * <p>Details of output artifacts of the action that correspond to the action
     * execution.</p>
     */
    inline ActionExecutionOutput& AddOutputArtifacts(ArtifactDetail&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>Execution result information listed in the output details for an action
     * execution.</p>
     */
    inline const ActionExecutionResult& GetExecutionResult() const{ return m_executionResult; }

    /**
     * <p>Execution result information listed in the output details for an action
     * execution.</p>
     */
    inline bool ExecutionResultHasBeenSet() const { return m_executionResultHasBeenSet; }

    /**
     * <p>Execution result information listed in the output details for an action
     * execution.</p>
     */
    inline void SetExecutionResult(const ActionExecutionResult& value) { m_executionResultHasBeenSet = true; m_executionResult = value; }

    /**
     * <p>Execution result information listed in the output details for an action
     * execution.</p>
     */
    inline void SetExecutionResult(ActionExecutionResult&& value) { m_executionResultHasBeenSet = true; m_executionResult = std::move(value); }

    /**
     * <p>Execution result information listed in the output details for an action
     * execution.</p>
     */
    inline ActionExecutionOutput& WithExecutionResult(const ActionExecutionResult& value) { SetExecutionResult(value); return *this;}

    /**
     * <p>Execution result information listed in the output details for an action
     * execution.</p>
     */
    inline ActionExecutionOutput& WithExecutionResult(ActionExecutionResult&& value) { SetExecutionResult(std::move(value)); return *this;}


    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOutputVariables() const{ return m_outputVariables; }

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline bool OutputVariablesHasBeenSet() const { return m_outputVariablesHasBeenSet; }

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline void SetOutputVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = value; }

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline void SetOutputVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = std::move(value); }

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline ActionExecutionOutput& WithOutputVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetOutputVariables(value); return *this;}

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline ActionExecutionOutput& WithOutputVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetOutputVariables(std::move(value)); return *this;}

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline ActionExecutionOutput& AddOutputVariables(const Aws::String& key, const Aws::String& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, value); return *this; }

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline ActionExecutionOutput& AddOutputVariables(Aws::String&& key, const Aws::String& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline ActionExecutionOutput& AddOutputVariables(const Aws::String& key, Aws::String&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline ActionExecutionOutput& AddOutputVariables(Aws::String&& key, Aws::String&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline ActionExecutionOutput& AddOutputVariables(const char* key, Aws::String&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline ActionExecutionOutput& AddOutputVariables(Aws::String&& key, const char* value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The outputVariables field shows the key-value pairs that were output as part
     * of that execution.</p>
     */
    inline ActionExecutionOutput& AddOutputVariables(const char* key, const char* value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, value); return *this; }

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
