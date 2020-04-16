/*
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
