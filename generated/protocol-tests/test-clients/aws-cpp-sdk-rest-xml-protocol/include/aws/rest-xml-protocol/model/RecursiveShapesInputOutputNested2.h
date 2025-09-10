/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RestXmlProtocol {
namespace Model {
class RecursiveShapesInputOutputNested1;

class RecursiveShapesInputOutputNested2 {
 public:
  AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested2() = default;
  AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested2(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested2& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{

  inline const Aws::String& GetBar() const { return m_bar; }
  inline bool BarHasBeenSet() const { return m_barHasBeenSet; }
  template <typename BarT = Aws::String>
  void SetBar(BarT&& value) {
    m_barHasBeenSet = true;
    m_bar = std::forward<BarT>(value);
  }
  template <typename BarT = Aws::String>
  RecursiveShapesInputOutputNested2& WithBar(BarT&& value) {
    SetBar(std::forward<BarT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RecursiveShapesInputOutputNested1& GetRecursiveMember() const { return *m_recursiveMember; }
  inline bool RecursiveMemberHasBeenSet() const { return m_recursiveMemberHasBeenSet; }
  template <typename RecursiveMemberT = RecursiveShapesInputOutputNested1>
  void SetRecursiveMember(RecursiveMemberT&& value) {
    m_recursiveMemberHasBeenSet = true;
    m_recursiveMember =
        Aws::MakeShared<RecursiveShapesInputOutputNested1>("RecursiveShapesInputOutputNested2", std::forward<RecursiveMemberT>(value));
  }
  template <typename RecursiveMemberT = RecursiveShapesInputOutputNested1>
  RecursiveShapesInputOutputNested2& WithRecursiveMember(RecursiveMemberT&& value) {
    SetRecursiveMember(std::forward<RecursiveMemberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bar;
  bool m_barHasBeenSet = false;

  std::shared_ptr<RecursiveShapesInputOutputNested1> m_recursiveMember;
  bool m_recursiveMemberHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
