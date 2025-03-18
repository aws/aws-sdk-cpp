/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UsernamePassword.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

UsernamePassword::UsernamePassword(JsonView jsonValue)
{
  *this = jsonValue;
}

UsernamePassword& UsernamePassword::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("password"))
  {
    m_password = jsonValue.GetString("password");
    m_passwordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  return *this;
}

JsonValue UsernamePassword::Jsonize() const
{
  JsonValue payload;

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
