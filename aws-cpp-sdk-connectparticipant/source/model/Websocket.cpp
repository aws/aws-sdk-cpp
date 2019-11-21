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

#include <aws/connectparticipant/model/Websocket.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

Websocket::Websocket() : 
    m_urlHasBeenSet(false),
    m_connectionExpiryHasBeenSet(false)
{
}

Websocket::Websocket(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_connectionExpiryHasBeenSet(false)
{
  *this = jsonValue;
}

Websocket& Websocket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionExpiry"))
  {
    m_connectionExpiry = jsonValue.GetString("ConnectionExpiry");

    m_connectionExpiryHasBeenSet = true;
  }

  return *this;
}

JsonValue Websocket::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_connectionExpiryHasBeenSet)
  {
   payload.WithString("ConnectionExpiry", m_connectionExpiry);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
