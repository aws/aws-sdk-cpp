/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>The connectivity status of the thing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingConnectivity">AWS
 * API Reference</a></p>
 */
class ThingConnectivity {
 public:
  AWS_IOT_API ThingConnectivity() = default;
  AWS_IOT_API ThingConnectivity(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API ThingConnectivity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>True if the thing is connected to the Amazon Web Services IoT Core service;
   * false if it is not connected.</p>
   */
  inline bool GetConnected() const { return m_connected; }
  inline bool ConnectedHasBeenSet() const { return m_connectedHasBeenSet; }
  inline void SetConnected(bool value) {
    m_connectedHasBeenSet = true;
    m_connected = value;
  }
  inline ThingConnectivity& WithConnected(bool value) {
    SetConnected(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The epoch time (in milliseconds) when the thing last connected or
   * disconnected.</p>
   */
  inline long long GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  inline void SetTimestamp(long long value) {
    m_timestampHasBeenSet = true;
    m_timestamp = value;
  }
  inline ThingConnectivity& WithTimestamp(long long value) {
    SetTimestamp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the client is disconnected.</p>
   */
  inline const Aws::String& GetDisconnectReason() const { return m_disconnectReason; }
  inline bool DisconnectReasonHasBeenSet() const { return m_disconnectReasonHasBeenSet; }
  template <typename DisconnectReasonT = Aws::String>
  void SetDisconnectReason(DisconnectReasonT&& value) {
    m_disconnectReasonHasBeenSet = true;
    m_disconnectReason = std::forward<DisconnectReasonT>(value);
  }
  template <typename DisconnectReasonT = Aws::String>
  ThingConnectivity& WithDisconnectReason(DisconnectReasonT&& value) {
    SetDisconnectReason(std::forward<DisconnectReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The keep-alive interval in seconds that the client specified when
   * establishing the connection.</p>
   */
  inline int GetKeepAliveDuration() const { return m_keepAliveDuration; }
  inline bool KeepAliveDurationHasBeenSet() const { return m_keepAliveDurationHasBeenSet; }
  inline void SetKeepAliveDuration(int value) {
    m_keepAliveDurationHasBeenSet = true;
    m_keepAliveDuration = value;
  }
  inline ThingConnectivity& WithKeepAliveDuration(int value) {
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
  inline bool CleanSessionHasBeenSet() const { return m_cleanSessionHasBeenSet; }
  inline void SetCleanSession(bool value) {
    m_cleanSessionHasBeenSet = true;
    m_cleanSession = value;
  }
  inline ThingConnectivity& WithCleanSession(bool value) {
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
  inline bool SessionExpiryHasBeenSet() const { return m_sessionExpiryHasBeenSet; }
  inline void SetSessionExpiry(long long value) {
    m_sessionExpiryHasBeenSet = true;
    m_sessionExpiry = value;
  }
  inline ThingConnectivity& WithSessionExpiry(long long value) {
    SetSessionExpiry(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the MQTT client.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  ThingConnectivity& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_connected{false};

  long long m_timestamp{0};

  Aws::String m_disconnectReason;

  int m_keepAliveDuration{0};

  bool m_cleanSession{false};

  long long m_sessionExpiry{0};

  Aws::String m_clientId;
  bool m_connectedHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_disconnectReasonHasBeenSet = false;
  bool m_keepAliveDurationHasBeenSet = false;
  bool m_cleanSessionHasBeenSet = false;
  bool m_sessionExpiryHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
