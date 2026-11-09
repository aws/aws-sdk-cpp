/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rpcv2protocol/RpcV2ProtocolRequest.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>
#include <aws/rpcv2protocol/model/RpcV2CborUnion.h>

#include <utility>

namespace Aws {
namespace RpcV2Protocol {
namespace Model {

/**
 */
class RpcV2CborUnionsRequest : public RpcV2ProtocolRequest {
 public:
  AWS_RPCV2PROTOCOL_API RpcV2CborUnionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RpcV2CborUnions"; }

  AWS_RPCV2PROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RPCV2PROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const RpcV2CborUnion& GetContents() const { return m_contents; }
  inline bool ContentsHasBeenSet() const { return m_contentsHasBeenSet; }
  template <typename ContentsT = RpcV2CborUnion>
  void SetContents(ContentsT&& value) {
    m_contentsHasBeenSet = true;
    m_contents = std::forward<ContentsT>(value);
  }
  template <typename ContentsT = RpcV2CborUnion>
  RpcV2CborUnionsRequest& WithContents(ContentsT&& value) {
    SetContents(std::forward<ContentsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetOtherValue() const { return m_otherValue; }
  inline bool OtherValueHasBeenSet() const { return m_otherValueHasBeenSet; }
  template <typename OtherValueT = Aws::String>
  void SetOtherValue(OtherValueT&& value) {
    m_otherValueHasBeenSet = true;
    m_otherValue = std::forward<OtherValueT>(value);
  }
  template <typename OtherValueT = Aws::String>
  RpcV2CborUnionsRequest& WithOtherValue(OtherValueT&& value) {
    SetOtherValue(std::forward<OtherValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  RpcV2CborUnionsRequest& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  RpcV2CborUnion m_contents;

  Aws::String m_otherValue;

  Aws::String m_requestId;
  bool m_contentsHasBeenSet = false;
  bool m_otherValueHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
