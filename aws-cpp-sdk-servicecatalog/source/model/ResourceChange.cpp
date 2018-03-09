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

#include <aws/servicecatalog/model/ResourceChange.h>
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

ResourceChange::ResourceChange() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_replacement(Replacement::NOT_SET),
    m_replacementHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

ResourceChange::ResourceChange(const JsonValue& jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_replacement(Replacement::NOT_SET),
    m_replacementHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceChange& ResourceChange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogicalResourceId"))
  {
    m_logicalResourceId = jsonValue.GetString("LogicalResourceId");

    m_logicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhysicalResourceId"))
  {
    m_physicalResourceId = jsonValue.GetString("PhysicalResourceId");

    m_physicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Replacement"))
  {
    m_replacement = ReplacementMapper::GetReplacementForName(jsonValue.GetString("Replacement"));

    m_replacementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scope"))
  {
    Array<JsonValue> scopeJsonList = jsonValue.GetArray("Scope");
    for(unsigned scopeIndex = 0; scopeIndex < scopeJsonList.GetLength(); ++scopeIndex)
    {
      m_scope.push_back(ResourceAttributeMapper::GetResourceAttributeForName(scopeJsonList[scopeIndex].AsString()));
    }
    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    Array<JsonValue> detailsJsonList = jsonValue.GetArray("Details");
    for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
    {
      m_details.push_back(detailsJsonList[detailsIndex].AsObject());
    }
    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceChange::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_logicalResourceIdHasBeenSet)
  {
   payload.WithString("LogicalResourceId", m_logicalResourceId);

  }

  if(m_physicalResourceIdHasBeenSet)
  {
   payload.WithString("PhysicalResourceId", m_physicalResourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_replacementHasBeenSet)
  {
   payload.WithString("Replacement", ReplacementMapper::GetNameForReplacement(m_replacement));
  }

  if(m_scopeHasBeenSet)
  {
   Array<JsonValue> scopeJsonList(m_scope.size());
   for(unsigned scopeIndex = 0; scopeIndex < scopeJsonList.GetLength(); ++scopeIndex)
   {
     scopeJsonList[scopeIndex].AsString(ResourceAttributeMapper::GetNameForResourceAttribute(m_scope[scopeIndex]));
   }
   payload.WithArray("Scope", std::move(scopeJsonList));

  }

  if(m_detailsHasBeenSet)
  {
   Array<JsonValue> detailsJsonList(m_details.size());
   for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
   {
     detailsJsonList[detailsIndex].AsObject(m_details[detailsIndex].Jsonize());
   }
   payload.WithArray("Details", std::move(detailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
