/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details about the routing configuration for an Agent alias.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentAliasRoutingConfigurationListItem">AWS
   * API Reference</a></p>
   */
  class AgentAliasRoutingConfigurationListItem
  {
  public:
    AWS_BEDROCKAGENT_API AgentAliasRoutingConfigurationListItem();
    AWS_BEDROCKAGENT_API AgentAliasRoutingConfigurationListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentAliasRoutingConfigurationListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    
    inline AgentAliasRoutingConfigurationListItem& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    
    inline AgentAliasRoutingConfigurationListItem& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    
    inline AgentAliasRoutingConfigurationListItem& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}

  private:

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
