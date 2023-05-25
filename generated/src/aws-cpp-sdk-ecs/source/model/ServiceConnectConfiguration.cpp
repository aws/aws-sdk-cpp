/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceConnectConfiguration.h>
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

ServiceConnectConfiguration::ServiceConnectConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_logConfigurationHasBeenSet(false)
{
}

ServiceConnectConfiguration::ServiceConnectConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_logConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceConnectConfiguration& ServiceConnectConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("services"))
  {
    Aws::Utils::Array<JsonView> servicesJsonList = jsonValue.GetArray("services");
    for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
    {
      m_services.push_back(servicesJsonList[servicesIndex].AsObject());
    }
    m_servicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("logConfiguration");

    m_logConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceConnectConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_servicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> servicesJsonList(m_services.size());
   for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
   {
     servicesJsonList[servicesIndex].AsObject(m_services[servicesIndex].Jsonize());
   }
   payload.WithArray("services", std::move(servicesJsonList));

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
