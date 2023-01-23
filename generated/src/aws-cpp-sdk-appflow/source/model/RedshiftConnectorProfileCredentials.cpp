/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/RedshiftConnectorProfileCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

RedshiftConnectorProfileCredentials::RedshiftConnectorProfileCredentials() : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

RedshiftConnectorProfileCredentials::RedshiftConnectorProfileCredentials(JsonView jsonValue) : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftConnectorProfileCredentials& RedshiftConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("password"))
  {
    m_password = jsonValue.GetString("password");

    m_passwordHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
