/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/LoggingInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

LoggingInfo::LoggingInfo() : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_s3RegionHasBeenSet(false)
{
}

LoggingInfo::LoggingInfo(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_s3RegionHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingInfo& LoggingInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Region"))
  {
    m_s3Region = jsonValue.GetString("S3Region");

    m_s3RegionHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingInfo::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("S3KeyPrefix", m_s3KeyPrefix);

  }

  if(m_s3RegionHasBeenSet)
  {
   payload.WithString("S3Region", m_s3Region);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
