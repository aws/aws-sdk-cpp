/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/DisconnectReasonValue.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {
class GetThingConnectivityDataResult {
 public:
  AWS_IOT_API GetThingConnectivityDataResult() = default;
  AWS_IOT_API GetThingConnectivityDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOT_API GetThingConnectivityDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of your IoT thing.</p>
   */
  inline const Aws::String& GetThingName() const { return m_thingName; }
  template <typename ThingNameT = Aws::String>
  void SetThingName(ThingNameT&& value) {
    m_thingNameHasBeenSet = true;
    m_thingName = std::forward<ThingNameT>(value);
  }
  template <typename ThingNameT = Aws::String>
  GetThingConnectivityDataResult& WithThingName(ThingNameT&& value) {
    SetThingName(std::forward<ThingNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean that indicates the connectivity status.</p>
   */
  inline bool GetConnected() const { return m_connected; }
  inline void SetConnected(bool value) {
    m_connectedHasBeenSet = true;
    m_connected = value;
  }
  inline GetThingConnectivityDataResult& WithConnected(bool value) {
    SetConnected(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the event occurred. When you enable or update the
   * indexing configuration, this value might be the Unix epoch time (0) for devices
   * that have never connected or have been disconnected for more than an hour.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  GetThingConnectivityDataResult& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why the client is disconnecting. When you enable or update the
   * indexing configuration, this value might be <code>UNKNOWN</code> for devices
   * that have never connected or have been disconnected for more than an hour.</p>
   */
  inline DisconnectReasonValue GetDisconnectReason() const { return m_disconnectReason; }
  inline void SetDisconnectReason(DisconnectReasonValue value) {
    m_disconnectReasonHasBeenSet = true;
    m_disconnectReason = value;
  }
  inline GetThingConnectivityDataResult& WithDisconnectReason(DisconnectReasonValue value) {
    SetDisconnectReason(value);
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
  GetThingConnectivityDataResult& WithSourceIp(SourceIpT&& value) {
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
  inline GetThingConnectivityDataResult& WithSourcePort(int value) {
    SetSourcePort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address of the Amazon Web Services IoT Core endpoint that the client
   * connected to.</p>
   */
  inline const Aws::String& GetTargetIp() const { return m_targetIp; }
  template <typename TargetIpT = Aws::String>
  void SetTargetIp(TargetIpT&& value) {
    m_targetIpHasBeenSet = true;
    m_targetIp = std::forward<TargetIpT>(value);
  }
  template <typename TargetIpT = Aws::String>
  GetThingConnectivityDataResult& WithTargetIp(TargetIpT&& value) {
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
  inline GetThingConnectivityDataResult& WithTargetPort(int value) {
    SetTargetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC endpoint. Present for clients connected to Amazon Web
   * Services IoT Core via a VPC endpoint.</p>
   */
  inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
  template <typename VpcEndpointIdT = Aws::String>
  void SetVpcEndpointId(VpcEndpointIdT&& value) {
    m_vpcEndpointIdHasBeenSet = true;
    m_vpcEndpointId = std::forward<VpcEndpointIdT>(value);
  }
  template <typename VpcEndpointIdT = Aws::String>
  GetThingConnectivityDataResult& WithVpcEndpointId(VpcEndpointIdT&& value) {
    SetVpcEndpointId(std::forward<VpcEndpointIdT>(value));
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
  inline GetThingConnectivityDataResult& WithKeepAliveDuration(int value) {
    SetKeepAliveDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the client is using a clean session. Returns
   * <code>true</code> for clean sessions.</p>
   */
  inline bool GetCleanSession() const { return m_cleanSession; }
  inline void SetCleanSession(bool value) {
    m_cleanSessionHasBeenSet = true;
    m_cleanSession = value;
  }
  inline GetThingConnectivityDataResult& WithCleanSession(bool value) {
    SetCleanSession(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session expiry interval in seconds for the MQTT client connection. This
   * value indicates how long the session will remain active after the client
   * disconnects.</p>
   */
  inline long long GetSessionExpiry() const { return m_sessionExpiry; }
  inline void SetSessionExpiry(long long value) {
    m_sessionExpiryHasBeenSet = true;
    m_sessionExpiry = value;
  }
  inline GetThingConnectivityDataResult& WithSessionExpiry(long long value) {
    SetSessionExpiry(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the MQTT client.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  GetThingConnectivityDataResult& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
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
  GetThingConnectivityDataResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_thingName;

  bool m_connected{false};

  Aws::Utils::DateTime m_timestamp{};

  DisconnectReasonValue m_disconnectReason{DisconnectReasonValue::NOT_SET};

  Aws::String m_sourceIp;

  int m_sourcePort{0};

  Aws::String m_targetIp;

  int m_targetPort{0};

  Aws::String m_vpcEndpointId;

  int m_keepAliveDuration{0};

  bool m_cleanSession{false};

  long long m_sessionExpiry{0};

  Aws::String m_clientId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_thingNameHasBeenSet = false;
  bool m_connectedHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_disconnectReasonHasBeenSet = false;
  bool m_sourceIpHasBeenSet = false;
  bool m_sourcePortHasBeenSet = false;
  bool m_targetIpHasBeenSet = false;
  bool m_targetPortHasBeenSet = false;
  bool m_vpcEndpointIdHasBeenSet = false;
  bool m_keepAliveDurationHasBeenSet = false;
  bool m_cleanSessionHasBeenSet = false;
  bool m_sessionExpiryHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
