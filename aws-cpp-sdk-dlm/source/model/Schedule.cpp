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

#include <aws/dlm/model/Schedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

Schedule::Schedule() : 
    m_nameHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_tagsToAddHasBeenSet(false),
    m_variableTagsHasBeenSet(false),
    m_createRuleHasBeenSet(false),
    m_retainRuleHasBeenSet(false)
{
}

Schedule::Schedule(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_tagsToAddHasBeenSet(false),
    m_variableTagsHasBeenSet(false),
    m_createRuleHasBeenSet(false),
    m_retainRuleHasBeenSet(false)
{
  *this = jsonValue;
}

Schedule& Schedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTags"))
  {
    m_copyTags = jsonValue.GetBool("CopyTags");

    m_copyTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagsToAdd"))
  {
    Array<JsonView> tagsToAddJsonList = jsonValue.GetArray("TagsToAdd");
    for(unsigned tagsToAddIndex = 0; tagsToAddIndex < tagsToAddJsonList.GetLength(); ++tagsToAddIndex)
    {
      m_tagsToAdd.push_back(tagsToAddJsonList[tagsToAddIndex].AsObject());
    }
    m_tagsToAddHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VariableTags"))
  {
    Array<JsonView> variableTagsJsonList = jsonValue.GetArray("VariableTags");
    for(unsigned variableTagsIndex = 0; variableTagsIndex < variableTagsJsonList.GetLength(); ++variableTagsIndex)
    {
      m_variableTags.push_back(variableTagsJsonList[variableTagsIndex].AsObject());
    }
    m_variableTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateRule"))
  {
    m_createRule = jsonValue.GetObject("CreateRule");

    m_createRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetainRule"))
  {
    m_retainRule = jsonValue.GetObject("RetainRule");

    m_retainRuleHasBeenSet = true;
  }

  return *this;
}

JsonValue Schedule::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_copyTagsHasBeenSet)
  {
   payload.WithBool("CopyTags", m_copyTags);

  }

  if(m_tagsToAddHasBeenSet)
  {
   Array<JsonValue> tagsToAddJsonList(m_tagsToAdd.size());
   for(unsigned tagsToAddIndex = 0; tagsToAddIndex < tagsToAddJsonList.GetLength(); ++tagsToAddIndex)
   {
     tagsToAddJsonList[tagsToAddIndex].AsObject(m_tagsToAdd[tagsToAddIndex].Jsonize());
   }
   payload.WithArray("TagsToAdd", std::move(tagsToAddJsonList));

  }

  if(m_variableTagsHasBeenSet)
  {
   Array<JsonValue> variableTagsJsonList(m_variableTags.size());
   for(unsigned variableTagsIndex = 0; variableTagsIndex < variableTagsJsonList.GetLength(); ++variableTagsIndex)
   {
     variableTagsJsonList[variableTagsIndex].AsObject(m_variableTags[variableTagsIndex].Jsonize());
   }
   payload.WithArray("VariableTags", std::move(variableTagsJsonList));

  }

  if(m_createRuleHasBeenSet)
  {
   payload.WithObject("CreateRule", m_createRule.Jsonize());

  }

  if(m_retainRuleHasBeenSet)
  {
   payload.WithObject("RetainRule", m_retainRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
