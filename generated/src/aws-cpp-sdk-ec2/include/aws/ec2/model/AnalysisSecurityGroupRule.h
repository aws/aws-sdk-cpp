/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PortRange.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a security group rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AnalysisSecurityGroupRule">AWS
   * API Reference</a></p>
   */
  class AnalysisSecurityGroupRule
  {
  public:
    AWS_EC2_API AnalysisSecurityGroupRule() = default;
    AWS_EC2_API AnalysisSecurityGroupRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AnalysisSecurityGroupRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    AnalysisSecurityGroupRule& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction. The following are the possible values:</p> <ul> <li>
     * <p>egress</p> </li> <li> <p>ingress</p> </li> </ul>
     */
    inline const Aws::String& GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    template<typename DirectionT = Aws::String>
    void SetDirection(DirectionT&& value) { m_directionHasBeenSet = true; m_direction = std::forward<DirectionT>(value); }
    template<typename DirectionT = Aws::String>
    AnalysisSecurityGroupRule& WithDirection(DirectionT&& value) { SetDirection(std::forward<DirectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group ID.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const { return m_securityGroupId; }
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }
    template<typename SecurityGroupIdT = Aws::String>
    void SetSecurityGroupId(SecurityGroupIdT&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::forward<SecurityGroupIdT>(value); }
    template<typename SecurityGroupIdT = Aws::String>
    AnalysisSecurityGroupRule& WithSecurityGroupId(SecurityGroupIdT&& value) { SetSecurityGroupId(std::forward<SecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port range.</p>
     */
    inline const PortRange& GetPortRange() const { return m_portRange; }
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
    template<typename PortRangeT = PortRange>
    void SetPortRange(PortRangeT&& value) { m_portRangeHasBeenSet = true; m_portRange = std::forward<PortRangeT>(value); }
    template<typename PortRangeT = PortRange>
    AnalysisSecurityGroupRule& WithPortRange(PortRangeT&& value) { SetPortRange(std::forward<PortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix list ID.</p>
     */
    inline const Aws::String& GetPrefixListId() const { return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    template<typename PrefixListIdT = Aws::String>
    void SetPrefixListId(PrefixListIdT&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::forward<PrefixListIdT>(value); }
    template<typename PrefixListIdT = Aws::String>
    AnalysisSecurityGroupRule& WithPrefixListId(PrefixListIdT&& value) { SetPrefixListId(std::forward<PrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol name.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    AnalysisSecurityGroupRule& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_direction;
    bool m_directionHasBeenSet = false;

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet = false;

    PortRange m_portRange;
    bool m_portRangeHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
