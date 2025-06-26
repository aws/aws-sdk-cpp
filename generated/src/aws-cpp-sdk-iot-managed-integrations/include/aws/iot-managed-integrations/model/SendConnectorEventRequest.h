/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/ConnectorEventOperation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/MatterEndpoint.h>
#include <aws/iot-managed-integrations/model/Device.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class SendConnectorEventRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API SendConnectorEventRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendConnectorEvent"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The id of the connector between the third-party cloud provider and IoT
     * managed integrations.</p>
     */
    inline const Aws::String& GetConnectorId() const { return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    template<typename ConnectorIdT = Aws::String>
    void SetConnectorId(ConnectorIdT&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::forward<ConnectorIdT>(value); }
    template<typename ConnectorIdT = Aws::String>
    SendConnectorEventRequest& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the third-party cloud provider.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    SendConnectorEventRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Open Connectivity Foundation (OCF) operation requested to be performed on
     * the managed thing.</p>  <p>The field op can have a value of "I" or "U".
     * The field "cn" will contain the capability types.</p> 
     */
    inline ConnectorEventOperation GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(ConnectorEventOperation value) { m_operationHasBeenSet = true; m_operation = value; }
    inline SendConnectorEventRequest& WithOperation(ConnectorEventOperation value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Open Connectivity Foundation (OCF) security specification version for the
     * operation being requested on the managed thing. For more information, see <a
     * href="https://openconnectivity.org/specs/OCF_Security_Specification_v1.0.0.pdf">OCF
     * Security Specification</a>.</p>
     */
    inline const Aws::String& GetOperationVersion() const { return m_operationVersion; }
    inline bool OperationVersionHasBeenSet() const { return m_operationVersionHasBeenSet; }
    template<typename OperationVersionT = Aws::String>
    void SetOperationVersion(OperationVersionT&& value) { m_operationVersionHasBeenSet = true; m_operationVersion = std::forward<OperationVersionT>(value); }
    template<typename OperationVersionT = Aws::String>
    SendConnectorEventRequest& WithOperationVersion(OperationVersionT&& value) { SetOperationVersion(std::forward<OperationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code of the Open Connectivity Foundation (OCF) operation being
     * performed on the managed thing.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline SendConnectorEventRequest& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device state change event payload.</p> <p>This parameter will include the
     * following three fields:</p> <ul> <li> <p> <code>uri</code>: <code>schema
     * auc://&lt;PARTNER-DEVICE-ID&gt;/ResourcePath</code> (The
     * <code>Resourcepath</code> corresponds to an OCF resource.)</p> </li> <li> <p>
     * <code>op</code>: For device state changes, this field must populate as
     * <code>n+d</code>.</p> </li> <li> <p> <code>cn</code>: The content depends on the
     * OCF resource referenced in <code>ResourcePath</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    SendConnectorEventRequest& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id for the device discovery job.</p>
     */
    inline const Aws::String& GetDeviceDiscoveryId() const { return m_deviceDiscoveryId; }
    inline bool DeviceDiscoveryIdHasBeenSet() const { return m_deviceDiscoveryIdHasBeenSet; }
    template<typename DeviceDiscoveryIdT = Aws::String>
    void SetDeviceDiscoveryId(DeviceDiscoveryIdT&& value) { m_deviceDiscoveryIdHasBeenSet = true; m_deviceDiscoveryId = std::forward<DeviceDiscoveryIdT>(value); }
    template<typename DeviceDiscoveryIdT = Aws::String>
    SendConnectorEventRequest& WithDeviceDiscoveryId(DeviceDiscoveryIdT&& value) { SetDeviceDiscoveryId(std::forward<DeviceDiscoveryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third-party device id as defined by the connector. This device id must
     * not contain personal identifiable information (PII).</p>  <p>This
     * parameter is used for cloud-to-cloud devices only.</p> 
     */
    inline const Aws::String& GetConnectorDeviceId() const { return m_connectorDeviceId; }
    inline bool ConnectorDeviceIdHasBeenSet() const { return m_connectorDeviceIdHasBeenSet; }
    template<typename ConnectorDeviceIdT = Aws::String>
    void SetConnectorDeviceId(ConnectorDeviceIdT&& value) { m_connectorDeviceIdHasBeenSet = true; m_connectorDeviceId = std::forward<ConnectorDeviceIdT>(value); }
    template<typename ConnectorDeviceIdT = Aws::String>
    SendConnectorEventRequest& WithConnectorDeviceId(ConnectorDeviceIdT&& value) { SetConnectorDeviceId(std::forward<ConnectorDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace request identifier used to correlate a command request and
     * response. This is specified by the device owner, but will be generated by IoT
     * managed integrations if not provided by the device owner.</p>
     */
    inline const Aws::String& GetTraceId() const { return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    template<typename TraceIdT = Aws::String>
    void SetTraceId(TraceIdT&& value) { m_traceIdHasBeenSet = true; m_traceId = std::forward<TraceIdT>(value); }
    template<typename TraceIdT = Aws::String>
    SendConnectorEventRequest& WithTraceId(TraceIdT&& value) { SetTraceId(std::forward<TraceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of devices.</p>
     */
    inline const Aws::Vector<Device>& GetDevices() const { return m_devices; }
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }
    template<typename DevicesT = Aws::Vector<Device>>
    void SetDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices = std::forward<DevicesT>(value); }
    template<typename DevicesT = Aws::Vector<Device>>
    SendConnectorEventRequest& WithDevices(DevicesT&& value) { SetDevices(std::forward<DevicesT>(value)); return *this;}
    template<typename DevicesT = Device>
    SendConnectorEventRequest& AddDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices.emplace_back(std::forward<DevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The device endpoint.</p>
     */
    inline const MatterEndpoint& GetMatterEndpoint() const { return m_matterEndpoint; }
    inline bool MatterEndpointHasBeenSet() const { return m_matterEndpointHasBeenSet; }
    template<typename MatterEndpointT = MatterEndpoint>
    void SetMatterEndpoint(MatterEndpointT&& value) { m_matterEndpointHasBeenSet = true; m_matterEndpoint = std::forward<MatterEndpointT>(value); }
    template<typename MatterEndpointT = MatterEndpoint>
    SendConnectorEventRequest& WithMatterEndpoint(MatterEndpointT&& value) { SetMatterEndpoint(std::forward<MatterEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    ConnectorEventOperation m_operation{ConnectorEventOperation::NOT_SET};
    bool m_operationHasBeenSet = false;

    Aws::String m_operationVersion;
    bool m_operationVersionHasBeenSet = false;

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_deviceDiscoveryId;
    bool m_deviceDiscoveryIdHasBeenSet = false;

    Aws::String m_connectorDeviceId;
    bool m_connectorDeviceIdHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    Aws::Vector<Device> m_devices;
    bool m_devicesHasBeenSet = false;

    MatterEndpoint m_matterEndpoint;
    bool m_matterEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
