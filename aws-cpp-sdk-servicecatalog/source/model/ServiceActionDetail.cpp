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

#include <aws/servicecatalog/model/ServiceActionDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ServiceActionDetail::ServiceActionDetail() : 
    m_serviceActionSummaryHasBeenSet(false),
    m_definitionHasBeenSet(false)
{
}

ServiceActionDetail::ServiceActionDetail(JsonView jsonValue) : 
    m_serviceActionSummaryHasBeenSet(false),
    m_definitionHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceActionDetail& ServiceActionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceActionSummary"))
  {
    m_serviceActionSummary = jsonValue.GetObject("ServiceActionSummary");

    m_serviceActionSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Definition"))
  {
    Aws::Map<Aws::String, JsonView> definitionJsonMap = jsonValue.GetObject("Definition").GetAllObjects();
    for(auto& definitionItem : definitionJsonMap)
    {
      m_definition[ServiceActionDefinitionKeyMapper::GetServiceActionDefinitionKeyForName(definitionItem.first)] = definitionItem.second.AsString();
    }
    m_definitionHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceActionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_serviceActionSummaryHasBeenSet)
  {
   payload.WithObject("ServiceActionSummary", m_serviceActionSummary.Jsonize());

  }

  if(m_definitionHasBeenSet)
  {
   JsonValue definitionJsonMap;
   for(auto& definitionItem : m_definition)
   {
     definitionJsonMap.WithString(ServiceActionDefinitionKeyMapper::GetNameForServiceActionDefinitionKey(definitionItem.first), definitionItem.second);
   }
   payload.WithObject("Definition", std::move(definitionJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
