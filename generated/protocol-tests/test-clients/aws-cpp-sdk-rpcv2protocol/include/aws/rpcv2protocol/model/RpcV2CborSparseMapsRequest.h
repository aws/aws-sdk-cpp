/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <aws/rpcv2protocol/RpcV2ProtocolRequest.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>
#include <aws/rpcv2protocol/model/GreetingStruct.h>

#include <utility>

namespace Aws {
namespace RpcV2Protocol {
namespace Model {

/**
 */
class RpcV2CborSparseMapsRequest : public RpcV2ProtocolRequest {
 public:
  AWS_RPCV2PROTOCOL_API RpcV2CborSparseMapsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RpcV2CborSparseMaps"; }

  AWS_RPCV2PROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RPCV2PROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>>& GetSparseStructMap() const { return m_sparseStructMap; }
  inline bool SparseStructMapHasBeenSet() const { return m_sparseStructMapHasBeenSet; }
  template <typename SparseStructMapT = Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>>>
  void SetSparseStructMap(SparseStructMapT&& value) {
    m_sparseStructMapHasBeenSet = true;
    m_sparseStructMap = std::forward<SparseStructMapT>(value);
  }
  template <typename SparseStructMapT = Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>>>
  RpcV2CborSparseMapsRequest& WithSparseStructMap(SparseStructMapT&& value) {
    SetSparseStructMap(std::forward<SparseStructMapT>(value));
    return *this;
  }
  template <typename SparseStructMapKeyT = Aws::String, typename SparseStructMapValueT = Aws::Crt::Optional<GreetingStruct>>
  RpcV2CborSparseMapsRequest& AddSparseStructMap(SparseStructMapKeyT&& key, SparseStructMapValueT&& value) {
    m_sparseStructMapHasBeenSet = true;
    m_sparseStructMap.emplace(std::forward<SparseStructMapKeyT>(key), std::forward<SparseStructMapValueT>(value));
    return *this;
  }
  inline RpcV2CborSparseMapsRequest& AddSparseStructMap(Aws::String key, Aws::Crt::Optional<GreetingStruct> value) {
    m_sparseStructMapHasBeenSet = true;
    m_sparseStructMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Crt::Optional<int>>& GetSparseNumberMap() const { return m_sparseNumberMap; }
  inline bool SparseNumberMapHasBeenSet() const { return m_sparseNumberMapHasBeenSet; }
  template <typename SparseNumberMapT = Aws::Map<Aws::String, Aws::Crt::Optional<int>>>
  void SetSparseNumberMap(SparseNumberMapT&& value) {
    m_sparseNumberMapHasBeenSet = true;
    m_sparseNumberMap = std::forward<SparseNumberMapT>(value);
  }
  template <typename SparseNumberMapT = Aws::Map<Aws::String, Aws::Crt::Optional<int>>>
  RpcV2CborSparseMapsRequest& WithSparseNumberMap(SparseNumberMapT&& value) {
    SetSparseNumberMap(std::forward<SparseNumberMapT>(value));
    return *this;
  }
  inline RpcV2CborSparseMapsRequest& AddSparseNumberMap(Aws::String key, int value) {
    m_sparseNumberMapHasBeenSet = true;
    m_sparseNumberMap.emplace(key, value);
    return *this;
  }
  inline RpcV2CborSparseMapsRequest& AddSparseNumberMap(Aws::String key, Aws::Crt::Optional<int> value) {
    m_sparseNumberMapHasBeenSet = true;
    m_sparseNumberMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Crt::Optional<bool>>& GetSparseBooleanMap() const { return m_sparseBooleanMap; }
  inline bool SparseBooleanMapHasBeenSet() const { return m_sparseBooleanMapHasBeenSet; }
  template <typename SparseBooleanMapT = Aws::Map<Aws::String, Aws::Crt::Optional<bool>>>
  void SetSparseBooleanMap(SparseBooleanMapT&& value) {
    m_sparseBooleanMapHasBeenSet = true;
    m_sparseBooleanMap = std::forward<SparseBooleanMapT>(value);
  }
  template <typename SparseBooleanMapT = Aws::Map<Aws::String, Aws::Crt::Optional<bool>>>
  RpcV2CborSparseMapsRequest& WithSparseBooleanMap(SparseBooleanMapT&& value) {
    SetSparseBooleanMap(std::forward<SparseBooleanMapT>(value));
    return *this;
  }
  inline RpcV2CborSparseMapsRequest& AddSparseBooleanMap(Aws::String key, bool value) {
    m_sparseBooleanMapHasBeenSet = true;
    m_sparseBooleanMap.emplace(key, value);
    return *this;
  }
  inline RpcV2CborSparseMapsRequest& AddSparseBooleanMap(Aws::String key, Aws::Crt::Optional<bool> value) {
    m_sparseBooleanMapHasBeenSet = true;
    m_sparseBooleanMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>& GetSparseStringMap() const { return m_sparseStringMap; }
  inline bool SparseStringMapHasBeenSet() const { return m_sparseStringMapHasBeenSet; }
  template <typename SparseStringMapT = Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>>
  void SetSparseStringMap(SparseStringMapT&& value) {
    m_sparseStringMapHasBeenSet = true;
    m_sparseStringMap = std::forward<SparseStringMapT>(value);
  }
  template <typename SparseStringMapT = Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>>
  RpcV2CborSparseMapsRequest& WithSparseStringMap(SparseStringMapT&& value) {
    SetSparseStringMap(std::forward<SparseStringMapT>(value));
    return *this;
  }
  template <typename SparseStringMapKeyT = Aws::String, typename SparseStringMapValueT = Aws::Crt::Optional<Aws::String>>
  RpcV2CborSparseMapsRequest& AddSparseStringMap(SparseStringMapKeyT&& key, SparseStringMapValueT&& value) {
    m_sparseStringMapHasBeenSet = true;
    m_sparseStringMap.emplace(std::forward<SparseStringMapKeyT>(key), std::forward<SparseStringMapValueT>(value));
    return *this;
  }
  inline RpcV2CborSparseMapsRequest& AddSparseStringMap(Aws::String key, Aws::Crt::Optional<Aws::String> value) {
    m_sparseStringMapHasBeenSet = true;
    m_sparseStringMap.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>>& GetSparseSetMap() const { return m_sparseSetMap; }
  inline bool SparseSetMapHasBeenSet() const { return m_sparseSetMapHasBeenSet; }
  template <typename SparseSetMapT = Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>>>
  void SetSparseSetMap(SparseSetMapT&& value) {
    m_sparseSetMapHasBeenSet = true;
    m_sparseSetMap = std::forward<SparseSetMapT>(value);
  }
  template <typename SparseSetMapT = Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>>>
  RpcV2CborSparseMapsRequest& WithSparseSetMap(SparseSetMapT&& value) {
    SetSparseSetMap(std::forward<SparseSetMapT>(value));
    return *this;
  }
  template <typename SparseSetMapKeyT = Aws::String, typename SparseSetMapValueT = Aws::Crt::Optional<Aws::Vector<Aws::String>>>
  RpcV2CborSparseMapsRequest& AddSparseSetMap(SparseSetMapKeyT&& key, SparseSetMapValueT&& value) {
    m_sparseSetMapHasBeenSet = true;
    m_sparseSetMap.emplace(std::forward<SparseSetMapKeyT>(key), std::forward<SparseSetMapValueT>(value));
    return *this;
  }
  inline RpcV2CborSparseMapsRequest& AddSparseSetMap(Aws::String key, Aws::Crt::Optional<Aws::Vector<Aws::String>> value) {
    m_sparseSetMapHasBeenSet = true;
    m_sparseSetMap.emplace(key, value);
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
  RpcV2CborSparseMapsRequest& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>> m_sparseStructMap;

  Aws::Map<Aws::String, Aws::Crt::Optional<int>> m_sparseNumberMap;

  Aws::Map<Aws::String, Aws::Crt::Optional<bool>> m_sparseBooleanMap;

  Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>> m_sparseStringMap;

  Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>> m_sparseSetMap;

  Aws::String m_requestId;
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
