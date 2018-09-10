﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint/model/EndpointMessageResult.h>
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

EndpointMessageResult::EndpointMessageResult() : 
    m_addressHasBeenSet(false),
    m_deliveryStatus(DeliveryStatus::NOT_SET),
    m_deliveryStatusHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_statusCode(0),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_updatedTokenHasBeenSet(false)
{
}

EndpointMessageResult::EndpointMessageResult(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
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

EndpointMessageResult& EndpointMessageResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

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

JsonValue EndpointMessageResult::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

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
