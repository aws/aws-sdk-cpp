/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ConfigurableEnvironmentAction.h>
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

ConfigurableEnvironmentAction::ConfigurableEnvironmentAction() : 
    m_auth(ConfigurableActionTypeAuthorization::NOT_SET),
    m_authHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

ConfigurableEnvironmentAction::ConfigurableEnvironmentAction(JsonView jsonValue) : 
    m_auth(ConfigurableActionTypeAuthorization::NOT_SET),
    m_authHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurableEnvironmentAction& ConfigurableEnvironmentAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("auth"))
  {
    m_auth = ConfigurableActionTypeAuthorizationMapper::GetConfigurableActionTypeAuthorizationForName(jsonValue.GetString("auth"));

    m_authHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurableEnvironmentAction::Jsonize() const
{
  JsonValue payload;

  if(m_authHasBeenSet)
  {
   payload.WithString("auth", ConfigurableActionTypeAuthorizationMapper::GetNameForConfigurableActionTypeAuthorization(m_auth));
  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("parameters", std::move(parametersJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
