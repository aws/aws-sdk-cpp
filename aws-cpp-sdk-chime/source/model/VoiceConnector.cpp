/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/VoiceConnector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

VoiceConnector::VoiceConnector() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_awsRegion(VoiceConnectorAwsRegion::NOT_SET),
    m_awsRegionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outboundHostNameHasBeenSet(false),
    m_requireEncryption(false),
    m_requireEncryptionHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_voiceConnectorArnHasBeenSet(false)
{
}

VoiceConnector::VoiceConnector(JsonView jsonValue) : 
    m_voiceConnectorIdHasBeenSet(false),
    m_awsRegion(VoiceConnectorAwsRegion::NOT_SET),
    m_awsRegionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outboundHostNameHasBeenSet(false),
    m_requireEncryption(false),
    m_requireEncryptionHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_voiceConnectorArnHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceConnector& VoiceConnector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceConnectorId"))
  {
    m_voiceConnectorId = jsonValue.GetString("VoiceConnectorId");

    m_voiceConnectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = VoiceConnectorAwsRegionMapper::GetVoiceConnectorAwsRegionForName(jsonValue.GetString("AwsRegion"));

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundHostName"))
  {
    m_outboundHostName = jsonValue.GetString("OutboundHostName");

    m_outboundHostNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequireEncryption"))
  {
    m_requireEncryption = jsonValue.GetBool("RequireEncryption");

    m_requireEncryptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("VoiceConnectorArn"))
  {
    m_voiceConnectorArn = jsonValue.GetString("VoiceConnectorArn");

    m_voiceConnectorArnHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceConnector::Jsonize() const
{
  JsonValue payload;

  if(m_voiceConnectorIdHasBeenSet)
  {
   payload.WithString("VoiceConnectorId", m_voiceConnectorId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", VoiceConnectorAwsRegionMapper::GetNameForVoiceConnectorAwsRegion(m_awsRegion));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_outboundHostNameHasBeenSet)
  {
   payload.WithString("OutboundHostName", m_outboundHostName);

  }

  if(m_requireEncryptionHasBeenSet)
  {
   payload.WithBool("RequireEncryption", m_requireEncryption);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_voiceConnectorArnHasBeenSet)
  {
   payload.WithString("VoiceConnectorArn", m_voiceConnectorArn);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
