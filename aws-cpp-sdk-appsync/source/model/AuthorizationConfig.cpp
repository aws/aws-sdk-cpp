/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/AuthorizationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

AuthorizationConfig::AuthorizationConfig() : 
    m_authorizationType(AuthorizationType::NOT_SET),
    m_authorizationTypeHasBeenSet(false),
    m_awsIamConfigHasBeenSet(false)
{
}

AuthorizationConfig::AuthorizationConfig(JsonView jsonValue) : 
    m_authorizationType(AuthorizationType::NOT_SET),
    m_authorizationTypeHasBeenSet(false),
    m_awsIamConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizationConfig& AuthorizationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizationType"))
  {
    m_authorizationType = AuthorizationTypeMapper::GetAuthorizationTypeForName(jsonValue.GetString("authorizationType"));

    m_authorizationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsIamConfig"))
  {
    m_awsIamConfig = jsonValue.GetObject("awsIamConfig");

    m_awsIamConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthorizationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationTypeHasBeenSet)
  {
   payload.WithString("authorizationType", AuthorizationTypeMapper::GetNameForAuthorizationType(m_authorizationType));
  }

  if(m_awsIamConfigHasBeenSet)
  {
   payload.WithObject("awsIamConfig", m_awsIamConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
