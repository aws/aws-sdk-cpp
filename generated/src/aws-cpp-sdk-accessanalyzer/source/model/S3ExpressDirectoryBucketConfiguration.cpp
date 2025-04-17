/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/S3ExpressDirectoryBucketConfiguration.h>
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

S3ExpressDirectoryBucketConfiguration::S3ExpressDirectoryBucketConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

S3ExpressDirectoryBucketConfiguration& S3ExpressDirectoryBucketConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketPolicy"))
  {
    m_bucketPolicy = jsonValue.GetString("bucketPolicy");
    m_bucketPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessPoints"))
  {
    Aws::Map<Aws::String, JsonView> accessPointsJsonMap = jsonValue.GetObject("accessPoints").GetAllObjects();
    for(auto& accessPointsItem : accessPointsJsonMap)
    {
      m_accessPoints[accessPointsItem.first] = accessPointsItem.second.AsObject();
    }
    m_accessPointsHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ExpressDirectoryBucketConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketPolicyHasBeenSet)
  {
   payload.WithString("bucketPolicy", m_bucketPolicy);

  }

  if(m_accessPointsHasBeenSet)
  {
   JsonValue accessPointsJsonMap;
   for(auto& accessPointsItem : m_accessPoints)
   {
     accessPointsJsonMap.WithObject(accessPointsItem.first, accessPointsItem.second.Jsonize());
   }
   payload.WithObject("accessPoints", std::move(accessPointsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
