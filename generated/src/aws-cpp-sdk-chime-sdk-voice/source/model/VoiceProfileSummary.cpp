/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/VoiceProfileSummary.h>
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

VoiceProfileSummary::VoiceProfileSummary() : 
    m_voiceProfileIdHasBeenSet(false),
    m_voiceProfileArnHasBeenSet(false),
    m_voiceProfileDomainIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_expirationTimestampHasBeenSet(false)
{
}

VoiceProfileSummary::VoiceProfileSummary(JsonView jsonValue) : 
    m_voiceProfileIdHasBeenSet(false),
    m_voiceProfileArnHasBeenSet(false),
    m_voiceProfileDomainIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_expirationTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceProfileSummary& VoiceProfileSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceProfileId"))
  {
    m_voiceProfileId = jsonValue.GetString("VoiceProfileId");

    m_voiceProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceProfileArn"))
  {
    m_voiceProfileArn = jsonValue.GetString("VoiceProfileArn");

    m_voiceProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceProfileDomainId"))
  {
    m_voiceProfileDomainId = jsonValue.GetString("VoiceProfileDomainId");

    m_voiceProfileDomainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationTimestamp"))
  {
    m_expirationTimestamp = jsonValue.GetString("ExpirationTimestamp");

    m_expirationTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceProfileSummary::Jsonize() const
{
  JsonValue payload;

  if(m_voiceProfileIdHasBeenSet)
  {
   payload.WithString("VoiceProfileId", m_voiceProfileId);

  }

  if(m_voiceProfileArnHasBeenSet)
  {
   payload.WithString("VoiceProfileArn", m_voiceProfileArn);

  }

  if(m_voiceProfileDomainIdHasBeenSet)
  {
   payload.WithString("VoiceProfileDomainId", m_voiceProfileDomainId);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_expirationTimestampHasBeenSet)
  {
   payload.WithString("ExpirationTimestamp", m_expirationTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
