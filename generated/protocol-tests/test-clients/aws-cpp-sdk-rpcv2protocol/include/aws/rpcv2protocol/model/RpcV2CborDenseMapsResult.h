/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>
#include <aws/rpcv2protocol/model/GreetingStruct.h>

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
class RpcV2CborDenseMapsResult {
 public:
  AWS_RPCV2PROTOCOL_API RpcV2CborDenseMapsResult() = default;
  AWS_RPCV2PROTOCOL_API RpcV2CborDenseMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_RPCV2PROTOCOL_API RpcV2CborDenseMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline const Aws::Map<Aws::String, GreetingStruct>& GetDenseStructMap() const { return m_denseStructMap; }
  template <typename DenseStructMapT = Aws::Map<Aws::String, GreetingStruct>>
  void SetDenseStructMap(DenseStructMapT&& value) {
    m_denseStructMapHasBeenSet = true;
    m_denseStructMap = std::forward<DenseStructMapT>(value);
  }
  template <typename DenseStructMapT = Aws::Map<Aws::String, GreetingStruct>>
  RpcV2CborDenseMapsResult& WithDenseStructMap(DenseStructMapT&& value) {
    SetDenseStructMap(std::forward<DenseStructMapT>(value));
    return *this;
  }
  template <typename DenseStructMapKeyT = Aws::String, typename DenseStructMapValueT = GreetingStruct>
  RpcV2CborDenseMapsResult& AddDenseStructMap(DenseStructMapKeyT&& key, DenseStructMapValueT&& value) {
    m_denseStructMapHasBeenSet = true;
    m_denseStructMap.emplace(std::forward<DenseStructMapKeyT>(key), std::forward<DenseStructMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, int64_t>& GetDenseNumberMap() const { return m_denseNumberMap; }
  template <typename DenseNumberMapT = Aws::Map<Aws::String, int64_t>>
  void SetDenseNumberMap(DenseNumberMapT&& value) {
    m_denseNumberMapHasBeenSet = true;
    m_denseNumberMap = std::forward<DenseNumberMapT>(value);
  }
  template <typename DenseNumberMapT = Aws::Map<Aws::String, int64_t>>
  RpcV2CborDenseMapsResult& WithDenseNumberMap(DenseNumberMapT&& value) {
    SetDenseNumberMap(std::forward<DenseNumberMapT>(value));
    return *this;
  }
  inline RpcV2CborDenseMapsResult& AddDenseNumberMap(Aws::String key, int64_t value) {
    m_denseNumberMapHasBeenSet = true;
    m_denseNumberMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, bool>& GetDenseBooleanMap() const { return m_denseBooleanMap; }
  template <typename DenseBooleanMapT = Aws::Map<Aws::String, bool>>
  void SetDenseBooleanMap(DenseBooleanMapT&& value) {
    m_denseBooleanMapHasBeenSet = true;
    m_denseBooleanMap = std::forward<DenseBooleanMapT>(value);
  }
  template <typename DenseBooleanMapT = Aws::Map<Aws::String, bool>>
  RpcV2CborDenseMapsResult& WithDenseBooleanMap(DenseBooleanMapT&& value) {
    SetDenseBooleanMap(std::forward<DenseBooleanMapT>(value));
    return *this;
  }
  inline RpcV2CborDenseMapsResult& AddDenseBooleanMap(Aws::String key, bool value) {
    m_denseBooleanMapHasBeenSet = true;
    m_denseBooleanMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetDenseStringMap() const { return m_denseStringMap; }
  template <typename DenseStringMapT = Aws::Map<Aws::String, Aws::String>>
  void SetDenseStringMap(DenseStringMapT&& value) {
    m_denseStringMapHasBeenSet = true;
    m_denseStringMap = std::forward<DenseStringMapT>(value);
  }
  template <typename DenseStringMapT = Aws::Map<Aws::String, Aws::String>>
  RpcV2CborDenseMapsResult& WithDenseStringMap(DenseStringMapT&& value) {
    SetDenseStringMap(std::forward<DenseStringMapT>(value));
    return *this;
  }
  template <typename DenseStringMapKeyT = Aws::String, typename DenseStringMapValueT = Aws::String>
  RpcV2CborDenseMapsResult& AddDenseStringMap(DenseStringMapKeyT&& key, DenseStringMapValueT&& value) {
    m_denseStringMapHasBeenSet = true;
    m_denseStringMap.emplace(std::forward<DenseStringMapKeyT>(key), std::forward<DenseStringMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetDenseSetMap() const { return m_denseSetMap; }
  template <typename DenseSetMapT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetDenseSetMap(DenseSetMapT&& value) {
    m_denseSetMapHasBeenSet = true;
    m_denseSetMap = std::forward<DenseSetMapT>(value);
  }
  template <typename DenseSetMapT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  RpcV2CborDenseMapsResult& WithDenseSetMap(DenseSetMapT&& value) {
    SetDenseSetMap(std::forward<DenseSetMapT>(value));
    return *this;
  }
  template <typename DenseSetMapKeyT = Aws::String, typename DenseSetMapValueT = Aws::Vector<Aws::String>>
  RpcV2CborDenseMapsResult& AddDenseSetMap(DenseSetMapKeyT&& key, DenseSetMapValueT&& value) {
    m_denseSetMapHasBeenSet = true;
    m_denseSetMap.emplace(std::forward<DenseSetMapKeyT>(key), std::forward<DenseSetMapValueT>(value));
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
  RpcV2CborDenseMapsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, GreetingStruct> m_denseStructMap;
  bool m_denseStructMapHasBeenSet = false;

  Aws::Map<Aws::String, int64_t> m_denseNumberMap;
  bool m_denseNumberMapHasBeenSet = false;

  Aws::Map<Aws::String, bool> m_denseBooleanMap;
  bool m_denseBooleanMapHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_denseStringMap;
  bool m_denseStringMapHasBeenSet = false;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_denseSetMap;
  bool m_denseSetMapHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
