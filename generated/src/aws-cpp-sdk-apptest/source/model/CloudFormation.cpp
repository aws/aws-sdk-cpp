/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/CloudFormation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

CloudFormation::CloudFormation(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudFormation& CloudFormation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateLocation"))
  {
    m_templateLocation = jsonValue.GetString("templateLocation");
    m_templateLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudFormation::Jsonize() const
{
  JsonValue payload;

  if(m_templateLocationHasBeenSet)
  {
   payload.WithString("templateLocation", m_templateLocation);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
