/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/LustreRootSquashConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

LustreRootSquashConfiguration::LustreRootSquashConfiguration() : 
    m_rootSquashHasBeenSet(false),
    m_noSquashNidsHasBeenSet(false)
{
}

LustreRootSquashConfiguration::LustreRootSquashConfiguration(JsonView jsonValue) : 
    m_rootSquashHasBeenSet(false),
    m_noSquashNidsHasBeenSet(false)
{
  *this = jsonValue;
}

LustreRootSquashConfiguration& LustreRootSquashConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RootSquash"))
  {
    m_rootSquash = jsonValue.GetString("RootSquash");

    m_rootSquashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoSquashNids"))
  {
    Aws::Utils::Array<JsonView> noSquashNidsJsonList = jsonValue.GetArray("NoSquashNids");
    for(unsigned noSquashNidsIndex = 0; noSquashNidsIndex < noSquashNidsJsonList.GetLength(); ++noSquashNidsIndex)
    {
      m_noSquashNids.push_back(noSquashNidsJsonList[noSquashNidsIndex].AsString());
    }
    m_noSquashNidsHasBeenSet = true;
  }

  return *this;
}

JsonValue LustreRootSquashConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rootSquashHasBeenSet)
  {
   payload.WithString("RootSquash", m_rootSquash);

  }

  if(m_noSquashNidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noSquashNidsJsonList(m_noSquashNids.size());
   for(unsigned noSquashNidsIndex = 0; noSquashNidsIndex < noSquashNidsJsonList.GetLength(); ++noSquashNidsIndex)
   {
     noSquashNidsJsonList[noSquashNidsIndex].AsString(m_noSquashNids[noSquashNidsIndex]);
   }
   payload.WithArray("NoSquashNids", std::move(noSquashNidsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
