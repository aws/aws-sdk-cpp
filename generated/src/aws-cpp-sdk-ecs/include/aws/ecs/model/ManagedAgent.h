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


    ///@{
    /**
     * <p>The Unix timestamp for the time when the managed agent was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartedAt() const{ return m_lastStartedAt; }
    inline bool LastStartedAtHasBeenSet() const { return m_lastStartedAtHasBeenSet; }
    inline void SetLastStartedAt(const Aws::Utils::DateTime& value) { m_lastStartedAtHasBeenSet = true; m_lastStartedAt = value; }
    inline void SetLastStartedAt(Aws::Utils::DateTime&& value) { m_lastStartedAtHasBeenSet = true; m_lastStartedAt = std::move(value); }
    inline ManagedAgent& WithLastStartedAt(const Aws::Utils::DateTime& value) { SetLastStartedAt(value); return *this;}
    inline ManagedAgent& WithLastStartedAt(Aws::Utils::DateTime&& value) { SetLastStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed agent. When the execute command feature is turned on,
     * the managed agent name is <code>ExecuteCommandAgent</code>.</p>
     */
    inline const ManagedAgentName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const ManagedAgentName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(ManagedAgentName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline ManagedAgent& WithName(const ManagedAgentName& value) { SetName(value); return *this;}
    inline ManagedAgent& WithName(ManagedAgentName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for why the managed agent is in the state it is in.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline ManagedAgent& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline ManagedAgent& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline ManagedAgent& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known status of the managed agent.</p>
     */
    inline const Aws::String& GetLastStatus() const{ return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    inline void SetLastStatus(const Aws::String& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }
    inline void SetLastStatus(Aws::String&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }
    inline void SetLastStatus(const char* value) { m_lastStatusHasBeenSet = true; m_lastStatus.assign(value); }
    inline ManagedAgent& WithLastStatus(const Aws::String& value) { SetLastStatus(value); return *this;}
    inline ManagedAgent& WithLastStatus(Aws::String&& value) { SetLastStatus(std::move(value)); return *this;}
    inline ManagedAgent& WithLastStatus(const char* value) { SetLastStatus(value); return *this;}
    ///@}
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
