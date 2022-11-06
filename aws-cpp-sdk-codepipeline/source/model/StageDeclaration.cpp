/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StageDeclaration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

StageDeclaration::StageDeclaration() : 
    m_nameHasBeenSet(false),
    m_blockersHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

StageDeclaration::StageDeclaration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_blockersHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

StageDeclaration& StageDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockers"))
  {
    Aws::Utils::Array<JsonView> blockersJsonList = jsonValue.GetArray("blockers");
    for(unsigned blockersIndex = 0; blockersIndex < blockersJsonList.GetLength(); ++blockersIndex)
    {
      m_blockers.push_back(blockersJsonList[blockersIndex].AsObject());
    }
    m_blockersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }

  return *this;
}

JsonValue StageDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_blockersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockersJsonList(m_blockers.size());
   for(unsigned blockersIndex = 0; blockersIndex < blockersJsonList.GetLength(); ++blockersIndex)
   {
     blockersJsonList[blockersIndex].AsObject(m_blockers[blockersIndex].Jsonize());
   }
   payload.WithArray("blockers", std::move(blockersJsonList));

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
