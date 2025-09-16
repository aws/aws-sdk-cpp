/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/ComplexNestedErrorData.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RestXmlProtocol {
namespace Model {

/**
 * <p>This error is thrown when a request is invalid.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rest-xml-protocol-2019-12-16/ComplexError">AWS
 * API Reference</a></p>
 */
class ComplexError {
 public:
  AWS_RESTXMLPROTOCOL_API ComplexError() = default;
  AWS_RESTXMLPROTOCOL_API ComplexError(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API ComplexError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{

  inline const Aws::String& GetHeader() const { return m_header; }
  inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
  template <typename HeaderT = Aws::String>
  void SetHeader(HeaderT&& value) {
    m_headerHasBeenSet = true;
    m_header = std::forward<HeaderT>(value);
  }
  template <typename HeaderT = Aws::String>
  ComplexError& WithHeader(HeaderT&& value) {
    SetHeader(std::forward<HeaderT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetTopLevel() const { return m_topLevel; }
  inline bool TopLevelHasBeenSet() const { return m_topLevelHasBeenSet; }
  template <typename TopLevelT = Aws::String>
  void SetTopLevel(TopLevelT&& value) {
    m_topLevelHasBeenSet = true;
    m_topLevel = std::forward<TopLevelT>(value);
  }
  template <typename TopLevelT = Aws::String>
  ComplexError& WithTopLevel(TopLevelT&& value) {
    SetTopLevel(std::forward<TopLevelT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ComplexNestedErrorData& GetNested() const { return m_nested; }
  inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
  template <typename NestedT = ComplexNestedErrorData>
  void SetNested(NestedT&& value) {
    m_nestedHasBeenSet = true;
    m_nested = std::forward<NestedT>(value);
  }
  template <typename NestedT = ComplexNestedErrorData>
  ComplexError& WithNested(NestedT&& value) {
    SetNested(std::forward<NestedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_header;
  bool m_headerHasBeenSet = false;

  Aws::String m_topLevel;
  bool m_topLevelHasBeenSet = false;

  ComplexNestedErrorData m_nested;
  bool m_nestedHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
