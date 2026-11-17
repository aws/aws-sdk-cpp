/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes an additional key exchange round negotiated for an active VPN
 * tunnel.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ActiveVpnTunnelAdditionalKeyExchange">AWS
 * API Reference</a></p>
 */
class ActiveVpnTunnelAdditionalKeyExchange {
 public:
  AWS_EC2_API ActiveVpnTunnelAdditionalKeyExchange() = default;
  AWS_EC2_API ActiveVpnTunnelAdditionalKeyExchange(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ActiveVpnTunnelAdditionalKeyExchange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
  inline ActiveVpnTunnelAdditionalKeyExchange& WithAdditionalKeyExchangeRound(int value) {
    SetAdditionalKeyExchangeRound(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key exchange method number negotiated for this round.</p>
   */
  inline int GetKeyExchangeMethod() const { return m_keyExchangeMethod; }
  inline bool KeyExchangeMethodHasBeenSet() const { return m_keyExchangeMethodHasBeenSet; }
  inline void SetKeyExchangeMethod(int value) {
    m_keyExchangeMethodHasBeenSet = true;
    m_keyExchangeMethod = value;
  }
  inline ActiveVpnTunnelAdditionalKeyExchange& WithKeyExchangeMethod(int value) {
    SetKeyExchangeMethod(value);
    return *this;
  }
  ///@}
 private:
  int m_additionalKeyExchangeRound{0};

  int m_keyExchangeMethod{0};
  bool m_additionalKeyExchangeRoundHasBeenSet = false;
  bool m_keyExchangeMethodHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
