/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/IpamCidrStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>Configuration for an IPAM CIDR that defines a specific IP address range, IPAM
 * pool, and associated Anycast IP address.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/IpamCidrConfig">AWS
 * API Reference</a></p>
 */
class IpamCidrConfig {
 public:
  AWS_CLOUDFRONT_API IpamCidrConfig() = default;
  AWS_CLOUDFRONT_API IpamCidrConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API IpamCidrConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The CIDR that specifies the IP address range for this IPAM configuration.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  IpamCidrConfig& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IPAM pool that the CIDR block is
   * assigned to.</p>
   */
  inline const Aws::String& GetIpamPoolArn() const { return m_ipamPoolArn; }
  inline bool IpamPoolArnHasBeenSet() const { return m_ipamPoolArnHasBeenSet; }
  template <typename IpamPoolArnT = Aws::String>
  void SetIpamPoolArn(IpamPoolArnT&& value) {
    m_ipamPoolArnHasBeenSet = true;
    m_ipamPoolArn = std::forward<IpamPoolArnT>(value);
  }
  template <typename IpamPoolArnT = Aws::String>
  IpamCidrConfig& WithIpamPoolArn(IpamPoolArnT&& value) {
    SetIpamPoolArn(std::forward<IpamPoolArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specified Anycast IP address allocated from the IPAM pool for this CIDR
   * configuration.</p>
   */
  inline const Aws::String& GetAnycastIp() const { return m_anycastIp; }
  inline bool AnycastIpHasBeenSet() const { return m_anycastIpHasBeenSet; }
  template <typename AnycastIpT = Aws::String>
  void SetAnycastIp(AnycastIpT&& value) {
    m_anycastIpHasBeenSet = true;
    m_anycastIp = std::forward<AnycastIpT>(value);
  }
  template <typename AnycastIpT = Aws::String>
  IpamCidrConfig& WithAnycastIp(AnycastIpT&& value) {
    SetAnycastIp(std::forward<AnycastIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the IPAM CIDR configuration.</p>
   */
  inline IpamCidrStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IpamCidrStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IpamCidrConfig& WithStatus(IpamCidrStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_cidr;

  Aws::String m_ipamPoolArn;

  Aws::String m_anycastIp;

  IpamCidrStatus m_status{IpamCidrStatus::NOT_SET};
  bool m_cidrHasBeenSet = false;
  bool m_ipamPoolArnHasBeenSet = false;
  bool m_anycastIpHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
