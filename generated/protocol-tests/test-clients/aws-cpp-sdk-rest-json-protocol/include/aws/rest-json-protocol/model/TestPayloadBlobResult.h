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
class TestPayloadBlobResult {
 public:
  AWS_RESTJSONPROTOCOL_API TestPayloadBlobResult() = default;
  AWS_RESTJSONPROTOCOL_API TestPayloadBlobResult(TestPayloadBlobResult&&) = default;
  AWS_RESTJSONPROTOCOL_API TestPayloadBlobResult& operator=(TestPayloadBlobResult&&) = default;
  // we delete these because Microsoft doesn't handle move generation correctly
  // and we therefore don't trust them to get it right here either.
  TestPayloadBlobResult(const TestPayloadBlobResult&) = delete;
  TestPayloadBlobResult& operator=(const TestPayloadBlobResult&) = delete;

  AWS_RESTJSONPROTOCOL_API TestPayloadBlobResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
  AWS_RESTJSONPROTOCOL_API TestPayloadBlobResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);

  ///@{

  inline Aws::IOStream& GetData() const { return m_data.GetUnderlyingStream(); }
  inline void ReplaceBody(Aws::IOStream* body) { m_data = Aws::Utils::Stream::ResponseStream(body); }

  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  TestPayloadBlobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Stream::ResponseStream m_data{};
  bool m_dataHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
