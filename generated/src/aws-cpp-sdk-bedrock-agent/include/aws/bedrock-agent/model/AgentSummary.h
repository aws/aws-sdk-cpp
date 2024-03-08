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
   * <p>Summary of Agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentSummary">AWS
   * API Reference</a></p>
   */
  class AgentSummary
  {
  public:
    AWS_BEDROCKAGENT_API AgentSummary();
    AWS_BEDROCKAGENT_API AgentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    
    inline AgentSummary& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    
    inline AgentSummary& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    
    inline AgentSummary& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    
    inline const Aws::String& GetAgentName() const{ return m_agentName; }

    
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }

    
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }

    
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }

    
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }

    
    inline AgentSummary& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}

    
    inline AgentSummary& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}

    
    inline AgentSummary& WithAgentName(const char* value) { SetAgentName(value); return *this;}


    
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }

    
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }

    
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatusHasBeenSet = true; m_agentStatus = value; }

    
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatusHasBeenSet = true; m_agentStatus = std::move(value); }

    
    inline AgentSummary& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}

    
    inline AgentSummary& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline AgentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline AgentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline AgentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline AgentSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline AgentSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetLatestAgentVersion() const{ return m_latestAgentVersion; }

    
    inline bool LatestAgentVersionHasBeenSet() const { return m_latestAgentVersionHasBeenSet; }

    
    inline void SetLatestAgentVersion(const Aws::String& value) { m_latestAgentVersionHasBeenSet = true; m_latestAgentVersion = value; }

    
    inline void SetLatestAgentVersion(Aws::String&& value) { m_latestAgentVersionHasBeenSet = true; m_latestAgentVersion = std::move(value); }

    
    inline void SetLatestAgentVersion(const char* value) { m_latestAgentVersionHasBeenSet = true; m_latestAgentVersion.assign(value); }

    
    inline AgentSummary& WithLatestAgentVersion(const Aws::String& value) { SetLatestAgentVersion(value); return *this;}

    
    inline AgentSummary& WithLatestAgentVersion(Aws::String&& value) { SetLatestAgentVersion(std::move(value)); return *this;}

    
    inline AgentSummary& WithLatestAgentVersion(const char* value) { SetLatestAgentVersion(value); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    AgentStatus m_agentStatus;
    bool m_agentStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_latestAgentVersion;
    bool m_latestAgentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
