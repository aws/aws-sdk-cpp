/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2Protocol {
namespace Model {
class RecursiveXmlShapesOutputNested2;

class RecursiveXmlShapesOutputNested1 {
 public:
  AWS_EC2PROTOCOL_API RecursiveXmlShapesOutputNested1() = default;
  AWS_EC2PROTOCOL_API RecursiveXmlShapesOutputNested1(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2PROTOCOL_API RecursiveXmlShapesOutputNested1& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{

  inline const Aws::String& GetFoo() const { return m_foo; }
  inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
  template <typename FooT = Aws::String>
  void SetFoo(FooT&& value) {
    m_fooHasBeenSet = true;
    m_foo = std::forward<FooT>(value);
  }
  template <typename FooT = Aws::String>
  RecursiveXmlShapesOutputNested1& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RecursiveXmlShapesOutputNested2& GetNested() const { return *m_nested; }
  inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
  template <typename NestedT = RecursiveXmlShapesOutputNested2>
  void SetNested(NestedT&& value) {
    m_nestedHasBeenSet = true;
    m_nested = Aws::MakeShared<RecursiveXmlShapesOutputNested2>("RecursiveXmlShapesOutputNested1", std::forward<NestedT>(value));
  }
  template <typename NestedT = RecursiveXmlShapesOutputNested2>
  RecursiveXmlShapesOutputNested1& WithNested(NestedT&& value) {
    SetNested(std::forward<NestedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;

  std::shared_ptr<RecursiveXmlShapesOutputNested2> m_nested;
  bool m_nestedHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
