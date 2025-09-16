/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2Protocol {
namespace Model {
class RecursiveShapesInputOutputNested1;

class RecursiveShapesInputOutputNested2 {
 public:
  AWS_RPCV2PROTOCOL_API RecursiveShapesInputOutputNested2() = default;
  AWS_RPCV2PROTOCOL_API RecursiveShapesInputOutputNested2(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2PROTOCOL_API RecursiveShapesInputOutputNested2& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2PROTOCOL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetBar() const { return m_bar; }
  inline bool BarHasBeenSet() const { return m_barHasBeenSet; }
  template <typename BarT = Aws::String>
  void SetBar(BarT&& value) {
    m_barHasBeenSet = true;
    m_bar = std::forward<BarT>(value);
  }
  template <typename BarT = Aws::String>
  RecursiveShapesInputOutputNested2& WithBar(BarT&& value) {
    SetBar(std::forward<BarT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RecursiveShapesInputOutputNested1& GetRecursiveMember() const { return *m_recursiveMember; }
  inline bool RecursiveMemberHasBeenSet() const { return m_recursiveMemberHasBeenSet; }
  template <typename RecursiveMemberT = RecursiveShapesInputOutputNested1>
  void SetRecursiveMember(RecursiveMemberT&& value) {
    m_recursiveMemberHasBeenSet = true;
    m_recursiveMember =
        Aws::MakeShared<RecursiveShapesInputOutputNested1>("RecursiveShapesInputOutputNested2", std::forward<RecursiveMemberT>(value));
  }
  template <typename RecursiveMemberT = RecursiveShapesInputOutputNested1>
  RecursiveShapesInputOutputNested2& WithRecursiveMember(RecursiveMemberT&& value) {
    SetRecursiveMember(std::forward<RecursiveMemberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bar;
  bool m_barHasBeenSet = false;

  std::shared_ptr<RecursiveShapesInputOutputNested1> m_recursiveMember;
  bool m_recursiveMemberHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
