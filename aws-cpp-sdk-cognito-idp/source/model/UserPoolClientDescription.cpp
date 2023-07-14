/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserPoolClientDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

UserPoolClientDescription::UserPoolClientDescription() : 
    m_clientIdHasBeenSet(false),
    m_userPoolIdHasBeenSet(false),
    m_clientNameHasBeenSet(false)
{
}

UserPoolClientDescription::UserPoolClientDescription(JsonView jsonValue) : 
    m_clientIdHasBeenSet(false),
    m_userPoolIdHasBeenSet(false),
    m_clientNameHasBeenSet(false)
{
  *this = jsonValue;
}

UserPoolClientDescription& UserPoolClientDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientName"))
  {
    m_clientName = jsonValue.GetString("ClientName");

    m_clientNameHasBeenSet = true;
  }

  return *this;
}

JsonValue UserPoolClientDescription::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_clientNameHasBeenSet)
  {
   payload.WithString("ClientName", m_clientName);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
