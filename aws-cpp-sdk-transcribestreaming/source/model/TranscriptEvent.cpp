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

#include <aws/transcribestreaming/model/TranscriptEvent.h>
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

TranscriptEvent::TranscriptEvent() : 
    m_transcriptHasBeenSet(false)
{
}

TranscriptEvent::TranscriptEvent(JsonView jsonValue) : 
    m_transcriptHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptEvent& TranscriptEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Transcript"))
  {
    m_transcript = jsonValue.GetObject("Transcript");

    m_transcriptHasBeenSet = true;
  }

  return *this;
}

JsonValue TranscriptEvent::Jsonize() const
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
