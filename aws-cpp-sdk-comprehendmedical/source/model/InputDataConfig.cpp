/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/InputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

InputDataConfig::InputDataConfig() : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
}

InputDataConfig::InputDataConfig(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
  *this = jsonValue;
}

InputDataConfig& InputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Key"))
  {
    m_s3Key = jsonValue.GetString("S3Key");

    m_s3KeyHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("S3Key", m_s3Key);

  }

  return payload;
}

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
