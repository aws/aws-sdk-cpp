/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/MatterCapabilityReport.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Document.h>
#include <aws/iot-managed-integrations/model/CapabilitySchemaItem.h>
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
   * <p>Describe the device using the relevant metadata and supported clusters for
   * device discovery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/Device">AWS
   * API Reference</a></p>
   */
  class Device
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API Device() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device id as defined by the connector.</p>  <p>This parameter is
     * used for cloud-to-cloud devices only.</p> 
     */
    inline const Aws::String& GetConnectorDeviceId() const { return m_connectorDeviceId; }
    inline bool ConnectorDeviceIdHasBeenSet() const { return m_connectorDeviceIdHasBeenSet; }
    template<typename ConnectorDeviceIdT = Aws::String>
    void SetConnectorDeviceId(ConnectorDeviceIdT&& value) { m_connectorDeviceIdHasBeenSet = true; m_connectorDeviceId = std::forward<ConnectorDeviceIdT>(value); }
    template<typename ConnectorDeviceIdT = Aws::String>
    Device& WithConnectorDeviceId(ConnectorDeviceIdT&& value) { SetConnectorDeviceId(std::forward<ConnectorDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device as defined by the connector.</p>
     */
    inline const Aws::String& GetConnectorDeviceName() const { return m_connectorDeviceName; }
    inline bool ConnectorDeviceNameHasBeenSet() const { return m_connectorDeviceNameHasBeenSet; }
    template<typename ConnectorDeviceNameT = Aws::String>
    void SetConnectorDeviceName(ConnectorDeviceNameT&& value) { m_connectorDeviceNameHasBeenSet = true; m_connectorDeviceName = std::forward<ConnectorDeviceNameT>(value); }
    template<typename ConnectorDeviceNameT = Aws::String>
    Device& WithConnectorDeviceName(ConnectorDeviceNameT&& value) { SetConnectorDeviceName(std::forward<ConnectorDeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capability report for the device.</p>
     */
    inline const MatterCapabilityReport& GetCapabilityReport() const { return m_capabilityReport; }
    inline bool CapabilityReportHasBeenSet() const { return m_capabilityReportHasBeenSet; }
    template<typename CapabilityReportT = MatterCapabilityReport>
    void SetCapabilityReport(CapabilityReportT&& value) { m_capabilityReportHasBeenSet = true; m_capabilityReport = std::forward<CapabilityReportT>(value); }
    template<typename CapabilityReportT = MatterCapabilityReport>
    Device& WithCapabilityReport(CapabilityReportT&& value) { SetCapabilityReport(std::forward<CapabilityReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Report of all capabilities supported by the device.</p>
     */
    inline const Aws::Vector<CapabilitySchemaItem>& GetCapabilitySchemas() const { return m_capabilitySchemas; }
    inline bool CapabilitySchemasHasBeenSet() const { return m_capabilitySchemasHasBeenSet; }
    template<typename CapabilitySchemasT = Aws::Vector<CapabilitySchemaItem>>
    void SetCapabilitySchemas(CapabilitySchemasT&& value) { m_capabilitySchemasHasBeenSet = true; m_capabilitySchemas = std::forward<CapabilitySchemasT>(value); }
    template<typename CapabilitySchemasT = Aws::Vector<CapabilitySchemaItem>>
    Device& WithCapabilitySchemas(CapabilitySchemasT&& value) { SetCapabilitySchemas(std::forward<CapabilitySchemasT>(value)); return *this;}
    template<typename CapabilitySchemasT = CapabilitySchemaItem>
    Device& AddCapabilitySchemas(CapabilitySchemasT&& value) { m_capabilitySchemasHasBeenSet = true; m_capabilitySchemas.emplace_back(std::forward<CapabilitySchemasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata attributes for a device.</p>
     */
    inline Aws::Utils::DocumentView GetDeviceMetadata() const { return m_deviceMetadata; }
    inline bool DeviceMetadataHasBeenSet() const { return m_deviceMetadataHasBeenSet; }
    template<typename DeviceMetadataT = Aws::Utils::Document>
    void SetDeviceMetadata(DeviceMetadataT&& value) { m_deviceMetadataHasBeenSet = true; m_deviceMetadata = std::forward<DeviceMetadataT>(value); }
    template<typename DeviceMetadataT = Aws::Utils::Document>
    Device& WithDeviceMetadata(DeviceMetadataT&& value) { SetDeviceMetadata(std::forward<DeviceMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorDeviceId;
    bool m_connectorDeviceIdHasBeenSet = false;

    Aws::String m_connectorDeviceName;
    bool m_connectorDeviceNameHasBeenSet = false;

    MatterCapabilityReport m_capabilityReport;
    bool m_capabilityReportHasBeenSet = false;

    Aws::Vector<CapabilitySchemaItem> m_capabilitySchemas;
    bool m_capabilitySchemasHasBeenSet = false;

    Aws::Utils::Document m_deviceMetadata;
    bool m_deviceMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
