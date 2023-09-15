/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ViewInputContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ViewInputContent::ViewInputContent() : 
    m_templateHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

ViewInputContent::ViewInputContent(JsonView jsonValue) : 
    m_templateHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

ViewInputContent& ViewInputContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Template"))
  {
    m_template = jsonValue.GetString("Template");

    m_templateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsString());
    }
    m_actionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ViewInputContent::Jsonize() const
{
  JsonValue payload;

  if(m_templateHasBeenSet)
  {
   payload.WithString("Template", m_template);

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
