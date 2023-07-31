/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQuerySQLParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQuerySQLParameters::ProtectedQuerySQLParameters() : 
    m_queryStringHasBeenSet(false),
    m_analysisTemplateArnHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

ProtectedQuerySQLParameters::ProtectedQuerySQLParameters(JsonView jsonValue) : 
    m_queryStringHasBeenSet(false),
    m_analysisTemplateArnHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedQuerySQLParameters& ProtectedQuerySQLParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("analysisTemplateArn"))
  {
    m_analysisTemplateArn = jsonValue.GetString("analysisTemplateArn");

    m_analysisTemplateArnHasBeenSet = true;
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

JsonValue ProtectedQuerySQLParameters::Jsonize() const
{
  JsonValue payload;

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_analysisTemplateArnHasBeenSet)
  {
   payload.WithString("analysisTemplateArn", m_analysisTemplateArn);

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
} // namespace CleanRooms
} // namespace Aws
