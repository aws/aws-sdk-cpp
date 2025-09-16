/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace RestJsonProtocol {
namespace Model {
class HttpPayloadTraitsResult {
 public:
  AWS_RESTJSONPROTOCOL_API HttpPayloadTraitsResult() = default;
  AWS_RESTJSONPROTOCOL_API HttpPayloadTraitsResult(HttpPayloadTraitsResult&&) = default;
  AWS_RESTJSONPROTOCOL_API HttpPayloadTraitsResult& operator=(HttpPayloadTraitsResult&&) = default;
  // we delete these because Microsoft doesn't handle move generation correctly
  // and we therefore don't trust them to get it right here either.
  HttpPayloadTraitsResult(const HttpPayloadTraitsResult&) = delete;
  HttpPayloadTraitsResult& operator=(const HttpPayloadTraitsResult&) = delete;

  AWS_RESTJSONPROTOCOL_API HttpPayloadTraitsResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
  AWS_RESTJSONPROTOCOL_API HttpPayloadTraitsResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);

  ///@{

  inline const Aws::String& GetFoo() const { return m_foo; }
  template <typename FooT = Aws::String>
  void SetFoo(FooT&& value) {
    m_fooHasBeenSet = true;
    m_foo = std::forward<FooT>(value);
  }
  template <typename FooT = Aws::String>
  HttpPayloadTraitsResult& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline Aws::IOStream& GetBlob() const { return m_blob.GetUnderlyingStream(); }
  inline void ReplaceBody(Aws::IOStream* body) { m_blob = Aws::Utils::Stream::ResponseStream(body); }

  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  HttpPayloadTraitsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;

  Aws::Utils::Stream::ResponseStream m_blob{};
  bool m_blobHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
