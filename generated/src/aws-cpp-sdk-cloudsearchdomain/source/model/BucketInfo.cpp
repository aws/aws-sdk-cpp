/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/model/BucketInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{

BucketInfo::BucketInfo() : 
    m_bucketsHasBeenSet(false)
{
}

BucketInfo::BucketInfo(JsonView jsonValue) : 
    m_bucketsHasBeenSet(false)
{
  *this = jsonValue;
}

BucketInfo& BucketInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("buckets"))
  {
    Aws::Utils::Array<JsonView> bucketsJsonList = jsonValue.GetArray("buckets");
    for(unsigned bucketsIndex = 0; bucketsIndex < bucketsJsonList.GetLength(); ++bucketsIndex)
    {
      m_buckets.push_back(bucketsJsonList[bucketsIndex].AsObject());
    }
    m_bucketsHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketInfo::Jsonize() const
{
  JsonValue payload;

  if(m_bucketsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bucketsJsonList(m_buckets.size());
   for(unsigned bucketsIndex = 0; bucketsIndex < bucketsJsonList.GetLength(); ++bucketsIndex)
   {
     bucketsJsonList[bucketsIndex].AsObject(m_buckets[bucketsIndex].Jsonize());
   }
   payload.WithArray("buckets", std::move(bucketsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
