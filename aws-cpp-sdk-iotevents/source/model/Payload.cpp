/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/Payload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

Payload::Payload() : 
    m_contentExpressionHasBeenSet(false),
    m_type(PayloadType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Payload::Payload(JsonView jsonValue) : 
    m_contentExpressionHasBeenSet(false),
    m_type(PayloadType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Payload& Payload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentExpression"))
  {
    m_contentExpression = jsonValue.GetString("contentExpression");

    m_contentExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = PayloadTypeMapper::GetPayloadTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Payload::Jsonize() const
{
  JsonValue payload;

  if(m_contentExpressionHasBeenSet)
  {
   payload.WithString("contentExpression", m_contentExpression);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PayloadTypeMapper::GetNameForPayloadType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
