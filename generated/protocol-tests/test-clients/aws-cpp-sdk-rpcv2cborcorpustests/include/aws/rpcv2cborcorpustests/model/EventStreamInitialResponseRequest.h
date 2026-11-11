/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTestsRequest.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>
#include <aws/rpcv2cborcorpustests/model/EventStreamInitialResponseHandler.h>

namespace Aws {
namespace RpcV2CborCorpusTests {
namespace Model {

/**
 */
class EventStreamInitialResponseRequest : public RpcV2CborCorpusTestsRequest {
 public:
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamInitialResponseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "EventStreamInitialResponse"; }

  inline virtual bool HasEventStreamResponse() const override { return true; }
  AWS_RPCV2CBORCORPUSTESTS_API Aws::String SerializePayload() const override;

  AWS_RPCV2CBORCORPUSTESTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Underlying Event Stream Decoder.
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline EventStreamInitialResponseHandler& GetEventStreamHandler() { return m_handler; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline void SetEventStreamHandler(const EventStreamInitialResponseHandler& value) {
    m_handler = value;
    m_decoder.ResetEventStreamHandler(&m_handler);
  }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline EventStreamInitialResponseRequest& WithEventStreamHandler(const EventStreamInitialResponseHandler& value) {
    SetEventStreamHandler(value);
    return *this;
  }

 private:
  EventStreamInitialResponseHandler m_handler;
  Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};
};

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
