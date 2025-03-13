/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UpdateS3BucketResource.h>
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

UpdateS3BucketResource::UpdateS3BucketResource(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateS3BucketResource& UpdateS3BucketResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("objectPrefixes"))
  {
    Aws::Utils::Array<JsonView> objectPrefixesJsonList = jsonValue.GetArray("objectPrefixes");
    for(unsigned objectPrefixesIndex = 0; objectPrefixesIndex < objectPrefixesJsonList.GetLength(); ++objectPrefixesIndex)
    {
      m_objectPrefixes.push_back(objectPrefixesJsonList[objectPrefixesIndex].AsString());
    }
    m_objectPrefixesHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateS3BucketResource::Jsonize() const
{
  JsonValue payload;

  if(m_objectPrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectPrefixesJsonList(m_objectPrefixes.size());
   for(unsigned objectPrefixesIndex = 0; objectPrefixesIndex < objectPrefixesJsonList.GetLength(); ++objectPrefixesIndex)
   {
     objectPrefixesJsonList[objectPrefixesIndex].AsString(m_objectPrefixes[objectPrefixesIndex]);
   }
   payload.WithArray("objectPrefixes", std::move(objectPrefixesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
