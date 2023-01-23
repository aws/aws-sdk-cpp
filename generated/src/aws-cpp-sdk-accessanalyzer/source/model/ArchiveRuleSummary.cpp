/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ArchiveRuleSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

ArchiveRuleSummary::ArchiveRuleSummary() : 
    m_ruleNameHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

ArchiveRuleSummary::ArchiveRuleSummary(JsonView jsonValue) : 
    m_ruleNameHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ArchiveRuleSummary& ArchiveRuleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleName"))
  {
    m_ruleName = jsonValue.GetString("ruleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filter"))
  {
    Aws::Map<Aws::String, JsonView> filterJsonMap = jsonValue.GetObject("filter").GetAllObjects();
    for(auto& filterItem : filterJsonMap)
    {
      m_filter[filterItem.first] = filterItem.second.AsObject();
    }
    m_filterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchiveRuleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     filterJsonMap.WithObject(filterItem.first, filterItem.second.Jsonize());
   }
   payload.WithObject("filter", std::move(filterJsonMap));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
