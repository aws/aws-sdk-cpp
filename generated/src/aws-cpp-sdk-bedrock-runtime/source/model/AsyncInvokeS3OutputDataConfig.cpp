/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/AsyncInvokeS3OutputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

AsyncInvokeS3OutputDataConfig::AsyncInvokeS3OutputDataConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AsyncInvokeS3OutputDataConfig& AsyncInvokeS3OutputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Uri"))
  {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucketOwner"))
  {
    m_bucketOwner = jsonValue.GetString("bucketOwner");
    m_bucketOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue AsyncInvokeS3OutputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_bucketOwnerHasBeenSet)
  {
   payload.WithString("bucketOwner", m_bucketOwner);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
