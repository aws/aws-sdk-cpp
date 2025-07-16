/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/TaskStatus.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Contains structured content from a tool result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ToolResultStructuredContent">AWS
   * API Reference</a></p>
   */
  class ToolResultStructuredContent
  {
  public:
    AWS_BEDROCKAGENTCORE_API ToolResultStructuredContent() = default;
    AWS_BEDROCKAGENTCORE_API ToolResultStructuredContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API ToolResultStructuredContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the task that produced the result.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    ToolResultStructuredContent& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the task that produced the result.</p>
     */
    inline TaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(TaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline ToolResultStructuredContent& WithTaskStatus(TaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard output from the tool execution.</p>
     */
    inline const Aws::String& GetStdout() const { return m_stdout; }
    inline bool StdoutHasBeenSet() const { return m_stdoutHasBeenSet; }
    template<typename StdoutT = Aws::String>
    void SetStdout(StdoutT&& value) { m_stdoutHasBeenSet = true; m_stdout = std::forward<StdoutT>(value); }
    template<typename StdoutT = Aws::String>
    ToolResultStructuredContent& WithStdout(StdoutT&& value) { SetStdout(std::forward<StdoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard error output from the tool execution.</p>
     */
    inline const Aws::String& GetStderr() const { return m_stderr; }
    inline bool StderrHasBeenSet() const { return m_stderrHasBeenSet; }
    template<typename StderrT = Aws::String>
    void SetStderr(StderrT&& value) { m_stderrHasBeenSet = true; m_stderr = std::forward<StderrT>(value); }
    template<typename StderrT = Aws::String>
    ToolResultStructuredContent& WithStderr(StderrT&& value) { SetStderr(std::forward<StderrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code from the tool execution.</p>
     */
    inline int GetExitCode() const { return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline ToolResultStructuredContent& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution time of the tool operation in milliseconds.</p>
     */
    inline double GetExecutionTime() const { return m_executionTime; }
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }
    inline void SetExecutionTime(double value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }
    inline ToolResultStructuredContent& WithExecutionTime(double value) { SetExecutionTime(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    TaskStatus m_taskStatus{TaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    Aws::String m_stdout;
    bool m_stdoutHasBeenSet = false;

    Aws::String m_stderr;
    bool m_stderrHasBeenSet = false;

    int m_exitCode{0};
    bool m_exitCodeHasBeenSet = false;

    double m_executionTime{0.0};
    bool m_executionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
