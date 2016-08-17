/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

BucketInfo::BucketInfo(const JsonValue& jsonValue) : 
    m_bucketsHasBeenSet(false)
{
  *this = jsonValue;
}

BucketInfo& BucketInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("buckets"))
  {
    Array<JsonValue> bucketsJsonList = jsonValue.GetArray("buckets");
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
   Array<JsonValue> bucketsJsonList(m_buckets.size());
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