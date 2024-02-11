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

Rule::Rule() : 
    m_matchingKeysHasBeenSet(false),
    m_ruleNameHasBeenSet(false)
{
}

Rule::Rule(JsonView jsonValue) : 
    m_matchingKeysHasBeenSet(false),
    m_ruleNameHasBeenSet(false)
{
  *this = jsonValue;
}

Rule& Rule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("matchingKeys"))
  {
    Aws::Utils::Array<JsonView> matchingKeysJsonList = jsonValue.GetArray("matchingKeys");
    for(unsigned matchingKeysIndex = 0; matchingKeysIndex < matchingKeysJsonList.GetLength(); ++matchingKeysIndex)
    {
      m_matchingKeys.push_back(matchingKeysJsonList[matchingKeysIndex].AsString());
    }
    m_matchingKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleName"))
  {
    m_ruleName = jsonValue.GetString("ruleName");

    m_ruleNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Rule::Jsonize() const
{
  JsonValue payload;

  if(m_matchingKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchingKeysJsonList(m_matchingKeys.size());
   for(unsigned matchingKeysIndex = 0; matchingKeysIndex < matchingKeysJsonList.GetLength(); ++matchingKeysIndex)
   {
     matchingKeysJsonList[matchingKeysIndex].AsString(m_matchingKeys[matchingKeysIndex]);
   }
   payload.WithArray("matchingKeys", std::move(matchingKeysJsonList));

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
