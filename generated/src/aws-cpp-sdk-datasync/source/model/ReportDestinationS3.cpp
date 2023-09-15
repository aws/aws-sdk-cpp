/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ReportDestinationS3.h>
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

ReportDestinationS3::ReportDestinationS3() : 
    m_subdirectoryHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_bucketAccessRoleArnHasBeenSet(false)
{
}

ReportDestinationS3::ReportDestinationS3(JsonView jsonValue) : 
    m_subdirectoryHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_bucketAccessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

ReportDestinationS3& ReportDestinationS3::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Subdirectory"))
  {
    m_subdirectory = jsonValue.GetString("Subdirectory");

    m_subdirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketArn"))
  {
    m_s3BucketArn = jsonValue.GetString("S3BucketArn");

    m_s3BucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketAccessRoleArn"))
  {
    m_bucketAccessRoleArn = jsonValue.GetString("BucketAccessRoleArn");

    m_bucketAccessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportDestinationS3::Jsonize() const
{
  JsonValue payload;

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

  }

  if(m_s3BucketArnHasBeenSet)
  {
   payload.WithString("S3BucketArn", m_s3BucketArn);

  }

  if(m_bucketAccessRoleArnHasBeenSet)
  {
   payload.WithString("BucketAccessRoleArn", m_bucketAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
