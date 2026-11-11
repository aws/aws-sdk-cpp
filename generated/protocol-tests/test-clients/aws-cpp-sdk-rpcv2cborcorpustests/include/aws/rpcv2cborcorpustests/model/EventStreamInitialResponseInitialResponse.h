/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2CborCorpusTests {
namespace Model {

class EventStreamInitialResponseInitialResponse {
 public:
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamInitialResponseInitialResponse() = default;
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamInitialResponseInitialResponse(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamInitialResponseInitialResponse& operator=(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API EventStreamInitialResponseInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_RPCV2CBORCORPUSTESTS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  EventStreamInitialResponseInitialResponse& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetTimeout() const { return m_timeout; }
  inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
  inline void SetTimeout(int64_t value) {
    m_timeoutHasBeenSet = true;
    m_timeout = value;
  }
  inline EventStreamInitialResponseInitialResponse& WithTimeout(int64_t value) {
    SetTimeout(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  int64_t m_timeout{0};
  bool m_sessionIdHasBeenSet = false;
  bool m_timeoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
