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

#include <aws/gamelift/model/InstanceCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

InstanceCredentials::InstanceCredentials() : 
    m_userNameHasBeenSet(false),
    m_secretHasBeenSet(false)
{
}

InstanceCredentials::InstanceCredentials(const JsonValue& jsonValue) : 
    m_userNameHasBeenSet(false),
    m_secretHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceCredentials& InstanceCredentials::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Secret"))
  {
    m_secret = jsonValue.GetString("Secret");

    m_secretHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_secretHasBeenSet)
  {
   payload.WithString("Secret", m_secret);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws