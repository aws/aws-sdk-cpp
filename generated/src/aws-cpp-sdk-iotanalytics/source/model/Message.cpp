/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/Message.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

Message::Message() : 
    m_messageIdHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

Message::Message(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

Message& Message::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageId"))
  {
    m_messageId = jsonValue.GetString("messageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = HashingUtils::Base64Decode(jsonValue.GetString("payload"));
    m_payloadHasBeenSet = true;
  }

  return *this;
}

JsonValue Message::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("messageId", m_messageId);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithString("payload", HashingUtils::Base64Encode(m_payload));
  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
