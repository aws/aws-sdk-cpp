/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyMappingConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class PutAssetModelInterfaceRelationshipRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API PutAssetModelInterfaceRelationshipRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAssetModelInterfaceRelationship"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the asset model. This can be either the actual ID in UUID format,
     * or else externalId: followed by the external ID.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    PutAssetModelInterfaceRelationshipRequest& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the interface asset model. This can be either the actual ID in UUID
     * format, or else externalId: followed by the external ID.</p>
     */
    inline const Aws::String& GetInterfaceAssetModelId() const { return m_interfaceAssetModelId; }
    inline bool InterfaceAssetModelIdHasBeenSet() const { return m_interfaceAssetModelIdHasBeenSet; }
    template<typename InterfaceAssetModelIdT = Aws::String>
    void SetInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { m_interfaceAssetModelIdHasBeenSet = true; m_interfaceAssetModelId = std::forward<InterfaceAssetModelIdT>(value); }
    template<typename InterfaceAssetModelIdT = Aws::String>
    PutAssetModelInterfaceRelationshipRequest& WithInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { SetInterfaceAssetModelId(std::forward<InterfaceAssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for mapping properties from the interface asset model to
     * the asset model where the interface is applied. This configuration controls how
     * properties are matched and created during the interface application process.</p>
     */
    inline const PropertyMappingConfiguration& GetPropertyMappingConfiguration() const { return m_propertyMappingConfiguration; }
    inline bool PropertyMappingConfigurationHasBeenSet() const { return m_propertyMappingConfigurationHasBeenSet; }
    template<typename PropertyMappingConfigurationT = PropertyMappingConfiguration>
    void SetPropertyMappingConfiguration(PropertyMappingConfigurationT&& value) { m_propertyMappingConfigurationHasBeenSet = true; m_propertyMappingConfiguration = std::forward<PropertyMappingConfigurationT>(value); }
    template<typename PropertyMappingConfigurationT = PropertyMappingConfiguration>
    PutAssetModelInterfaceRelationshipRequest& WithPropertyMappingConfiguration(PropertyMappingConfigurationT&& value) { SetPropertyMappingConfiguration(std::forward<PropertyMappingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    PutAssetModelInterfaceRelationshipRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_interfaceAssetModelId;
    bool m_interfaceAssetModelIdHasBeenSet = false;

    PropertyMappingConfiguration m_propertyMappingConfiguration;
    bool m_propertyMappingConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
