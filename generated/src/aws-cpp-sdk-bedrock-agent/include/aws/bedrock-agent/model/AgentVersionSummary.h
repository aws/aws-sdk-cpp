/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentStatus.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains details about a version of an agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentVersionSummary">AWS
   * API Reference</a></p>
   */
  class AgentVersionSummary
  {
  public:
    AWS_BEDROCKAGENT_API AgentVersionSummary();
    AWS_BEDROCKAGENT_API AgentVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the agent to which the version belongs.</p>
     */
    inline const Aws::String& GetAgentName() const{ return m_agentName; }

    /**
     * <p>The name of the agent to which the version belongs.</p>
     */
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }

    /**
     * <p>The name of the agent to which the version belongs.</p>
     */
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }

    /**
     * <p>The name of the agent to which the version belongs.</p>
     */
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }

    /**
     * <p>The name of the agent to which the version belongs.</p>
     */
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }

    /**
     * <p>The name of the agent to which the version belongs.</p>
     */
    inline AgentVersionSummary& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}

    /**
     * <p>The name of the agent to which the version belongs.</p>
     */
    inline AgentVersionSummary& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}

    /**
     * <p>The name of the agent to which the version belongs.</p>
     */
    inline AgentVersionSummary& WithAgentName(const char* value) { SetAgentName(value); return *this;}


    /**
     * <p>The status of the agent to which the version belongs.</p>
     */
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }

    /**
     * <p>The status of the agent to which the version belongs.</p>
     */
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }

    /**
     * <p>The status of the agent to which the version belongs.</p>
     */
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatusHasBeenSet = true; m_agentStatus = value; }

    /**
     * <p>The status of the agent to which the version belongs.</p>
     */
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatusHasBeenSet = true; m_agentStatus = std::move(value); }

    /**
     * <p>The status of the agent to which the version belongs.</p>
     */
    inline AgentVersionSummary& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}

    /**
     * <p>The status of the agent to which the version belongs.</p>
     */
    inline AgentVersionSummary& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}


    /**
     * <p>The version of the agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The version of the agent.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The version of the agent.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The version of the agent.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The version of the agent.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The version of the agent.</p>
     */
    inline AgentVersionSummary& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version of the agent.</p>
     */
    inline AgentVersionSummary& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the agent.</p>
     */
    inline AgentVersionSummary& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>The time at which the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the version was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the version was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the version was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the version was created.</p>
     */
    inline AgentVersionSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the version was created.</p>
     */
    inline AgentVersionSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of the version of the agent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the version of the agent.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the version of the agent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the version of the agent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the version of the agent.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the version of the agent.</p>
     */
    inline AgentVersionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the version of the agent.</p>
     */
    inline AgentVersionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the version of the agent.</p>
     */
    inline AgentVersionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline AgentVersionSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the version was last updated.</p>
     */
    inline AgentVersionSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    AgentStatus m_agentStatus;
    bool m_agentStatusHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
