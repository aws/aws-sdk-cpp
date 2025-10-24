/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>

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
 * <p>Information about a host header condition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/HostHeaderConditionConfig">AWS
 * API Reference</a></p>
 */
class HostHeaderConditionConfig {
 public:
  AWS_ELASTICLOADBALANCINGV2_API HostHeaderConditionConfig() = default;
  AWS_ELASTICLOADBALANCINGV2_API HostHeaderConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICLOADBALANCINGV2_API HostHeaderConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                                     const char* locationValue) const;
  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The host names. The maximum length of each string is 128 characters. The
   * comparison is case insensitive. The following wildcard characters are supported:
   * * (matches 0 or more characters) and ? (matches exactly 1 character). You must
   * include at least one "." character. You can include only alphabetical characters
   * after the final "." character.</p> <p>If you specify multiple strings, the
   * condition is satisfied if one of the strings matches the host name.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  HostHeaderConditionConfig& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  HostHeaderConditionConfig& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The regular expressions to compare against the host header. The maximum
   * length of each string is 128 characters.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegexValues() const { return m_regexValues; }
  inline bool RegexValuesHasBeenSet() const { return m_regexValuesHasBeenSet; }
  template <typename RegexValuesT = Aws::Vector<Aws::String>>
  void SetRegexValues(RegexValuesT&& value) {
    m_regexValuesHasBeenSet = true;
    m_regexValues = std::forward<RegexValuesT>(value);
  }
  template <typename RegexValuesT = Aws::Vector<Aws::String>>
  HostHeaderConditionConfig& WithRegexValues(RegexValuesT&& value) {
    SetRegexValues(std::forward<RegexValuesT>(value));
    return *this;
  }
  template <typename RegexValuesT = Aws::String>
  HostHeaderConditionConfig& AddRegexValues(RegexValuesT&& value) {
    m_regexValuesHasBeenSet = true;
    m_regexValues.emplace_back(std::forward<RegexValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_values;
  bool m_valuesHasBeenSet = false;

  Aws::Vector<Aws::String> m_regexValues;
  bool m_regexValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
