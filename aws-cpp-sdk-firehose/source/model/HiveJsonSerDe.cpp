/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/HiveJsonSerDe.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

HiveJsonSerDe::HiveJsonSerDe() : 
    m_timestampFormatsHasBeenSet(false)
{
}

HiveJsonSerDe::HiveJsonSerDe(JsonView jsonValue) : 
    m_timestampFormatsHasBeenSet(false)
{
  *this = jsonValue;
}

HiveJsonSerDe& HiveJsonSerDe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimestampFormats"))
  {
    Aws::Utils::Array<JsonView> timestampFormatsJsonList = jsonValue.GetArray("TimestampFormats");
    for(unsigned timestampFormatsIndex = 0; timestampFormatsIndex < timestampFormatsJsonList.GetLength(); ++timestampFormatsIndex)
    {
      m_timestampFormats.push_back(timestampFormatsJsonList[timestampFormatsIndex].AsString());
    }
    m_timestampFormatsHasBeenSet = true;
  }

  return *this;
}

JsonValue HiveJsonSerDe::Jsonize() const
{
  JsonValue payload;

  if(m_timestampFormatsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timestampFormatsJsonList(m_timestampFormats.size());
   for(unsigned timestampFormatsIndex = 0; timestampFormatsIndex < timestampFormatsJsonList.GetLength(); ++timestampFormatsIndex)
   {
     timestampFormatsJsonList[timestampFormatsIndex].AsString(m_timestampFormats[timestampFormatsIndex]);
   }
   payload.WithArray("TimestampFormats", std::move(timestampFormatsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
