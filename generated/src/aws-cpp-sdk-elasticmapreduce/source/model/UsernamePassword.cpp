/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/UsernamePassword.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

UsernamePassword::UsernamePassword() : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

UsernamePassword::UsernamePassword(JsonView jsonValue) : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
  *this = jsonValue;
}

UsernamePassword& UsernamePassword::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue UsernamePassword::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
