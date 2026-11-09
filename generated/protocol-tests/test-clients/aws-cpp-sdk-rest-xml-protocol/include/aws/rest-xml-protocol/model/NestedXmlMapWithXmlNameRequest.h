/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class NestedXmlMapWithXmlNameRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "NestedXmlMapWithXmlName"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetNestedXmlMapWithXmlNameMap() const {
    return m_nestedXmlMapWithXmlNameMap;
  }
  inline bool NestedXmlMapWithXmlNameMapHasBeenSet() const { return m_nestedXmlMapWithXmlNameMapHasBeenSet; }
  template <typename NestedXmlMapWithXmlNameMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
  void SetNestedXmlMapWithXmlNameMap(NestedXmlMapWithXmlNameMapT&& value) {
    m_nestedXmlMapWithXmlNameMapHasBeenSet = true;
    m_nestedXmlMapWithXmlNameMap = std::forward<NestedXmlMapWithXmlNameMapT>(value);
  }
  template <typename NestedXmlMapWithXmlNameMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
  NestedXmlMapWithXmlNameRequest& WithNestedXmlMapWithXmlNameMap(NestedXmlMapWithXmlNameMapT&& value) {
    SetNestedXmlMapWithXmlNameMap(std::forward<NestedXmlMapWithXmlNameMapT>(value));
    return *this;
  }
  template <typename NestedXmlMapWithXmlNameMapKeyT = Aws::String,
            typename NestedXmlMapWithXmlNameMapValueT = Aws::Map<Aws::String, Aws::String>>
  NestedXmlMapWithXmlNameRequest& AddNestedXmlMapWithXmlNameMap(NestedXmlMapWithXmlNameMapKeyT&& key,
                                                                NestedXmlMapWithXmlNameMapValueT&& value) {
    m_nestedXmlMapWithXmlNameMapHasBeenSet = true;
    m_nestedXmlMapWithXmlNameMap.emplace(std::forward<NestedXmlMapWithXmlNameMapKeyT>(key),
                                         std::forward<NestedXmlMapWithXmlNameMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_nestedXmlMapWithXmlNameMap;
  bool m_nestedXmlMapWithXmlNameMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
