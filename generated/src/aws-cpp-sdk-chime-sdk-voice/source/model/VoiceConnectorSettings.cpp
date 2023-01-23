/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/VoiceConnectorSettings.h>
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

VoiceConnectorSettings::VoiceConnectorSettings() : 
    m_cdrBucketHasBeenSet(false)
{
}

VoiceConnectorSettings::VoiceConnectorSettings(JsonView jsonValue) : 
    m_cdrBucketHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceConnectorSettings& VoiceConnectorSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CdrBucket"))
  {
    m_cdrBucket = jsonValue.GetString("CdrBucket");

    m_cdrBucketHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceConnectorSettings::Jsonize() const
{
  JsonValue payload;

  if(m_cdrBucketHasBeenSet)
  {
   payload.WithString("CdrBucket", m_cdrBucket);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
