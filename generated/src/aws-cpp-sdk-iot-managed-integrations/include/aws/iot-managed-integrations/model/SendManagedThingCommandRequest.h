/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/CommandEndpoint.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class SendManagedThingCommandRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API SendManagedThingCommandRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendManagedThingCommand"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The id of the device.</p>
     */
    inline const Aws::String& GetManagedThingId() const{ return m_managedThingId; }
    inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
    inline void SetManagedThingId(const Aws::String& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = value; }
    inline void SetManagedThingId(Aws::String&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::move(value); }
    inline void SetManagedThingId(const char* value) { m_managedThingIdHasBeenSet = true; m_managedThingId.assign(value); }
    inline SendManagedThingCommandRequest& WithManagedThingId(const Aws::String& value) { SetManagedThingId(value); return *this;}
    inline SendManagedThingCommandRequest& WithManagedThingId(Aws::String&& value) { SetManagedThingId(std::move(value)); return *this;}
    inline SendManagedThingCommandRequest& WithManagedThingId(const char* value) { SetManagedThingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device endpoint.</p>
     */
    inline const Aws::Vector<CommandEndpoint>& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const Aws::Vector<CommandEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<CommandEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline SendManagedThingCommandRequest& WithEndpoints(const Aws::Vector<CommandEndpoint>& value) { SetEndpoints(value); return *this;}
    inline SendManagedThingCommandRequest& WithEndpoints(Aws::Vector<CommandEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline SendManagedThingCommandRequest& AddEndpoints(const CommandEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    inline SendManagedThingCommandRequest& AddEndpoints(CommandEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID tracking the current discovery process for one connector
     * association.</p>
     */
    inline const Aws::String& GetConnectorAssociationId() const{ return m_connectorAssociationId; }
    inline bool ConnectorAssociationIdHasBeenSet() const { return m_connectorAssociationIdHasBeenSet; }
    inline void SetConnectorAssociationId(const Aws::String& value) { m_connectorAssociationIdHasBeenSet = true; m_connectorAssociationId = value; }
    inline void SetConnectorAssociationId(Aws::String&& value) { m_connectorAssociationIdHasBeenSet = true; m_connectorAssociationId = std::move(value); }
    inline void SetConnectorAssociationId(const char* value) { m_connectorAssociationIdHasBeenSet = true; m_connectorAssociationId.assign(value); }
    inline SendManagedThingCommandRequest& WithConnectorAssociationId(const Aws::String& value) { SetConnectorAssociationId(value); return *this;}
    inline SendManagedThingCommandRequest& WithConnectorAssociationId(Aws::String&& value) { SetConnectorAssociationId(std::move(value)); return *this;}
    inline SendManagedThingCommandRequest& WithConnectorAssociationId(const char* value) { SetConnectorAssociationId(value); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;

    Aws::Vector<CommandEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::String m_connectorAssociationId;
    bool m_connectorAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
