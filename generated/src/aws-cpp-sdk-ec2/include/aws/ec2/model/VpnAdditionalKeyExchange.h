/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AdditionalKeyExchangeMethodsListValue.h>
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
 * <p>Describes an additional key exchange round that is permitted for the VPN
 * tunnel.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnAdditionalKeyExchange">AWS
 * API Reference</a></p>
 */
class VpnAdditionalKeyExchange {
 public:
  AWS_EC2_API VpnAdditionalKeyExchange() = default;
  AWS_EC2_API VpnAdditionalKeyExchange(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API VpnAdditionalKeyExchange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The additional key exchange round number.</p>
   */
  inline int GetAdditionalKeyExchangeRound() const { return m_additionalKeyExchangeRound; }
  inline bool AdditionalKeyExchangeRoundHasBeenSet() const { return m_additionalKeyExchangeRoundHasBeenSet; }
  inline void SetAdditionalKeyExchangeRound(int value) {
    m_additionalKeyExchangeRoundHasBeenSet = true;
    m_additionalKeyExchangeRound = value;
  }
  inline VpnAdditionalKeyExchange& WithAdditionalKeyExchangeRound(int value) {
    SetAdditionalKeyExchangeRound(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key exchange method numbers permitted for this round.</p>
   */
  inline const Aws::Vector<AdditionalKeyExchangeMethodsListValue>& GetKeyExchangeMethods() const { return m_keyExchangeMethods; }
  inline bool KeyExchangeMethodsHasBeenSet() const { return m_keyExchangeMethodsHasBeenSet; }
  template <typename KeyExchangeMethodsT = Aws::Vector<AdditionalKeyExchangeMethodsListValue>>
  void SetKeyExchangeMethods(KeyExchangeMethodsT&& value) {
    m_keyExchangeMethodsHasBeenSet = true;
    m_keyExchangeMethods = std::forward<KeyExchangeMethodsT>(value);
  }
  template <typename KeyExchangeMethodsT = Aws::Vector<AdditionalKeyExchangeMethodsListValue>>
  VpnAdditionalKeyExchange& WithKeyExchangeMethods(KeyExchangeMethodsT&& value) {
    SetKeyExchangeMethods(std::forward<KeyExchangeMethodsT>(value));
    return *this;
  }
  template <typename KeyExchangeMethodsT = AdditionalKeyExchangeMethodsListValue>
  VpnAdditionalKeyExchange& AddKeyExchangeMethods(KeyExchangeMethodsT&& value) {
    m_keyExchangeMethodsHasBeenSet = true;
    m_keyExchangeMethods.emplace_back(std::forward<KeyExchangeMethodsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this round is mandatory.</p>
   */
  inline AdditionalKeyExchangeRequirement GetRequirement() const { return m_requirement; }
  inline bool RequirementHasBeenSet() const { return m_requirementHasBeenSet; }
  inline void SetRequirement(AdditionalKeyExchangeRequirement value) {
    m_requirementHasBeenSet = true;
    m_requirement = value;
  }
  inline VpnAdditionalKeyExchange& WithRequirement(AdditionalKeyExchangeRequirement value) {
    SetRequirement(value);
    return *this;
  }
  ///@}
 private:
  int m_additionalKeyExchangeRound{0};

  Aws::Vector<AdditionalKeyExchangeMethodsListValue> m_keyExchangeMethods;

  AdditionalKeyExchangeRequirement m_requirement{AdditionalKeyExchangeRequirement::NOT_SET};
  bool m_additionalKeyExchangeRoundHasBeenSet = false;
  bool m_keyExchangeMethodsHasBeenSet = false;
  bool m_requirementHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
