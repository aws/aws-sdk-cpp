/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/S3BucketSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

S3BucketSource::S3BucketSource() : 
    m_s3BucketOwnerHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
}

S3BucketSource::S3BucketSource(JsonView jsonValue) : 
    m_s3BucketOwnerHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketSource& S3BucketSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3BucketOwner"))
  {
    m_s3BucketOwner = jsonValue.GetString("S3BucketOwner");

    m_s3BucketOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketOwnerHasBeenSet)
  {
   payload.WithString("S3BucketOwner", m_s3BucketOwner);

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("S3KeyPrefix", m_s3KeyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
