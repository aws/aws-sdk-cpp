/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/S3ImportSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

S3ImportSource::S3ImportSource() : 
    m_s3LocationUriHasBeenSet(false),
    m_s3BucketRegionHasBeenSet(false),
    m_s3BucketAccessRoleArnHasBeenSet(false)
{
}

S3ImportSource::S3ImportSource(JsonView jsonValue) : 
    m_s3LocationUriHasBeenSet(false),
    m_s3BucketRegionHasBeenSet(false),
    m_s3BucketAccessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3ImportSource& S3ImportSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3LocationUri"))
  {
    m_s3LocationUri = jsonValue.GetString("S3LocationUri");

    m_s3LocationUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketRegion"))
  {
    m_s3BucketRegion = jsonValue.GetString("S3BucketRegion");

    m_s3BucketRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketAccessRoleArn"))
  {
    m_s3BucketAccessRoleArn = jsonValue.GetString("S3BucketAccessRoleArn");

    m_s3BucketAccessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ImportSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3LocationUriHasBeenSet)
  {
   payload.WithString("S3LocationUri", m_s3LocationUri);

  }

  if(m_s3BucketRegionHasBeenSet)
  {
   payload.WithString("S3BucketRegion", m_s3BucketRegion);

  }

  if(m_s3BucketAccessRoleArnHasBeenSet)
  {
   payload.WithString("S3BucketAccessRoleArn", m_s3BucketAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
