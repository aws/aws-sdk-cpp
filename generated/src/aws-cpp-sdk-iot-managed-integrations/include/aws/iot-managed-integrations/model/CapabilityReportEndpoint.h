/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/CapabilityReportCapability.h>
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
   * <p>The endpoint used in the capability report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CapabilityReportEndpoint">AWS
   * API Reference</a></p>
   */
  class CapabilityReportEndpoint
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReportEndpoint() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReportEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReportEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the endpoint used in the capability report.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CapabilityReportEndpoint& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceTypes() const { return m_deviceTypes; }
    inline bool DeviceTypesHasBeenSet() const { return m_deviceTypesHasBeenSet; }
    template<typename DeviceTypesT = Aws::Vector<Aws::String>>
    void SetDeviceTypes(DeviceTypesT&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = std::forward<DeviceTypesT>(value); }
    template<typename DeviceTypesT = Aws::Vector<Aws::String>>
    CapabilityReportEndpoint& WithDeviceTypes(DeviceTypesT&& value) { SetDeviceTypes(std::forward<DeviceTypesT>(value)); return *this;}
    template<typename DeviceTypesT = Aws::String>
    CapabilityReportEndpoint& AddDeviceTypes(DeviceTypesT&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.emplace_back(std::forward<DeviceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capabilities used in the capability report.</p>
     */
    inline const Aws::Vector<CapabilityReportCapability>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<CapabilityReportCapability>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<CapabilityReportCapability>>
    CapabilityReportEndpoint& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    template<typename CapabilitiesT = CapabilityReportCapability>
    CapabilityReportEndpoint& AddCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.emplace_back(std::forward<CapabilitiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceTypes;
    bool m_deviceTypesHasBeenSet = false;

    Aws::Vector<CapabilityReportCapability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
