/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Contains information about a Route Origin Authorization (ROA) published in
 * the RPKI. A ROA cryptographically attests that a specific ASN is authorized to
 * originate a specific IP address prefix.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamRouteOriginAuthorization">AWS
 * API Reference</a></p>
 */
class IpamRouteOriginAuthorization {
 public:
  AWS_EC2_API IpamRouteOriginAuthorization() = default;
  AWS_EC2_API IpamRouteOriginAuthorization(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamRouteOriginAuthorization& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Autonomous System Number (ASN) authorized by the ROA.</p>
   */
  inline const Aws::String& GetAsn() const { return m_asn; }
  inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
  template <typename AsnT = Aws::String>
  void SetAsn(AsnT&& value) {
    m_asnHasBeenSet = true;
    m_asn = std::forward<AsnT>(value);
  }
  template <typename AsnT = Aws::String>
  IpamRouteOriginAuthorization& WithAsn(AsnT&& value) {
    SetAsn(std::forward<AsnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address prefix authorized by the ROA in CIDR notation.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  IpamRouteOriginAuthorization& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum prefix length that the ASN is authorized to announce.</p>
   */
  inline int GetMaxLength() const { return m_maxLength; }
  inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
  inline void SetMaxLength(int value) {
    m_maxLengthHasBeenSet = true;
    m_maxLength = value;
  }
  inline IpamRouteOriginAuthorization& WithMaxLength(int value) {
    SetMaxLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the ROA matches the route announcement.</p>
   */
  inline bool GetMatch() const { return m_match; }
  inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
  inline void SetMatch(bool value) {
    m_matchHasBeenSet = true;
    m_match = value;
  }
  inline IpamRouteOriginAuthorization& WithMatch(bool value) {
    SetMatch(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiration date of the ROA.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
  inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
  template <typename ExpirationT = Aws::Utils::DateTime>
  void SetExpiration(ExpirationT&& value) {
    m_expirationHasBeenSet = true;
    m_expiration = std::forward<ExpirationT>(value);
  }
  template <typename ExpirationT = Aws::Utils::DateTime>
  IpamRouteOriginAuthorization& WithExpiration(ExpirationT&& value) {
    SetExpiration(std::forward<ExpirationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_asn;

  Aws::String m_prefix;

  int m_maxLength{0};

  bool m_match{false};

  Aws::Utils::DateTime m_expiration{};
  bool m_asnHasBeenSet = false;
  bool m_prefixHasBeenSet = false;
  bool m_maxLengthHasBeenSet = false;
  bool m_matchHasBeenSet = false;
  bool m_expirationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
