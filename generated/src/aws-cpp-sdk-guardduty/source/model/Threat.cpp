/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Threat.h>
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

Threat::Threat(JsonView jsonValue)
{
  *this = jsonValue;
}

Threat& Threat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("itemPaths"))
  {
    Aws::Utils::Array<JsonView> itemPathsJsonList = jsonValue.GetArray("itemPaths");
    for(unsigned itemPathsIndex = 0; itemPathsIndex < itemPathsJsonList.GetLength(); ++itemPathsIndex)
    {
      m_itemPaths.push_back(itemPathsJsonList[itemPathsIndex].AsObject());
    }
    m_itemPathsHasBeenSet = true;
  }
  return *this;
}

JsonValue Threat::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_itemPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemPathsJsonList(m_itemPaths.size());
   for(unsigned itemPathsIndex = 0; itemPathsIndex < itemPathsJsonList.GetLength(); ++itemPathsIndex)
   {
     itemPathsJsonList[itemPathsIndex].AsObject(m_itemPaths[itemPathsIndex].Jsonize());
   }
   payload.WithArray("itemPaths", std::move(itemPathsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
