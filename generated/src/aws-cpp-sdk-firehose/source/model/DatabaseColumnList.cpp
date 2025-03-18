/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DatabaseColumnList.h>
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

DatabaseColumnList::DatabaseColumnList(JsonView jsonValue)
{
  *this = jsonValue;
}

DatabaseColumnList& DatabaseColumnList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Include"))
  {
    Aws::Utils::Array<JsonView> includeJsonList = jsonValue.GetArray("Include");
    for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
    {
      m_include.push_back(includeJsonList[includeIndex].AsString());
    }
    m_includeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Exclude"))
  {
    Aws::Utils::Array<JsonView> excludeJsonList = jsonValue.GetArray("Exclude");
    for(unsigned excludeIndex = 0; excludeIndex < excludeJsonList.GetLength(); ++excludeIndex)
    {
      m_exclude.push_back(excludeJsonList[excludeIndex].AsString());
    }
    m_excludeHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabaseColumnList::Jsonize() const
{
  JsonValue payload;

  if(m_includeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
   for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
   {
     includeJsonList[includeIndex].AsString(m_include[includeIndex]);
   }
   payload.WithArray("Include", std::move(includeJsonList));

  }

  if(m_excludeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeJsonList(m_exclude.size());
   for(unsigned excludeIndex = 0; excludeIndex < excludeJsonList.GetLength(); ++excludeIndex)
   {
     excludeJsonList[excludeIndex].AsString(m_exclude[excludeIndex]);
   }
   payload.WithArray("Exclude", std::move(excludeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
