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
    AWS_IOTMANAGEDINTEGRATIONS_API SendManagedThingCommandRequest() = default;

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
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    SendManagedThingCommandRequest& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device endpoint.</p>
     */
    inline const Aws::Vector<CommandEndpoint>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Vector<CommandEndpoint>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<CommandEndpoint>>
    SendManagedThingCommandRequest& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = CommandEndpoint>
    SendManagedThingCommandRequest& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID tracking the current discovery process for one connector
     * association.</p>
     */
    inline const Aws::String& GetConnectorAssociationId() const { return m_connectorAssociationId; }
    inline bool ConnectorAssociationIdHasBeenSet() const { return m_connectorAssociationIdHasBeenSet; }
    template<typename ConnectorAssociationIdT = Aws::String>
    void SetConnectorAssociationId(ConnectorAssociationIdT&& value) { m_connectorAssociationIdHasBeenSet = true; m_connectorAssociationId = std::forward<ConnectorAssociationIdT>(value); }
    template<typename ConnectorAssociationIdT = Aws::String>
    SendManagedThingCommandRequest& WithConnectorAssociationId(ConnectorAssociationIdT&& value) { SetConnectorAssociationId(std::forward<ConnectorAssociationIdT>(value)); return *this;}
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
