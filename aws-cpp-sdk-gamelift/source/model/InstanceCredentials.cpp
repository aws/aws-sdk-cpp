/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

InstanceCredentials::InstanceCredentials(JsonView jsonValue) : 
    m_userNameHasBeenSet(false),
    m_secretHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceCredentials& InstanceCredentials::operator =(JsonView jsonValue)
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
