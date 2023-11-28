/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/S3Identifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

S3Identifier::S3Identifier() : 
    m_s3BucketNameHasBeenSet(false),
    m_s3ObjectKeyHasBeenSet(false)
{
}

S3Identifier::S3Identifier(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_s3ObjectKeyHasBeenSet(false)
{
  *this = jsonValue;
}

S3Identifier& S3Identifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("s3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3ObjectKey"))
  {
    m_s3ObjectKey = jsonValue.GetString("s3ObjectKey");

    m_s3ObjectKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Identifier::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  if(m_s3ObjectKeyHasBeenSet)
  {
   payload.WithString("s3ObjectKey", m_s3ObjectKey);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
