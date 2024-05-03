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
   * <p>Contains details about the routing configuration of the alias.</p><p><h3>See
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


    /**
     * <p>The version of the agent with which the alias is associated.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The version of the agent with which the alias is associated.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The version of the agent with which the alias is associated.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The version of the agent with which the alias is associated.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The version of the agent with which the alias is associated.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The version of the agent with which the alias is associated.</p>
     */
    inline AgentAliasRoutingConfigurationListItem& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version of the agent with which the alias is associated.</p>
     */
    inline AgentAliasRoutingConfigurationListItem& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the agent with which the alias is associated.</p>
     */
    inline AgentAliasRoutingConfigurationListItem& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>Information on the Provisioned Throughput assigned to an agent alias.</p>
     */
    inline const Aws::String& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    /**
     * <p>Information on the Provisioned Throughput assigned to an agent alias.</p>
     */
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    /**
     * <p>Information on the Provisioned Throughput assigned to an agent alias.</p>
     */
    inline void SetProvisionedThroughput(const Aws::String& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    /**
     * <p>Information on the Provisioned Throughput assigned to an agent alias.</p>
     */
    inline void SetProvisionedThroughput(Aws::String&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    /**
     * <p>Information on the Provisioned Throughput assigned to an agent alias.</p>
     */
    inline void SetProvisionedThroughput(const char* value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput.assign(value); }

    /**
     * <p>Information on the Provisioned Throughput assigned to an agent alias.</p>
     */
    inline AgentAliasRoutingConfigurationListItem& WithProvisionedThroughput(const Aws::String& value) { SetProvisionedThroughput(value); return *this;}

    /**
     * <p>Information on the Provisioned Throughput assigned to an agent alias.</p>
     */
    inline AgentAliasRoutingConfigurationListItem& WithProvisionedThroughput(Aws::String&& value) { SetProvisionedThroughput(std::move(value)); return *this;}

    /**
     * <p>Information on the Provisioned Throughput assigned to an agent alias.</p>
     */
    inline AgentAliasRoutingConfigurationListItem& WithProvisionedThroughput(const char* value) { SetProvisionedThroughput(value); return *this;}

  private:

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
