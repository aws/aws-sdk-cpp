/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2Protocol {
namespace Model {
class GreetingWithErrorsResult {
 public:
  AWS_RPCV2PROTOCOL_API GreetingWithErrorsResult() = default;
  AWS_RPCV2PROTOCOL_API GreetingWithErrorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_RPCV2PROTOCOL_API GreetingWithErrorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline const Aws::String& GetGreeting() const { return m_greeting; }
  template <typename GreetingT = Aws::String>
  void SetGreeting(GreetingT&& value) {
    m_greetingHasBeenSet = true;
    m_greeting = std::forward<GreetingT>(value);
  }
  template <typename GreetingT = Aws::String>
  GreetingWithErrorsResult& WithGreeting(GreetingT&& value) {
    SetGreeting(std::forward<GreetingT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GreetingWithErrorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_greeting;
  bool m_greetingHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
