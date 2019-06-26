/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/apigatewayv2/model/DomainName.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

DomainName::DomainName() : 
    m_apiMappingSelectionExpressionHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainNameConfigurationsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DomainName::DomainName(JsonView jsonValue) : 
    m_apiMappingSelectionExpressionHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainNameConfigurationsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DomainName& DomainName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiMappingSelectionExpression"))
  {
    m_apiMappingSelectionExpression = jsonValue.GetString("apiMappingSelectionExpression");

    m_apiMappingSelectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainNameConfigurations"))
  {
    Array<JsonView> domainNameConfigurationsJsonList = jsonValue.GetArray("domainNameConfigurations");
    for(unsigned domainNameConfigurationsIndex = 0; domainNameConfigurationsIndex < domainNameConfigurationsJsonList.GetLength(); ++domainNameConfigurationsIndex)
    {
      m_domainNameConfigurations.push_back(domainNameConfigurationsJsonList[domainNameConfigurationsIndex].AsObject());
    }
    m_domainNameConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainName::Jsonize() const
{
  JsonValue payload;

  if(m_apiMappingSelectionExpressionHasBeenSet)
  {
   payload.WithString("apiMappingSelectionExpression", m_apiMappingSelectionExpression);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_domainNameConfigurationsHasBeenSet)
  {
   Array<JsonValue> domainNameConfigurationsJsonList(m_domainNameConfigurations.size());
   for(unsigned domainNameConfigurationsIndex = 0; domainNameConfigurationsIndex < domainNameConfigurationsJsonList.GetLength(); ++domainNameConfigurationsIndex)
   {
     domainNameConfigurationsJsonList[domainNameConfigurationsIndex].AsObject(m_domainNameConfigurations[domainNameConfigurationsIndex].Jsonize());
   }
   payload.WithArray("domainNameConfigurations", std::move(domainNameConfigurationsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
