/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_retainRuleHasBeenSet(false),
    m_fastRestoreRuleHasBeenSet(false),
    m_crossRegionCopyRulesHasBeenSet(false),
    m_shareRulesHasBeenSet(false),
    m_deprecateRuleHasBeenSet(false),
    m_archiveRuleHasBeenSet(false)
{
}

Schedule::Schedule(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_tagsToAddHasBeenSet(false),
    m_variableTagsHasBeenSet(false),
    m_createRuleHasBeenSet(false),
    m_retainRuleHasBeenSet(false),
    m_fastRestoreRuleHasBeenSet(false),
    m_crossRegionCopyRulesHasBeenSet(false),
    m_shareRulesHasBeenSet(false),
    m_deprecateRuleHasBeenSet(false),
    m_archiveRuleHasBeenSet(false)
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
    Aws::Utils::Array<JsonView> tagsToAddJsonList = jsonValue.GetArray("TagsToAdd");
    for(unsigned tagsToAddIndex = 0; tagsToAddIndex < tagsToAddJsonList.GetLength(); ++tagsToAddIndex)
    {
      m_tagsToAdd.push_back(tagsToAddJsonList[tagsToAddIndex].AsObject());
    }
    m_tagsToAddHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VariableTags"))
  {
    Aws::Utils::Array<JsonView> variableTagsJsonList = jsonValue.GetArray("VariableTags");
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

  if(jsonValue.ValueExists("FastRestoreRule"))
  {
    m_fastRestoreRule = jsonValue.GetObject("FastRestoreRule");

    m_fastRestoreRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrossRegionCopyRules"))
  {
    Aws::Utils::Array<JsonView> crossRegionCopyRulesJsonList = jsonValue.GetArray("CrossRegionCopyRules");
    for(unsigned crossRegionCopyRulesIndex = 0; crossRegionCopyRulesIndex < crossRegionCopyRulesJsonList.GetLength(); ++crossRegionCopyRulesIndex)
    {
      m_crossRegionCopyRules.push_back(crossRegionCopyRulesJsonList[crossRegionCopyRulesIndex].AsObject());
    }
    m_crossRegionCopyRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareRules"))
  {
    Aws::Utils::Array<JsonView> shareRulesJsonList = jsonValue.GetArray("ShareRules");
    for(unsigned shareRulesIndex = 0; shareRulesIndex < shareRulesJsonList.GetLength(); ++shareRulesIndex)
    {
      m_shareRules.push_back(shareRulesJsonList[shareRulesIndex].AsObject());
    }
    m_shareRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeprecateRule"))
  {
    m_deprecateRule = jsonValue.GetObject("DeprecateRule");

    m_deprecateRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArchiveRule"))
  {
    m_archiveRule = jsonValue.GetObject("ArchiveRule");

    m_archiveRuleHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> tagsToAddJsonList(m_tagsToAdd.size());
   for(unsigned tagsToAddIndex = 0; tagsToAddIndex < tagsToAddJsonList.GetLength(); ++tagsToAddIndex)
   {
     tagsToAddJsonList[tagsToAddIndex].AsObject(m_tagsToAdd[tagsToAddIndex].Jsonize());
   }
   payload.WithArray("TagsToAdd", std::move(tagsToAddJsonList));

  }

  if(m_variableTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variableTagsJsonList(m_variableTags.size());
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

  if(m_fastRestoreRuleHasBeenSet)
  {
   payload.WithObject("FastRestoreRule", m_fastRestoreRule.Jsonize());

  }

  if(m_crossRegionCopyRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crossRegionCopyRulesJsonList(m_crossRegionCopyRules.size());
   for(unsigned crossRegionCopyRulesIndex = 0; crossRegionCopyRulesIndex < crossRegionCopyRulesJsonList.GetLength(); ++crossRegionCopyRulesIndex)
   {
     crossRegionCopyRulesJsonList[crossRegionCopyRulesIndex].AsObject(m_crossRegionCopyRules[crossRegionCopyRulesIndex].Jsonize());
   }
   payload.WithArray("CrossRegionCopyRules", std::move(crossRegionCopyRulesJsonList));

  }

  if(m_shareRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shareRulesJsonList(m_shareRules.size());
   for(unsigned shareRulesIndex = 0; shareRulesIndex < shareRulesJsonList.GetLength(); ++shareRulesIndex)
   {
     shareRulesJsonList[shareRulesIndex].AsObject(m_shareRules[shareRulesIndex].Jsonize());
   }
   payload.WithArray("ShareRules", std::move(shareRulesJsonList));

  }

  if(m_deprecateRuleHasBeenSet)
  {
   payload.WithObject("DeprecateRule", m_deprecateRule.Jsonize());

  }

  if(m_archiveRuleHasBeenSet)
  {
   payload.WithObject("ArchiveRule", m_archiveRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
