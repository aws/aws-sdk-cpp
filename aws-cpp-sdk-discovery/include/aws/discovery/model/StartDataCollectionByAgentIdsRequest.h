/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StartDataCollectionByAgentIdsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StartDataCollectionByAgentIdsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDataCollectionByAgentIds"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the agents or connectors from which to start collecting data. If
     * you send a request to an agent/connector ID that you do not have permission to
     * contact, according to your Amazon Web Services account, the service does not
     * throw an exception. Instead, it returns the error in the <i>Description</i>
     * field. If you send a request to multiple agents/connectors and you do not have
     * permission to contact some of those agents/connectors, the system does not throw
     * an exception. Instead, the system shows <code>Failed</code> in the
     * <i>Description</i> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentIds() const{ return m_agentIds; }

    /**
     * <p>The IDs of the agents or connectors from which to start collecting data. If
     * you send a request to an agent/connector ID that you do not have permission to
     * contact, according to your Amazon Web Services account, the service does not
     * throw an exception. Instead, it returns the error in the <i>Description</i>
     * field. If you send a request to multiple agents/connectors and you do not have
     * permission to contact some of those agents/connectors, the system does not throw
     * an exception. Instead, the system shows <code>Failed</code> in the
     * <i>Description</i> field.</p>
     */
    inline bool AgentIdsHasBeenSet() const { return m_agentIdsHasBeenSet; }

    /**
     * <p>The IDs of the agents or connectors from which to start collecting data. If
     * you send a request to an agent/connector ID that you do not have permission to
     * contact, according to your Amazon Web Services account, the service does not
     * throw an exception. Instead, it returns the error in the <i>Description</i>
     * field. If you send a request to multiple agents/connectors and you do not have
     * permission to contact some of those agents/connectors, the system does not throw
     * an exception. Instead, the system shows <code>Failed</code> in the
     * <i>Description</i> field.</p>
     */
    inline void SetAgentIds(const Aws::Vector<Aws::String>& value) { m_agentIdsHasBeenSet = true; m_agentIds = value; }

    /**
     * <p>The IDs of the agents or connectors from which to start collecting data. If
     * you send a request to an agent/connector ID that you do not have permission to
     * contact, according to your Amazon Web Services account, the service does not
     * throw an exception. Instead, it returns the error in the <i>Description</i>
     * field. If you send a request to multiple agents/connectors and you do not have
     * permission to contact some of those agents/connectors, the system does not throw
     * an exception. Instead, the system shows <code>Failed</code> in the
     * <i>Description</i> field.</p>
     */
    inline void SetAgentIds(Aws::Vector<Aws::String>&& value) { m_agentIdsHasBeenSet = true; m_agentIds = std::move(value); }

    /**
     * <p>The IDs of the agents or connectors from which to start collecting data. If
     * you send a request to an agent/connector ID that you do not have permission to
     * contact, according to your Amazon Web Services account, the service does not
     * throw an exception. Instead, it returns the error in the <i>Description</i>
     * field. If you send a request to multiple agents/connectors and you do not have
     * permission to contact some of those agents/connectors, the system does not throw
     * an exception. Instead, the system shows <code>Failed</code> in the
     * <i>Description</i> field.</p>
     */
    inline StartDataCollectionByAgentIdsRequest& WithAgentIds(const Aws::Vector<Aws::String>& value) { SetAgentIds(value); return *this;}

    /**
     * <p>The IDs of the agents or connectors from which to start collecting data. If
     * you send a request to an agent/connector ID that you do not have permission to
     * contact, according to your Amazon Web Services account, the service does not
     * throw an exception. Instead, it returns the error in the <i>Description</i>
     * field. If you send a request to multiple agents/connectors and you do not have
     * permission to contact some of those agents/connectors, the system does not throw
     * an exception. Instead, the system shows <code>Failed</code> in the
     * <i>Description</i> field.</p>
     */
    inline StartDataCollectionByAgentIdsRequest& WithAgentIds(Aws::Vector<Aws::String>&& value) { SetAgentIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the agents or connectors from which to start collecting data. If
     * you send a request to an agent/connector ID that you do not have permission to
     * contact, according to your Amazon Web Services account, the service does not
     * throw an exception. Instead, it returns the error in the <i>Description</i>
     * field. If you send a request to multiple agents/connectors and you do not have
     * permission to contact some of those agents/connectors, the system does not throw
     * an exception. Instead, the system shows <code>Failed</code> in the
     * <i>Description</i> field.</p>
     */
    inline StartDataCollectionByAgentIdsRequest& AddAgentIds(const Aws::String& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the agents or connectors from which to start collecting data. If
     * you send a request to an agent/connector ID that you do not have permission to
     * contact, according to your Amazon Web Services account, the service does not
     * throw an exception. Instead, it returns the error in the <i>Description</i>
     * field. If you send a request to multiple agents/connectors and you do not have
     * permission to contact some of those agents/connectors, the system does not throw
     * an exception. Instead, the system shows <code>Failed</code> in the
     * <i>Description</i> field.</p>
     */
    inline StartDataCollectionByAgentIdsRequest& AddAgentIds(Aws::String&& value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the agents or connectors from which to start collecting data. If
     * you send a request to an agent/connector ID that you do not have permission to
     * contact, according to your Amazon Web Services account, the service does not
     * throw an exception. Instead, it returns the error in the <i>Description</i>
     * field. If you send a request to multiple agents/connectors and you do not have
     * permission to contact some of those agents/connectors, the system does not throw
     * an exception. Instead, the system shows <code>Failed</code> in the
     * <i>Description</i> field.</p>
     */
    inline StartDataCollectionByAgentIdsRequest& AddAgentIds(const char* value) { m_agentIdsHasBeenSet = true; m_agentIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_agentIds;
    bool m_agentIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
