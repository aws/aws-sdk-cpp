/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ActionExecutionResult.h>
#include <aws/codepipeline/model/ArtifactDetail.h>
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
  class AWS_CODEPIPELINE_API ActionExecutionOutput
  {
  public:
    ActionExecutionOutput();
    ActionExecutionOutput(Aws::Utils::Json::JsonView jsonValue);
    ActionExecutionOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::Vector<ArtifactDetail> m_outputArtifacts;
    bool m_outputArtifactsHasBeenSet;

    ActionExecutionResult m_executionResult;
    bool m_executionResultHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
