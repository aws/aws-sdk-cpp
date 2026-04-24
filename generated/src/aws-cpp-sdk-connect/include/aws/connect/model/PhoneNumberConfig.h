/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/PhoneType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Configuration settings for phone type and phone number.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PhoneNumberConfig">AWS
 * API Reference</a></p>
 */
class PhoneNumberConfig {
 public:
  AWS_CONNECT_API PhoneNumberConfig() = default;
  AWS_CONNECT_API PhoneNumberConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PhoneNumberConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The channel for this phone number configuration. <b>Only <code>VOICE</code>
   * is supported for this data type.</b> </p>
   */
  inline Channel GetChannel() const { return m_channel; }
  inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
  inline void SetChannel(Channel value) {
    m_channelHasBeenSet = true;
    m_channel = value;
  }
  inline PhoneNumberConfig& WithChannel(Channel value) {
    SetChannel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The phone type. Valid values: SOFT_PHONE, DESK_PHONE.</p>
   */
  inline PhoneType GetPhoneType() const { return m_phoneType; }
  inline bool PhoneTypeHasBeenSet() const { return m_phoneTypeHasBeenSet; }
  inline void SetPhoneType(PhoneType value) {
    m_phoneTypeHasBeenSet = true;
    m_phoneType = value;
  }
  inline PhoneNumberConfig& WithPhoneType(PhoneType value) {
    SetPhoneType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The phone number for the user's desk phone.</p>
   */
  inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
  inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
  template <typename PhoneNumberT = Aws::String>
  void SetPhoneNumber(PhoneNumberT&& value) {
    m_phoneNumberHasBeenSet = true;
    m_phoneNumber = std::forward<PhoneNumberT>(value);
  }
  template <typename PhoneNumberT = Aws::String>
  PhoneNumberConfig& WithPhoneNumber(PhoneNumberT&& value) {
    SetPhoneNumber(std::forward<PhoneNumberT>(value));
    return *this;
  }
  ///@}
 private:
  Channel m_channel{Channel::NOT_SET};

  PhoneType m_phoneType{PhoneType::NOT_SET};

  Aws::String m_phoneNumber;
  bool m_channelHasBeenSet = false;
  bool m_phoneTypeHasBeenSet = false;
  bool m_phoneNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
