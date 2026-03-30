/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <aws/json-protocol/JsonProtocolRequest.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace JsonProtocol {
namespace Model {

/**
 */
class SparseNullsOperationRequest : public JsonProtocolRequest {
 public:
  AWS_JSONPROTOCOL_API SparseNullsOperationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SparseNullsOperation"; }

  AWS_JSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_JSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::Vector<Aws::Crt::Optional<Aws::String>>& GetSparseStringList() const { return m_sparseStringList; }
  inline bool SparseStringListHasBeenSet() const { return m_sparseStringListHasBeenSet; }
  template <typename SparseStringListT = Aws::Vector<Aws::Crt::Optional<Aws::String>>>
  void SetSparseStringList(SparseStringListT&& value) {
    m_sparseStringListHasBeenSet = true;
    m_sparseStringList = std::forward<SparseStringListT>(value);
  }
  template <typename SparseStringListT = Aws::Vector<Aws::Crt::Optional<Aws::String>>>
  SparseNullsOperationRequest& WithSparseStringList(SparseStringListT&& value) {
    SetSparseStringList(std::forward<SparseStringListT>(value));
    return *this;
  }
  template <typename SparseStringListT = Aws::String>
  SparseNullsOperationRequest& AddSparseStringList(SparseStringListT&& value) {
    m_sparseStringListHasBeenSet = true;
    m_sparseStringList.emplace_back(std::forward<SparseStringListT>(value));
    return *this;
  }
  inline SparseNullsOperationRequest& AddSparseStringList(Aws::Crt::Optional<Aws::String> value) {
    m_sparseStringListHasBeenSet = true;
    m_sparseStringList.push_back(value);
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
  SparseNullsOperationRequest& WithSparseStringMap(SparseStringMapT&& value) {
    SetSparseStringMap(std::forward<SparseStringMapT>(value));
    return *this;
  }
  template <typename SparseStringMapKeyT = Aws::String, typename SparseStringMapValueT = Aws::Crt::Optional<Aws::String>>
  SparseNullsOperationRequest& AddSparseStringMap(SparseStringMapKeyT&& key, SparseStringMapValueT&& value) {
    m_sparseStringMapHasBeenSet = true;
    m_sparseStringMap.emplace(std::forward<SparseStringMapKeyT>(key), std::forward<SparseStringMapValueT>(value));
    return *this;
  }
  inline SparseNullsOperationRequest& AddSparseStringMap(Aws::String key, Aws::Crt::Optional<Aws::String> value) {
    m_sparseStringMapHasBeenSet = true;
    m_sparseStringMap.emplace(key, value);
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
  SparseNullsOperationRequest& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::Crt::Optional<Aws::String>> m_sparseStringList;

  Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>> m_sparseStringMap;

  Aws::String m_requestId;
  bool m_sparseStringListHasBeenSet = false;
  bool m_sparseStringMapHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
