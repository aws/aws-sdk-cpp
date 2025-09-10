/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/ec2-protocol/model/ComplexNestedErrorData.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2Protocol {
namespace Model {

/**
 * <p>This error is thrown when a request is invalid.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-protocol-2020-01-08/ComplexError">AWS
 * API Reference</a></p>
 */
class ComplexError {
 public:
  AWS_EC2PROTOCOL_API ComplexError() = default;
  AWS_EC2PROTOCOL_API ComplexError(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2PROTOCOL_API ComplexError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

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
}  // namespace EC2Protocol
}  // namespace Aws
