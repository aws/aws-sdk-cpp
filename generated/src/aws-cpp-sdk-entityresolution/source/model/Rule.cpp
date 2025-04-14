/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/Rule.h>
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

Rule::Rule(JsonView jsonValue)
{
  *this = jsonValue;
}

Rule& Rule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleName"))
  {
    m_ruleName = jsonValue.GetString("ruleName");
    m_ruleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchingKeys"))
  {
    Aws::Utils::Array<JsonView> matchingKeysJsonList = jsonValue.GetArray("matchingKeys");
    for(unsigned matchingKeysIndex = 0; matchingKeysIndex < matchingKeysJsonList.GetLength(); ++matchingKeysIndex)
    {
      m_matchingKeys.push_back(matchingKeysJsonList[matchingKeysIndex].AsString());
    }
    m_matchingKeysHasBeenSet = true;
  }
  return *this;
}

JsonValue Rule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  if(m_matchingKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchingKeysJsonList(m_matchingKeys.size());
   for(unsigned matchingKeysIndex = 0; matchingKeysIndex < matchingKeysJsonList.GetLength(); ++matchingKeysIndex)
   {
     matchingKeysJsonList[matchingKeysIndex].AsString(m_matchingKeys[matchingKeysIndex]);
   }
   payload.WithArray("matchingKeys", std::move(matchingKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
