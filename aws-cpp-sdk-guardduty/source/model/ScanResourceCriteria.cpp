/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanResourceCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ScanResourceCriteria::ScanResourceCriteria() : 
    m_includeHasBeenSet(false),
    m_excludeHasBeenSet(false)
{
}

ScanResourceCriteria::ScanResourceCriteria(JsonView jsonValue) : 
    m_includeHasBeenSet(false),
    m_excludeHasBeenSet(false)
{
  *this = jsonValue;
}

ScanResourceCriteria& ScanResourceCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("include"))
  {
    Aws::Map<Aws::String, JsonView> includeJsonMap = jsonValue.GetObject("include").GetAllObjects();
    for(auto& includeItem : includeJsonMap)
    {
      m_include[ScanCriterionKeyMapper::GetScanCriterionKeyForName(includeItem.first)] = includeItem.second.AsObject();
    }
    m_includeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exclude"))
  {
    Aws::Map<Aws::String, JsonView> excludeJsonMap = jsonValue.GetObject("exclude").GetAllObjects();
    for(auto& excludeItem : excludeJsonMap)
    {
      m_exclude[ScanCriterionKeyMapper::GetScanCriterionKeyForName(excludeItem.first)] = excludeItem.second.AsObject();
    }
    m_excludeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScanResourceCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_includeHasBeenSet)
  {
   JsonValue includeJsonMap;
   for(auto& includeItem : m_include)
   {
     includeJsonMap.WithObject(ScanCriterionKeyMapper::GetNameForScanCriterionKey(includeItem.first), includeItem.second.Jsonize());
   }
   payload.WithObject("include", std::move(includeJsonMap));

  }

  if(m_excludeHasBeenSet)
  {
   JsonValue excludeJsonMap;
   for(auto& excludeItem : m_exclude)
   {
     excludeJsonMap.WithObject(ScanCriterionKeyMapper::GetNameForScanCriterionKey(excludeItem.first), excludeItem.second.Jsonize());
   }
   payload.WithObject("exclude", std::move(excludeJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
