/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Resource.h>
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

Resource::Resource() : 
    m_accessKeyDetailsHasBeenSet(false),
    m_s3BucketDetailsHasBeenSet(false),
    m_instanceDetailsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_accessKeyDetailsHasBeenSet(false),
    m_s3BucketDetailsHasBeenSet(false),
    m_instanceDetailsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessKeyDetails"))
  {
    m_accessKeyDetails = jsonValue.GetObject("accessKeyDetails");

    m_accessKeyDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketDetails"))
  {
    Array<JsonView> s3BucketDetailsJsonList = jsonValue.GetArray("s3BucketDetails");
    for(unsigned s3BucketDetailsIndex = 0; s3BucketDetailsIndex < s3BucketDetailsJsonList.GetLength(); ++s3BucketDetailsIndex)
    {
      m_s3BucketDetails.push_back(s3BucketDetailsJsonList[s3BucketDetailsIndex].AsObject());
    }
    m_s3BucketDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceDetails"))
  {
    m_instanceDetails = jsonValue.GetObject("instanceDetails");

    m_instanceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyDetailsHasBeenSet)
  {
   payload.WithObject("accessKeyDetails", m_accessKeyDetails.Jsonize());

  }

  if(m_s3BucketDetailsHasBeenSet)
  {
   Array<JsonValue> s3BucketDetailsJsonList(m_s3BucketDetails.size());
   for(unsigned s3BucketDetailsIndex = 0; s3BucketDetailsIndex < s3BucketDetailsJsonList.GetLength(); ++s3BucketDetailsIndex)
   {
     s3BucketDetailsJsonList[s3BucketDetailsIndex].AsObject(m_s3BucketDetails[s3BucketDetailsIndex].Jsonize());
   }
   payload.WithArray("s3BucketDetails", std::move(s3BucketDetailsJsonList));

  }

  if(m_instanceDetailsHasBeenSet)
  {
   payload.WithObject("instanceDetails", m_instanceDetails.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
