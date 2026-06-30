/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/PayerResponsibilityScope.h>
#include <aws/ec2/model/PayerResponsibilityType.h>

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
 * <p>Describes a payer responsibility setting for a VPC endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PayerResponsibilityEntry">AWS
 * API Reference</a></p>
 */
class PayerResponsibilityEntry {
 public:
  AWS_EC2_API PayerResponsibilityEntry() = default;
  AWS_EC2_API PayerResponsibilityEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API PayerResponsibilityEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The scope of usage/charges.</p>
   */
  inline PayerResponsibilityScope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(PayerResponsibilityScope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline PayerResponsibilityEntry& WithScope(PayerResponsibilityScope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account to which the usage is charged.</p>
   */
  inline PayerResponsibilityType GetPayerResponsibilityType() const { return m_payerResponsibilityType; }
  inline bool PayerResponsibilityTypeHasBeenSet() const { return m_payerResponsibilityTypeHasBeenSet; }
  inline void SetPayerResponsibilityType(PayerResponsibilityType value) {
    m_payerResponsibilityTypeHasBeenSet = true;
    m_payerResponsibilityType = value;
  }
  inline PayerResponsibilityEntry& WithPayerResponsibilityType(PayerResponsibilityType value) {
    SetPayerResponsibilityType(value);
    return *this;
  }
  ///@}
 private:
  PayerResponsibilityScope m_scope{PayerResponsibilityScope::NOT_SET};

  PayerResponsibilityType m_payerResponsibilityType{PayerResponsibilityType::NOT_SET};
  bool m_scopeHasBeenSet = false;
  bool m_payerResponsibilityTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
