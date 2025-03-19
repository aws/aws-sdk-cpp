/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelInvocationJobS3OutputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

ModelInvocationJobS3OutputDataConfig::ModelInvocationJobS3OutputDataConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelInvocationJobS3OutputDataConfig& ModelInvocationJobS3OutputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Uri"))
  {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3EncryptionKeyId"))
  {
    m_s3EncryptionKeyId = jsonValue.GetString("s3EncryptionKeyId");
    m_s3EncryptionKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3BucketOwner"))
  {
    m_s3BucketOwner = jsonValue.GetString("s3BucketOwner");
    m_s3BucketOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelInvocationJobS3OutputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

  }

  if(m_s3EncryptionKeyIdHasBeenSet)
  {
   payload.WithString("s3EncryptionKeyId", m_s3EncryptionKeyId);

  }

  if(m_s3BucketOwnerHasBeenSet)
  {
   payload.WithString("s3BucketOwner", m_s3BucketOwner);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
