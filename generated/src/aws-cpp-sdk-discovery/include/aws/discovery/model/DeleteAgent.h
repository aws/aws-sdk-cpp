/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> An object representing the agent or data collector to be deleted along with
   * the optional configurations for error handling. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DeleteAgent">AWS
   * API Reference</a></p>
   */
  class DeleteAgent
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DeleteAgent();
    AWS_APPLICATIONDISCOVERYSERVICE_API DeleteAgent(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API DeleteAgent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline DeleteAgent& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline DeleteAgent& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline DeleteAgent& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p> Optional flag used to force delete an agent or data collector. It is needed
     * to delete any agent in HEALTHY/UNHEALTHY/RUNNING status. Note that deleting an
     * agent that is actively reporting health causes it to be re-registered with a
     * different agent ID after data collector re-connects with Amazon Web Services.
     * </p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p> Optional flag used to force delete an agent or data collector. It is needed
     * to delete any agent in HEALTHY/UNHEALTHY/RUNNING status. Note that deleting an
     * agent that is actively reporting health causes it to be re-registered with a
     * different agent ID after data collector re-connects with Amazon Web Services.
     * </p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p> Optional flag used to force delete an agent or data collector. It is needed
     * to delete any agent in HEALTHY/UNHEALTHY/RUNNING status. Note that deleting an
     * agent that is actively reporting health causes it to be re-registered with a
     * different agent ID after data collector re-connects with Amazon Web Services.
     * </p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p> Optional flag used to force delete an agent or data collector. It is needed
     * to delete any agent in HEALTHY/UNHEALTHY/RUNNING status. Note that deleting an
     * agent that is actively reporting health causes it to be re-registered with a
     * different agent ID after data collector re-connects with Amazon Web Services.
     * </p>
     */
    inline DeleteAgent& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
