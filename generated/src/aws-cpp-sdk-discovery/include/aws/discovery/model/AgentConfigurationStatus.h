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
   * <p>Information about agents that were instructed to start collecting data.
   * Information includes the agent ID, a description of the operation, and whether
   * the agent configuration was updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/AgentConfigurationStatus">AWS
   * API Reference</a></p>
   */
  class AgentConfigurationStatus
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API AgentConfigurationStatus();
    AWS_APPLICATIONDISCOVERYSERVICE_API AgentConfigurationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API AgentConfigurationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The agent ID.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline AgentConfigurationStatus& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline AgentConfigurationStatus& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline AgentConfigurationStatus& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status of the <code>StartDataCollection</code> and
     * <code>StopDataCollection</code> operations. The system has recorded the data
     * collection operation. The agent receives this command the next time it polls for
     * a new command. </p>
     */
    inline bool GetOperationSucceeded() const{ return m_operationSucceeded; }
    inline bool OperationSucceededHasBeenSet() const { return m_operationSucceededHasBeenSet; }
    inline void SetOperationSucceeded(bool value) { m_operationSucceededHasBeenSet = true; m_operationSucceeded = value; }
    inline AgentConfigurationStatus& WithOperationSucceeded(bool value) { SetOperationSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the operation performed.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AgentConfigurationStatus& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AgentConfigurationStatus& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AgentConfigurationStatus& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    bool m_operationSucceeded;
    bool m_operationSucceededHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
