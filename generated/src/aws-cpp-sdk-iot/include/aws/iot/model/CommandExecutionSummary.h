/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CommandExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Summary information about a particular command execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CommandExecutionSummary">AWS
   * API Reference</a></p>
   */
  class CommandExecutionSummary
  {
  public:
    AWS_IOT_API CommandExecutionSummary();
    AWS_IOT_API CommandExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CommandExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the command execution.</p>
     */
    inline const Aws::String& GetCommandArn() const{ return m_commandArn; }
    inline bool CommandArnHasBeenSet() const { return m_commandArnHasBeenSet; }
    inline void SetCommandArn(const Aws::String& value) { m_commandArnHasBeenSet = true; m_commandArn = value; }
    inline void SetCommandArn(Aws::String&& value) { m_commandArnHasBeenSet = true; m_commandArn = std::move(value); }
    inline void SetCommandArn(const char* value) { m_commandArnHasBeenSet = true; m_commandArn.assign(value); }
    inline CommandExecutionSummary& WithCommandArn(const Aws::String& value) { SetCommandArn(value); return *this;}
    inline CommandExecutionSummary& WithCommandArn(Aws::String&& value) { SetCommandArn(std::move(value)); return *this;}
    inline CommandExecutionSummary& WithCommandArn(const char* value) { SetCommandArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the command execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }
    inline CommandExecutionSummary& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline CommandExecutionSummary& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline CommandExecutionSummary& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target device for which the command is
     * being executed.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline CommandExecutionSummary& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline CommandExecutionSummary& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline CommandExecutionSummary& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the command executions.</p>
     */
    inline const CommandExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CommandExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CommandExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CommandExecutionSummary& WithStatus(const CommandExecutionStatus& value) { SetStatus(value); return *this;}
    inline CommandExecutionSummary& WithStatus(CommandExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the command execution was created for the target
     * device.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline CommandExecutionSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CommandExecutionSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the command started executing on the target
     * device.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline CommandExecutionSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline CommandExecutionSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the command completed executing on the target
     * device.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }
    inline CommandExecutionSummary& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}
    inline CommandExecutionSummary& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_commandArn;
    bool m_commandArnHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    CommandExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt;
    bool m_completedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
