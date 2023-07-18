/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/Speaker.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

Speaker::Speaker() : 
    m_createdAtHasBeenSet(false),
    m_customerSpeakerIdHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_generatedSpeakerIdHasBeenSet(false),
    m_lastAccessedAtHasBeenSet(false),
    m_status(SpeakerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Speaker::Speaker(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_customerSpeakerIdHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_generatedSpeakerIdHasBeenSet(false),
    m_lastAccessedAtHasBeenSet(false),
    m_status(SpeakerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Speaker& Speaker::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerSpeakerId"))
  {
    m_customerSpeakerId = jsonValue.GetString("CustomerSpeakerId");

    m_customerSpeakerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneratedSpeakerId"))
  {
    m_generatedSpeakerId = jsonValue.GetString("GeneratedSpeakerId");

    m_generatedSpeakerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAccessedAt"))
  {
    m_lastAccessedAt = jsonValue.GetDouble("LastAccessedAt");

    m_lastAccessedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SpeakerStatusMapper::GetSpeakerStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Speaker::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_customerSpeakerIdHasBeenSet)
  {
   payload.WithString("CustomerSpeakerId", m_customerSpeakerId);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_generatedSpeakerIdHasBeenSet)
  {
   payload.WithString("GeneratedSpeakerId", m_generatedSpeakerId);

  }

  if(m_lastAccessedAtHasBeenSet)
  {
   payload.WithDouble("LastAccessedAt", m_lastAccessedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SpeakerStatusMapper::GetNameForSpeakerStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
