/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/InvokeResponseStreamUpdate.h>
#include <aws/lambda/model/InvokeWithResponseStreamCompleteEvent.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>An object that includes a chunk of the response payload. When the stream has
   * ended, Lambda includes a <code>InvokeComplete</code> object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/InvokeWithResponseStreamResponseEvent">AWS
   * API Reference</a></p>
   */
  class InvokeWithResponseStreamResponseEvent
  {
  public:
    AWS_LAMBDA_API InvokeWithResponseStreamResponseEvent() = default;
    AWS_LAMBDA_API InvokeWithResponseStreamResponseEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API InvokeWithResponseStreamResponseEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A chunk of the streamed response payload.</p>
     */
    inline const InvokeResponseStreamUpdate& GetPayloadChunk() const { return m_payloadChunk; }
    inline bool PayloadChunkHasBeenSet() const { return m_payloadChunkHasBeenSet; }
    template<typename PayloadChunkT = InvokeResponseStreamUpdate>
    void SetPayloadChunk(PayloadChunkT&& value) { m_payloadChunkHasBeenSet = true; m_payloadChunk = std::forward<PayloadChunkT>(value); }
    template<typename PayloadChunkT = InvokeResponseStreamUpdate>
    InvokeWithResponseStreamResponseEvent& WithPayloadChunk(PayloadChunkT&& value) { SetPayloadChunk(std::forward<PayloadChunkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that's returned when the stream has ended and all the payload
     * chunks have been returned.</p>
     */
    inline const InvokeWithResponseStreamCompleteEvent& GetInvokeComplete() const { return m_invokeComplete; }
    inline bool InvokeCompleteHasBeenSet() const { return m_invokeCompleteHasBeenSet; }
    template<typename InvokeCompleteT = InvokeWithResponseStreamCompleteEvent>
    void SetInvokeComplete(InvokeCompleteT&& value) { m_invokeCompleteHasBeenSet = true; m_invokeComplete = std::forward<InvokeCompleteT>(value); }
    template<typename InvokeCompleteT = InvokeWithResponseStreamCompleteEvent>
    InvokeWithResponseStreamResponseEvent& WithInvokeComplete(InvokeCompleteT&& value) { SetInvokeComplete(std::forward<InvokeCompleteT>(value)); return *this;}
    ///@}
  private:

    InvokeResponseStreamUpdate m_payloadChunk;
    bool m_payloadChunkHasBeenSet = false;

    InvokeWithResponseStreamCompleteEvent m_invokeComplete;
    bool m_invokeCompleteHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
