/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/iot-managed-integrations/model/DiscoveryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/DiscoveryAuthMaterialType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class StartDeviceDiscoveryRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API StartDeviceDiscoveryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDeviceDiscovery"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The discovery type supporting the type of device to be discovered in the
     * device discovery job request.</p>
     */
    inline DiscoveryType GetDiscoveryType() const { return m_discoveryType; }
    inline bool DiscoveryTypeHasBeenSet() const { return m_discoveryTypeHasBeenSet; }
    inline void SetDiscoveryType(DiscoveryType value) { m_discoveryTypeHasBeenSet = true; m_discoveryType = value; }
    inline StartDeviceDiscoveryRequest& WithDiscoveryType(DiscoveryType value) { SetDiscoveryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the end-user's IoT hub.</p>
     */
    inline const Aws::String& GetControllerIdentifier() const { return m_controllerIdentifier; }
    inline bool ControllerIdentifierHasBeenSet() const { return m_controllerIdentifierHasBeenSet; }
    template<typename ControllerIdentifierT = Aws::String>
    void SetControllerIdentifier(ControllerIdentifierT&& value) { m_controllerIdentifierHasBeenSet = true; m_controllerIdentifier = std::forward<ControllerIdentifierT>(value); }
    template<typename ControllerIdentifierT = Aws::String>
    StartDeviceDiscoveryRequest& WithControllerIdentifier(ControllerIdentifierT&& value) { SetControllerIdentifier(std::forward<ControllerIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the connector association.</p>
     */
    inline const Aws::String& GetConnectorAssociationIdentifier() const { return m_connectorAssociationIdentifier; }
    inline bool ConnectorAssociationIdentifierHasBeenSet() const { return m_connectorAssociationIdentifierHasBeenSet; }
    template<typename ConnectorAssociationIdentifierT = Aws::String>
    void SetConnectorAssociationIdentifier(ConnectorAssociationIdentifierT&& value) { m_connectorAssociationIdentifierHasBeenSet = true; m_connectorAssociationIdentifier = std::forward<ConnectorAssociationIdentifierT>(value); }
    template<typename ConnectorAssociationIdentifierT = Aws::String>
    StartDeviceDiscoveryRequest& WithConnectorAssociationIdentifier(ConnectorAssociationIdentifierT&& value) { SetConnectorAssociationIdentifier(std::forward<ConnectorAssociationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication material required to start the local device discovery job
     * request.</p>
     */
    inline const Aws::String& GetAuthenticationMaterial() const { return m_authenticationMaterial; }
    inline bool AuthenticationMaterialHasBeenSet() const { return m_authenticationMaterialHasBeenSet; }
    template<typename AuthenticationMaterialT = Aws::String>
    void SetAuthenticationMaterial(AuthenticationMaterialT&& value) { m_authenticationMaterialHasBeenSet = true; m_authenticationMaterial = std::forward<AuthenticationMaterialT>(value); }
    template<typename AuthenticationMaterialT = Aws::String>
    StartDeviceDiscoveryRequest& WithAuthenticationMaterial(AuthenticationMaterialT&& value) { SetAuthenticationMaterial(std::forward<AuthenticationMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication material used for device discovery jobs.</p>
     */
    inline DiscoveryAuthMaterialType GetAuthenticationMaterialType() const { return m_authenticationMaterialType; }
    inline bool AuthenticationMaterialTypeHasBeenSet() const { return m_authenticationMaterialTypeHasBeenSet; }
    inline void SetAuthenticationMaterialType(DiscoveryAuthMaterialType value) { m_authenticationMaterialTypeHasBeenSet = true; m_authenticationMaterialType = value; }
    inline StartDeviceDiscoveryRequest& WithAuthenticationMaterialType(DiscoveryAuthMaterialType value) { SetAuthenticationMaterialType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token. If you retry a request that completed successfully
     * initially using the same client token and parameters, then the retry attempt
     * will succeed without performing any further actions.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartDeviceDiscoveryRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the device discovery
     * request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartDeviceDiscoveryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartDeviceDiscoveryRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    DiscoveryType m_discoveryType{DiscoveryType::NOT_SET};
    bool m_discoveryTypeHasBeenSet = false;

    Aws::String m_controllerIdentifier;
    bool m_controllerIdentifierHasBeenSet = false;

    Aws::String m_connectorAssociationIdentifier;
    bool m_connectorAssociationIdentifierHasBeenSet = false;

    Aws::String m_authenticationMaterial;
    bool m_authenticationMaterialHasBeenSet = false;

    DiscoveryAuthMaterialType m_authenticationMaterialType{DiscoveryAuthMaterialType::NOT_SET};
    bool m_authenticationMaterialTypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
