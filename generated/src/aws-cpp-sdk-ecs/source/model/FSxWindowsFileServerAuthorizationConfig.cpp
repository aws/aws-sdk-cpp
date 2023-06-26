/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/FSxWindowsFileServerAuthorizationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

FSxWindowsFileServerAuthorizationConfig::FSxWindowsFileServerAuthorizationConfig() : 
    m_credentialsParameterHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

FSxWindowsFileServerAuthorizationConfig::FSxWindowsFileServerAuthorizationConfig(JsonView jsonValue) : 
    m_credentialsParameterHasBeenSet(false),
    m_domainHasBeenSet(false)
{
  *this = jsonValue;
}

FSxWindowsFileServerAuthorizationConfig& FSxWindowsFileServerAuthorizationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("credentialsParameter"))
  {
    m_credentialsParameter = jsonValue.GetString("credentialsParameter");

    m_credentialsParameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domain"))
  {
    m_domain = jsonValue.GetString("domain");

    m_domainHasBeenSet = true;
  }

  return *this;
}

JsonValue FSxWindowsFileServerAuthorizationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_credentialsParameterHasBeenSet)
  {
   payload.WithString("credentialsParameter", m_credentialsParameter);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
