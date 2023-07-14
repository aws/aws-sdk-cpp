/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsLambdaFunctionCode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsLambdaFunctionCode::AwsLambdaFunctionCode() : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_s3ObjectVersionHasBeenSet(false),
    m_zipFileHasBeenSet(false)
{
}

AwsLambdaFunctionCode::AwsLambdaFunctionCode(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_s3ObjectVersionHasBeenSet(false),
    m_zipFileHasBeenSet(false)
{
  *this = jsonValue;
}

AwsLambdaFunctionCode& AwsLambdaFunctionCode::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("S3ObjectVersion"))
  {
    m_s3ObjectVersion = jsonValue.GetString("S3ObjectVersion");

    m_s3ObjectVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZipFile"))
  {
    m_zipFile = jsonValue.GetString("ZipFile");

    m_zipFileHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsLambdaFunctionCode::Jsonize() const
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

  if(m_s3ObjectVersionHasBeenSet)
  {
   payload.WithString("S3ObjectVersion", m_s3ObjectVersion);

  }

  if(m_zipFileHasBeenSet)
  {
   payload.WithString("ZipFile", m_zipFile);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
