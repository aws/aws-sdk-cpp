/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ImageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

ImageConfiguration::ImageConfiguration() : 
    m_runtimeEnvironmentVariablesHasBeenSet(false),
    m_startCommandHasBeenSet(false),
    m_portHasBeenSet(false),
    m_runtimeEnvironmentSecretsHasBeenSet(false)
{
}

ImageConfiguration::ImageConfiguration(JsonView jsonValue) : 
    m_runtimeEnvironmentVariablesHasBeenSet(false),
    m_startCommandHasBeenSet(false),
    m_portHasBeenSet(false),
    m_runtimeEnvironmentSecretsHasBeenSet(false)
{
  *this = jsonValue;
}

ImageConfiguration& ImageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuntimeEnvironmentVariables"))
  {
    Aws::Map<Aws::String, JsonView> runtimeEnvironmentVariablesJsonMap = jsonValue.GetObject("RuntimeEnvironmentVariables").GetAllObjects();
    for(auto& runtimeEnvironmentVariablesItem : runtimeEnvironmentVariablesJsonMap)
    {
      m_runtimeEnvironmentVariables[runtimeEnvironmentVariablesItem.first] = runtimeEnvironmentVariablesItem.second.AsString();
    }
    m_runtimeEnvironmentVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartCommand"))
  {
    m_startCommand = jsonValue.GetString("StartCommand");

    m_startCommandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetString("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuntimeEnvironmentSecrets"))
  {
    Aws::Map<Aws::String, JsonView> runtimeEnvironmentSecretsJsonMap = jsonValue.GetObject("RuntimeEnvironmentSecrets").GetAllObjects();
    for(auto& runtimeEnvironmentSecretsItem : runtimeEnvironmentSecretsJsonMap)
    {
      m_runtimeEnvironmentSecrets[runtimeEnvironmentSecretsItem.first] = runtimeEnvironmentSecretsItem.second.AsString();
    }
    m_runtimeEnvironmentSecretsHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_runtimeEnvironmentVariablesHasBeenSet)
  {
   JsonValue runtimeEnvironmentVariablesJsonMap;
   for(auto& runtimeEnvironmentVariablesItem : m_runtimeEnvironmentVariables)
   {
     runtimeEnvironmentVariablesJsonMap.WithString(runtimeEnvironmentVariablesItem.first, runtimeEnvironmentVariablesItem.second);
   }
   payload.WithObject("RuntimeEnvironmentVariables", std::move(runtimeEnvironmentVariablesJsonMap));

  }

  if(m_startCommandHasBeenSet)
  {
   payload.WithString("StartCommand", m_startCommand);

  }

  if(m_portHasBeenSet)
  {
   payload.WithString("Port", m_port);

  }

  if(m_runtimeEnvironmentSecretsHasBeenSet)
  {
   JsonValue runtimeEnvironmentSecretsJsonMap;
   for(auto& runtimeEnvironmentSecretsItem : m_runtimeEnvironmentSecrets)
   {
     runtimeEnvironmentSecretsJsonMap.WithString(runtimeEnvironmentSecretsItem.first, runtimeEnvironmentSecretsItem.second);
   }
   payload.WithObject("RuntimeEnvironmentSecrets", std::move(runtimeEnvironmentSecretsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
