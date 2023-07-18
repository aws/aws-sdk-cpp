/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/S3ContentBaseLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

S3ContentBaseLocation::S3ContentBaseLocation() : 
    m_bucketARNHasBeenSet(false),
    m_basePathHasBeenSet(false)
{
}

S3ContentBaseLocation::S3ContentBaseLocation(JsonView jsonValue) : 
    m_bucketARNHasBeenSet(false),
    m_basePathHasBeenSet(false)
{
  *this = jsonValue;
}

S3ContentBaseLocation& S3ContentBaseLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketARN"))
  {
    m_bucketARN = jsonValue.GetString("BucketARN");

    m_bucketARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BasePath"))
  {
    m_basePath = jsonValue.GetString("BasePath");

    m_basePathHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ContentBaseLocation::Jsonize() const
{
  JsonValue payload;

  if(m_bucketARNHasBeenSet)
  {
   payload.WithString("BucketARN", m_bucketARN);

  }

  if(m_basePathHasBeenSet)
  {
   payload.WithString("BasePath", m_basePath);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
