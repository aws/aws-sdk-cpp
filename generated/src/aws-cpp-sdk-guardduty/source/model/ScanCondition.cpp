/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanCondition.h>
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

ScanCondition::ScanCondition() : 
    m_mapEqualsHasBeenSet(false)
{
}

ScanCondition::ScanCondition(JsonView jsonValue) : 
    m_mapEqualsHasBeenSet(false)
{
  *this = jsonValue;
}

ScanCondition& ScanCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mapEquals"))
  {
    Aws::Utils::Array<JsonView> mapEqualsJsonList = jsonValue.GetArray("mapEquals");
    for(unsigned mapEqualsIndex = 0; mapEqualsIndex < mapEqualsJsonList.GetLength(); ++mapEqualsIndex)
    {
      m_mapEquals.push_back(mapEqualsJsonList[mapEqualsIndex].AsObject());
    }
    m_mapEqualsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScanCondition::Jsonize() const
{
  JsonValue payload;

  if(m_mapEqualsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mapEqualsJsonList(m_mapEquals.size());
   for(unsigned mapEqualsIndex = 0; mapEqualsIndex < mapEqualsJsonList.GetLength(); ++mapEqualsIndex)
   {
     mapEqualsJsonList[mapEqualsIndex].AsObject(m_mapEquals[mapEqualsIndex].Jsonize());
   }
   payload.WithArray("mapEquals", std::move(mapEqualsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
