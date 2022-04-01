/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/S3BucketConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

S3BucketConfiguration::S3BucketConfiguration() : 
    m_accessPointsHasBeenSet(false),
    m_bucketAclGrantsHasBeenSet(false),
    m_bucketPolicyHasBeenSet(false),
    m_bucketPublicAccessBlockHasBeenSet(false)
{
}

S3BucketConfiguration::S3BucketConfiguration(JsonView jsonValue) : 
    m_accessPointsHasBeenSet(false),
    m_bucketAclGrantsHasBeenSet(false),
    m_bucketPolicyHasBeenSet(false),
    m_bucketPublicAccessBlockHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketConfiguration& S3BucketConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessPoints"))
  {
    Aws::Map<Aws::String, JsonView> accessPointsJsonMap = jsonValue.GetObject("accessPoints").GetAllObjects();
    for(auto& accessPointsItem : accessPointsJsonMap)
    {
      m_accessPoints[accessPointsItem.first] = accessPointsItem.second.AsObject();
    }
    m_accessPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketAclGrants"))
  {
    Array<JsonView> bucketAclGrantsJsonList = jsonValue.GetArray("bucketAclGrants");
    for(unsigned bucketAclGrantsIndex = 0; bucketAclGrantsIndex < bucketAclGrantsJsonList.GetLength(); ++bucketAclGrantsIndex)
    {
      m_bucketAclGrants.push_back(bucketAclGrantsJsonList[bucketAclGrantsIndex].AsObject());
    }
    m_bucketAclGrantsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketPolicy"))
  {
    m_bucketPolicy = jsonValue.GetString("bucketPolicy");

    m_bucketPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketPublicAccessBlock"))
  {
    m_bucketPublicAccessBlock = jsonValue.GetObject("bucketPublicAccessBlock");

    m_bucketPublicAccessBlockHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accessPointsHasBeenSet)
  {
   JsonValue accessPointsJsonMap;
   for(auto& accessPointsItem : m_accessPoints)
   {
     accessPointsJsonMap.WithObject(accessPointsItem.first, accessPointsItem.second.Jsonize());
   }
   payload.WithObject("accessPoints", std::move(accessPointsJsonMap));

  }

  if(m_bucketAclGrantsHasBeenSet)
  {
   Array<JsonValue> bucketAclGrantsJsonList(m_bucketAclGrants.size());
   for(unsigned bucketAclGrantsIndex = 0; bucketAclGrantsIndex < bucketAclGrantsJsonList.GetLength(); ++bucketAclGrantsIndex)
   {
     bucketAclGrantsJsonList[bucketAclGrantsIndex].AsObject(m_bucketAclGrants[bucketAclGrantsIndex].Jsonize());
   }
   payload.WithArray("bucketAclGrants", std::move(bucketAclGrantsJsonList));

  }

  if(m_bucketPolicyHasBeenSet)
  {
   payload.WithString("bucketPolicy", m_bucketPolicy);

  }

  if(m_bucketPublicAccessBlockHasBeenSet)
  {
   payload.WithObject("bucketPublicAccessBlock", m_bucketPublicAccessBlock.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
