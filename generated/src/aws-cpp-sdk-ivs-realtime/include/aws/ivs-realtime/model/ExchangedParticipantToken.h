/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/ParticipantTokenCapability.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ivsrealtime {
namespace Model {

/**
 * <p>Object specifying an exchanged participant token in a stage, created when an
 * original participant token is updated.</p> <p> <b>Important</b>: Treat tokens as
 * opaque; i.e., do not build functionality based on token contents. The format of
 * tokens could change in the future.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ExchangedParticipantToken">AWS
 * API Reference</a></p>
 */
class ExchangedParticipantToken {
 public:
  AWS_IVSREALTIME_API ExchangedParticipantToken() = default;
  AWS_IVSREALTIME_API ExchangedParticipantToken(Aws::Utils::Json::JsonView jsonValue);
  AWS_IVSREALTIME_API ExchangedParticipantToken& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Set of capabilities that the user is allowed to perform in the stage.</p>
   */
  inline const Aws::Vector<ParticipantTokenCapability>& GetCapabilities() const { return m_capabilities; }
  inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
  template <typename CapabilitiesT = Aws::Vector<ParticipantTokenCapability>>
  void SetCapabilities(CapabilitiesT&& value) {
    m_capabilitiesHasBeenSet = true;
    m_capabilities = std::forward<CapabilitiesT>(value);
  }
  template <typename CapabilitiesT = Aws::Vector<ParticipantTokenCapability>>
  ExchangedParticipantToken& WithCapabilities(CapabilitiesT&& value) {
    SetCapabilities(std::forward<CapabilitiesT>(value));
    return *this;
  }
  inline ExchangedParticipantToken& AddCapabilities(ParticipantTokenCapability value) {
    m_capabilitiesHasBeenSet = true;
    m_capabilities.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Application-provided attributes to encode into the token and attach to a
   * stage. Map keys and values can contain UTF-8 encoded text. The maximum length of
   * this field is 1 KB total. <i>This field is exposed to all stage participants and
   * should not be used for personally identifying, confidential, or sensitive
   * information.</i> </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  ExchangedParticipantToken& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
  ExchangedParticipantToken& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer-assigned name to help identify the token; this can be used to link a
   * participant to a user in the customer’s own systems. This can be any UTF-8
   * encoded text. <i>This field is exposed to all stage participants and should not
   * be used for personally identifying, confidential, or sensitive information.</i>
   * </p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  ExchangedParticipantToken& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ISO 8601 timestamp (returned as a string) for when this token expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  ExchangedParticipantToken& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ParticipantTokenCapability> m_capabilities;

  Aws::Map<Aws::String, Aws::String> m_attributes;

  Aws::String m_userId;

  Aws::Utils::DateTime m_expirationTime{};
  bool m_capabilitiesHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ivsrealtime
}  // namespace Aws
