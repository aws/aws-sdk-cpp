/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ProjectsForRule.h>
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

ProjectsForRule::ProjectsForRule(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectsForRule& ProjectsForRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("selectionMode"))
  {
    m_selectionMode = RuleScopeSelectionModeMapper::GetRuleScopeSelectionModeForName(jsonValue.GetString("selectionMode"));
    m_selectionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("specificProjects"))
  {
    Aws::Utils::Array<JsonView> specificProjectsJsonList = jsonValue.GetArray("specificProjects");
    for(unsigned specificProjectsIndex = 0; specificProjectsIndex < specificProjectsJsonList.GetLength(); ++specificProjectsIndex)
    {
      m_specificProjects.push_back(specificProjectsJsonList[specificProjectsIndex].AsString());
    }
    m_specificProjectsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectsForRule::Jsonize() const
{
  JsonValue payload;

  if(m_selectionModeHasBeenSet)
  {
   payload.WithString("selectionMode", RuleScopeSelectionModeMapper::GetNameForRuleScopeSelectionMode(m_selectionMode));
  }

  if(m_specificProjectsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> specificProjectsJsonList(m_specificProjects.size());
   for(unsigned specificProjectsIndex = 0; specificProjectsIndex < specificProjectsJsonList.GetLength(); ++specificProjectsIndex)
   {
     specificProjectsJsonList[specificProjectsIndex].AsString(m_specificProjects[specificProjectsIndex]);
   }
   payload.WithArray("specificProjects", std::move(specificProjectsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
