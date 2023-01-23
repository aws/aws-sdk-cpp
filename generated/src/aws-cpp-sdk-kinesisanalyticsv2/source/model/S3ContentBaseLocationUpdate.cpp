/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/S3ContentBaseLocationUpdate.h>
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

S3ContentBaseLocationUpdate::S3ContentBaseLocationUpdate() : 
    m_bucketARNUpdateHasBeenSet(false),
    m_basePathUpdateHasBeenSet(false)
{
}

S3ContentBaseLocationUpdate::S3ContentBaseLocationUpdate(JsonView jsonValue) : 
    m_bucketARNUpdateHasBeenSet(false),
    m_basePathUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

S3ContentBaseLocationUpdate& S3ContentBaseLocationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketARNUpdate"))
  {
    m_bucketARNUpdate = jsonValue.GetString("BucketARNUpdate");

    m_bucketARNUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BasePathUpdate"))
  {
    m_basePathUpdate = jsonValue.GetString("BasePathUpdate");

    m_basePathUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ContentBaseLocationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_bucketARNUpdateHasBeenSet)
  {
   payload.WithString("BucketARNUpdate", m_bucketARNUpdate);

  }

  if(m_basePathUpdateHasBeenSet)
  {
   payload.WithString("BasePathUpdate", m_basePathUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
