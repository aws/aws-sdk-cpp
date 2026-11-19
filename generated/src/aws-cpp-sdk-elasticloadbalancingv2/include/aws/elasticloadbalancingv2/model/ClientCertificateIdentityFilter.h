/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/ClientCertificateIdentityFilterAction.h>
#include <aws/elasticloadbalancingv2/model/ClientCertificateIdentityFilterField.h>
#include <aws/elasticloadbalancingv2/model/ClientCertificateIdentityFilterMatchType.h>

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
 * <p>Describes a client certificate identity filter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ClientCertificateIdentityFilter">AWS
 * API Reference</a></p>
 */
class ClientCertificateIdentityFilter {
 public:
  AWS_ELASTICLOADBALANCINGV2_API ClientCertificateIdentityFilter() = default;
  AWS_ELASTICLOADBALANCINGV2_API ClientCertificateIdentityFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICLOADBALANCINGV2_API ClientCertificateIdentityFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                                     const char* locationValue) const;
  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The client certificate field to match. The possible values are:</p> <ul> <li>
   * <p> <code>subject-cn</code> – The common name in the certificate subject.</p>
   * </li> <li> <p> <code>subject-ou</code> – The organizational unit in the
   * certificate subject.</p> </li> <li> <p> <code>san-dns</code> – A DNS name in the
   * subject alternative name (SAN).</p> </li> <li> <p> <code>san-uri</code> – A URI
   * in the subject alternative name (SAN).</p> </li> </ul> <p>If the client
   * certificate doesn't contain the field, the filter doesn't match. If the field
   * has multiple values, the filter matches if it matches any one of the values.</p>
   */
  inline ClientCertificateIdentityFilterField GetField() const { return m_field; }
  inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
  inline void SetField(ClientCertificateIdentityFilterField value) {
    m_fieldHasBeenSet = true;
    m_field = value;
  }
  inline ClientCertificateIdentityFilter& WithField(ClientCertificateIdentityFilterField value) {
    SetField(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to take when the client certificate matches the filter. The only
   * supported action is <code>accept</code>.</p>
   */
  inline ClientCertificateIdentityFilterAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ClientCertificateIdentityFilterAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline ClientCertificateIdentityFilter& WithAction(ClientCertificateIdentityFilterAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The match type. The possible values are <code>exact</code> and
   * <code>prefix</code>.</p> <p>For the <code>subject-cn</code>,
   * <code>subject-ou</code>, and <code>san-dns</code> fields, matching is
   * case-insensitive. For the <code>san-uri</code> field, the scheme and host are
   * matched case-insensitively, and the rest of the URI is matched
   * case-sensitively.</p>
   */
  inline ClientCertificateIdentityFilterMatchType GetMatchType() const { return m_matchType; }
  inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }
  inline void SetMatchType(ClientCertificateIdentityFilterMatchType value) {
    m_matchTypeHasBeenSet = true;
    m_matchType = value;
  }
  inline ClientCertificateIdentityFilter& WithMatchType(ClientCertificateIdentityFilterMatchType value) {
    SetMatchType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to match. The value must be 1–256 printable ASCII characters.</p>
   * <p>If the field is <code>san-uri</code>, the value must begin with a letter.
   * Before the first colon, the value can contain only letters, digits, plus signs
   * (+), hyphens (-), or periods (.). If the match type is <code>exact</code>, the
   * value must contain a colon. For example,
   * <code>spiffe://example.com/workload</code> is a valid value.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ClientCertificateIdentityFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  ClientCertificateIdentityFilterField m_field{ClientCertificateIdentityFilterField::NOT_SET};

  ClientCertificateIdentityFilterAction m_action{ClientCertificateIdentityFilterAction::NOT_SET};

  ClientCertificateIdentityFilterMatchType m_matchType{ClientCertificateIdentityFilterMatchType::NOT_SET};

  Aws::String m_value;
  bool m_fieldHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_matchTypeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
