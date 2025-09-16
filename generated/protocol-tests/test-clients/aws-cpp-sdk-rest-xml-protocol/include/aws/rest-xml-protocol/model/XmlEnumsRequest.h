/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class XmlEnumsRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API XmlEnumsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "XmlEnums"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline FooEnum GetFooEnum1() const { return m_fooEnum1; }
  inline bool FooEnum1HasBeenSet() const { return m_fooEnum1HasBeenSet; }
  inline void SetFooEnum1(FooEnum value) {
    m_fooEnum1HasBeenSet = true;
    m_fooEnum1 = value;
  }
  inline XmlEnumsRequest& WithFooEnum1(FooEnum value) {
    SetFooEnum1(value);
    return *this;
  }
  ///@}

  ///@{

  inline FooEnum GetFooEnum2() const { return m_fooEnum2; }
  inline bool FooEnum2HasBeenSet() const { return m_fooEnum2HasBeenSet; }
  inline void SetFooEnum2(FooEnum value) {
    m_fooEnum2HasBeenSet = true;
    m_fooEnum2 = value;
  }
  inline XmlEnumsRequest& WithFooEnum2(FooEnum value) {
    SetFooEnum2(value);
    return *this;
  }
  ///@}

  ///@{

  inline FooEnum GetFooEnum3() const { return m_fooEnum3; }
  inline bool FooEnum3HasBeenSet() const { return m_fooEnum3HasBeenSet; }
  inline void SetFooEnum3(FooEnum value) {
    m_fooEnum3HasBeenSet = true;
    m_fooEnum3 = value;
  }
  inline XmlEnumsRequest& WithFooEnum3(FooEnum value) {
    SetFooEnum3(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<FooEnum>& GetFooEnumList() const { return m_fooEnumList; }
  inline bool FooEnumListHasBeenSet() const { return m_fooEnumListHasBeenSet; }
  template <typename FooEnumListT = Aws::Vector<FooEnum>>
  void SetFooEnumList(FooEnumListT&& value) {
    m_fooEnumListHasBeenSet = true;
    m_fooEnumList = std::forward<FooEnumListT>(value);
  }
  template <typename FooEnumListT = Aws::Vector<FooEnum>>
  XmlEnumsRequest& WithFooEnumList(FooEnumListT&& value) {
    SetFooEnumList(std::forward<FooEnumListT>(value));
    return *this;
  }
  inline XmlEnumsRequest& AddFooEnumList(FooEnum value) {
    m_fooEnumListHasBeenSet = true;
    m_fooEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<FooEnum>& GetFooEnumSet() const { return m_fooEnumSet; }
  inline bool FooEnumSetHasBeenSet() const { return m_fooEnumSetHasBeenSet; }
  template <typename FooEnumSetT = Aws::Vector<FooEnum>>
  void SetFooEnumSet(FooEnumSetT&& value) {
    m_fooEnumSetHasBeenSet = true;
    m_fooEnumSet = std::forward<FooEnumSetT>(value);
  }
  template <typename FooEnumSetT = Aws::Vector<FooEnum>>
  XmlEnumsRequest& WithFooEnumSet(FooEnumSetT&& value) {
    SetFooEnumSet(std::forward<FooEnumSetT>(value));
    return *this;
  }
  inline XmlEnumsRequest& AddFooEnumSet(FooEnum value) {
    m_fooEnumSetHasBeenSet = true;
    m_fooEnumSet.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, FooEnum>& GetFooEnumMap() const { return m_fooEnumMap; }
  inline bool FooEnumMapHasBeenSet() const { return m_fooEnumMapHasBeenSet; }
  template <typename FooEnumMapT = Aws::Map<Aws::String, FooEnum>>
  void SetFooEnumMap(FooEnumMapT&& value) {
    m_fooEnumMapHasBeenSet = true;
    m_fooEnumMap = std::forward<FooEnumMapT>(value);
  }
  template <typename FooEnumMapT = Aws::Map<Aws::String, FooEnum>>
  XmlEnumsRequest& WithFooEnumMap(FooEnumMapT&& value) {
    SetFooEnumMap(std::forward<FooEnumMapT>(value));
    return *this;
  }
  inline XmlEnumsRequest& AddFooEnumMap(Aws::String key, FooEnum value) {
    m_fooEnumMapHasBeenSet = true;
    m_fooEnumMap.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  FooEnum m_fooEnum1{FooEnum::NOT_SET};
  bool m_fooEnum1HasBeenSet = false;

  FooEnum m_fooEnum2{FooEnum::NOT_SET};
  bool m_fooEnum2HasBeenSet = false;

  FooEnum m_fooEnum3{FooEnum::NOT_SET};
  bool m_fooEnum3HasBeenSet = false;

  Aws::Vector<FooEnum> m_fooEnumList;
  bool m_fooEnumListHasBeenSet = false;

  Aws::Vector<FooEnum> m_fooEnumSet;
  bool m_fooEnumSetHasBeenSet = false;

  Aws::Map<Aws::String, FooEnum> m_fooEnumMap;
  bool m_fooEnumMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
