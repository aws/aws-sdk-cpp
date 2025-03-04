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
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReportEndpoint();
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReportEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API CapabilityReportEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the endpoint used in the capability report.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CapabilityReportEndpoint& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CapabilityReportEndpoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CapabilityReportEndpoint& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceTypes() const{ return m_deviceTypes; }
    inline bool DeviceTypesHasBeenSet() const { return m_deviceTypesHasBeenSet; }
    inline void SetDeviceTypes(const Aws::Vector<Aws::String>& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = value; }
    inline void SetDeviceTypes(Aws::Vector<Aws::String>&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = std::move(value); }
    inline CapabilityReportEndpoint& WithDeviceTypes(const Aws::Vector<Aws::String>& value) { SetDeviceTypes(value); return *this;}
    inline CapabilityReportEndpoint& WithDeviceTypes(Aws::Vector<Aws::String>&& value) { SetDeviceTypes(std::move(value)); return *this;}
    inline CapabilityReportEndpoint& AddDeviceTypes(const Aws::String& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(value); return *this; }
    inline CapabilityReportEndpoint& AddDeviceTypes(Aws::String&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(std::move(value)); return *this; }
    inline CapabilityReportEndpoint& AddDeviceTypes(const char* value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capabilities used in the capability report.</p>
     */
    inline const Aws::Vector<CapabilityReportCapability>& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::Vector<CapabilityReportCapability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<CapabilityReportCapability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline CapabilityReportEndpoint& WithCapabilities(const Aws::Vector<CapabilityReportCapability>& value) { SetCapabilities(value); return *this;}
    inline CapabilityReportEndpoint& WithCapabilities(Aws::Vector<CapabilityReportCapability>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline CapabilityReportEndpoint& AddCapabilities(const CapabilityReportCapability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    inline CapabilityReportEndpoint& AddCapabilities(CapabilityReportCapability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }
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
