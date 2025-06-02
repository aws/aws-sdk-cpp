/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/MatchGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

MatchGroup::MatchGroup(JsonView jsonValue)
{
  *this = jsonValue;
}

MatchGroup& MatchGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
    m_recordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchId"))
  {
    m_matchId = jsonValue.GetString("matchId");
    m_matchIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchRule"))
  {
    m_matchRule = jsonValue.GetString("matchRule");
    m_matchRuleHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchGroup::Jsonize() const
{
  JsonValue payload;

  if(m_recordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordsJsonList(m_records.size());
   for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
   {
     recordsJsonList[recordsIndex].AsObject(m_records[recordsIndex].Jsonize());
   }
   payload.WithArray("records", std::move(recordsJsonList));

  }

  if(m_matchIdHasBeenSet)
  {
   payload.WithString("matchId", m_matchId);

  }

  if(m_matchRuleHasBeenSet)
  {
   payload.WithString("matchRule", m_matchRule);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
