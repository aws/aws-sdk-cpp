/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Information about agents or connectors that were instructed to start
   * collecting data. Information includes the agent/connector ID, a description of
   * the operation, and whether the agent/connector configuration was
   * updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/AgentConfigurationStatus">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API AgentConfigurationStatus
  {
  public:
    AgentConfigurationStatus();
    AgentConfigurationStatus(Aws::Utils::Json::JsonView jsonValue);
    AgentConfigurationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The agent/connector ID.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The agent/connector ID.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The agent/connector ID.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The agent/connector ID.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The agent/connector ID.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The agent/connector ID.</p>
     */
    inline AgentConfigurationStatus& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The agent/connector ID.</p>
     */
    inline AgentConfigurationStatus& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The agent/connector ID.</p>
     */
    inline AgentConfigurationStatus& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>Information about the status of the <code>StartDataCollection</code> and
     * <code>StopDataCollection</code> operations. The system has recorded the data
     * collection operation. The agent/connector receives this command the next time it
     * polls for a new command. </p>
     */
    inline bool GetOperationSucceeded() const{ return m_operationSucceeded; }

    /**
     * <p>Information about the status of the <code>StartDataCollection</code> and
     * <code>StopDataCollection</code> operations. The system has recorded the data
     * collection operation. The agent/connector receives this command the next time it
     * polls for a new command. </p>
     */
    inline bool OperationSucceededHasBeenSet() const { return m_operationSucceededHasBeenSet; }

    /**
     * <p>Information about the status of the <code>StartDataCollection</code> and
     * <code>StopDataCollection</code> operations. The system has recorded the data
     * collection operation. The agent/connector receives this command the next time it
     * polls for a new command. </p>
     */
    inline void SetOperationSucceeded(bool value) { m_operationSucceededHasBeenSet = true; m_operationSucceeded = value; }

    /**
     * <p>Information about the status of the <code>StartDataCollection</code> and
     * <code>StopDataCollection</code> operations. The system has recorded the data
     * collection operation. The agent/connector receives this command the next time it
     * polls for a new command. </p>
     */
    inline AgentConfigurationStatus& WithOperationSucceeded(bool value) { SetOperationSucceeded(value); return *this;}


    /**
     * <p>A description of the operation performed.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the operation performed.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the operation performed.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the operation performed.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the operation performed.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the operation performed.</p>
     */
    inline AgentConfigurationStatus& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the operation performed.</p>
     */
    inline AgentConfigurationStatus& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the operation performed.</p>
     */
    inline AgentConfigurationStatus& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet;

    bool m_operationSucceeded;
    bool m_operationSucceededHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
