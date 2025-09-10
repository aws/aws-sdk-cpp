/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace RestXmlProtocol {
namespace Model {
class HttpStringPayloadResult {
 public:
  AWS_RESTXMLPROTOCOL_API HttpStringPayloadResult() = default;
  AWS_RESTXMLPROTOCOL_API HttpStringPayloadResult(HttpStringPayloadResult&&) = default;
  AWS_RESTXMLPROTOCOL_API HttpStringPayloadResult& operator=(HttpStringPayloadResult&&) = default;
  // we delete these because Microsoft doesn't handle move generation correctly
  // and we therefore don't trust them to get it right here either.
  HttpStringPayloadResult(const HttpStringPayloadResult&) = delete;
  HttpStringPayloadResult& operator=(const HttpStringPayloadResult&) = delete;

  AWS_RESTXMLPROTOCOL_API HttpStringPayloadResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
  AWS_RESTXMLPROTOCOL_API HttpStringPayloadResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);

  ///@{

  inline Aws::IOStream& GetPayload() const { return m_payload.GetUnderlyingStream(); }
  inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  HttpStringPayloadResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Stream::ResponseStream m_payload;
  bool m_payloadHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
