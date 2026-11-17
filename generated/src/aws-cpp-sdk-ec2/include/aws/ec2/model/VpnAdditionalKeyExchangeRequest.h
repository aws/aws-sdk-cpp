/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AdditionalKeyExchangeMethodsRequestListValue.h>
#include <aws/ec2/model/AdditionalKeyExchangeRequirement.h>

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
 * <p>Specifies an additional key exchange round for the VPN tunnel, as defined in
 * RFC 9370.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnAdditionalKeyExchangeRequest">AWS
 * API Reference</a></p>
 */
class VpnAdditionalKeyExchangeRequest {
 public:
  AWS_EC2_API VpnAdditionalKeyExchangeRequest() = default;
  AWS_EC2_API VpnAdditionalKeyExchangeRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API VpnAdditionalKeyExchangeRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The additional key exchange round number.</p> <p>Valid range: Minimum value
   * of 1. Maximum value of 7.</p>
   */
  inline int GetAdditionalKeyExchangeRound() const { return m_additionalKeyExchangeRound; }
  inline bool AdditionalKeyExchangeRoundHasBeenSet() const { return m_additionalKeyExchangeRoundHasBeenSet; }
  inline void SetAdditionalKeyExchangeRound(int value) {
    m_additionalKeyExchangeRoundHasBeenSet = true;
    m_additionalKeyExchangeRound = value;
  }
  inline VpnAdditionalKeyExchangeRequest& WithAdditionalKeyExchangeRound(int value) {
    SetAdditionalKeyExchangeRound(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key exchange method numbers that are permitted for this round. The method
   * numbers are the IANA IKEv2 key exchange method transform IDs.</p> <p>A
   * <code>required</code> round must specify at least one method. An
   * <code>optional</code> round can omit this parameter or specify an empty list. If
   * omitted or empty for an optional round, the round is disabled.</p> <p>IKEv2
   * requires that the initial Diffie-Hellman exchange and each required round use a
   * different key exchange method. The permitted methods must allow a distinct
   * method to be selected for each of them.</p> <p>Valid values: <code>2</code> |
   * <code>5</code> | <code>14</code> | <code>15</code> | <code>16</code> |
   * <code>17</code> | <code>18</code> | <code>19</code> | <code>20</code> |
   * <code>21</code> | <code>22</code> | <code>23</code> | <code>24</code> |
   * <code>35</code> | <code>36</code> | <code>37</code> </p>
   */
  inline const Aws::Vector<AdditionalKeyExchangeMethodsRequestListValue>& GetKeyExchangeMethods() const { return m_keyExchangeMethods; }
  inline bool KeyExchangeMethodsHasBeenSet() const { return m_keyExchangeMethodsHasBeenSet; }
  template <typename KeyExchangeMethodsT = Aws::Vector<AdditionalKeyExchangeMethodsRequestListValue>>
  void SetKeyExchangeMethods(KeyExchangeMethodsT&& value) {
    m_keyExchangeMethodsHasBeenSet = true;
    m_keyExchangeMethods = std::forward<KeyExchangeMethodsT>(value);
  }
  template <typename KeyExchangeMethodsT = Aws::Vector<AdditionalKeyExchangeMethodsRequestListValue>>
  VpnAdditionalKeyExchangeRequest& WithKeyExchangeMethods(KeyExchangeMethodsT&& value) {
    SetKeyExchangeMethods(std::forward<KeyExchangeMethodsT>(value));
    return *this;
  }
  template <typename KeyExchangeMethodsT = AdditionalKeyExchangeMethodsRequestListValue>
  VpnAdditionalKeyExchangeRequest& AddKeyExchangeMethods(KeyExchangeMethodsT&& value) {
    m_keyExchangeMethodsHasBeenSet = true;
    m_keyExchangeMethods.emplace_back(std::forward<KeyExchangeMethodsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this round is mandatory. If <code>required</code>, the
   * tunnel isn't established unless the customer gateway device negotiates this
   * round. If <code>optional</code>, the round is negotiated only if the customer
   * gateway device supports it.</p> <p>Valid values: <code>required</code> |
   * <code>optional</code> </p> <p>Default: <code>required</code> </p>
   */
  inline AdditionalKeyExchangeRequirement GetRequirement() const { return m_requirement; }
  inline bool RequirementHasBeenSet() const { return m_requirementHasBeenSet; }
  inline void SetRequirement(AdditionalKeyExchangeRequirement value) {
    m_requirementHasBeenSet = true;
    m_requirement = value;
  }
  inline VpnAdditionalKeyExchangeRequest& WithRequirement(AdditionalKeyExchangeRequirement value) {
    SetRequirement(value);
    return *this;
  }
  ///@}
 private:
  int m_additionalKeyExchangeRound{0};

  Aws::Vector<AdditionalKeyExchangeMethodsRequestListValue> m_keyExchangeMethods;

  AdditionalKeyExchangeRequirement m_requirement{AdditionalKeyExchangeRequirement::NOT_SET};
  bool m_additionalKeyExchangeRoundHasBeenSet = false;
  bool m_keyExchangeMethodsHasBeenSet = false;
  bool m_requirementHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
