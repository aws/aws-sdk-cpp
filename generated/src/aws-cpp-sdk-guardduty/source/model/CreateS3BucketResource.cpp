/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CreateS3BucketResource.h>
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

CreateS3BucketResource::CreateS3BucketResource(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateS3BucketResource& CreateS3BucketResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");
    m_bucketNameHasBeenSet = true;
  }
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

JsonValue CreateS3BucketResource::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

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
