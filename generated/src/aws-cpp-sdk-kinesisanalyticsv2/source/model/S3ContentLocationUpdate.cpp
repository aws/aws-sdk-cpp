/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/S3ContentLocationUpdate.h>
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

S3ContentLocationUpdate::S3ContentLocationUpdate() : 
    m_bucketARNUpdateHasBeenSet(false),
    m_fileKeyUpdateHasBeenSet(false),
    m_objectVersionUpdateHasBeenSet(false)
{
}

S3ContentLocationUpdate::S3ContentLocationUpdate(JsonView jsonValue) : 
    m_bucketARNUpdateHasBeenSet(false),
    m_fileKeyUpdateHasBeenSet(false),
    m_objectVersionUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

S3ContentLocationUpdate& S3ContentLocationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketARNUpdate"))
  {
    m_bucketARNUpdate = jsonValue.GetString("BucketARNUpdate");

    m_bucketARNUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileKeyUpdate"))
  {
    m_fileKeyUpdate = jsonValue.GetString("FileKeyUpdate");

    m_fileKeyUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectVersionUpdate"))
  {
    m_objectVersionUpdate = jsonValue.GetString("ObjectVersionUpdate");

    m_objectVersionUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ContentLocationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_bucketARNUpdateHasBeenSet)
  {
   payload.WithString("BucketARNUpdate", m_bucketARNUpdate);

  }

  if(m_fileKeyUpdateHasBeenSet)
  {
   payload.WithString("FileKeyUpdate", m_fileKeyUpdate);

  }

  if(m_objectVersionUpdateHasBeenSet)
  {
   payload.WithString("ObjectVersionUpdate", m_objectVersionUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
