/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/rest-json-protocol/RestJsonProtocolErrors.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/BlobPayloadEvent.h>
#include <aws/rest-json-protocol/model/DuplexStreamInitialResponse.h>
#include <aws/rest-json-protocol/model/HeadersAndExplicitPayloadEvent.h>
#include <aws/rest-json-protocol/model/HeadersAndImplicitPayloadEvent.h>
#include <aws/rest-json-protocol/model/HeadersEvent.h>
#include <aws/rest-json-protocol/model/StringPayloadEvent.h>
#include <aws/rest-json-protocol/model/StructurePayloadEvent.h>
#include <aws/rest-json-protocol/model/UnionPayloadEvent.h>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
enum class DuplexStreamEventType {
  INITIAL_RESPONSE,
  HEADERS,
  BLOBPAYLOAD,
  STRINGPAYLOAD,
  STRUCTUREPAYLOAD,
  UNIONPAYLOAD,
  HEADERSANDEXPLICITPAYLOAD,
  HEADERSANDIMPLICITPAYLOAD,
  UNKNOWN
};

class DuplexStreamHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const DuplexStreamInitialResponse&)> DuplexStreamInitialResponseCallback;
  typedef std::function<void(const DuplexStreamInitialResponse&, const Utils::Event::InitialResponseType)>
      DuplexStreamInitialResponseCallbackEx;
  typedef std::function<void(const HeadersEvent&)> HeadersEventCallback;
  typedef std::function<void(const BlobPayloadEvent&)> BlobPayloadEventCallback;
  typedef std::function<void(const StringPayloadEvent&)> StringPayloadEventCallback;
  typedef std::function<void(const StructurePayloadEvent&)> StructurePayloadEventCallback;
  typedef std::function<void(const UnionPayloadEvent&)> UnionPayloadEventCallback;
  typedef std::function<void(const HeadersAndExplicitPayloadEvent&)> HeadersAndExplicitPayloadEventCallback;
  typedef std::function<void(const HeadersAndImplicitPayloadEvent&)> HeadersAndImplicitPayloadEventCallback;
  typedef std::function<void(const Aws::Client::AWSError<RestJsonProtocolErrors>& error)> ErrorCallback;

 public:
  AWS_RESTJSONPROTOCOL_API DuplexStreamHandler();
  AWS_RESTJSONPROTOCOL_API DuplexStreamHandler& operator=(const DuplexStreamHandler&) = default;
  AWS_RESTJSONPROTOCOL_API DuplexStreamHandler(const DuplexStreamHandler&) = default;

  AWS_RESTJSONPROTOCOL_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial DuplexStream Operation response.
   *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
   *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const DuplexStreamInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const DuplexStreamInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const DuplexStreamInitialResponse& rs, const Utils::Event::InitialResponseType) {
      return noArgCallback(rs);
    };
  }
  ///@}
  inline void SetHeadersEventCallback(const HeadersEventCallback& callback) { m_onHeadersEvent = callback; }
  inline void SetBlobPayloadEventCallback(const BlobPayloadEventCallback& callback) { m_onBlobPayloadEvent = callback; }
  inline void SetStringPayloadEventCallback(const StringPayloadEventCallback& callback) { m_onStringPayloadEvent = callback; }
  inline void SetStructurePayloadEventCallback(const StructurePayloadEventCallback& callback) { m_onStructurePayloadEvent = callback; }
  inline void SetUnionPayloadEventCallback(const UnionPayloadEventCallback& callback) { m_onUnionPayloadEvent = callback; }
  inline void SetHeadersAndExplicitPayloadEventCallback(const HeadersAndExplicitPayloadEventCallback& callback) {
    m_onHeadersAndExplicitPayloadEvent = callback;
  }
  inline void SetHeadersAndImplicitPayloadEventCallback(const HeadersAndImplicitPayloadEventCallback& callback) {
    m_onHeadersAndImplicitPayloadEvent = callback;
  }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline DuplexStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

 private:
  AWS_RESTJSONPROTOCOL_API void HandleEventInMessage();
  AWS_RESTJSONPROTOCOL_API void HandleErrorInMessage();
  AWS_RESTJSONPROTOCOL_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  DuplexStreamInitialResponseCallbackEx m_onInitialResponse;
  HeadersEventCallback m_onHeadersEvent;
  BlobPayloadEventCallback m_onBlobPayloadEvent;
  StringPayloadEventCallback m_onStringPayloadEvent;
  StructurePayloadEventCallback m_onStructurePayloadEvent;
  UnionPayloadEventCallback m_onUnionPayloadEvent;
  HeadersAndExplicitPayloadEventCallback m_onHeadersAndExplicitPayloadEvent;
  HeadersAndImplicitPayloadEventCallback m_onHeadersAndImplicitPayloadEvent;
  ErrorCallback m_onError;
};

namespace DuplexStreamEventMapper {
AWS_RESTJSONPROTOCOL_API DuplexStreamEventType GetDuplexStreamEventTypeForName(const Aws::String& name);

AWS_RESTJSONPROTOCOL_API Aws::String GetNameForDuplexStreamEventType(DuplexStreamEventType value);
}  // namespace DuplexStreamEventMapper
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
