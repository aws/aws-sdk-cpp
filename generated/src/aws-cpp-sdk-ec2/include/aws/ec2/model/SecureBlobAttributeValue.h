/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a value for a resource attribute that is a Base64-encoded binary
 * data object.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecureBlobAttributeValue">AWS
 * API Reference</a></p>
 */
class SecureBlobAttributeValue {
 public:
  AWS_EC2_API SecureBlobAttributeValue() = default;
  AWS_EC2_API SecureBlobAttributeValue(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API SecureBlobAttributeValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The attribute value.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::Utils::CryptoBuffer>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::Utils::CryptoBuffer>
  SecureBlobAttributeValue& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::CryptoBuffer m_value{};
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
