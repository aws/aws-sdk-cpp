/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/S3ManifestConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

S3ManifestConfig::S3ManifestConfig() : 
    m_manifestObjectPathHasBeenSet(false),
    m_bucketAccessRoleArnHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_manifestObjectVersionIdHasBeenSet(false)
{
}

S3ManifestConfig::S3ManifestConfig(JsonView jsonValue) : 
    m_manifestObjectPathHasBeenSet(false),
    m_bucketAccessRoleArnHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_manifestObjectVersionIdHasBeenSet(false)
{
  *this = jsonValue;
}

S3ManifestConfig& S3ManifestConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestObjectPath"))
  {
    m_manifestObjectPath = jsonValue.GetString("ManifestObjectPath");

    m_manifestObjectPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketAccessRoleArn"))
  {
    m_bucketAccessRoleArn = jsonValue.GetString("BucketAccessRoleArn");

    m_bucketAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketArn"))
  {
    m_s3BucketArn = jsonValue.GetString("S3BucketArn");

    m_s3BucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManifestObjectVersionId"))
  {
    m_manifestObjectVersionId = jsonValue.GetString("ManifestObjectVersionId");

    m_manifestObjectVersionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ManifestConfig::Jsonize() const
{
  JsonValue payload;

  if(m_manifestObjectPathHasBeenSet)
  {
   payload.WithString("ManifestObjectPath", m_manifestObjectPath);

  }

  if(m_bucketAccessRoleArnHasBeenSet)
  {
   payload.WithString("BucketAccessRoleArn", m_bucketAccessRoleArn);

  }

  if(m_s3BucketArnHasBeenSet)
  {
   payload.WithString("S3BucketArn", m_s3BucketArn);

  }

  if(m_manifestObjectVersionIdHasBeenSet)
  {
   payload.WithString("ManifestObjectVersionId", m_manifestObjectVersionId);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
