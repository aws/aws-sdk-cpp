/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
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
class RpcV2CborSparseMapsResult {
 public:
  AWS_RPCV2PROTOCOL_API RpcV2CborSparseMapsResult() = default;
  AWS_RPCV2PROTOCOL_API RpcV2CborSparseMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_RPCV2PROTOCOL_API RpcV2CborSparseMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline const Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>>& GetSparseStructMap() const { return m_sparseStructMap; }
  template <typename SparseStructMapT = Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>>>
  void SetSparseStructMap(SparseStructMapT&& value) {
    m_sparseStructMapHasBeenSet = true;
    m_sparseStructMap = std::forward<SparseStructMapT>(value);
  }
  template <typename SparseStructMapT = Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>>>
  RpcV2CborSparseMapsResult& WithSparseStructMap(SparseStructMapT&& value) {
    SetSparseStructMap(std::forward<SparseStructMapT>(value));
    return *this;
  }
  template <typename SparseStructMapKeyT = Aws::String, typename SparseStructMapValueT = Aws::Crt::Optional<GreetingStruct>>
  RpcV2CborSparseMapsResult& AddSparseStructMap(SparseStructMapKeyT&& key, SparseStructMapValueT&& value) {
    m_sparseStructMapHasBeenSet = true;
    m_sparseStructMap.emplace(std::forward<SparseStructMapKeyT>(key), std::forward<SparseStructMapValueT>(value));
    return *this;
  }
  inline RpcV2CborSparseMapsResult& AddSparseStructMap(Aws::String key, Aws::Crt::Optional<GreetingStruct> value) {
    m_sparseStructMapHasBeenSet = true;
    m_sparseStructMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Crt::Optional<int64_t>>& GetSparseNumberMap() const { return m_sparseNumberMap; }
  template <typename SparseNumberMapT = Aws::Map<Aws::String, Aws::Crt::Optional<int64_t>>>
  void SetSparseNumberMap(SparseNumberMapT&& value) {
    m_sparseNumberMapHasBeenSet = true;
    m_sparseNumberMap = std::forward<SparseNumberMapT>(value);
  }
  template <typename SparseNumberMapT = Aws::Map<Aws::String, Aws::Crt::Optional<int64_t>>>
  RpcV2CborSparseMapsResult& WithSparseNumberMap(SparseNumberMapT&& value) {
    SetSparseNumberMap(std::forward<SparseNumberMapT>(value));
    return *this;
  }
  inline RpcV2CborSparseMapsResult& AddSparseNumberMap(Aws::String key, int64_t value) {
    m_sparseNumberMapHasBeenSet = true;
    m_sparseNumberMap.emplace(key, value);
    return *this;
  }
  inline RpcV2CborSparseMapsResult& AddSparseNumberMap(Aws::String key, Aws::Crt::Optional<int64_t> value) {
    m_sparseNumberMapHasBeenSet = true;
    m_sparseNumberMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Crt::Optional<bool>>& GetSparseBooleanMap() const { return m_sparseBooleanMap; }
  template <typename SparseBooleanMapT = Aws::Map<Aws::String, Aws::Crt::Optional<bool>>>
  void SetSparseBooleanMap(SparseBooleanMapT&& value) {
    m_sparseBooleanMapHasBeenSet = true;
    m_sparseBooleanMap = std::forward<SparseBooleanMapT>(value);
  }
  template <typename SparseBooleanMapT = Aws::Map<Aws::String, Aws::Crt::Optional<bool>>>
  RpcV2CborSparseMapsResult& WithSparseBooleanMap(SparseBooleanMapT&& value) {
    SetSparseBooleanMap(std::forward<SparseBooleanMapT>(value));
    return *this;
  }
  inline RpcV2CborSparseMapsResult& AddSparseBooleanMap(Aws::String key, bool value) {
    m_sparseBooleanMapHasBeenSet = true;
    m_sparseBooleanMap.emplace(key, value);
    return *this;
  }
  inline RpcV2CborSparseMapsResult& AddSparseBooleanMap(Aws::String key, Aws::Crt::Optional<bool> value) {
    m_sparseBooleanMapHasBeenSet = true;
    m_sparseBooleanMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>& GetSparseStringMap() const { return m_sparseStringMap; }
  template <typename SparseStringMapT = Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>>
  void SetSparseStringMap(SparseStringMapT&& value) {
    m_sparseStringMapHasBeenSet = true;
    m_sparseStringMap = std::forward<SparseStringMapT>(value);
  }
  template <typename SparseStringMapT = Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>>
  RpcV2CborSparseMapsResult& WithSparseStringMap(SparseStringMapT&& value) {
    SetSparseStringMap(std::forward<SparseStringMapT>(value));
    return *this;
  }
  template <typename SparseStringMapKeyT = Aws::String, typename SparseStringMapValueT = Aws::Crt::Optional<Aws::String>>
  RpcV2CborSparseMapsResult& AddSparseStringMap(SparseStringMapKeyT&& key, SparseStringMapValueT&& value) {
    m_sparseStringMapHasBeenSet = true;
    m_sparseStringMap.emplace(std::forward<SparseStringMapKeyT>(key), std::forward<SparseStringMapValueT>(value));
    return *this;
  }
  inline RpcV2CborSparseMapsResult& AddSparseStringMap(Aws::String key, Aws::Crt::Optional<Aws::String> value) {
    m_sparseStringMapHasBeenSet = true;
    m_sparseStringMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>>& GetSparseSetMap() const { return m_sparseSetMap; }
  template <typename SparseSetMapT = Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>>>
  void SetSparseSetMap(SparseSetMapT&& value) {
    m_sparseSetMapHasBeenSet = true;
    m_sparseSetMap = std::forward<SparseSetMapT>(value);
  }
  template <typename SparseSetMapT = Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>>>
  RpcV2CborSparseMapsResult& WithSparseSetMap(SparseSetMapT&& value) {
    SetSparseSetMap(std::forward<SparseSetMapT>(value));
    return *this;
  }
  template <typename SparseSetMapKeyT = Aws::String, typename SparseSetMapValueT = Aws::Crt::Optional<Aws::Vector<Aws::String>>>
  RpcV2CborSparseMapsResult& AddSparseSetMap(SparseSetMapKeyT&& key, SparseSetMapValueT&& value) {
    m_sparseSetMapHasBeenSet = true;
    m_sparseSetMap.emplace(std::forward<SparseSetMapKeyT>(key), std::forward<SparseSetMapValueT>(value));
    return *this;
  }
  inline RpcV2CborSparseMapsResult& AddSparseSetMap(Aws::String key, Aws::Crt::Optional<Aws::Vector<Aws::String>> value) {
    m_sparseSetMapHasBeenSet = true;
    m_sparseSetMap.emplace(key, value);
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
  RpcV2CborSparseMapsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>> m_sparseStructMap;

  Aws::Map<Aws::String, Aws::Crt::Optional<int64_t>> m_sparseNumberMap;

  Aws::Map<Aws::String, Aws::Crt::Optional<bool>> m_sparseBooleanMap;

  Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>> m_sparseStringMap;

  Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>> m_sparseSetMap;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sparseStructMapHasBeenSet = false;
  bool m_sparseNumberMapHasBeenSet = false;
  bool m_sparseBooleanMapHasBeenSet = false;
  bool m_sparseStringMapHasBeenSet = false;
  bool m_sparseSetMapHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
