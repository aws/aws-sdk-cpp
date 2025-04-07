/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codebuild/model/CommandType.h>
#include <aws/codebuild/model/LogsLocation.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains command execution information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CommandExecution">AWS
   * API Reference</a></p>
   */
  class CommandExecution
  {
  public:
    AWS_CODEBUILD_API CommandExecution() = default;
    AWS_CODEBUILD_API CommandExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API CommandExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the command execution.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CommandExecution& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>sandboxId</code>.</p>
     */
    inline const Aws::String& GetSandboxId() const { return m_sandboxId; }
    inline bool SandboxIdHasBeenSet() const { return m_sandboxIdHasBeenSet; }
    template<typename SandboxIdT = Aws::String>
    void SetSandboxId(SandboxIdT&& value) { m_sandboxIdHasBeenSet = true; m_sandboxId = std::forward<SandboxIdT>(value); }
    template<typename SandboxIdT = Aws::String>
    CommandExecution& WithSandboxId(SandboxIdT&& value) { SetSandboxId(std::forward<SandboxIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the command execution process was initially submitted, expressed in Unix
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const { return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    void SetSubmitTime(SubmitTimeT&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::forward<SubmitTimeT>(value); }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    CommandExecution& WithSubmitTime(SubmitTimeT&& value) { SetSubmitTime(std::forward<SubmitTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the command execution process started, expressed in Unix time
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CommandExecution& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the command execution process ended, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    CommandExecution& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the command execution.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    CommandExecution& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command that needs to be executed.</p>
     */
    inline const Aws::String& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::String>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::String>
    CommandExecution& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command type.</p>
     */
    inline CommandType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CommandType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CommandExecution& WithType(CommandType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code to return upon completion.</p>
     */
    inline const Aws::String& GetExitCode() const { return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    template<typename ExitCodeT = Aws::String>
    void SetExitCode(ExitCodeT&& value) { m_exitCodeHasBeenSet = true; m_exitCode = std::forward<ExitCodeT>(value); }
    template<typename ExitCodeT = Aws::String>
    CommandExecution& WithExitCode(ExitCodeT&& value) { SetExitCode(std::forward<ExitCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text written by the command to stdout.</p>
     */
    inline const Aws::String& GetStandardOutputContent() const { return m_standardOutputContent; }
    inline bool StandardOutputContentHasBeenSet() const { return m_standardOutputContentHasBeenSet; }
    template<typename StandardOutputContentT = Aws::String>
    void SetStandardOutputContent(StandardOutputContentT&& value) { m_standardOutputContentHasBeenSet = true; m_standardOutputContent = std::forward<StandardOutputContentT>(value); }
    template<typename StandardOutputContentT = Aws::String>
    CommandExecution& WithStandardOutputContent(StandardOutputContentT&& value) { SetStandardOutputContent(std::forward<StandardOutputContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text written by the command to stderr.</p>
     */
    inline const Aws::String& GetStandardErrContent() const { return m_standardErrContent; }
    inline bool StandardErrContentHasBeenSet() const { return m_standardErrContentHasBeenSet; }
    template<typename StandardErrContentT = Aws::String>
    void SetStandardErrContent(StandardErrContentT&& value) { m_standardErrContentHasBeenSet = true; m_standardErrContent = std::forward<StandardErrContentT>(value); }
    template<typename StandardErrContentT = Aws::String>
    CommandExecution& WithStandardErrContent(StandardErrContentT&& value) { SetStandardErrContent(std::forward<StandardErrContentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LogsLocation& GetLogs() const { return m_logs; }
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }
    template<typename LogsT = LogsLocation>
    void SetLogs(LogsT&& value) { m_logsHasBeenSet = true; m_logs = std::forward<LogsT>(value); }
    template<typename LogsT = LogsLocation>
    CommandExecution& WithLogs(LogsT&& value) { SetLogs(std::forward<LogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>sandboxArn</code>.</p>
     */
    inline const Aws::String& GetSandboxArn() const { return m_sandboxArn; }
    inline bool SandboxArnHasBeenSet() const { return m_sandboxArnHasBeenSet; }
    template<typename SandboxArnT = Aws::String>
    void SetSandboxArn(SandboxArnT&& value) { m_sandboxArnHasBeenSet = true; m_sandboxArn = std::forward<SandboxArnT>(value); }
    template<typename SandboxArnT = Aws::String>
    CommandExecution& WithSandboxArn(SandboxArnT&& value) { SetSandboxArn(std::forward<SandboxArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_sandboxId;
    bool m_sandboxIdHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime{};
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    CommandType m_type{CommandType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_exitCode;
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_standardOutputContent;
    bool m_standardOutputContentHasBeenSet = false;

    Aws::String m_standardErrContent;
    bool m_standardErrContentHasBeenSet = false;

    LogsLocation m_logs;
    bool m_logsHasBeenSet = false;

    Aws::String m_sandboxArn;
    bool m_sandboxArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
