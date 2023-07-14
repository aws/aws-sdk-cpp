/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/S3Config.h>
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

S3Config::S3Config() : 
    m_bucketAccessRoleArnHasBeenSet(false)
{
}

S3Config::S3Config(JsonView jsonValue) : 
    m_bucketAccessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3Config& S3Config::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketAccessRoleArn"))
  {
    m_bucketAccessRoleArn = jsonValue.GetString("BucketAccessRoleArn");

    m_bucketAccessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Config::Jsonize() const
{
  JsonValue payload;

  if(m_bucketAccessRoleArnHasBeenSet)
  {
   payload.WithString("BucketAccessRoleArn", m_bucketAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
