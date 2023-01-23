/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluenceBlogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ConfluenceBlogConfiguration::ConfluenceBlogConfiguration() : 
    m_blogFieldMappingsHasBeenSet(false)
{
}

ConfluenceBlogConfiguration::ConfluenceBlogConfiguration(JsonView jsonValue) : 
    m_blogFieldMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

ConfluenceBlogConfiguration& ConfluenceBlogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlogFieldMappings"))
  {
    Aws::Utils::Array<JsonView> blogFieldMappingsJsonList = jsonValue.GetArray("BlogFieldMappings");
    for(unsigned blogFieldMappingsIndex = 0; blogFieldMappingsIndex < blogFieldMappingsJsonList.GetLength(); ++blogFieldMappingsIndex)
    {
      m_blogFieldMappings.push_back(blogFieldMappingsJsonList[blogFieldMappingsIndex].AsObject());
    }
    m_blogFieldMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfluenceBlogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_blogFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blogFieldMappingsJsonList(m_blogFieldMappings.size());
   for(unsigned blogFieldMappingsIndex = 0; blogFieldMappingsIndex < blogFieldMappingsJsonList.GetLength(); ++blogFieldMappingsIndex)
   {
     blogFieldMappingsJsonList[blogFieldMappingsIndex].AsObject(m_blogFieldMappings[blogFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("BlogFieldMappings", std::move(blogFieldMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
