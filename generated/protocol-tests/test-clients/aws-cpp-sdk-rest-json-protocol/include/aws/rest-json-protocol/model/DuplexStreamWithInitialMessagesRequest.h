/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/DuplexStreamWithInitialMessagesHandler.h>
#include <aws/rest-json-protocol/model/EventStream.h>

#include <memory>
#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class DuplexStreamWithInitialMessagesRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API DuplexStreamWithInitialMessagesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DuplexStreamWithInitialMessages"; }

  inline virtual bool IsEventStreamRequest() const override { return true; }
  inline virtual bool HasEventStreamResponse() const override { return true; }
  // SerializePayload will not be invoked.
  // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override { return {}; }
  AWS_RESTJSONPROTOCOL_API std::shared_ptr<Aws::IOStream> GetBody() const override;
  AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Underlying Event Stream Decoder.
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline DuplexStreamWithInitialMessagesHandler& GetEventStreamHandler() { return m_handler; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline void SetEventStreamHandler(const DuplexStreamWithInitialMessagesHandler& value) {
    m_handler = value;
    m_decoder.ResetEventStreamHandler(&m_handler);
  }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline DuplexStreamWithInitialMessagesRequest& WithEventStreamHandler(const DuplexStreamWithInitialMessagesHandler& value) {
    SetEventStreamHandler(value);
    return *this;
  }

  ///@{

  inline const Aws::String& GetInitialRequestMember() const { return m_initialRequestMember; }
  inline bool InitialRequestMemberHasBeenSet() const { return m_initialRequestMemberHasBeenSet; }
  template <typename InitialRequestMemberT = Aws::String>
  void SetInitialRequestMember(InitialRequestMemberT&& value) {
    m_initialRequestMemberHasBeenSet = true;
    m_initialRequestMember = std::forward<InitialRequestMemberT>(value);
  }
  template <typename InitialRequestMemberT = Aws::String>
  DuplexStreamWithInitialMessagesRequest& WithInitialRequestMember(InitialRequestMemberT&& value) {
    SetInitialRequestMember(std::forward<InitialRequestMemberT>(value));
    return *this;
  }
  ///@}

  ///@{

  AWS_RESTJSONPROTOCOL_API std::shared_ptr<EventStream> GetStream() const { return m_stream; }
  AWS_RESTJSONPROTOCOL_API void SetStream(const std::shared_ptr<EventStream>& value) {
    m_streamHasBeenSet = true;
    m_stream = value;
  }
  AWS_RESTJSONPROTOCOL_API DuplexStreamWithInitialMessagesRequest& WithStream(const std::shared_ptr<EventStream>& value) {
    SetStream(value);
    return *this;
  }

  ///@}
 private:
  Aws::String m_initialRequestMember;

  std::shared_ptr<EventStream> m_stream;
  DuplexStreamWithInitialMessagesHandler m_handler;
  Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  bool m_initialRequestMemberHasBeenSet = false;
  bool m_streamHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
