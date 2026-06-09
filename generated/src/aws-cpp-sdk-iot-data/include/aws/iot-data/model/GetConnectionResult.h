/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTDataPlane {
namespace Model {
class GetConnectionResult {
 public:
  AWS_IOTDATAPLANE_API GetConnectionResult() = default;
  AWS_IOTDATAPLANE_API GetConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTDATAPLANE_API GetConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The connection state of the client. Returns <code>true</code> if the client
   * is currently connected, or <code>false</code> if the client is not
   * connected.</p>
   */
  inline bool GetConnected() const { return m_connected; }
  inline void SetConnected(bool value) {
    m_connectedHasBeenSet = true;
    m_connected = value;
  }
  inline GetConnectionResult& WithConnected(bool value) {
    SetConnected(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the thing associated with the principal of the MQTT client, if
   * applicable.</p>
   */
  inline const Aws::String& GetThingName() const { return m_thingName; }
  template <typename ThingNameT = Aws::String>
  void SetThingName(ThingNameT&& value) {
    m_thingNameHasBeenSet = true;
    m_thingName = std::forward<ThingNameT>(value);
  }
  template <typename ThingNameT = Aws::String>
  GetConnectionResult& WithThingName(ThingNameT&& value) {
    SetThingName(std::forward<ThingNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the client is using a clean session. Returns
   * <code>true</code> for clean sessions or <code>false</code> for persistent
   * sessions.</p>
   */
  inline bool GetCleanSession() const { return m_cleanSession; }
  inline void SetCleanSession(bool value) {
    m_cleanSessionHasBeenSet = true;
    m_cleanSession = value;
  }
  inline GetConnectionResult& WithCleanSession(bool value) {
    SetCleanSession(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address of the client that initiated the connection.</p>
   */
  inline const Aws::String& GetSourceIp() const { return m_sourceIp; }
  template <typename SourceIpT = Aws::String>
  void SetSourceIp(SourceIpT&& value) {
    m_sourceIpHasBeenSet = true;
    m_sourceIp = std::forward<SourceIpT>(value);
  }
  template <typename SourceIpT = Aws::String>
  GetConnectionResult& WithSourceIp(SourceIpT&& value) {
    SetSourceIp(std::forward<SourceIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client's source port.</p>
   */
  inline int GetSourcePort() const { return m_sourcePort; }
  inline void SetSourcePort(int value) {
    m_sourcePortHasBeenSet = true;
    m_sourcePort = value;
  }
  inline GetConnectionResult& WithSourcePort(int value) {
    SetSourcePort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address of the Amazon Web Services IoT Core endpoint that the client
   * connected to. For clients connected to VPC endpoints, this is the private IP
   * address of the network interface the client is connected to.</p>
   */
  inline const Aws::String& GetTargetIp() const { return m_targetIp; }
  template <typename TargetIpT = Aws::String>
  void SetTargetIp(TargetIpT&& value) {
    m_targetIpHasBeenSet = true;
    m_targetIp = std::forward<TargetIpT>(value);
  }
  template <typename TargetIpT = Aws::String>
  GetConnectionResult& WithTargetIp(TargetIpT&& value) {
    SetTargetIp(std::forward<TargetIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number of the Amazon Web Services IoT Core endpoint that the client
   * connected to.</p>
   */
  inline int GetTargetPort() const { return m_targetPort; }
  inline void SetTargetPort(int value) {
    m_targetPortHasBeenSet = true;
    m_targetPort = value;
  }
  inline GetConnectionResult& WithTargetPort(int value) {
    SetTargetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The keep-alive interval in seconds that the client specified when
   * establishing the connection.</p>
   */
  inline int GetKeepAliveDuration() const { return m_keepAliveDuration; }
  inline void SetKeepAliveDuration(int value) {
    m_keepAliveDurationHasBeenSet = true;
    m_keepAliveDuration = value;
  }
  inline GetConnectionResult& WithKeepAliveDuration(int value) {
    SetKeepAliveDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unix timestamp (in milliseconds) indicating when the client connected.
   * Present only when connected is true.</p>
   */
  inline long long GetConnectedSince() const { return m_connectedSince; }
  inline void SetConnectedSince(long long value) {
    m_connectedSinceHasBeenSet = true;
    m_connectedSince = value;
  }
  inline GetConnectionResult& WithConnectedSince(long long value) {
    SetConnectedSince(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unix timestamp (in milliseconds) indicating when the client disconnected.
   * Present only when connected is false. This information is available for 30
   * minutes after the client disconnects.</p>
   */
  inline long long GetDisconnectedSince() const { return m_disconnectedSince; }
  inline void SetDisconnectedSince(long long value) {
    m_disconnectedSinceHasBeenSet = true;
    m_disconnectedSince = value;
  }
  inline GetConnectionResult& WithDisconnectedSince(long long value) {
    SetDisconnectedSince(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the last disconnection, if the client is currently
   * disconnected. See the <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/life-cycle-events.html#connect-disconnect">developer
   * guide</a> for valid disconnect reasons.</p>
   */
  inline const Aws::String& GetDisconnectReason() const { return m_disconnectReason; }
  template <typename DisconnectReasonT = Aws::String>
  void SetDisconnectReason(DisconnectReasonT&& value) {
    m_disconnectReasonHasBeenSet = true;
    m_disconnectReason = std::forward<DisconnectReasonT>(value);
  }
  template <typename DisconnectReasonT = Aws::String>
  GetConnectionResult& WithDisconnectReason(DisconnectReasonT&& value) {
    SetDisconnectReason(std::forward<DisconnectReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session expiry interval in seconds for the MQTT client connection. This
   * is configured by the user. This value indicates how long the session will remain
   * active after the client disconnects.</p>
   */
  inline long long GetSessionExpiry() const { return m_sessionExpiry; }
  inline void SetSessionExpiry(long long value) {
    m_sessionExpiryHasBeenSet = true;
    m_sessionExpiry = value;
  }
  inline GetConnectionResult& WithSessionExpiry(long long value) {
    SetSessionExpiry(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the MQTT client. This is the same client ID that was
   * used when the client established the connection.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  GetConnectionResult& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC endpoint. Present for clients connected to IoT Core via a
   * <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/IoTCore-VPC.html">VPC
   * endpoint</a>. </p>
   */
  inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
  template <typename VpcEndpointIdT = Aws::String>
  void SetVpcEndpointId(VpcEndpointIdT&& value) {
    m_vpcEndpointIdHasBeenSet = true;
    m_vpcEndpointId = std::forward<VpcEndpointIdT>(value);
  }
  template <typename VpcEndpointIdT = Aws::String>
  GetConnectionResult& WithVpcEndpointId(VpcEndpointIdT&& value) {
    SetVpcEndpointId(std::forward<VpcEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetConnectionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  bool m_connected{false};

  Aws::String m_thingName;

  bool m_cleanSession{false};

  Aws::String m_sourceIp;

  int m_sourcePort{0};

  Aws::String m_targetIp;

  int m_targetPort{0};

  int m_keepAliveDuration{0};

  long long m_connectedSince{0};

  long long m_disconnectedSince{0};

  Aws::String m_disconnectReason;

  long long m_sessionExpiry{0};

  Aws::String m_clientId;

  Aws::String m_vpcEndpointId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_connectedHasBeenSet = false;
  bool m_thingNameHasBeenSet = false;
  bool m_cleanSessionHasBeenSet = false;
  bool m_sourceIpHasBeenSet = false;
  bool m_sourcePortHasBeenSet = false;
  bool m_targetIpHasBeenSet = false;
  bool m_targetPortHasBeenSet = false;
  bool m_keepAliveDurationHasBeenSet = false;
  bool m_connectedSinceHasBeenSet = false;
  bool m_disconnectedSinceHasBeenSet = false;
  bool m_disconnectReasonHasBeenSet = false;
  bool m_sessionExpiryHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_vpcEndpointIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTDataPlane
}  // namespace Aws
