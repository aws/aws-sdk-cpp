/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/DiscoveryModification.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure containing summary information about a device discovered during a
   * device discovery job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DiscoveredDeviceSummary">AWS
   * API Reference</a></p>
   */
  class DiscoveredDeviceSummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API DiscoveredDeviceSummary() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API DiscoveredDeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API DiscoveredDeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The third-party device identifier as defined by the connector. This
     * identifier must not contain personal identifiable information (PII).</p>
     */
    inline const Aws::String& GetConnectorDeviceId() const { return m_connectorDeviceId; }
    inline bool ConnectorDeviceIdHasBeenSet() const { return m_connectorDeviceIdHasBeenSet; }
    template<typename ConnectorDeviceIdT = Aws::String>
    void SetConnectorDeviceId(ConnectorDeviceIdT&& value) { m_connectorDeviceIdHasBeenSet = true; m_connectorDeviceId = std::forward<ConnectorDeviceIdT>(value); }
    template<typename ConnectorDeviceIdT = Aws::String>
    DiscoveredDeviceSummary& WithConnectorDeviceId(ConnectorDeviceIdT&& value) { SetConnectorDeviceId(std::forward<ConnectorDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device as defined by the connector or third-party system.</p>
     */
    inline const Aws::String& GetConnectorDeviceName() const { return m_connectorDeviceName; }
    inline bool ConnectorDeviceNameHasBeenSet() const { return m_connectorDeviceNameHasBeenSet; }
    template<typename ConnectorDeviceNameT = Aws::String>
    void SetConnectorDeviceName(ConnectorDeviceNameT&& value) { m_connectorDeviceNameHasBeenSet = true; m_connectorDeviceName = std::forward<ConnectorDeviceNameT>(value); }
    template<typename ConnectorDeviceNameT = Aws::String>
    DiscoveredDeviceSummary& WithConnectorDeviceName(ConnectorDeviceNameT&& value) { SetConnectorDeviceName(std::forward<ConnectorDeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of device types or categories that the discovered device belongs
     * to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceTypes() const { return m_deviceTypes; }
    inline bool DeviceTypesHasBeenSet() const { return m_deviceTypesHasBeenSet; }
    template<typename DeviceTypesT = Aws::Vector<Aws::String>>
    void SetDeviceTypes(DeviceTypesT&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = std::forward<DeviceTypesT>(value); }
    template<typename DeviceTypesT = Aws::Vector<Aws::String>>
    DiscoveredDeviceSummary& WithDeviceTypes(DeviceTypesT&& value) { SetDeviceTypes(std::forward<DeviceTypesT>(value)); return *this;}
    template<typename DeviceTypesT = Aws::String>
    DiscoveredDeviceSummary& AddDeviceTypes(DeviceTypesT&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.emplace_back(std::forward<DeviceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the managed thing created for this discovered device, if
     * one exists.</p>
     */
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    DiscoveredDeviceSummary& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the discovered device, indicating whether it has been added,
     * removed, or modified since the last discovery.</p>
     */
    inline DiscoveryModification GetModification() const { return m_modification; }
    inline bool ModificationHasBeenSet() const { return m_modificationHasBeenSet; }
    inline void SetModification(DiscoveryModification value) { m_modificationHasBeenSet = true; m_modification = value; }
    inline DiscoveredDeviceSummary& WithModification(DiscoveryModification value) { SetModification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when the device was discovered.</p>
     */
    inline const Aws::Utils::DateTime& GetDiscoveredAt() const { return m_discoveredAt; }
    inline bool DiscoveredAtHasBeenSet() const { return m_discoveredAtHasBeenSet; }
    template<typename DiscoveredAtT = Aws::Utils::DateTime>
    void SetDiscoveredAt(DiscoveredAtT&& value) { m_discoveredAtHasBeenSet = true; m_discoveredAt = std::forward<DiscoveredAtT>(value); }
    template<typename DiscoveredAtT = Aws::Utils::DateTime>
    DiscoveredDeviceSummary& WithDiscoveredAt(DiscoveredAtT&& value) { SetDiscoveredAt(std::forward<DiscoveredAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The brand of the discovered device.</p>
     */
    inline const Aws::String& GetBrand() const { return m_brand; }
    inline bool BrandHasBeenSet() const { return m_brandHasBeenSet; }
    template<typename BrandT = Aws::String>
    void SetBrand(BrandT&& value) { m_brandHasBeenSet = true; m_brand = std::forward<BrandT>(value); }
    template<typename BrandT = Aws::String>
    DiscoveredDeviceSummary& WithBrand(BrandT&& value) { SetBrand(std::forward<BrandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model of the discovered device.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    DiscoveredDeviceSummary& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication material required for connecting to the discovered device,
     * such as credentials or tokens.</p>
     */
    inline const Aws::String& GetAuthenticationMaterial() const { return m_authenticationMaterial; }
    inline bool AuthenticationMaterialHasBeenSet() const { return m_authenticationMaterialHasBeenSet; }
    template<typename AuthenticationMaterialT = Aws::String>
    void SetAuthenticationMaterial(AuthenticationMaterialT&& value) { m_authenticationMaterialHasBeenSet = true; m_authenticationMaterial = std::forward<AuthenticationMaterialT>(value); }
    template<typename AuthenticationMaterialT = Aws::String>
    DiscoveredDeviceSummary& WithAuthenticationMaterial(AuthenticationMaterialT&& value) { SetAuthenticationMaterial(std::forward<AuthenticationMaterialT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorDeviceId;
    bool m_connectorDeviceIdHasBeenSet = false;

    Aws::String m_connectorDeviceName;
    bool m_connectorDeviceNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceTypes;
    bool m_deviceTypesHasBeenSet = false;

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;

    DiscoveryModification m_modification{DiscoveryModification::NOT_SET};
    bool m_modificationHasBeenSet = false;

    Aws::Utils::DateTime m_discoveredAt{};
    bool m_discoveredAtHasBeenSet = false;

    Aws::String m_brand;
    bool m_brandHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_authenticationMaterial;
    bool m_authenticationMaterialHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
