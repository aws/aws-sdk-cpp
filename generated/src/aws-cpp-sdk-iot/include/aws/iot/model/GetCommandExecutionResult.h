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
    AWS_IOT_API GetCommandExecutionResult();
    AWS_IOT_API GetCommandExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetCommandExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the command execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }
    inline GetCommandExecutionResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline GetCommandExecutionResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline GetCommandExecutionResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the command. For example,
     * <code/>arn:aws:iot:&lt;region&gt;:&lt;accountid&gt;:command/&lt;commandId&gt;</p>
     */
    inline const Aws::String& GetCommandArn() const{ return m_commandArn; }
    inline void SetCommandArn(const Aws::String& value) { m_commandArn = value; }
    inline void SetCommandArn(Aws::String&& value) { m_commandArn = std::move(value); }
    inline void SetCommandArn(const char* value) { m_commandArn.assign(value); }
    inline GetCommandExecutionResult& WithCommandArn(const Aws::String& value) { SetCommandArn(value); return *this;}
    inline GetCommandExecutionResult& WithCommandArn(Aws::String&& value) { SetCommandArn(std::move(value)); return *this;}
    inline GetCommandExecutionResult& WithCommandArn(const char* value) { SetCommandArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the device on which the command execution
     * is being performed.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArn.assign(value); }
    inline GetCommandExecutionResult& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline GetCommandExecutionResult& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline GetCommandExecutionResult& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the command execution. After your devices receive the command
     * and start performing the operations specified in the command, it can use the
     * <code>UpdateCommandExecution</code> MQTT API to update the status
     * information.</p>
     */
    inline const CommandExecutionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const CommandExecutionStatus& value) { m_status = value; }
    inline void SetStatus(CommandExecutionStatus&& value) { m_status = std::move(value); }
    inline GetCommandExecutionResult& WithStatus(const CommandExecutionStatus& value) { SetStatus(value); return *this;}
    inline GetCommandExecutionResult& WithStatus(CommandExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your devices can use this parameter to provide additional context about the
     * status of a command execution using a reason code and description.</p>
     */
    inline const StatusReason& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const StatusReason& value) { m_statusReason = value; }
    inline void SetStatusReason(StatusReason&& value) { m_statusReason = std::move(value); }
    inline GetCommandExecutionResult& WithStatusReason(const StatusReason& value) { SetStatusReason(value); return *this;}
    inline GetCommandExecutionResult& WithStatusReason(StatusReason&& value) { SetStatusReason(std::move(value)); return *this;}
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
    inline const Aws::Map<Aws::String, CommandExecutionResult>& GetResult() const{ return m_result; }
    inline void SetResult(const Aws::Map<Aws::String, CommandExecutionResult>& value) { m_result = value; }
    inline void SetResult(Aws::Map<Aws::String, CommandExecutionResult>&& value) { m_result = std::move(value); }
    inline GetCommandExecutionResult& WithResult(const Aws::Map<Aws::String, CommandExecutionResult>& value) { SetResult(value); return *this;}
    inline GetCommandExecutionResult& WithResult(Aws::Map<Aws::String, CommandExecutionResult>&& value) { SetResult(std::move(value)); return *this;}
    inline GetCommandExecutionResult& AddResult(const Aws::String& key, const CommandExecutionResult& value) { m_result.emplace(key, value); return *this; }
    inline GetCommandExecutionResult& AddResult(Aws::String&& key, const CommandExecutionResult& value) { m_result.emplace(std::move(key), value); return *this; }
    inline GetCommandExecutionResult& AddResult(const Aws::String& key, CommandExecutionResult&& value) { m_result.emplace(key, std::move(value)); return *this; }
    inline GetCommandExecutionResult& AddResult(Aws::String&& key, CommandExecutionResult&& value) { m_result.emplace(std::move(key), std::move(value)); return *this; }
    inline GetCommandExecutionResult& AddResult(const char* key, CommandExecutionResult&& value) { m_result.emplace(key, std::move(value)); return *this; }
    inline GetCommandExecutionResult& AddResult(const char* key, const CommandExecutionResult& value) { m_result.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of parameters that the <code>StartCommandExecution</code> API used
     * when performing the command on the device.</p>
     */
    inline const Aws::Map<Aws::String, CommandParameterValue>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Map<Aws::String, CommandParameterValue>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, CommandParameterValue>&& value) { m_parameters = std::move(value); }
    inline GetCommandExecutionResult& WithParameters(const Aws::Map<Aws::String, CommandParameterValue>& value) { SetParameters(value); return *this;}
    inline GetCommandExecutionResult& WithParameters(Aws::Map<Aws::String, CommandParameterValue>&& value) { SetParameters(std::move(value)); return *this;}
    inline GetCommandExecutionResult& AddParameters(const Aws::String& key, const CommandParameterValue& value) { m_parameters.emplace(key, value); return *this; }
    inline GetCommandExecutionResult& AddParameters(Aws::String&& key, const CommandParameterValue& value) { m_parameters.emplace(std::move(key), value); return *this; }
    inline GetCommandExecutionResult& AddParameters(const Aws::String& key, CommandParameterValue&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline GetCommandExecutionResult& AddParameters(Aws::String&& key, CommandParameterValue&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline GetCommandExecutionResult& AddParameters(const char* key, CommandParameterValue&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline GetCommandExecutionResult& AddParameters(const char* key, const CommandParameterValue& value) { m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time in seconds that the device can take to finish a
     * command execution. A timer starts when the command execution is created. If the
     * command execution status is not set to another terminal state before the timer
     * expires, it will automatically update to <code>TIMED_OUT</code>.</p>
     */
    inline long long GetExecutionTimeoutSeconds() const{ return m_executionTimeoutSeconds; }
    inline void SetExecutionTimeoutSeconds(long long value) { m_executionTimeoutSeconds = value; }
    inline GetCommandExecutionResult& WithExecutionTimeoutSeconds(long long value) { SetExecutionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command execution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetCommandExecutionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetCommandExecutionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetCommandExecutionResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetCommandExecutionResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command execution was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetCommandExecutionResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetCommandExecutionResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command execution was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAt = value; }
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAt = std::move(value); }
    inline GetCommandExecutionResult& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}
    inline GetCommandExecutionResult& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time to live (TTL) parameter that indicates the duration for which
     * executions will be retained in your account. The default value is six
     * months.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeToLive() const{ return m_timeToLive; }
    inline void SetTimeToLive(const Aws::Utils::DateTime& value) { m_timeToLive = value; }
    inline void SetTimeToLive(Aws::Utils::DateTime&& value) { m_timeToLive = std::move(value); }
    inline GetCommandExecutionResult& WithTimeToLive(const Aws::Utils::DateTime& value) { SetTimeToLive(value); return *this;}
    inline GetCommandExecutionResult& WithTimeToLive(Aws::Utils::DateTime&& value) { SetTimeToLive(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCommandExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCommandExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCommandExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_executionId;

    Aws::String m_commandArn;

    Aws::String m_targetArn;

    CommandExecutionStatus m_status;

    StatusReason m_statusReason;

    Aws::Map<Aws::String, CommandExecutionResult> m_result;

    Aws::Map<Aws::String, CommandParameterValue> m_parameters;

    long long m_executionTimeoutSeconds;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Utils::DateTime m_startedAt;

    Aws::Utils::DateTime m_completedAt;

    Aws::Utils::DateTime m_timeToLive;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
