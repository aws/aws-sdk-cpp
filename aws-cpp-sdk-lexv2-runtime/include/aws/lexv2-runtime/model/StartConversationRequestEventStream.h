/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/ConfigurationEvent.h>
#include <aws/lexv2-runtime/model/AudioInputEvent.h>
#include <aws/lexv2-runtime/model/DTMFInputEvent.h>
#include <aws/lexv2-runtime/model/TextInputEvent.h>
#include <aws/lexv2-runtime/model/PlaybackCompletionEvent.h>
#include <aws/lexv2-runtime/model/DisconnectionEvent.h>
#include <utility>
#include <aws/core/utils/event/EventStream.h>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>Represents a stream of events between your application and Amazon Lex
   * V2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/StartConversationRequestEventStream">AWS
   * API Reference</a></p>
   */
  class AWS_LEXRUNTIMEV2_API StartConversationRequestEventStream : public Aws::Utils::Event::EventEncoderStream
  {
  public:
    StartConversationRequestEventStream& WriteConfigurationEvent(const ConfigurationEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("ConfigurationEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }
    StartConversationRequestEventStream& WriteAudioInputEvent(const AudioInputEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("AudioInputEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }
    StartConversationRequestEventStream& WriteDTMFInputEvent(const DTMFInputEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("DTMFInputEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }
    StartConversationRequestEventStream& WriteTextInputEvent(const TextInputEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("TextInputEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }
    StartConversationRequestEventStream& WritePlaybackCompletionEvent(const PlaybackCompletionEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("PlaybackCompletionEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }
    StartConversationRequestEventStream& WriteDisconnectionEvent(const DisconnectionEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("DisconnectionEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }

  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
