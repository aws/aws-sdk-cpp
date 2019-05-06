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

#include <aws/transcribestreaming/model/TranscriptResultStream.h>
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

TranscriptResultStream::TranscriptResultStream() : 
    m_transcriptEventHasBeenSet(false),
    m_badRequestExceptionHasBeenSet(false),
    m_limitExceededExceptionHasBeenSet(false),
    m_internalFailureExceptionHasBeenSet(false),
    m_conflictExceptionHasBeenSet(false)
{
}

TranscriptResultStream::TranscriptResultStream(JsonView jsonValue) : 
    m_transcriptEventHasBeenSet(false),
    m_badRequestExceptionHasBeenSet(false),
    m_limitExceededExceptionHasBeenSet(false),
    m_internalFailureExceptionHasBeenSet(false),
    m_conflictExceptionHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptResultStream& TranscriptResultStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TranscriptEvent"))
  {
    m_transcriptEvent = jsonValue.GetObject("TranscriptEvent");

    m_transcriptEventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BadRequestException"))
  {
    m_badRequestException = jsonValue.GetObject("BadRequestException");

    m_badRequestExceptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LimitExceededException"))
  {
    m_limitExceededException = jsonValue.GetObject("LimitExceededException");

    m_limitExceededExceptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InternalFailureException"))
  {
    m_internalFailureException = jsonValue.GetObject("InternalFailureException");

    m_internalFailureExceptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConflictException"))
  {
    m_conflictException = jsonValue.GetObject("ConflictException");

    m_conflictExceptionHasBeenSet = true;
  }

  return *this;
}

JsonValue TranscriptResultStream::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptEventHasBeenSet)
  {
   payload.WithObject("TranscriptEvent", m_transcriptEvent.Jsonize());

  }

  if(m_badRequestExceptionHasBeenSet)
  {
   payload.WithObject("BadRequestException", m_badRequestException.Jsonize());

  }

  if(m_limitExceededExceptionHasBeenSet)
  {
   payload.WithObject("LimitExceededException", m_limitExceededException.Jsonize());

  }

  if(m_internalFailureExceptionHasBeenSet)
  {
   payload.WithObject("InternalFailureException", m_internalFailureException.Jsonize());

  }

  if(m_conflictExceptionHasBeenSet)
  {
   payload.WithObject("ConflictException", m_conflictException.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
