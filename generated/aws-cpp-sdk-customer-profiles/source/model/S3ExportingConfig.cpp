/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/S3ExportingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

S3ExportingConfig::S3ExportingConfig() : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyNameHasBeenSet(false)
{
}

S3ExportingConfig::S3ExportingConfig(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyNameHasBeenSet(false)
{
  *this = jsonValue;
}

S3ExportingConfig& S3ExportingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KeyName"))
  {
    m_s3KeyName = jsonValue.GetString("S3KeyName");

    m_s3KeyNameHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ExportingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3KeyNameHasBeenSet)
  {
   payload.WithString("S3KeyName", m_s3KeyName);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
