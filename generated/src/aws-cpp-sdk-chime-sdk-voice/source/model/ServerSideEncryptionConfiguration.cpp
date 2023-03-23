/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ServerSideEncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

ServerSideEncryptionConfiguration::ServerSideEncryptionConfiguration() : 
    m_kmsKeyArnHasBeenSet(false)
{
}

ServerSideEncryptionConfiguration::ServerSideEncryptionConfiguration(JsonView jsonValue) : 
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

ServerSideEncryptionConfiguration& ServerSideEncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerSideEncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
