/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Contains information about a Route Origin Authorization (ROA) currently
 * published in the RPKI.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamRouteOriginAuthorizationInfo">AWS
 * API Reference</a></p>
 */
class IpamRouteOriginAuthorizationInfo {
 public:
  AWS_EC2_API IpamRouteOriginAuthorizationInfo() = default;
  AWS_EC2_API IpamRouteOriginAuthorizationInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamRouteOriginAuthorizationInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The IP address prefix in CIDR notation authorized by the ROA.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  IpamRouteOriginAuthorizationInfo& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Autonomous System Number (ASN) authorized to originate the prefix.</p>
   */
  inline const Aws::String& GetAsn() const { return m_asn; }
  inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
  template <typename AsnT = Aws::String>
  void SetAsn(AsnT&& value) {
    m_asnHasBeenSet = true;
    m_asn = std::forward<AsnT>(value);
  }
  template <typename AsnT = Aws::String>
  IpamRouteOriginAuthorizationInfo& WithAsn(AsnT&& value) {
    SetAsn(std::forward<AsnT>(value));
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
  inline IpamRouteOriginAuthorizationInfo& WithMaxLength(int value) {
    SetMaxLength(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_cidr;

  Aws::String m_asn;

  int m_maxLength{0};
  bool m_cidrHasBeenSet = false;
  bool m_asnHasBeenSet = false;
  bool m_maxLengthHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
