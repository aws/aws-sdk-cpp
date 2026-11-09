/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>
#include <aws/rpcv2protocol/model/RpcV2CborUnion.h>

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
class RpcV2CborUnionsResult {
 public:
  AWS_RPCV2PROTOCOL_API RpcV2CborUnionsResult() = default;
  AWS_RPCV2PROTOCOL_API RpcV2CborUnionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_RPCV2PROTOCOL_API RpcV2CborUnionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline const RpcV2CborUnion& GetContents() const { return m_contents; }
  template <typename ContentsT = RpcV2CborUnion>
  void SetContents(ContentsT&& value) {
    m_contentsHasBeenSet = true;
    m_contents = std::forward<ContentsT>(value);
  }
  template <typename ContentsT = RpcV2CborUnion>
  RpcV2CborUnionsResult& WithContents(ContentsT&& value) {
    SetContents(std::forward<ContentsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetOtherValue() const { return m_otherValue; }
  template <typename OtherValueT = Aws::String>
  void SetOtherValue(OtherValueT&& value) {
    m_otherValueHasBeenSet = true;
    m_otherValue = std::forward<OtherValueT>(value);
  }
  template <typename OtherValueT = Aws::String>
  RpcV2CborUnionsResult& WithOtherValue(OtherValueT&& value) {
    SetOtherValue(std::forward<OtherValueT>(value));
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
  RpcV2CborUnionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RpcV2CborUnion m_contents;

  Aws::String m_otherValue;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contentsHasBeenSet = false;
  bool m_otherValueHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
