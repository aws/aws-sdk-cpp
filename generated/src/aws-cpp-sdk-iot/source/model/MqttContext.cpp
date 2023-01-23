/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MqttContext.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

MqttContext::MqttContext() : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
}

MqttContext::MqttContext(JsonView jsonValue) : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
  *this = jsonValue;
}

MqttContext& MqttContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("password"))
  {
    m_password = HashingUtils::Base64Decode(jsonValue.GetString("password"));
    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

    m_clientIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MqttContext::Jsonize() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", HashingUtils::Base64Encode(m_password));
  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
