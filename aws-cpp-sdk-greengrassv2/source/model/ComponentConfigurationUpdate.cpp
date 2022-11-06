/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ComponentConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

ComponentConfigurationUpdate::ComponentConfigurationUpdate() : 
    m_mergeHasBeenSet(false),
    m_resetHasBeenSet(false)
{
}

ComponentConfigurationUpdate::ComponentConfigurationUpdate(JsonView jsonValue) : 
    m_mergeHasBeenSet(false),
    m_resetHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentConfigurationUpdate& ComponentConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("merge"))
  {
    m_merge = jsonValue.GetString("merge");

    m_mergeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reset"))
  {
    Aws::Utils::Array<JsonView> resetJsonList = jsonValue.GetArray("reset");
    for(unsigned resetIndex = 0; resetIndex < resetJsonList.GetLength(); ++resetIndex)
    {
      m_reset.push_back(resetJsonList[resetIndex].AsString());
    }
    m_resetHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_mergeHasBeenSet)
  {
   payload.WithString("merge", m_merge);

  }

  if(m_resetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resetJsonList(m_reset.size());
   for(unsigned resetIndex = 0; resetIndex < resetJsonList.GetLength(); ++resetIndex)
   {
     resetJsonList[resetIndex].AsString(m_reset[resetIndex]);
   }
   payload.WithArray("reset", std::move(resetJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
