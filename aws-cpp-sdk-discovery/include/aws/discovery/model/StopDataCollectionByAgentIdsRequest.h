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
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API StopDataCollectionByAgentIdsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    StopDataCollectionByAgentIdsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopDataCollectionByAgentIds"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the agents or connectors from which to stop collecting data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentIds() const{ return m_agentIds; }

    /**
     * <p>The IDs of the agents or connectors from which to stop collecting data.</p>
     */
    inline bool AgentIdsHasBeenSet() const { return m_agentIdsHasBeenSet; }

    /**
     * <p>The IDs of the agents or connectors from which to stop collecting data.</p>
     */
    inline void SetAgentIds(const Aws::Vector<Aws::String>& value) { m_agentIdsHasBeenSet = true; m_agentIds = value; }

    /**
     * <p>The IDs of the agents or connectors from which to stop collecting data.</p>
     */
    inline void SetAgentIds(Aws::Vector<Aws::String>&& value) { m_agentIdsHasBeenSet = true; m_agentIds = std::move(value); }

    /**
     * <p>The IDs of the agents or connectors from which to stop collecting data.</p>
     */
    inline StopDataCollectionByAgentIdsRequest& WithAgentIds(const Aws::Vector<Aws::String>& value) { SetAgentIds(value); return *this;}

    /**
     * <p>The IDs of the agents or connectors from which to stop collecting data.</p>
     */
    inline StopDataCollectionByAgentIdsRequest& WithAgentIds(Aws::Vector<Aws::String>&& value) { SetAgentIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the agents or connectors from which to stop collecting data.</p>
     */
    inline StopDataCollectionByAgentIdsRequest& AddAgentIds(const Aws::String& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the agents or connectors from which to stop collecting data.</p>
     */
    inline StopDataCollectionByAgentIdsRequest& AddAgentIds(Aws::String&& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the agents or connectors from which to stop collecting data.</p>
     */
    inline StopDataCollectionByAgentIdsRequest& AddAgentIds(const char* value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_agentIds;
    bool m_agentIdsHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
