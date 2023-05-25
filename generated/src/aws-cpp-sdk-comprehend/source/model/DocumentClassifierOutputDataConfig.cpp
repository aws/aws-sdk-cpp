/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentClassifierOutputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DocumentClassifierOutputDataConfig::DocumentClassifierOutputDataConfig() : 
    m_s3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_flywheelStatsS3PrefixHasBeenSet(false)
{
}

DocumentClassifierOutputDataConfig::DocumentClassifierOutputDataConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_flywheelStatsS3PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentClassifierOutputDataConfig& DocumentClassifierOutputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlywheelStatsS3Prefix"))
  {
    m_flywheelStatsS3Prefix = jsonValue.GetString("FlywheelStatsS3Prefix");

    m_flywheelStatsS3PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentClassifierOutputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_flywheelStatsS3PrefixHasBeenSet)
  {
   payload.WithString("FlywheelStatsS3Prefix", m_flywheelStatsS3Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
