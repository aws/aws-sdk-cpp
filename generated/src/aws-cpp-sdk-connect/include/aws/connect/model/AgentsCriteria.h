/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Can be used to define a list of preferred agents to target the contact to
   * within the queue.&#x2028; Note that agents must have the queue in their routing
   * profile in order to be offered the&#x2028; contact.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentsCriteria">AWS
   * API Reference</a></p>
   */
  class AgentsCriteria
  {
  public:
    AWS_CONNECT_API AgentsCriteria();
    AWS_CONNECT_API AgentsCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentsCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object to specify a list of agents, by user ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentIds() const{ return m_agentIds; }
    inline bool AgentIdsHasBeenSet() const { return m_agentIdsHasBeenSet; }
    inline void SetAgentIds(const Aws::Vector<Aws::String>& value) { m_agentIdsHasBeenSet = true; m_agentIds = value; }
    inline void SetAgentIds(Aws::Vector<Aws::String>&& value) { m_agentIdsHasBeenSet = true; m_agentIds = std::move(value); }
    inline AgentsCriteria& WithAgentIds(const Aws::Vector<Aws::String>& value) { SetAgentIds(value); return *this;}
    inline AgentsCriteria& WithAgentIds(Aws::Vector<Aws::String>&& value) { SetAgentIds(std::move(value)); return *this;}
    inline AgentsCriteria& AddAgentIds(const Aws::String& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }
    inline AgentsCriteria& AddAgentIds(Aws::String&& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(std::move(value)); return *this; }
    inline AgentsCriteria& AddAgentIds(const char* value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_agentIds;
    bool m_agentIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
