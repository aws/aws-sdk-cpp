/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/OutputStreamWithInitialResponseHandler.h>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class OutputStreamWithInitialResponseRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API OutputStreamWithInitialResponseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "OutputStreamWithInitialResponse"; }

  inline virtual bool HasEventStreamResponse() const override { return true; }
  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  /**
   * Underlying Event Stream Decoder.
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline OutputStreamWithInitialResponseHandler& GetEventStreamHandler() { return m_handler; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline void SetEventStreamHandler(const OutputStreamWithInitialResponseHandler& value) {
    m_handler = value;
    m_decoder.ResetEventStreamHandler(&m_handler);
  }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline OutputStreamWithInitialResponseRequest& WithEventStreamHandler(const OutputStreamWithInitialResponseHandler& value) {
    SetEventStreamHandler(value);
    return *this;
  }

 private:
  OutputStreamWithInitialResponseHandler m_handler;
  Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
