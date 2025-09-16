/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/GreetingStruct.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class XmlMapsXmlNameRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API XmlMapsXmlNameRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "XmlMapsXmlName"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::Map<Aws::String, GreetingStruct>& GetMyMap() const { return m_myMap; }
  inline bool MyMapHasBeenSet() const { return m_myMapHasBeenSet; }
  template <typename MyMapT = Aws::Map<Aws::String, GreetingStruct>>
  void SetMyMap(MyMapT&& value) {
    m_myMapHasBeenSet = true;
    m_myMap = std::forward<MyMapT>(value);
  }
  template <typename MyMapT = Aws::Map<Aws::String, GreetingStruct>>
  XmlMapsXmlNameRequest& WithMyMap(MyMapT&& value) {
    SetMyMap(std::forward<MyMapT>(value));
    return *this;
  }
  template <typename MyMapKeyT = Aws::String, typename MyMapValueT = GreetingStruct>
  XmlMapsXmlNameRequest& AddMyMap(MyMapKeyT&& key, MyMapValueT&& value) {
    m_myMapHasBeenSet = true;
    m_myMap.emplace(std::forward<MyMapKeyT>(key), std::forward<MyMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, GreetingStruct> m_myMap;
  bool m_myMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
