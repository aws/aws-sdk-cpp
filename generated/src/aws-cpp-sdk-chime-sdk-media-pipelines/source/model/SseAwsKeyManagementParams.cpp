/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/SseAwsKeyManagementParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

SseAwsKeyManagementParams::SseAwsKeyManagementParams(JsonView jsonValue)
{
  *this = jsonValue;
}

SseAwsKeyManagementParams& SseAwsKeyManagementParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsKmsKeyId"))
  {
    m_awsKmsKeyId = jsonValue.GetString("AwsKmsKeyId");
    m_awsKmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AwsKmsEncryptionContext"))
  {
    m_awsKmsEncryptionContext = jsonValue.GetString("AwsKmsEncryptionContext");
    m_awsKmsEncryptionContextHasBeenSet = true;
  }
  return *this;
}

JsonValue SseAwsKeyManagementParams::Jsonize() const
{
  JsonValue payload;

  if(m_awsKmsKeyIdHasBeenSet)
  {
   payload.WithString("AwsKmsKeyId", m_awsKmsKeyId);

  }

  if(m_awsKmsEncryptionContextHasBeenSet)
  {
   payload.WithString("AwsKmsEncryptionContext", m_awsKmsEncryptionContext);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
