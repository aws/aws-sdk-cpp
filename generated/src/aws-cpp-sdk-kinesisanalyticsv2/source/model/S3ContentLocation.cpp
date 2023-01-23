/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/S3ContentLocation.h>
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

S3ContentLocation::S3ContentLocation() : 
    m_bucketARNHasBeenSet(false),
    m_fileKeyHasBeenSet(false),
    m_objectVersionHasBeenSet(false)
{
}

S3ContentLocation::S3ContentLocation(JsonView jsonValue) : 
    m_bucketARNHasBeenSet(false),
    m_fileKeyHasBeenSet(false),
    m_objectVersionHasBeenSet(false)
{
  *this = jsonValue;
}

S3ContentLocation& S3ContentLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketARN"))
  {
    m_bucketARN = jsonValue.GetString("BucketARN");

    m_bucketARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileKey"))
  {
    m_fileKey = jsonValue.GetString("FileKey");

    m_fileKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectVersion"))
  {
    m_objectVersion = jsonValue.GetString("ObjectVersion");

    m_objectVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ContentLocation::Jsonize() const
{
  JsonValue payload;

  if(m_bucketARNHasBeenSet)
  {
   payload.WithString("BucketARN", m_bucketARN);

  }

  if(m_fileKeyHasBeenSet)
  {
   payload.WithString("FileKey", m_fileKey);

  }

  if(m_objectVersionHasBeenSet)
  {
   payload.WithString("ObjectVersion", m_objectVersion);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
