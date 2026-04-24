/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class NestedXmlMapsRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API NestedXmlMapsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "NestedXmlMaps"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& GetNestedMap() const { return m_nestedMap; }
  inline bool NestedMapHasBeenSet() const { return m_nestedMapHasBeenSet; }
  template <typename NestedMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>>
  void SetNestedMap(NestedMapT&& value) {
    m_nestedMapHasBeenSet = true;
    m_nestedMap = std::forward<NestedMapT>(value);
  }
  template <typename NestedMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>>
  NestedXmlMapsRequest& WithNestedMap(NestedMapT&& value) {
    SetNestedMap(std::forward<NestedMapT>(value));
    return *this;
  }
  template <typename NestedMapKeyT = Aws::String, typename NestedMapValueT = Aws::Map<Aws::String, FooEnum>>
  NestedXmlMapsRequest& AddNestedMap(NestedMapKeyT&& key, NestedMapValueT&& value) {
    m_nestedMapHasBeenSet = true;
    m_nestedMap.emplace(std::forward<NestedMapKeyT>(key), std::forward<NestedMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& GetFlatNestedMap() const { return m_flatNestedMap; }
  inline bool FlatNestedMapHasBeenSet() const { return m_flatNestedMapHasBeenSet; }
  template <typename FlatNestedMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>>
  void SetFlatNestedMap(FlatNestedMapT&& value) {
    m_flatNestedMapHasBeenSet = true;
    m_flatNestedMap = std::forward<FlatNestedMapT>(value);
  }
  template <typename FlatNestedMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>>
  NestedXmlMapsRequest& WithFlatNestedMap(FlatNestedMapT&& value) {
    SetFlatNestedMap(std::forward<FlatNestedMapT>(value));
    return *this;
  }
  template <typename FlatNestedMapKeyT = Aws::String, typename FlatNestedMapValueT = Aws::Map<Aws::String, FooEnum>>
  NestedXmlMapsRequest& AddFlatNestedMap(FlatNestedMapKeyT&& key, FlatNestedMapValueT&& value) {
    m_flatNestedMapHasBeenSet = true;
    m_flatNestedMap.emplace(std::forward<FlatNestedMapKeyT>(key), std::forward<FlatNestedMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>> m_nestedMap;
  bool m_nestedMapHasBeenSet = false;

  Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>> m_flatNestedMap;
  bool m_flatNestedMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
