/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Information about a rewrite transform. This transform matches a pattern and
 * replaces it with the specified string.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RewriteConfig">AWS
 * API Reference</a></p>
 */
class RewriteConfig {
 public:
  AWS_ELASTICLOADBALANCINGV2_API RewriteConfig() = default;
  AWS_ELASTICLOADBALANCINGV2_API RewriteConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICLOADBALANCINGV2_API RewriteConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                                     const char* locationValue) const;
  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The regular expression to match in the input string. The maximum length of
   * the string is 1,024 characters.</p>
   */
  inline const Aws::String& GetRegex() const { return m_regex; }
  inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
  template <typename RegexT = Aws::String>
  void SetRegex(RegexT&& value) {
    m_regexHasBeenSet = true;
    m_regex = std::forward<RegexT>(value);
  }
  template <typename RegexT = Aws::String>
  RewriteConfig& WithRegex(RegexT&& value) {
    SetRegex(std::forward<RegexT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replacement string to use when rewriting the matched input. The maximum
   * length of the string is 1,024 characters. You can specify capture groups in the
   * regular expression (for example, $1 and $2).</p>
   */
  inline const Aws::String& GetReplace() const { return m_replace; }
  inline bool ReplaceHasBeenSet() const { return m_replaceHasBeenSet; }
  template <typename ReplaceT = Aws::String>
  void SetReplace(ReplaceT&& value) {
    m_replaceHasBeenSet = true;
    m_replace = std::forward<ReplaceT>(value);
  }
  template <typename ReplaceT = Aws::String>
  RewriteConfig& WithReplace(ReplaceT&& value) {
    SetReplace(std::forward<ReplaceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_regex;
  bool m_regexHasBeenSet = false;

  Aws::String m_replace;
  bool m_replaceHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
