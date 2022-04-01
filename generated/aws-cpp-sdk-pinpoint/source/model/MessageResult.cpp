/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/MessageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

MessageResult::MessageResult() : 
    m_deliveryStatus(DeliveryStatus::NOT_SET),
    m_deliveryStatusHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_statusCode(0),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_updatedTokenHasBeenSet(false)
{
}

MessageResult::MessageResult(JsonView jsonValue) : 
    m_deliveryStatus(DeliveryStatus::NOT_SET),
    m_deliveryStatusHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_statusCode(0),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_updatedTokenHasBeenSet(false)
{
  *this = jsonValue;
}

MessageResult& MessageResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveryStatus"))
  {
    m_deliveryStatus = DeliveryStatusMapper::GetDeliveryStatusForName(jsonValue.GetString("DeliveryStatus"));

    m_deliveryStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = jsonValue.GetInteger("StatusCode");

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedToken"))
  {
    m_updatedToken = jsonValue.GetString("UpdatedToken");

    m_updatedTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageResult::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryStatusHasBeenSet)
  {
   payload.WithString("DeliveryStatus", DeliveryStatusMapper::GetNameForDeliveryStatus(m_deliveryStatus));
  }

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithInteger("StatusCode", m_statusCode);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_updatedTokenHasBeenSet)
  {
   payload.WithString("UpdatedToken", m_updatedToken);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
