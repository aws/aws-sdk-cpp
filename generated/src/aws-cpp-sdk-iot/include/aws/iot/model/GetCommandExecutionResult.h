/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CommandExecutionStatus.h>
#include <aws/iot/model/StatusReason.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/CommandExecutionResult.h>
#include <aws/iot/model/CommandParameterValue.h>
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
namespace IoT
{
namespace Model
{
  class GetCommandExecutionResult
  {
  public:
    AWS_IOT_API GetCommandExecutionResult() = default;
    AWS_IOT_API GetCommandExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetCommandExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the command execution.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    GetCommandExecutionResult& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the command. For example,
     * <code/>arn:aws:iot:&lt;region&gt;:&lt;accountid&gt;:command/&lt;commandId&gt;</p>
     */
    inline const Aws::String& GetCommandArn() const { return m_commandArn; }
    template<typename CommandArnT = Aws::String>
    void SetCommandArn(CommandArnT&& value) { m_commandArnHasBeenSet = true; m_commandArn = std::forward<CommandArnT>(value); }
    template<typename CommandArnT = Aws::String>
    GetCommandExecutionResult& WithCommandArn(CommandArnT&& value) { SetCommandArn(std::forward<CommandArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the device on which the command execution
     * is being performed.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    GetCommandExecutionResult& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the command execution. After your devices receive the command
     * and start performing the operations specified in the command, it can use the
     * <code>UpdateCommandExecution</code> MQTT API to update the status
     * information.</p>
     */
    inline CommandExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(CommandExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetCommandExecutionResult& WithStatus(CommandExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your devices can use this parameter to provide additional context about the
     * status of a command execution using a reason code and description.</p>
     */
    inline const StatusReason& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = StatusReason>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = StatusReason>
    GetCommandExecutionResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result value for the current state of the command execution. The status
     * provides information about the progress of the command execution. The device can
     * use the result field to share additional details about the execution such as a
     * return value of a remote function call.</p>  <p>If you use the
     * <code>AWS-IoT-FleetWise</code> namespace, then this field is not applicable in
     * the API response.</p> 
     */
    inline const Aws::Map<Aws::String, CommandExecutionResult>& GetResult() const { return m_result; }
    template<typename ResultT = Aws::Map<Aws::String, CommandExecutionResult>>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = Aws::Map<Aws::String, CommandExecutionResult>>
    GetCommandExecutionResult& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    template<typename ResultKeyT = Aws::String, typename ResultValueT = CommandExecutionResult>
    GetCommandExecutionResult& AddResult(ResultKeyT&& key, ResultValueT&& value) {
      m_resultHasBeenSet = true; m_result.emplace(std::forward<ResultKeyT>(key), std::forward<ResultValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of parameters that the <code>StartCommandExecution</code> API used
     * when performing the command on the device.</p>
     */
    inline const Aws::Map<Aws::String, CommandParameterValue>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Map<Aws::String, CommandParameterValue>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, CommandParameterValue>>
    GetCommandExecutionResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = CommandParameterValue>
    GetCommandExecutionResult& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time in seconds that the device can take to finish a
     * command execution. A timer starts when the command execution is created. If the
     * command execution status is not set to another terminal state before the timer
     * expires, it will automatically update to <code>TIMED_OUT</code>.</p>
     */
    inline long long GetExecutionTimeoutSeconds() const { return m_executionTimeoutSeconds; }
    inline void SetExecutionTimeoutSeconds(long long value) { m_executionTimeoutSecondsHasBeenSet = true; m_executionTimeoutSeconds = value; }
    inline GetCommandExecutionResult& WithExecutionTimeoutSeconds(long long value) { SetExecutionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command execution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetCommandExecutionResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetCommandExecutionResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command execution was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetCommandExecutionResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command execution was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    GetCommandExecutionResult& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time to live (TTL) parameter that indicates the duration for which
     * executions will be retained in your account. The default value is six
     * months.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeToLive() const { return m_timeToLive; }
    template<typename TimeToLiveT = Aws::Utils::DateTime>
    void SetTimeToLive(TimeToLiveT&& value) { m_timeToLiveHasBeenSet = true; m_timeToLive = std::forward<TimeToLiveT>(value); }
    template<typename TimeToLiveT = Aws::Utils::DateTime>
    GetCommandExecutionResult& WithTimeToLive(TimeToLiveT&& value) { SetTimeToLive(std::forward<TimeToLiveT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCommandExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_commandArn;
    bool m_commandArnHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    CommandExecutionStatus m_status{CommandExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Map<Aws::String, CommandExecutionResult> m_result;
    bool m_resultHasBeenSet = false;

    Aws::Map<Aws::String, CommandParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    long long m_executionTimeoutSeconds{0};
    bool m_executionTimeoutSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
    bool m_completedAtHasBeenSet = false;

    Aws::Utils::DateTime m_timeToLive{};
    bool m_timeToLiveHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
