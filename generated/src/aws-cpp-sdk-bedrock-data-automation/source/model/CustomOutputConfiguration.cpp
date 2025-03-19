/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/CustomOutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

CustomOutputConfiguration::CustomOutputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomOutputConfiguration& CustomOutputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blueprints"))
  {
    Aws::Utils::Array<JsonView> blueprintsJsonList = jsonValue.GetArray("blueprints");
    for(unsigned blueprintsIndex = 0; blueprintsIndex < blueprintsJsonList.GetLength(); ++blueprintsIndex)
    {
      m_blueprints.push_back(blueprintsJsonList[blueprintsIndex].AsObject());
    }
    m_blueprintsHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomOutputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_blueprintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blueprintsJsonList(m_blueprints.size());
   for(unsigned blueprintsIndex = 0; blueprintsIndex < blueprintsJsonList.GetLength(); ++blueprintsIndex)
   {
     blueprintsJsonList[blueprintsIndex].AsObject(m_blueprints[blueprintsIndex].Jsonize());
   }
   payload.WithArray("blueprints", std::move(blueprintsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
