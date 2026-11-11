/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/SessionLocationType.h>
#include <aws/cognito-idp/model/SessionTypeType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>Describes an active user session. Amazon Cognito returns this type in the
 * responses of <code>ListUserSessions</code> and
 * <code>AdminListUserSessions</code>, for both token sessions and SSO
 * sessions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SessionDescriptionType">AWS
 * API Reference</a></p>
 */
class SessionDescriptionType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API SessionDescriptionType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API SessionDescriptionType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API SessionDescriptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the session. This is a 28-character string of
   * lowercase letters and digits, prefixed with <code>tkn</code> for a token session
   * or <code>sso</code> for an SSO session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  SessionDescriptionType& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the session. Valid values are <code>TOKEN</code> and
   * <code>SSO</code>.</p>
   */
  inline SessionTypeType GetSessionType() const { return m_sessionType; }
  inline bool SessionTypeHasBeenSet() const { return m_sessionTypeHasBeenSet; }
  inline void SetSessionType(SessionTypeType value) {
    m_sessionTypeHasBeenSet = true;
    m_sessionType = value;
  }
  inline SessionDescriptionType& WithSessionType(SessionTypeType value) {
    SetSessionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the app client that the session belongs to.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  SessionDescriptionType& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the session was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
  inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
  template <typename CreateDateT = Aws::Utils::DateTime>
  void SetCreateDate(CreateDateT&& value) {
    m_createDateHasBeenSet = true;
    m_createDate = std::forward<CreateDateT>(value);
  }
  template <typename CreateDateT = Aws::Utils::DateTime>
  SessionDescriptionType& WithCreateDate(CreateDateT&& value) {
    SetCreateDate(std::forward<CreateDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the most recent activity on the session. For a token
   * session, this is the most recent token refresh or rotation; a new authentication
   * creates a new token session rather than updating an existing one. For an SSO
   * session, this is the most recent authentication, token grant, or token
   * rotation.</p>
   */
  inline const Aws::Utils::DateTime& GetLastActiveDate() const { return m_lastActiveDate; }
  inline bool LastActiveDateHasBeenSet() const { return m_lastActiveDateHasBeenSet; }
  template <typename LastActiveDateT = Aws::Utils::DateTime>
  void SetLastActiveDate(LastActiveDateT&& value) {
    m_lastActiveDateHasBeenSet = true;
    m_lastActiveDate = std::forward<LastActiveDateT>(value);
  }
  template <typename LastActiveDateT = Aws::Utils::DateTime>
  SessionDescriptionType& WithLastActiveDate(LastActiveDateT&& value) {
    SetLastActiveDate(std::forward<LastActiveDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the device associated with the most recent activity on the
   * session, derived from the parsed user agent (operating system and browser or
   * app). Amazon Cognito overwrites this value on each sign-in, refresh, and
   * rotation. The value can be <code>unknown</code>. The maximum length is 1,024
   * characters.</p>
   */
  inline const Aws::String& GetDeviceType() const { return m_deviceType; }
  inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
  template <typename DeviceTypeT = Aws::String>
  void SetDeviceType(DeviceTypeT&& value) {
    m_deviceTypeHasBeenSet = true;
    m_deviceType = std::forward<DeviceTypeT>(value);
  }
  template <typename DeviceTypeT = Aws::String>
  SessionDescriptionType& WithDeviceType(DeviceTypeT&& value) {
    SetDeviceType(std::forward<DeviceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address associated with the most recent activity on the session.
   * Amazon Cognito overwrites this value on each refresh and rotation. The maximum
   * length is 128 characters.</p>
   */
  inline const Aws::String& GetLastIPAddress() const { return m_lastIPAddress; }
  inline bool LastIPAddressHasBeenSet() const { return m_lastIPAddressHasBeenSet; }
  template <typename LastIPAddressT = Aws::String>
  void SetLastIPAddress(LastIPAddressT&& value) {
    m_lastIPAddressHasBeenSet = true;
    m_lastIPAddress = std::forward<LastIPAddressT>(value);
  }
  template <typename LastIPAddressT = Aws::String>
  SessionDescriptionType& WithLastIPAddress(LastIPAddressT&& value) {
    SetLastIPAddress(std::forward<LastIPAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The geographic location of the most recent activity on the session, derived
   * from the IP address.</p>
   */
  inline const SessionLocationType& GetLastLocation() const { return m_lastLocation; }
  inline bool LastLocationHasBeenSet() const { return m_lastLocationHasBeenSet; }
  template <typename LastLocationT = SessionLocationType>
  void SetLastLocation(LastLocationT&& value) {
    m_lastLocationHasBeenSet = true;
    m_lastLocation = std::forward<LastLocationT>(value);
  }
  template <typename LastLocationT = SessionLocationType>
  SessionDescriptionType& WithLastLocation(LastLocationT&& value) {
    SetLastLocation(std::forward<LastLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For a token session, the ID of the SSO session that the token session
   * originated from. This value is null for sessions that were initiated through the
   * API and didn't come through an SSO session. Amazon Cognito returns this value
   * for token sessions only.</p>
   */
  inline const Aws::String& GetOriginSessionId() const { return m_originSessionId; }
  inline bool OriginSessionIdHasBeenSet() const { return m_originSessionIdHasBeenSet; }
  template <typename OriginSessionIdT = Aws::String>
  void SetOriginSessionId(OriginSessionIdT&& value) {
    m_originSessionIdHasBeenSet = true;
    m_originSessionId = std::forward<OriginSessionIdT>(value);
  }
  template <typename OriginSessionIdT = Aws::String>
  SessionDescriptionType& WithOriginSessionId(OriginSessionIdT&& value) {
    SetOriginSessionId(std::forward<OriginSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this session matches the access token supplied in the
   * request. This value is always <code>false</code> for the
   * <code>AdminListUserSessions</code> operation, which doesn't take an access
   * token.</p>
   */
  inline bool GetIsCurrentSession() const { return m_isCurrentSession; }
  inline bool IsCurrentSessionHasBeenSet() const { return m_isCurrentSessionHasBeenSet; }
  inline void SetIsCurrentSession(bool value) {
    m_isCurrentSessionHasBeenSet = true;
    m_isCurrentSession = value;
  }
  inline SessionDescriptionType& WithIsCurrentSession(bool value) {
    SetIsCurrentSession(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  SessionTypeType m_sessionType{SessionTypeType::NOT_SET};

  Aws::String m_clientId;

  Aws::Utils::DateTime m_createDate{};

  Aws::Utils::DateTime m_lastActiveDate{};

  Aws::String m_deviceType;

  Aws::String m_lastIPAddress;

  SessionLocationType m_lastLocation;

  Aws::String m_originSessionId;

  bool m_isCurrentSession{false};
  bool m_sessionIdHasBeenSet = false;
  bool m_sessionTypeHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_createDateHasBeenSet = false;
  bool m_lastActiveDateHasBeenSet = false;
  bool m_deviceTypeHasBeenSet = false;
  bool m_lastIPAddressHasBeenSet = false;
  bool m_lastLocationHasBeenSet = false;
  bool m_originSessionIdHasBeenSet = false;
  bool m_isCurrentSessionHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
