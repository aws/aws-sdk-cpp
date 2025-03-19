/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/TrimString.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

TrimString::TrimString(JsonView jsonValue)
{
  *this = jsonValue;
}

TrimString& TrimString::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("withKeys"))
  {
    Aws::Utils::Array<JsonView> withKeysJsonList = jsonValue.GetArray("withKeys");
    for(unsigned withKeysIndex = 0; withKeysIndex < withKeysJsonList.GetLength(); ++withKeysIndex)
    {
      m_withKeys.push_back(withKeysJsonList[withKeysIndex].AsString());
    }
    m_withKeysHasBeenSet = true;
  }
  return *this;
}

JsonValue TrimString::Jsonize() const
{
  JsonValue payload;

  if(m_withKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> withKeysJsonList(m_withKeys.size());
   for(unsigned withKeysIndex = 0; withKeysIndex < withKeysJsonList.GetLength(); ++withKeysIndex)
   {
     withKeysJsonList[withKeysIndex].AsString(m_withKeys[withKeysIndex]);
   }
   payload.WithArray("withKeys", std::move(withKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
