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
    AWS_IOTMANAGEDINTEGRATIONS_API StartDeviceDiscoveryRequest();

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
    inline const DiscoveryType& GetDiscoveryType() const{ return m_discoveryType; }
    inline bool DiscoveryTypeHasBeenSet() const { return m_discoveryTypeHasBeenSet; }
    inline void SetDiscoveryType(const DiscoveryType& value) { m_discoveryTypeHasBeenSet = true; m_discoveryType = value; }
    inline void SetDiscoveryType(DiscoveryType&& value) { m_discoveryTypeHasBeenSet = true; m_discoveryType = std::move(value); }
    inline StartDeviceDiscoveryRequest& WithDiscoveryType(const DiscoveryType& value) { SetDiscoveryType(value); return *this;}
    inline StartDeviceDiscoveryRequest& WithDiscoveryType(DiscoveryType&& value) { SetDiscoveryType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the end-user's IoT hub.</p>
     */
    inline const Aws::String& GetControllerIdentifier() const{ return m_controllerIdentifier; }
    inline bool ControllerIdentifierHasBeenSet() const { return m_controllerIdentifierHasBeenSet; }
    inline void SetControllerIdentifier(const Aws::String& value) { m_controllerIdentifierHasBeenSet = true; m_controllerIdentifier = value; }
    inline void SetControllerIdentifier(Aws::String&& value) { m_controllerIdentifierHasBeenSet = true; m_controllerIdentifier = std::move(value); }
    inline void SetControllerIdentifier(const char* value) { m_controllerIdentifierHasBeenSet = true; m_controllerIdentifier.assign(value); }
    inline StartDeviceDiscoveryRequest& WithControllerIdentifier(const Aws::String& value) { SetControllerIdentifier(value); return *this;}
    inline StartDeviceDiscoveryRequest& WithControllerIdentifier(Aws::String&& value) { SetControllerIdentifier(std::move(value)); return *this;}
    inline StartDeviceDiscoveryRequest& WithControllerIdentifier(const char* value) { SetControllerIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the connector association.</p>
     */
    inline const Aws::String& GetConnectorAssociationIdentifier() const{ return m_connectorAssociationIdentifier; }
    inline bool ConnectorAssociationIdentifierHasBeenSet() const { return m_connectorAssociationIdentifierHasBeenSet; }
    inline void SetConnectorAssociationIdentifier(const Aws::String& value) { m_connectorAssociationIdentifierHasBeenSet = true; m_connectorAssociationIdentifier = value; }
    inline void SetConnectorAssociationIdentifier(Aws::String&& value) { m_connectorAssociationIdentifierHasBeenSet = true; m_connectorAssociationIdentifier = std::move(value); }
    inline void SetConnectorAssociationIdentifier(const char* value) { m_connectorAssociationIdentifierHasBeenSet = true; m_connectorAssociationIdentifier.assign(value); }
    inline StartDeviceDiscoveryRequest& WithConnectorAssociationIdentifier(const Aws::String& value) { SetConnectorAssociationIdentifier(value); return *this;}
    inline StartDeviceDiscoveryRequest& WithConnectorAssociationIdentifier(Aws::String&& value) { SetConnectorAssociationIdentifier(std::move(value)); return *this;}
    inline StartDeviceDiscoveryRequest& WithConnectorAssociationIdentifier(const char* value) { SetConnectorAssociationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication material required to start the local device discovery job
     * request.</p>
     */
    inline const Aws::String& GetAuthenticationMaterial() const{ return m_authenticationMaterial; }
    inline bool AuthenticationMaterialHasBeenSet() const { return m_authenticationMaterialHasBeenSet; }
    inline void SetAuthenticationMaterial(const Aws::String& value) { m_authenticationMaterialHasBeenSet = true; m_authenticationMaterial = value; }
    inline void SetAuthenticationMaterial(Aws::String&& value) { m_authenticationMaterialHasBeenSet = true; m_authenticationMaterial = std::move(value); }
    inline void SetAuthenticationMaterial(const char* value) { m_authenticationMaterialHasBeenSet = true; m_authenticationMaterial.assign(value); }
    inline StartDeviceDiscoveryRequest& WithAuthenticationMaterial(const Aws::String& value) { SetAuthenticationMaterial(value); return *this;}
    inline StartDeviceDiscoveryRequest& WithAuthenticationMaterial(Aws::String&& value) { SetAuthenticationMaterial(std::move(value)); return *this;}
    inline StartDeviceDiscoveryRequest& WithAuthenticationMaterial(const char* value) { SetAuthenticationMaterial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication material used for device discovery jobs.</p>
     */
    inline const DiscoveryAuthMaterialType& GetAuthenticationMaterialType() const{ return m_authenticationMaterialType; }
    inline bool AuthenticationMaterialTypeHasBeenSet() const { return m_authenticationMaterialTypeHasBeenSet; }
    inline void SetAuthenticationMaterialType(const DiscoveryAuthMaterialType& value) { m_authenticationMaterialTypeHasBeenSet = true; m_authenticationMaterialType = value; }
    inline void SetAuthenticationMaterialType(DiscoveryAuthMaterialType&& value) { m_authenticationMaterialTypeHasBeenSet = true; m_authenticationMaterialType = std::move(value); }
    inline StartDeviceDiscoveryRequest& WithAuthenticationMaterialType(const DiscoveryAuthMaterialType& value) { SetAuthenticationMaterialType(value); return *this;}
    inline StartDeviceDiscoveryRequest& WithAuthenticationMaterialType(DiscoveryAuthMaterialType&& value) { SetAuthenticationMaterialType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token. If you retry a request that completed successfully
     * initially using the same client token and parameters, then the retry attempt
     * will succeed without performing any further actions.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartDeviceDiscoveryRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartDeviceDiscoveryRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartDeviceDiscoveryRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the device discovery
     * request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartDeviceDiscoveryRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StartDeviceDiscoveryRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StartDeviceDiscoveryRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StartDeviceDiscoveryRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartDeviceDiscoveryRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartDeviceDiscoveryRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartDeviceDiscoveryRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartDeviceDiscoveryRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartDeviceDiscoveryRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    DiscoveryType m_discoveryType;
    bool m_discoveryTypeHasBeenSet = false;

    Aws::String m_controllerIdentifier;
    bool m_controllerIdentifierHasBeenSet = false;

    Aws::String m_connectorAssociationIdentifier;
    bool m_connectorAssociationIdentifierHasBeenSet = false;

    Aws::String m_authenticationMaterial;
    bool m_authenticationMaterialHasBeenSet = false;

    DiscoveryAuthMaterialType m_authenticationMaterialType;
    bool m_authenticationMaterialTypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
