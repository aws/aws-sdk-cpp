/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/GreetingStruct.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {
class JsonMapsResult {
 public:
  AWS_RESTJSONPROTOCOL_API JsonMapsResult() = default;
  AWS_RESTJSONPROTOCOL_API JsonMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API JsonMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::Map<Aws::String, GreetingStruct>& GetDenseStructMap() const { return m_denseStructMap; }
  template <typename DenseStructMapT = Aws::Map<Aws::String, GreetingStruct>>
  void SetDenseStructMap(DenseStructMapT&& value) {
    m_denseStructMapHasBeenSet = true;
    m_denseStructMap = std::forward<DenseStructMapT>(value);
  }
  template <typename DenseStructMapT = Aws::Map<Aws::String, GreetingStruct>>
  JsonMapsResult& WithDenseStructMap(DenseStructMapT&& value) {
    SetDenseStructMap(std::forward<DenseStructMapT>(value));
    return *this;
  }
  template <typename DenseStructMapKeyT = Aws::String, typename DenseStructMapValueT = GreetingStruct>
  JsonMapsResult& AddDenseStructMap(DenseStructMapKeyT&& key, DenseStructMapValueT&& value) {
    m_denseStructMapHasBeenSet = true;
    m_denseStructMap.emplace(std::forward<DenseStructMapKeyT>(key), std::forward<DenseStructMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, int>& GetDenseNumberMap() const { return m_denseNumberMap; }
  template <typename DenseNumberMapT = Aws::Map<Aws::String, int>>
  void SetDenseNumberMap(DenseNumberMapT&& value) {
    m_denseNumberMapHasBeenSet = true;
    m_denseNumberMap = std::forward<DenseNumberMapT>(value);
  }
  template <typename DenseNumberMapT = Aws::Map<Aws::String, int>>
  JsonMapsResult& WithDenseNumberMap(DenseNumberMapT&& value) {
    SetDenseNumberMap(std::forward<DenseNumberMapT>(value));
    return *this;
  }
  inline JsonMapsResult& AddDenseNumberMap(Aws::String key, int value) {
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
  JsonMapsResult& WithDenseBooleanMap(DenseBooleanMapT&& value) {
    SetDenseBooleanMap(std::forward<DenseBooleanMapT>(value));
    return *this;
  }
  inline JsonMapsResult& AddDenseBooleanMap(Aws::String key, bool value) {
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
  JsonMapsResult& WithDenseStringMap(DenseStringMapT&& value) {
    SetDenseStringMap(std::forward<DenseStringMapT>(value));
    return *this;
  }
  template <typename DenseStringMapKeyT = Aws::String, typename DenseStringMapValueT = Aws::String>
  JsonMapsResult& AddDenseStringMap(DenseStringMapKeyT&& key, DenseStringMapValueT&& value) {
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
  JsonMapsResult& WithDenseSetMap(DenseSetMapT&& value) {
    SetDenseSetMap(std::forward<DenseSetMapT>(value));
    return *this;
  }
  template <typename DenseSetMapKeyT = Aws::String, typename DenseSetMapValueT = Aws::Vector<Aws::String>>
  JsonMapsResult& AddDenseSetMap(DenseSetMapKeyT&& key, DenseSetMapValueT&& value) {
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
  JsonMapsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, GreetingStruct> m_denseStructMap;
  bool m_denseStructMapHasBeenSet = false;

  Aws::Map<Aws::String, int> m_denseNumberMap;
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
}  // namespace RestJsonProtocol
}  // namespace Aws
