/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
