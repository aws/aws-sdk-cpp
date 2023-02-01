/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/ManagedAgentName.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Details about the managed agent status for the container.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedAgent">AWS
   * API Reference</a></p>
   */
  class ManagedAgent
  {
  public:
    AWS_ECS_API ManagedAgent();
    AWS_ECS_API ManagedAgent(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ManagedAgent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Unix timestamp for the time when the managed agent was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartedAt() const{ return m_lastStartedAt; }

    /**
     * <p>The Unix timestamp for the time when the managed agent was last started.</p>
     */
    inline bool LastStartedAtHasBeenSet() const { return m_lastStartedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the managed agent was last started.</p>
     */
    inline void SetLastStartedAt(const Aws::Utils::DateTime& value) { m_lastStartedAtHasBeenSet = true; m_lastStartedAt = value; }

    /**
     * <p>The Unix timestamp for the time when the managed agent was last started.</p>
     */
    inline void SetLastStartedAt(Aws::Utils::DateTime&& value) { m_lastStartedAtHasBeenSet = true; m_lastStartedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the managed agent was last started.</p>
     */
    inline ManagedAgent& WithLastStartedAt(const Aws::Utils::DateTime& value) { SetLastStartedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the managed agent was last started.</p>
     */
    inline ManagedAgent& WithLastStartedAt(Aws::Utils::DateTime&& value) { SetLastStartedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the managed agent. When the execute command feature is enabled,
     * the managed agent name is <code>ExecuteCommandAgent</code>.</p>
     */
    inline const ManagedAgentName& GetName() const{ return m_name; }

    /**
     * <p>The name of the managed agent. When the execute command feature is enabled,
     * the managed agent name is <code>ExecuteCommandAgent</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the managed agent. When the execute command feature is enabled,
     * the managed agent name is <code>ExecuteCommandAgent</code>.</p>
     */
    inline void SetName(const ManagedAgentName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the managed agent. When the execute command feature is enabled,
     * the managed agent name is <code>ExecuteCommandAgent</code>.</p>
     */
    inline void SetName(ManagedAgentName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the managed agent. When the execute command feature is enabled,
     * the managed agent name is <code>ExecuteCommandAgent</code>.</p>
     */
    inline ManagedAgent& WithName(const ManagedAgentName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the managed agent. When the execute command feature is enabled,
     * the managed agent name is <code>ExecuteCommandAgent</code>.</p>
     */
    inline ManagedAgent& WithName(ManagedAgentName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The reason for why the managed agent is in the state it is in.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for why the managed agent is in the state it is in.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for why the managed agent is in the state it is in.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for why the managed agent is in the state it is in.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for why the managed agent is in the state it is in.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for why the managed agent is in the state it is in.</p>
     */
    inline ManagedAgent& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for why the managed agent is in the state it is in.</p>
     */
    inline ManagedAgent& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for why the managed agent is in the state it is in.</p>
     */
    inline ManagedAgent& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The last known status of the managed agent.</p>
     */
    inline const Aws::String& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>The last known status of the managed agent.</p>
     */
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }

    /**
     * <p>The last known status of the managed agent.</p>
     */
    inline void SetLastStatus(const Aws::String& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>The last known status of the managed agent.</p>
     */
    inline void SetLastStatus(Aws::String&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }

    /**
     * <p>The last known status of the managed agent.</p>
     */
    inline void SetLastStatus(const char* value) { m_lastStatusHasBeenSet = true; m_lastStatus.assign(value); }

    /**
     * <p>The last known status of the managed agent.</p>
     */
    inline ManagedAgent& WithLastStatus(const Aws::String& value) { SetLastStatus(value); return *this;}

    /**
     * <p>The last known status of the managed agent.</p>
     */
    inline ManagedAgent& WithLastStatus(Aws::String&& value) { SetLastStatus(std::move(value)); return *this;}

    /**
     * <p>The last known status of the managed agent.</p>
     */
    inline ManagedAgent& WithLastStatus(const char* value) { SetLastStatus(value); return *this;}

  private:

    Aws::Utils::DateTime m_lastStartedAt;
    bool m_lastStartedAtHasBeenSet = false;

    ManagedAgentName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_lastStatus;
    bool m_lastStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
