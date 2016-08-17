/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/TemporaryCredential.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

TemporaryCredential::TemporaryCredential() : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_validForInMinutes(0),
    m_validForInMinutesHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

TemporaryCredential::TemporaryCredential(const JsonValue& jsonValue) : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_validForInMinutes(0),
    m_validForInMinutesHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
  *this = jsonValue;
}

TemporaryCredential& TemporaryCredential::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidForInMinutes"))
  {
    m_validForInMinutes = jsonValue.GetInteger("ValidForInMinutes");

    m_validForInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TemporaryCredential::Jsonize() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_validForInMinutesHasBeenSet)
  {
   payload.WithInteger("ValidForInMinutes", m_validForInMinutes);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws