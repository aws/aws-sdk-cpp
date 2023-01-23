/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/Connector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

Connector::Connector() : 
    m_connectorArnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Connector::Connector(JsonView jsonValue) : 
    m_connectorArnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

Connector& Connector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorArn"))
  {
    m_connectorArn = jsonValue.GetString("ConnectorArn");

    m_connectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue Connector::Jsonize() const
{
  JsonValue payload;

  if(m_connectorArnHasBeenSet)
  {
   payload.WithString("ConnectorArn", m_connectorArn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
