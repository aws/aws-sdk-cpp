/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalTranscriptEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

MedicalTranscriptEvent::MedicalTranscriptEvent() : 
    m_transcriptHasBeenSet(false)
{
}

MedicalTranscriptEvent::MedicalTranscriptEvent(JsonView jsonValue) : 
    m_transcriptHasBeenSet(false)
{
  *this = jsonValue;
}

MedicalTranscriptEvent& MedicalTranscriptEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Transcript"))
  {
    m_transcript = jsonValue.GetObject("Transcript");

    m_transcriptHasBeenSet = true;
  }

  return *this;
}

JsonValue MedicalTranscriptEvent::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptHasBeenSet)
  {
   payload.WithObject("Transcript", m_transcript.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
