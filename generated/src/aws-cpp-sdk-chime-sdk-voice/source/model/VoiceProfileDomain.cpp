/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/VoiceProfileDomain.h>
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

VoiceProfileDomain::VoiceProfileDomain() : 
    m_voiceProfileDomainIdHasBeenSet(false),
    m_voiceProfileDomainArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

VoiceProfileDomain::VoiceProfileDomain(JsonView jsonValue) : 
    m_voiceProfileDomainIdHasBeenSet(false),
    m_voiceProfileDomainArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceProfileDomain& VoiceProfileDomain::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceProfileDomainId"))
  {
    m_voiceProfileDomainId = jsonValue.GetString("VoiceProfileDomainId");

    m_voiceProfileDomainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceProfileDomainArn"))
  {
    m_voiceProfileDomainArn = jsonValue.GetString("VoiceProfileDomainArn");

    m_voiceProfileDomainArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerSideEncryptionConfiguration"))
  {
    m_serverSideEncryptionConfiguration = jsonValue.GetObject("ServerSideEncryptionConfiguration");

    m_serverSideEncryptionConfigurationHasBeenSet = true;
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

  return *this;
}

JsonValue VoiceProfileDomain::Jsonize() const
{
  JsonValue payload;

  if(m_voiceProfileDomainIdHasBeenSet)
  {
   payload.WithString("VoiceProfileDomainId", m_voiceProfileDomainId);

  }

  if(m_voiceProfileDomainArnHasBeenSet)
  {
   payload.WithString("VoiceProfileDomainArn", m_voiceProfileDomainArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_serverSideEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("ServerSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
