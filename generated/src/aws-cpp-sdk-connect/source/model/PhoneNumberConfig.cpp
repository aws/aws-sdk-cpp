/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PhoneNumberConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

PhoneNumberConfig::PhoneNumberConfig(JsonView jsonValue) { *this = jsonValue; }

PhoneNumberConfig& PhoneNumberConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Channel")) {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));
    m_channelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PhoneType")) {
    m_phoneType = PhoneTypeMapper::GetPhoneTypeForName(jsonValue.GetString("PhoneType"));
    m_phoneTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PhoneNumber")) {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");
    m_phoneNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue PhoneNumberConfig::Jsonize() const {
  JsonValue payload;

  if (m_channelHasBeenSet) {
    payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  if (m_phoneTypeHasBeenSet) {
    payload.WithString("PhoneType", PhoneTypeMapper::GetNameForPhoneType(m_phoneType));
  }

  if (m_phoneNumberHasBeenSet) {
    payload.WithString("PhoneNumber", m_phoneNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
