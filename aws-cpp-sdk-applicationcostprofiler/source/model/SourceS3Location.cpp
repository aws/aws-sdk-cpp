/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/SourceS3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationCostProfiler
{
namespace Model
{

SourceS3Location::SourceS3Location() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_region(S3BucketRegion::NOT_SET),
    m_regionHasBeenSet(false)
{
}

SourceS3Location::SourceS3Location(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_region(S3BucketRegion::NOT_SET),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

SourceS3Location& SourceS3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = S3BucketRegionMapper::GetS3BucketRegionForName(jsonValue.GetString("region"));

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceS3Location::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", S3BucketRegionMapper::GetNameForS3BucketRegion(m_region));
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
