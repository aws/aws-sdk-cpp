/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/JwtValidationActionAdditionalClaimFormatEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace ElasticLoadBalancingv2 {
namespace Model {

/**
 * <p>Information about an additional claim to validate.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/JwtValidationActionAdditionalClaim">AWS
 * API Reference</a></p>
 */
class JwtValidationActionAdditionalClaim {
 public:
  AWS_ELASTICLOADBALANCINGV2_API JwtValidationActionAdditionalClaim() = default;
  AWS_ELASTICLOADBALANCINGV2_API JwtValidationActionAdditionalClaim(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICLOADBALANCINGV2_API JwtValidationActionAdditionalClaim& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                                     const char* locationValue) const;
  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The format of the claim value.</p>
   */
  inline JwtValidationActionAdditionalClaimFormatEnum GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(JwtValidationActionAdditionalClaimFormatEnum value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline JwtValidationActionAdditionalClaim& WithFormat(JwtValidationActionAdditionalClaimFormatEnum value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the claim. You can't specify <code>exp</code>, <code>iss</code>,
   * <code>nbf</code>, or <code>iat</code> because we validate them by default.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  JwtValidationActionAdditionalClaim& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The claim value. The maximum size of the list is 10. Each value can be up to
   * 256 characters in length. If the format is <code>space-separated-values</code>,
   * the values can't include spaces.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  JwtValidationActionAdditionalClaim& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  JwtValidationActionAdditionalClaim& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  JwtValidationActionAdditionalClaimFormatEnum m_format{JwtValidationActionAdditionalClaimFormatEnum::NOT_SET};
  bool m_formatHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::Vector<Aws::String> m_values;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
