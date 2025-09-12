/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2-protocol/EC2ProtocolRequest.h>
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/ec2-protocol/model/GreetingStruct.h>
#include <aws/ec2-protocol/model/NestedStructWithList.h>

#include <utility>

namespace Aws {
namespace EC2Protocol {
namespace Model {

/**
 */
class QueryListsRequest : public EC2ProtocolRequest {
 public:
  AWS_EC2PROTOCOL_API QueryListsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "QueryLists"; }

  AWS_EC2PROTOCOL_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2PROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{

  inline const Aws::Vector<Aws::String>& GetListArg() const { return m_listArg; }
  inline bool ListArgHasBeenSet() const { return m_listArgHasBeenSet; }
  template <typename ListArgT = Aws::Vector<Aws::String>>
  void SetListArg(ListArgT&& value) {
    m_listArgHasBeenSet = true;
    m_listArg = std::forward<ListArgT>(value);
  }
  template <typename ListArgT = Aws::Vector<Aws::String>>
  QueryListsRequest& WithListArg(ListArgT&& value) {
    SetListArg(std::forward<ListArgT>(value));
    return *this;
  }
  template <typename ListArgT = Aws::String>
  QueryListsRequest& AddListArg(ListArgT&& value) {
    m_listArgHasBeenSet = true;
    m_listArg.emplace_back(std::forward<ListArgT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<GreetingStruct>& GetComplexListArg() const { return m_complexListArg; }
  inline bool ComplexListArgHasBeenSet() const { return m_complexListArgHasBeenSet; }
  template <typename ComplexListArgT = Aws::Vector<GreetingStruct>>
  void SetComplexListArg(ComplexListArgT&& value) {
    m_complexListArgHasBeenSet = true;
    m_complexListArg = std::forward<ComplexListArgT>(value);
  }
  template <typename ComplexListArgT = Aws::Vector<GreetingStruct>>
  QueryListsRequest& WithComplexListArg(ComplexListArgT&& value) {
    SetComplexListArg(std::forward<ComplexListArgT>(value));
    return *this;
  }
  template <typename ComplexListArgT = GreetingStruct>
  QueryListsRequest& AddComplexListArg(ComplexListArgT&& value) {
    m_complexListArgHasBeenSet = true;
    m_complexListArg.emplace_back(std::forward<ComplexListArgT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetListArgWithXmlNameMember() const { return m_listArgWithXmlNameMember; }
  inline bool ListArgWithXmlNameMemberHasBeenSet() const { return m_listArgWithXmlNameMemberHasBeenSet; }
  template <typename ListArgWithXmlNameMemberT = Aws::Vector<Aws::String>>
  void SetListArgWithXmlNameMember(ListArgWithXmlNameMemberT&& value) {
    m_listArgWithXmlNameMemberHasBeenSet = true;
    m_listArgWithXmlNameMember = std::forward<ListArgWithXmlNameMemberT>(value);
  }
  template <typename ListArgWithXmlNameMemberT = Aws::Vector<Aws::String>>
  QueryListsRequest& WithListArgWithXmlNameMember(ListArgWithXmlNameMemberT&& value) {
    SetListArgWithXmlNameMember(std::forward<ListArgWithXmlNameMemberT>(value));
    return *this;
  }
  template <typename ListArgWithXmlNameMemberT = Aws::String>
  QueryListsRequest& AddListArgWithXmlNameMember(ListArgWithXmlNameMemberT&& value) {
    m_listArgWithXmlNameMemberHasBeenSet = true;
    m_listArgWithXmlNameMember.emplace_back(std::forward<ListArgWithXmlNameMemberT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetListArgWithXmlName() const { return m_listArgWithXmlName; }
  inline bool ListArgWithXmlNameHasBeenSet() const { return m_listArgWithXmlNameHasBeenSet; }
  template <typename ListArgWithXmlNameT = Aws::Vector<Aws::String>>
  void SetListArgWithXmlName(ListArgWithXmlNameT&& value) {
    m_listArgWithXmlNameHasBeenSet = true;
    m_listArgWithXmlName = std::forward<ListArgWithXmlNameT>(value);
  }
  template <typename ListArgWithXmlNameT = Aws::Vector<Aws::String>>
  QueryListsRequest& WithListArgWithXmlName(ListArgWithXmlNameT&& value) {
    SetListArgWithXmlName(std::forward<ListArgWithXmlNameT>(value));
    return *this;
  }
  template <typename ListArgWithXmlNameT = Aws::String>
  QueryListsRequest& AddListArgWithXmlName(ListArgWithXmlNameT&& value) {
    m_listArgWithXmlNameHasBeenSet = true;
    m_listArgWithXmlName.emplace_back(std::forward<ListArgWithXmlNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const NestedStructWithList& GetNestedWithList() const { return m_nestedWithList; }
  inline bool NestedWithListHasBeenSet() const { return m_nestedWithListHasBeenSet; }
  template <typename NestedWithListT = NestedStructWithList>
  void SetNestedWithList(NestedWithListT&& value) {
    m_nestedWithListHasBeenSet = true;
    m_nestedWithList = std::forward<NestedWithListT>(value);
  }
  template <typename NestedWithListT = NestedStructWithList>
  QueryListsRequest& WithNestedWithList(NestedWithListT&& value) {
    SetNestedWithList(std::forward<NestedWithListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_listArg;
  bool m_listArgHasBeenSet = false;

  Aws::Vector<GreetingStruct> m_complexListArg;
  bool m_complexListArgHasBeenSet = false;

  Aws::Vector<Aws::String> m_listArgWithXmlNameMember;
  bool m_listArgWithXmlNameMemberHasBeenSet = false;

  Aws::Vector<Aws::String> m_listArgWithXmlName;
  bool m_listArgWithXmlNameHasBeenSet = false;

  NestedStructWithList m_nestedWithList;
  bool m_nestedWithListHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
