/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/PackageSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

PackageSource::PackageSource() : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
}

PackageSource::PackageSource(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
  *this = jsonValue;
}

PackageSource& PackageSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Key"))
  {
    m_s3Key = jsonValue.GetString("S3Key");

    m_s3KeyHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("S3Key", m_s3Key);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
