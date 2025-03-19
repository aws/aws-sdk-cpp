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
    AWS_ECS_API ManagedAgent() = default;
    AWS_ECS_API ManagedAgent(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ManagedAgent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Unix timestamp for the time when the managed agent was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartedAt() const { return m_lastStartedAt; }
    inline bool LastStartedAtHasBeenSet() const { return m_lastStartedAtHasBeenSet; }
    template<typename LastStartedAtT = Aws::Utils::DateTime>
    void SetLastStartedAt(LastStartedAtT&& value) { m_lastStartedAtHasBeenSet = true; m_lastStartedAt = std::forward<LastStartedAtT>(value); }
    template<typename LastStartedAtT = Aws::Utils::DateTime>
    ManagedAgent& WithLastStartedAt(LastStartedAtT&& value) { SetLastStartedAt(std::forward<LastStartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed agent. When the execute command feature is turned on,
     * the managed agent name is <code>ExecuteCommandAgent</code>.</p>
     */
    inline ManagedAgentName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ManagedAgentName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ManagedAgent& WithName(ManagedAgentName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for why the managed agent is in the state it is in.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    ManagedAgent& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known status of the managed agent.</p>
     */
    inline const Aws::String& GetLastStatus() const { return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    template<typename LastStatusT = Aws::String>
    void SetLastStatus(LastStatusT&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::forward<LastStatusT>(value); }
    template<typename LastStatusT = Aws::String>
    ManagedAgent& WithLastStatus(LastStatusT&& value) { SetLastStatus(std::forward<LastStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastStartedAt{};
    bool m_lastStartedAtHasBeenSet = false;

    ManagedAgentName m_name{ManagedAgentName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_lastStatus;
    bool m_lastStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
