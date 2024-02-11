/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/discovery/model/DeleteAgent.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class BatchDeleteAgentsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteAgentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteAgents"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The list of agents to delete. </p>
     */
    inline const Aws::Vector<DeleteAgent>& GetDeleteAgents() const{ return m_deleteAgents; }

    /**
     * <p> The list of agents to delete. </p>
     */
    inline bool DeleteAgentsHasBeenSet() const { return m_deleteAgentsHasBeenSet; }

    /**
     * <p> The list of agents to delete. </p>
     */
    inline void SetDeleteAgents(const Aws::Vector<DeleteAgent>& value) { m_deleteAgentsHasBeenSet = true; m_deleteAgents = value; }

    /**
     * <p> The list of agents to delete. </p>
     */
    inline void SetDeleteAgents(Aws::Vector<DeleteAgent>&& value) { m_deleteAgentsHasBeenSet = true; m_deleteAgents = std::move(value); }

    /**
     * <p> The list of agents to delete. </p>
     */
    inline BatchDeleteAgentsRequest& WithDeleteAgents(const Aws::Vector<DeleteAgent>& value) { SetDeleteAgents(value); return *this;}

    /**
     * <p> The list of agents to delete. </p>
     */
    inline BatchDeleteAgentsRequest& WithDeleteAgents(Aws::Vector<DeleteAgent>&& value) { SetDeleteAgents(std::move(value)); return *this;}

    /**
     * <p> The list of agents to delete. </p>
     */
    inline BatchDeleteAgentsRequest& AddDeleteAgents(const DeleteAgent& value) { m_deleteAgentsHasBeenSet = true; m_deleteAgents.push_back(value); return *this; }

    /**
     * <p> The list of agents to delete. </p>
     */
    inline BatchDeleteAgentsRequest& AddDeleteAgents(DeleteAgent&& value) { m_deleteAgentsHasBeenSet = true; m_deleteAgents.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DeleteAgent> m_deleteAgents;
    bool m_deleteAgentsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
