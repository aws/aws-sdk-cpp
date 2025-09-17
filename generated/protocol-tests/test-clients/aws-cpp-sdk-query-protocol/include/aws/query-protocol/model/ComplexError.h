/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/ComplexNestedErrorData.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace QueryProtocol {
namespace Model {

/**
 * <p>This error is thrown when a request is invalid.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/query-protocol-2020-01-08/ComplexError">AWS
 * API Reference</a></p>
 */
class ComplexError {
 public:
  AWS_QUERYPROTOCOL_API ComplexError() = default;
  AWS_QUERYPROTOCOL_API ComplexError(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_QUERYPROTOCOL_API ComplexError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

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
  Aws::String m_topLevel;
  bool m_topLevelHasBeenSet = false;

  ComplexNestedErrorData m_nested;
  bool m_nestedHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
