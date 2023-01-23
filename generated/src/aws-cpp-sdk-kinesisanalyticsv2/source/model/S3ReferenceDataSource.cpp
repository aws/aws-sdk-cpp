/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/S3ReferenceDataSource.h>
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

S3ReferenceDataSource::S3ReferenceDataSource() : 
    m_bucketARNHasBeenSet(false),
    m_fileKeyHasBeenSet(false)
{
}

S3ReferenceDataSource::S3ReferenceDataSource(JsonView jsonValue) : 
    m_bucketARNHasBeenSet(false),
    m_fileKeyHasBeenSet(false)
{
  *this = jsonValue;
}

S3ReferenceDataSource& S3ReferenceDataSource::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue S3ReferenceDataSource::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
