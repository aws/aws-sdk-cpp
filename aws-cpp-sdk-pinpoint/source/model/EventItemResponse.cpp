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

#include <aws/pinpoint/model/EventItemResponse.h>
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

EventItemResponse::EventItemResponse() : 
    m_messageHasBeenSet(false),
    m_statusCode(0),
    m_statusCodeHasBeenSet(false)
{
}

EventItemResponse::EventItemResponse(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_statusCode(0),
    m_statusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

EventItemResponse& EventItemResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = jsonValue.GetInteger("StatusCode");

    m_statusCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue EventItemResponse::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithInteger("StatusCode", m_statusCode);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
