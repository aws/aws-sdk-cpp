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

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/AudioEvent.h>
#include <utility>
#include <aws/core/utils/event/EventStream.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Represents the audio stream from your application to Amazon
   * Transcribe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/AudioStream">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API AudioStream : public Aws::Utils::Event::EventEncoderStream
  {
  public:
    AudioStream& WriteAudioEvent(const AudioEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("AudioEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/octet-stream"));
       msg.WriteEventPayload(value.GetAudioChunk());
       WriteEvent(msg);
       return *this;
    }

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
