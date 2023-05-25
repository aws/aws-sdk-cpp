/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/CreateConnectionBasicAuthRequestParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

CreateConnectionBasicAuthRequestParameters::CreateConnectionBasicAuthRequestParameters() : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CreateConnectionBasicAuthRequestParameters::CreateConnectionBasicAuthRequestParameters(JsonView jsonValue) : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
  *this = jsonValue;
}

CreateConnectionBasicAuthRequestParameters& CreateConnectionBasicAuthRequestParameters::operator =(JsonView jsonValue)
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

JsonValue CreateConnectionBasicAuthRequestParameters::Jsonize() const
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
} // namespace EventBridge
} // namespace Aws
