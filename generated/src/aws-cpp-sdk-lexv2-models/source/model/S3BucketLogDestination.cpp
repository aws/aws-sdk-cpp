/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/S3BucketLogDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

S3BucketLogDestination::S3BucketLogDestination() : 
    m_kmsKeyArnHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_logPrefixHasBeenSet(false)
{
}

S3BucketLogDestination::S3BucketLogDestination(JsonView jsonValue) : 
    m_kmsKeyArnHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_logPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketLogDestination& S3BucketLogDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketArn"))
  {
    m_s3BucketArn = jsonValue.GetString("s3BucketArn");

    m_s3BucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logPrefix"))
  {
    m_logPrefix = jsonValue.GetString("logPrefix");

    m_logPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketLogDestination::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_s3BucketArnHasBeenSet)
  {
   payload.WithString("s3BucketArn", m_s3BucketArn);

  }

  if(m_logPrefixHasBeenSet)
  {
   payload.WithString("logPrefix", m_logPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
