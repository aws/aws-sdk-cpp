/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ComponentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ComponentConfiguration::ComponentConfiguration() : 
    m_componentArnHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

ComponentConfiguration::ComponentConfiguration(JsonView jsonValue) : 
    m_componentArnHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentConfiguration& ComponentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentArn"))
  {
    m_componentArn = jsonValue.GetString("componentArn");

    m_componentArnHasBeenSet = true;
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

  return *this;
}

JsonValue ComponentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_componentArnHasBeenSet)
  {
   payload.WithString("componentArn", m_componentArn);

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

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
