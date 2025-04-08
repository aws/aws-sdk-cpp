/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/BidirectionalInputPayloadPart.h>
#include <utility>
#include <aws/core/utils/event/EventStream.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Payload content, the speech chunk, for the bidirectional input of the
   * invocation step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/InvokeModelWithBidirectionalStreamInput">AWS
   * API Reference</a></p>
   */
  class AWS_BEDROCKRUNTIME_API InvokeModelWithBidirectionalStreamInput : public Aws::Utils::Event::EventEncoderStream
  {
  public:
    InvokeModelWithBidirectionalStreamInput& WriteBidirectionalInputPayloadPart(const BidirectionalInputPayloadPart& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("chunk"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }

  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
