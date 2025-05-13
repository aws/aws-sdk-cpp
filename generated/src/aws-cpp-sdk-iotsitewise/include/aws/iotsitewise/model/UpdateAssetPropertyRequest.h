/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyNotificationState.h>
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
  class UpdateAssetPropertyRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdateAssetPropertyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssetProperty"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the asset to be updated. This can be either the actual ID in UUID
     * format, or else <code>externalId:</code> followed by the external ID, if it has
     * one. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    UpdateAssetPropertyRequest& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset property to be updated. This can be either the actual ID
     * in UUID format, or else <code>externalId:</code> followed by the external ID, if
     * it has one. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetPropertyId() const { return m_propertyId; }
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }
    template<typename PropertyIdT = Aws::String>
    void SetPropertyId(PropertyIdT&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::forward<PropertyIdT>(value); }
    template<typename PropertyIdT = Aws::String>
    UpdateAssetPropertyRequest& WithPropertyId(PropertyIdT&& value) { SetPropertyId(std::forward<PropertyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias that identifies the property, such as an OPC-UA server data stream
     * path (for example, <code>/company/windfarm/3/turbine/7/temperature</code>). For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/connect-data-streams.html">Mapping
     * industrial data streams to asset properties</a> in the <i>IoT SiteWise User
     * Guide</i>.</p> <p>If you omit this parameter, the alias is removed from the
     * property.</p>
     */
    inline const Aws::String& GetPropertyAlias() const { return m_propertyAlias; }
    inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
    template<typename PropertyAliasT = Aws::String>
    void SetPropertyAlias(PropertyAliasT&& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = std::forward<PropertyAliasT>(value); }
    template<typename PropertyAliasT = Aws::String>
    UpdateAssetPropertyRequest& WithPropertyAlias(PropertyAliasT&& value) { SetPropertyAlias(std::forward<PropertyAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MQTT notification state (enabled or disabled) for this asset property.
     * When the notification state is enabled, IoT SiteWise publishes property value
     * updates to a unique MQTT topic. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/interact-with-other-services.html">Interacting
     * with other services</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>If you
     * omit this parameter, the notification state is set to <code>DISABLED</code>.</p>
     */
    inline PropertyNotificationState GetPropertyNotificationState() const { return m_propertyNotificationState; }
    inline bool PropertyNotificationStateHasBeenSet() const { return m_propertyNotificationStateHasBeenSet; }
    inline void SetPropertyNotificationState(PropertyNotificationState value) { m_propertyNotificationStateHasBeenSet = true; m_propertyNotificationState = value; }
    inline UpdateAssetPropertyRequest& WithPropertyNotificationState(PropertyNotificationState value) { SetPropertyNotificationState(value); return *this;}
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
    UpdateAssetPropertyRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measure (such as Newtons or RPM) of the asset property. If you
     * don't specify a value for this parameter, the service uses the value of the
     * <code>assetModelProperty</code> in the asset model.</p>
     */
    inline const Aws::String& GetPropertyUnit() const { return m_propertyUnit; }
    inline bool PropertyUnitHasBeenSet() const { return m_propertyUnitHasBeenSet; }
    template<typename PropertyUnitT = Aws::String>
    void SetPropertyUnit(PropertyUnitT&& value) { m_propertyUnitHasBeenSet = true; m_propertyUnit = std::forward<PropertyUnitT>(value); }
    template<typename PropertyUnitT = Aws::String>
    UpdateAssetPropertyRequest& WithPropertyUnit(PropertyUnitT&& value) { SetPropertyUnit(std::forward<PropertyUnitT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_propertyAlias;
    bool m_propertyAliasHasBeenSet = false;

    PropertyNotificationState m_propertyNotificationState{PropertyNotificationState::NOT_SET};
    bool m_propertyNotificationStateHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_propertyUnit;
    bool m_propertyUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
