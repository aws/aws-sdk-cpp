/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/Transcript.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

Transcript::Transcript() : 
    m_transcriptFileUriHasBeenSet(false),
    m_redactedTranscriptFileUriHasBeenSet(false)
{
}

Transcript::Transcript(JsonView jsonValue) : 
    m_transcriptFileUriHasBeenSet(false),
    m_redactedTranscriptFileUriHasBeenSet(false)
{
  *this = jsonValue;
}

Transcript& Transcript::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranscriptFileUri"))
  {
    m_transcriptFileUri = jsonValue.GetString("TranscriptFileUri");

    m_transcriptFileUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedactedTranscriptFileUri"))
  {
    m_redactedTranscriptFileUri = jsonValue.GetString("RedactedTranscriptFileUri");

    m_redactedTranscriptFileUriHasBeenSet = true;
  }

  return *this;
}

JsonValue Transcript::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptFileUriHasBeenSet)
  {
   payload.WithString("TranscriptFileUri", m_transcriptFileUri);

  }

  if(m_redactedTranscriptFileUriHasBeenSet)
  {
   payload.WithString("RedactedTranscriptFileUri", m_redactedTranscriptFileUri);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
