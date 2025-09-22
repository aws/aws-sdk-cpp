/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntimeStatus.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Contains information about an agent runtime. An agent runtime is the
   * execution environment for a Amazon Bedrock Agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AgentRuntime">AWS
   * API Reference</a></p>
   */
  class AgentRuntime
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API AgentRuntime() = default;
    AWS_BEDROCKAGENTCORECONTROL_API AgentRuntime(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API AgentRuntime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the agent runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeArn() const { return m_agentRuntimeArn; }
    inline bool AgentRuntimeArnHasBeenSet() const { return m_agentRuntimeArnHasBeenSet; }
    template<typename AgentRuntimeArnT = Aws::String>
    void SetAgentRuntimeArn(AgentRuntimeArnT&& value) { m_agentRuntimeArnHasBeenSet = true; m_agentRuntimeArn = std::forward<AgentRuntimeArnT>(value); }
    template<typename AgentRuntimeArnT = Aws::String>
    AgentRuntime& WithAgentRuntimeArn(AgentRuntimeArnT&& value) { SetAgentRuntimeArn(std::forward<AgentRuntimeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the agent runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeId() const { return m_agentRuntimeId; }
    inline bool AgentRuntimeIdHasBeenSet() const { return m_agentRuntimeIdHasBeenSet; }
    template<typename AgentRuntimeIdT = Aws::String>
    void SetAgentRuntimeId(AgentRuntimeIdT&& value) { m_agentRuntimeIdHasBeenSet = true; m_agentRuntimeId = std::forward<AgentRuntimeIdT>(value); }
    template<typename AgentRuntimeIdT = Aws::String>
    AgentRuntime& WithAgentRuntimeId(AgentRuntimeIdT&& value) { SetAgentRuntimeId(std::forward<AgentRuntimeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the agent runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeVersion() const { return m_agentRuntimeVersion; }
    inline bool AgentRuntimeVersionHasBeenSet() const { return m_agentRuntimeVersionHasBeenSet; }
    template<typename AgentRuntimeVersionT = Aws::String>
    void SetAgentRuntimeVersion(AgentRuntimeVersionT&& value) { m_agentRuntimeVersionHasBeenSet = true; m_agentRuntimeVersion = std::forward<AgentRuntimeVersionT>(value); }
    template<typename AgentRuntimeVersionT = Aws::String>
    AgentRuntime& WithAgentRuntimeVersion(AgentRuntimeVersionT&& value) { SetAgentRuntimeVersion(std::forward<AgentRuntimeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the agent runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeName() const { return m_agentRuntimeName; }
    inline bool AgentRuntimeNameHasBeenSet() const { return m_agentRuntimeNameHasBeenSet; }
    template<typename AgentRuntimeNameT = Aws::String>
    void SetAgentRuntimeName(AgentRuntimeNameT&& value) { m_agentRuntimeNameHasBeenSet = true; m_agentRuntimeName = std::forward<AgentRuntimeNameT>(value); }
    template<typename AgentRuntimeNameT = Aws::String>
    AgentRuntime& WithAgentRuntimeName(AgentRuntimeNameT&& value) { SetAgentRuntimeName(std::forward<AgentRuntimeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the agent runtime.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AgentRuntime& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the agent runtime was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    AgentRuntime& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the agent runtime.</p>
     */
    inline AgentRuntimeStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AgentRuntimeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AgentRuntime& WithStatus(AgentRuntimeStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_agentRuntimeArn;
    bool m_agentRuntimeArnHasBeenSet = false;

    Aws::String m_agentRuntimeId;
    bool m_agentRuntimeIdHasBeenSet = false;

    Aws::String m_agentRuntimeVersion;
    bool m_agentRuntimeVersionHasBeenSet = false;

    Aws::String m_agentRuntimeName;
    bool m_agentRuntimeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    AgentRuntimeStatus m_status{AgentRuntimeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
