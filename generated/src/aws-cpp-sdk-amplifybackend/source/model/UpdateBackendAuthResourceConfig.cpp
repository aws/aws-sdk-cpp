/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/UpdateBackendAuthResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

UpdateBackendAuthResourceConfig::UpdateBackendAuthResourceConfig() : 
    m_authResources(AuthResources::NOT_SET),
    m_authResourcesHasBeenSet(false),
    m_identityPoolConfigsHasBeenSet(false),
    m_service(Service::NOT_SET),
    m_serviceHasBeenSet(false),
    m_userPoolConfigsHasBeenSet(false)
{
}

UpdateBackendAuthResourceConfig::UpdateBackendAuthResourceConfig(JsonView jsonValue) : 
    m_authResources(AuthResources::NOT_SET),
    m_authResourcesHasBeenSet(false),
    m_identityPoolConfigsHasBeenSet(false),
    m_service(Service::NOT_SET),
    m_serviceHasBeenSet(false),
    m_userPoolConfigsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateBackendAuthResourceConfig& UpdateBackendAuthResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authResources"))
  {
    m_authResources = AuthResourcesMapper::GetAuthResourcesForName(jsonValue.GetString("authResources"));

    m_authResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identityPoolConfigs"))
  {
    m_identityPoolConfigs = jsonValue.GetObject("identityPoolConfigs");

    m_identityPoolConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("service"))
  {
    m_service = ServiceMapper::GetServiceForName(jsonValue.GetString("service"));

    m_serviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userPoolConfigs"))
  {
    m_userPoolConfigs = jsonValue.GetObject("userPoolConfigs");

    m_userPoolConfigsHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateBackendAuthResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_authResourcesHasBeenSet)
  {
   payload.WithString("authResources", AuthResourcesMapper::GetNameForAuthResources(m_authResources));
  }

  if(m_identityPoolConfigsHasBeenSet)
  {
   payload.WithObject("identityPoolConfigs", m_identityPoolConfigs.Jsonize());

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", ServiceMapper::GetNameForService(m_service));
  }

  if(m_userPoolConfigsHasBeenSet)
  {
   payload.WithObject("userPoolConfigs", m_userPoolConfigs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
