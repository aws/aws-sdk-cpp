/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/OrderedPhoneNumber.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

OrderedPhoneNumber::OrderedPhoneNumber() : 
    m_e164PhoneNumberHasBeenSet(false),
    m_status(OrderedPhoneNumberStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

OrderedPhoneNumber::OrderedPhoneNumber(JsonView jsonValue) : 
    m_e164PhoneNumberHasBeenSet(false),
    m_status(OrderedPhoneNumberStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

OrderedPhoneNumber& OrderedPhoneNumber::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("E164PhoneNumber"))
  {
    m_e164PhoneNumber = jsonValue.GetString("E164PhoneNumber");

    m_e164PhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OrderedPhoneNumberStatusMapper::GetOrderedPhoneNumberStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue OrderedPhoneNumber::Jsonize() const
{
  JsonValue payload;

  if(m_e164PhoneNumberHasBeenSet)
  {
   payload.WithString("E164PhoneNumber", m_e164PhoneNumber);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OrderedPhoneNumberStatusMapper::GetNameForOrderedPhoneNumberStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
