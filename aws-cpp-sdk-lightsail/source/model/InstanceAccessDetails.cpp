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

#include <aws/lightsail/model/InstanceAccessDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InstanceAccessDetails::InstanceAccessDetails() : 
    m_certKeyHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_protocol(InstanceAccessProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

InstanceAccessDetails::InstanceAccessDetails(const JsonValue& jsonValue) : 
    m_certKeyHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_protocol(InstanceAccessProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceAccessDetails& InstanceAccessDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("certKey"))
  {
    m_certKey = jsonValue.GetString("certKey");

    m_certKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiresAt"))
  {
    m_expiresAt = jsonValue.GetDouble("expiresAt");

    m_expiresAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("password"))
  {
    m_password = jsonValue.GetString("password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateKey"))
  {
    m_privateKey = jsonValue.GetString("privateKey");

    m_privateKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = InstanceAccessProtocolMapper::GetInstanceAccessProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceName"))
  {
    m_instanceName = jsonValue.GetString("instanceName");

    m_instanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceAccessDetails::Jsonize() const
{
  JsonValue payload;

  if(m_certKeyHasBeenSet)
  {
   payload.WithString("certKey", m_certKey);

  }

  if(m_expiresAtHasBeenSet)
  {
   payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  if(m_privateKeyHasBeenSet)
  {
   payload.WithString("privateKey", m_privateKey);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", InstanceAccessProtocolMapper::GetNameForInstanceAccessProtocol(m_protocol));
  }

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws