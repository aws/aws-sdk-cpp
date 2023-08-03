/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/SCApplicationAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

SCApplicationAttributes::SCApplicationAttributes() : 
    m_s3BucketPathHasBeenSet(false),
    m_s3BucketRoleArnHasBeenSet(false)
{
}

SCApplicationAttributes::SCApplicationAttributes(JsonView jsonValue) : 
    m_s3BucketPathHasBeenSet(false),
    m_s3BucketRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

SCApplicationAttributes& SCApplicationAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3BucketPath"))
  {
    m_s3BucketPath = jsonValue.GetString("S3BucketPath");

    m_s3BucketPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketRoleArn"))
  {
    m_s3BucketRoleArn = jsonValue.GetString("S3BucketRoleArn");

    m_s3BucketRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SCApplicationAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketPathHasBeenSet)
  {
   payload.WithString("S3BucketPath", m_s3BucketPath);

  }

  if(m_s3BucketRoleArnHasBeenSet)
  {
   payload.WithString("S3BucketRoleArn", m_s3BucketRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
