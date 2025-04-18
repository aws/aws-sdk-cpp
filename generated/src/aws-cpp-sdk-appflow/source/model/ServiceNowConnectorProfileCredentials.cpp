﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ServiceNowConnectorProfileCredentials.h>
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

ServiceNowConnectorProfileCredentials::ServiceNowConnectorProfileCredentials(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceNowConnectorProfileCredentials& ServiceNowConnectorProfileCredentials::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("oAuth2Credentials"))
  {
    m_oAuth2Credentials = jsonValue.GetObject("oAuth2Credentials");
    m_oAuth2CredentialsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNowConnectorProfileCredentials::Jsonize() const
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

  if(m_oAuth2CredentialsHasBeenSet)
  {
   payload.WithObject("oAuth2Credentials", m_oAuth2Credentials.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
