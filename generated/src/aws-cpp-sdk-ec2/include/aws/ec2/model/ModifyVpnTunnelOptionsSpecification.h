/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpnTunnelLogOptionsSpecification.h>
#include <aws/ec2/model/Phase1EncryptionAlgorithmsRequestListValue.h>
#include <aws/ec2/model/Phase2EncryptionAlgorithmsRequestListValue.h>
#include <aws/ec2/model/Phase1IntegrityAlgorithmsRequestListValue.h>
#include <aws/ec2/model/Phase2IntegrityAlgorithmsRequestListValue.h>
#include <aws/ec2/model/Phase1DHGroupNumbersRequestListValue.h>
#include <aws/ec2/model/Phase2DHGroupNumbersRequestListValue.h>
#include <aws/ec2/model/IKEVersionsRequestListValue.h>
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
   * <p>The Amazon Web Services Site-to-Site VPN tunnel options to
   * modify.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpnTunnelOptionsSpecification">AWS
   * API Reference</a></p>
   */
  class ModifyVpnTunnelOptionsSpecification
  {
  public:
    AWS_EC2_API ModifyVpnTunnelOptionsSpecification();
    AWS_EC2_API ModifyVpnTunnelOptionsSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyVpnTunnelOptionsSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The range of inside IPv4 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline const Aws::String& GetTunnelInsideCidr() const{ return m_tunnelInsideCidr; }

    /**
     * <p>The range of inside IPv4 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline bool TunnelInsideCidrHasBeenSet() const { return m_tunnelInsideCidrHasBeenSet; }

    /**
     * <p>The range of inside IPv4 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline void SetTunnelInsideCidr(const Aws::String& value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr = value; }

    /**
     * <p>The range of inside IPv4 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline void SetTunnelInsideCidr(Aws::String&& value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr = std::move(value); }

    /**
     * <p>The range of inside IPv4 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline void SetTunnelInsideCidr(const char* value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr.assign(value); }

    /**
     * <p>The range of inside IPv4 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithTunnelInsideCidr(const Aws::String& value) { SetTunnelInsideCidr(value); return *this;}

    /**
     * <p>The range of inside IPv4 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithTunnelInsideCidr(Aws::String&& value) { SetTunnelInsideCidr(std::move(value)); return *this;}

    /**
     * <p>The range of inside IPv4 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same virtual private
     * gateway. </p> <p>Constraints: A size /30 CIDR block from the
     * <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and
     * cannot be used:</p> <ul> <li> <p> <code>169.254.0.0/30</code> </p> </li> <li>
     * <p> <code>169.254.1.0/30</code> </p> </li> <li> <p> <code>169.254.2.0/30</code>
     * </p> </li> <li> <p> <code>169.254.3.0/30</code> </p> </li> <li> <p>
     * <code>169.254.4.0/30</code> </p> </li> <li> <p> <code>169.254.5.0/30</code> </p>
     * </li> <li> <p> <code>169.254.169.252/30</code> </p> </li> </ul>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithTunnelInsideCidr(const char* value) { SetTunnelInsideCidr(value); return *this;}


    /**
     * <p>The range of inside IPv6 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same transit gateway.</p>
     * <p>Constraints: A size /126 CIDR block from the local <code>fd00::/8</code>
     * range.</p>
     */
    inline const Aws::String& GetTunnelInsideIpv6Cidr() const{ return m_tunnelInsideIpv6Cidr; }

    /**
     * <p>The range of inside IPv6 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same transit gateway.</p>
     * <p>Constraints: A size /126 CIDR block from the local <code>fd00::/8</code>
     * range.</p>
     */
    inline bool TunnelInsideIpv6CidrHasBeenSet() const { return m_tunnelInsideIpv6CidrHasBeenSet; }

    /**
     * <p>The range of inside IPv6 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same transit gateway.</p>
     * <p>Constraints: A size /126 CIDR block from the local <code>fd00::/8</code>
     * range.</p>
     */
    inline void SetTunnelInsideIpv6Cidr(const Aws::String& value) { m_tunnelInsideIpv6CidrHasBeenSet = true; m_tunnelInsideIpv6Cidr = value; }

    /**
     * <p>The range of inside IPv6 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same transit gateway.</p>
     * <p>Constraints: A size /126 CIDR block from the local <code>fd00::/8</code>
     * range.</p>
     */
    inline void SetTunnelInsideIpv6Cidr(Aws::String&& value) { m_tunnelInsideIpv6CidrHasBeenSet = true; m_tunnelInsideIpv6Cidr = std::move(value); }

    /**
     * <p>The range of inside IPv6 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same transit gateway.</p>
     * <p>Constraints: A size /126 CIDR block from the local <code>fd00::/8</code>
     * range.</p>
     */
    inline void SetTunnelInsideIpv6Cidr(const char* value) { m_tunnelInsideIpv6CidrHasBeenSet = true; m_tunnelInsideIpv6Cidr.assign(value); }

    /**
     * <p>The range of inside IPv6 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same transit gateway.</p>
     * <p>Constraints: A size /126 CIDR block from the local <code>fd00::/8</code>
     * range.</p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithTunnelInsideIpv6Cidr(const Aws::String& value) { SetTunnelInsideIpv6Cidr(value); return *this;}

    /**
     * <p>The range of inside IPv6 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same transit gateway.</p>
     * <p>Constraints: A size /126 CIDR block from the local <code>fd00::/8</code>
     * range.</p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithTunnelInsideIpv6Cidr(Aws::String&& value) { SetTunnelInsideIpv6Cidr(std::move(value)); return *this;}

    /**
     * <p>The range of inside IPv6 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same transit gateway.</p>
     * <p>Constraints: A size /126 CIDR block from the local <code>fd00::/8</code>
     * range.</p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithTunnelInsideIpv6Cidr(const char* value) { SetTunnelInsideIpv6Cidr(value); return *this;}


    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters, periods (.), and underscores (_). Must
     * be between 8 and 64 characters in length and cannot start with zero (0).</p>
     */
    inline const Aws::String& GetPreSharedKey() const{ return m_preSharedKey; }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters, periods (.), and underscores (_). Must
     * be between 8 and 64 characters in length and cannot start with zero (0).</p>
     */
    inline bool PreSharedKeyHasBeenSet() const { return m_preSharedKeyHasBeenSet; }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters, periods (.), and underscores (_). Must
     * be between 8 and 64 characters in length and cannot start with zero (0).</p>
     */
    inline void SetPreSharedKey(const Aws::String& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = value; }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters, periods (.), and underscores (_). Must
     * be between 8 and 64 characters in length and cannot start with zero (0).</p>
     */
    inline void SetPreSharedKey(Aws::String&& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = std::move(value); }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters, periods (.), and underscores (_). Must
     * be between 8 and 64 characters in length and cannot start with zero (0).</p>
     */
    inline void SetPreSharedKey(const char* value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey.assign(value); }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters, periods (.), and underscores (_). Must
     * be between 8 and 64 characters in length and cannot start with zero (0).</p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPreSharedKey(const Aws::String& value) { SetPreSharedKey(value); return *this;}

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters, periods (.), and underscores (_). Must
     * be between 8 and 64 characters in length and cannot start with zero (0).</p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPreSharedKey(Aws::String&& value) { SetPreSharedKey(std::move(value)); return *this;}

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters, periods (.), and underscores (_). Must
     * be between 8 and 64 characters in length and cannot start with zero (0).</p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPreSharedKey(const char* value) { SetPreSharedKey(value); return *this;}


    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     * <p>Constraints: A value between 900 and 28,800.</p> <p>Default:
     * <code>28800</code> </p>
     */
    inline int GetPhase1LifetimeSeconds() const{ return m_phase1LifetimeSeconds; }

    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     * <p>Constraints: A value between 900 and 28,800.</p> <p>Default:
     * <code>28800</code> </p>
     */
    inline bool Phase1LifetimeSecondsHasBeenSet() const { return m_phase1LifetimeSecondsHasBeenSet; }

    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     * <p>Constraints: A value between 900 and 28,800.</p> <p>Default:
     * <code>28800</code> </p>
     */
    inline void SetPhase1LifetimeSeconds(int value) { m_phase1LifetimeSecondsHasBeenSet = true; m_phase1LifetimeSeconds = value; }

    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     * <p>Constraints: A value between 900 and 28,800.</p> <p>Default:
     * <code>28800</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase1LifetimeSeconds(int value) { SetPhase1LifetimeSeconds(value); return *this;}


    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     * <p>Constraints: A value between 900 and 3,600. The value must be less than the
     * value for <code>Phase1LifetimeSeconds</code>.</p> <p>Default: <code>3600</code>
     * </p>
     */
    inline int GetPhase2LifetimeSeconds() const{ return m_phase2LifetimeSeconds; }

    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     * <p>Constraints: A value between 900 and 3,600. The value must be less than the
     * value for <code>Phase1LifetimeSeconds</code>.</p> <p>Default: <code>3600</code>
     * </p>
     */
    inline bool Phase2LifetimeSecondsHasBeenSet() const { return m_phase2LifetimeSecondsHasBeenSet; }

    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     * <p>Constraints: A value between 900 and 3,600. The value must be less than the
     * value for <code>Phase1LifetimeSeconds</code>.</p> <p>Default: <code>3600</code>
     * </p>
     */
    inline void SetPhase2LifetimeSeconds(int value) { m_phase2LifetimeSecondsHasBeenSet = true; m_phase2LifetimeSeconds = value; }

    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     * <p>Constraints: A value between 900 and 3,600. The value must be less than the
     * value for <code>Phase1LifetimeSeconds</code>.</p> <p>Default: <code>3600</code>
     * </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase2LifetimeSeconds(int value) { SetPhase2LifetimeSeconds(value); return *this;}


    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE rekey.
     * The exact time of the rekey is randomly selected based on the value for
     * <code>RekeyFuzzPercentage</code>.</p> <p>Constraints: A value between 60 and
     * half of <code>Phase2LifetimeSeconds</code>.</p> <p>Default: <code>540</code>
     * </p>
     */
    inline int GetRekeyMarginTimeSeconds() const{ return m_rekeyMarginTimeSeconds; }

    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE rekey.
     * The exact time of the rekey is randomly selected based on the value for
     * <code>RekeyFuzzPercentage</code>.</p> <p>Constraints: A value between 60 and
     * half of <code>Phase2LifetimeSeconds</code>.</p> <p>Default: <code>540</code>
     * </p>
     */
    inline bool RekeyMarginTimeSecondsHasBeenSet() const { return m_rekeyMarginTimeSecondsHasBeenSet; }

    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE rekey.
     * The exact time of the rekey is randomly selected based on the value for
     * <code>RekeyFuzzPercentage</code>.</p> <p>Constraints: A value between 60 and
     * half of <code>Phase2LifetimeSeconds</code>.</p> <p>Default: <code>540</code>
     * </p>
     */
    inline void SetRekeyMarginTimeSeconds(int value) { m_rekeyMarginTimeSecondsHasBeenSet = true; m_rekeyMarginTimeSeconds = value; }

    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE rekey.
     * The exact time of the rekey is randomly selected based on the value for
     * <code>RekeyFuzzPercentage</code>.</p> <p>Constraints: A value between 60 and
     * half of <code>Phase2LifetimeSeconds</code>.</p> <p>Default: <code>540</code>
     * </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithRekeyMarginTimeSeconds(int value) { SetRekeyMarginTimeSeconds(value); return *this;}


    /**
     * <p>The percentage of the rekey window (determined by
     * <code>RekeyMarginTimeSeconds</code>) during which the rekey time is randomly
     * selected.</p> <p>Constraints: A value between 0 and 100.</p> <p>Default:
     * <code>100</code> </p>
     */
    inline int GetRekeyFuzzPercentage() const{ return m_rekeyFuzzPercentage; }

    /**
     * <p>The percentage of the rekey window (determined by
     * <code>RekeyMarginTimeSeconds</code>) during which the rekey time is randomly
     * selected.</p> <p>Constraints: A value between 0 and 100.</p> <p>Default:
     * <code>100</code> </p>
     */
    inline bool RekeyFuzzPercentageHasBeenSet() const { return m_rekeyFuzzPercentageHasBeenSet; }

    /**
     * <p>The percentage of the rekey window (determined by
     * <code>RekeyMarginTimeSeconds</code>) during which the rekey time is randomly
     * selected.</p> <p>Constraints: A value between 0 and 100.</p> <p>Default:
     * <code>100</code> </p>
     */
    inline void SetRekeyFuzzPercentage(int value) { m_rekeyFuzzPercentageHasBeenSet = true; m_rekeyFuzzPercentage = value; }

    /**
     * <p>The percentage of the rekey window (determined by
     * <code>RekeyMarginTimeSeconds</code>) during which the rekey time is randomly
     * selected.</p> <p>Constraints: A value between 0 and 100.</p> <p>Default:
     * <code>100</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithRekeyFuzzPercentage(int value) { SetRekeyFuzzPercentage(value); return *this;}


    /**
     * <p>The number of packets in an IKE replay window.</p> <p>Constraints: A value
     * between 64 and 2048.</p> <p>Default: <code>1024</code> </p>
     */
    inline int GetReplayWindowSize() const{ return m_replayWindowSize; }

    /**
     * <p>The number of packets in an IKE replay window.</p> <p>Constraints: A value
     * between 64 and 2048.</p> <p>Default: <code>1024</code> </p>
     */
    inline bool ReplayWindowSizeHasBeenSet() const { return m_replayWindowSizeHasBeenSet; }

    /**
     * <p>The number of packets in an IKE replay window.</p> <p>Constraints: A value
     * between 64 and 2048.</p> <p>Default: <code>1024</code> </p>
     */
    inline void SetReplayWindowSize(int value) { m_replayWindowSizeHasBeenSet = true; m_replayWindowSize = value; }

    /**
     * <p>The number of packets in an IKE replay window.</p> <p>Constraints: A value
     * between 64 and 2048.</p> <p>Default: <code>1024</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithReplayWindowSize(int value) { SetReplayWindowSize(value); return *this;}


    /**
     * <p>The number of seconds after which a DPD timeout occurs.</p> <p>Constraints: A
     * value greater than or equal to 30.</p> <p>Default: <code>30</code> </p>
     */
    inline int GetDPDTimeoutSeconds() const{ return m_dPDTimeoutSeconds; }

    /**
     * <p>The number of seconds after which a DPD timeout occurs.</p> <p>Constraints: A
     * value greater than or equal to 30.</p> <p>Default: <code>30</code> </p>
     */
    inline bool DPDTimeoutSecondsHasBeenSet() const { return m_dPDTimeoutSecondsHasBeenSet; }

    /**
     * <p>The number of seconds after which a DPD timeout occurs.</p> <p>Constraints: A
     * value greater than or equal to 30.</p> <p>Default: <code>30</code> </p>
     */
    inline void SetDPDTimeoutSeconds(int value) { m_dPDTimeoutSecondsHasBeenSet = true; m_dPDTimeoutSeconds = value; }

    /**
     * <p>The number of seconds after which a DPD timeout occurs.</p> <p>Constraints: A
     * value greater than or equal to 30.</p> <p>Default: <code>30</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithDPDTimeoutSeconds(int value) { SetDPDTimeoutSeconds(value); return *this;}


    /**
     * <p>The action to take after DPD timeout occurs. Specify <code>restart</code> to
     * restart the IKE initiation. Specify <code>clear</code> to end the IKE
     * session.</p> <p>Valid Values: <code>clear</code> | <code>none</code> |
     * <code>restart</code> </p> <p>Default: <code>clear</code> </p>
     */
    inline const Aws::String& GetDPDTimeoutAction() const{ return m_dPDTimeoutAction; }

    /**
     * <p>The action to take after DPD timeout occurs. Specify <code>restart</code> to
     * restart the IKE initiation. Specify <code>clear</code> to end the IKE
     * session.</p> <p>Valid Values: <code>clear</code> | <code>none</code> |
     * <code>restart</code> </p> <p>Default: <code>clear</code> </p>
     */
    inline bool DPDTimeoutActionHasBeenSet() const { return m_dPDTimeoutActionHasBeenSet; }

    /**
     * <p>The action to take after DPD timeout occurs. Specify <code>restart</code> to
     * restart the IKE initiation. Specify <code>clear</code> to end the IKE
     * session.</p> <p>Valid Values: <code>clear</code> | <code>none</code> |
     * <code>restart</code> </p> <p>Default: <code>clear</code> </p>
     */
    inline void SetDPDTimeoutAction(const Aws::String& value) { m_dPDTimeoutActionHasBeenSet = true; m_dPDTimeoutAction = value; }

    /**
     * <p>The action to take after DPD timeout occurs. Specify <code>restart</code> to
     * restart the IKE initiation. Specify <code>clear</code> to end the IKE
     * session.</p> <p>Valid Values: <code>clear</code> | <code>none</code> |
     * <code>restart</code> </p> <p>Default: <code>clear</code> </p>
     */
    inline void SetDPDTimeoutAction(Aws::String&& value) { m_dPDTimeoutActionHasBeenSet = true; m_dPDTimeoutAction = std::move(value); }

    /**
     * <p>The action to take after DPD timeout occurs. Specify <code>restart</code> to
     * restart the IKE initiation. Specify <code>clear</code> to end the IKE
     * session.</p> <p>Valid Values: <code>clear</code> | <code>none</code> |
     * <code>restart</code> </p> <p>Default: <code>clear</code> </p>
     */
    inline void SetDPDTimeoutAction(const char* value) { m_dPDTimeoutActionHasBeenSet = true; m_dPDTimeoutAction.assign(value); }

    /**
     * <p>The action to take after DPD timeout occurs. Specify <code>restart</code> to
     * restart the IKE initiation. Specify <code>clear</code> to end the IKE
     * session.</p> <p>Valid Values: <code>clear</code> | <code>none</code> |
     * <code>restart</code> </p> <p>Default: <code>clear</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithDPDTimeoutAction(const Aws::String& value) { SetDPDTimeoutAction(value); return *this;}

    /**
     * <p>The action to take after DPD timeout occurs. Specify <code>restart</code> to
     * restart the IKE initiation. Specify <code>clear</code> to end the IKE
     * session.</p> <p>Valid Values: <code>clear</code> | <code>none</code> |
     * <code>restart</code> </p> <p>Default: <code>clear</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithDPDTimeoutAction(Aws::String&& value) { SetDPDTimeoutAction(std::move(value)); return *this;}

    /**
     * <p>The action to take after DPD timeout occurs. Specify <code>restart</code> to
     * restart the IKE initiation. Specify <code>clear</code> to end the IKE
     * session.</p> <p>Valid Values: <code>clear</code> | <code>none</code> |
     * <code>restart</code> </p> <p>Default: <code>clear</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithDPDTimeoutAction(const char* value) { SetDPDTimeoutAction(value); return *this;}


    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline const Aws::Vector<Phase1EncryptionAlgorithmsRequestListValue>& GetPhase1EncryptionAlgorithms() const{ return m_phase1EncryptionAlgorithms; }

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline bool Phase1EncryptionAlgorithmsHasBeenSet() const { return m_phase1EncryptionAlgorithmsHasBeenSet; }

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline void SetPhase1EncryptionAlgorithms(const Aws::Vector<Phase1EncryptionAlgorithmsRequestListValue>& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms = value; }

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline void SetPhase1EncryptionAlgorithms(Aws::Vector<Phase1EncryptionAlgorithmsRequestListValue>&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms = std::move(value); }

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase1EncryptionAlgorithms(const Aws::Vector<Phase1EncryptionAlgorithmsRequestListValue>& value) { SetPhase1EncryptionAlgorithms(value); return *this;}

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase1EncryptionAlgorithms(Aws::Vector<Phase1EncryptionAlgorithmsRequestListValue>&& value) { SetPhase1EncryptionAlgorithms(std::move(value)); return *this;}

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase1EncryptionAlgorithms(const Phase1EncryptionAlgorithmsRequestListValue& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms.push_back(value); return *this; }

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsRequestListValue&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline const Aws::Vector<Phase2EncryptionAlgorithmsRequestListValue>& GetPhase2EncryptionAlgorithms() const{ return m_phase2EncryptionAlgorithms; }

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline bool Phase2EncryptionAlgorithmsHasBeenSet() const { return m_phase2EncryptionAlgorithmsHasBeenSet; }

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline void SetPhase2EncryptionAlgorithms(const Aws::Vector<Phase2EncryptionAlgorithmsRequestListValue>& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms = value; }

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline void SetPhase2EncryptionAlgorithms(Aws::Vector<Phase2EncryptionAlgorithmsRequestListValue>&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms = std::move(value); }

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase2EncryptionAlgorithms(const Aws::Vector<Phase2EncryptionAlgorithmsRequestListValue>& value) { SetPhase2EncryptionAlgorithms(value); return *this;}

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase2EncryptionAlgorithms(Aws::Vector<Phase2EncryptionAlgorithmsRequestListValue>&& value) { SetPhase2EncryptionAlgorithms(std::move(value)); return *this;}

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase2EncryptionAlgorithms(const Phase2EncryptionAlgorithmsRequestListValue& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms.push_back(value); return *this; }

    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsRequestListValue&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline const Aws::Vector<Phase1IntegrityAlgorithmsRequestListValue>& GetPhase1IntegrityAlgorithms() const{ return m_phase1IntegrityAlgorithms; }

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline bool Phase1IntegrityAlgorithmsHasBeenSet() const { return m_phase1IntegrityAlgorithmsHasBeenSet; }

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline void SetPhase1IntegrityAlgorithms(const Aws::Vector<Phase1IntegrityAlgorithmsRequestListValue>& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms = value; }

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline void SetPhase1IntegrityAlgorithms(Aws::Vector<Phase1IntegrityAlgorithmsRequestListValue>&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms = std::move(value); }

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase1IntegrityAlgorithms(const Aws::Vector<Phase1IntegrityAlgorithmsRequestListValue>& value) { SetPhase1IntegrityAlgorithms(value); return *this;}

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase1IntegrityAlgorithms(Aws::Vector<Phase1IntegrityAlgorithmsRequestListValue>&& value) { SetPhase1IntegrityAlgorithms(std::move(value)); return *this;}

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase1IntegrityAlgorithms(const Phase1IntegrityAlgorithmsRequestListValue& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms.push_back(value); return *this; }

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsRequestListValue&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline const Aws::Vector<Phase2IntegrityAlgorithmsRequestListValue>& GetPhase2IntegrityAlgorithms() const{ return m_phase2IntegrityAlgorithms; }

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline bool Phase2IntegrityAlgorithmsHasBeenSet() const { return m_phase2IntegrityAlgorithmsHasBeenSet; }

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline void SetPhase2IntegrityAlgorithms(const Aws::Vector<Phase2IntegrityAlgorithmsRequestListValue>& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms = value; }

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline void SetPhase2IntegrityAlgorithms(Aws::Vector<Phase2IntegrityAlgorithmsRequestListValue>&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms = std::move(value); }

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase2IntegrityAlgorithms(const Aws::Vector<Phase2IntegrityAlgorithmsRequestListValue>& value) { SetPhase2IntegrityAlgorithms(value); return *this;}

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase2IntegrityAlgorithms(Aws::Vector<Phase2IntegrityAlgorithmsRequestListValue>&& value) { SetPhase2IntegrityAlgorithms(std::move(value)); return *this;}

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase2IntegrityAlgorithms(const Phase2IntegrityAlgorithmsRequestListValue& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms.push_back(value); return *this; }

    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsRequestListValue&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 1 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>14</code> | <code>15</code> | <code>16</code> | <code>17</code> |
     * <code>18</code> | <code>19</code> | <code>20</code> | <code>21</code> |
     * <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline const Aws::Vector<Phase1DHGroupNumbersRequestListValue>& GetPhase1DHGroupNumbers() const{ return m_phase1DHGroupNumbers; }

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 1 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>14</code> | <code>15</code> | <code>16</code> | <code>17</code> |
     * <code>18</code> | <code>19</code> | <code>20</code> | <code>21</code> |
     * <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline bool Phase1DHGroupNumbersHasBeenSet() const { return m_phase1DHGroupNumbersHasBeenSet; }

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 1 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>14</code> | <code>15</code> | <code>16</code> | <code>17</code> |
     * <code>18</code> | <code>19</code> | <code>20</code> | <code>21</code> |
     * <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline void SetPhase1DHGroupNumbers(const Aws::Vector<Phase1DHGroupNumbersRequestListValue>& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers = value; }

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 1 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>14</code> | <code>15</code> | <code>16</code> | <code>17</code> |
     * <code>18</code> | <code>19</code> | <code>20</code> | <code>21</code> |
     * <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline void SetPhase1DHGroupNumbers(Aws::Vector<Phase1DHGroupNumbersRequestListValue>&& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers = std::move(value); }

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 1 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>14</code> | <code>15</code> | <code>16</code> | <code>17</code> |
     * <code>18</code> | <code>19</code> | <code>20</code> | <code>21</code> |
     * <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase1DHGroupNumbers(const Aws::Vector<Phase1DHGroupNumbersRequestListValue>& value) { SetPhase1DHGroupNumbers(value); return *this;}

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 1 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>14</code> | <code>15</code> | <code>16</code> | <code>17</code> |
     * <code>18</code> | <code>19</code> | <code>20</code> | <code>21</code> |
     * <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase1DHGroupNumbers(Aws::Vector<Phase1DHGroupNumbersRequestListValue>&& value) { SetPhase1DHGroupNumbers(std::move(value)); return *this;}

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 1 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>14</code> | <code>15</code> | <code>16</code> | <code>17</code> |
     * <code>18</code> | <code>19</code> | <code>20</code> | <code>21</code> |
     * <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase1DHGroupNumbers(const Phase1DHGroupNumbersRequestListValue& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers.push_back(value); return *this; }

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 1 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>14</code> | <code>15</code> | <code>16</code> | <code>17</code> |
     * <code>18</code> | <code>19</code> | <code>20</code> | <code>21</code> |
     * <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase1DHGroupNumbers(Phase1DHGroupNumbersRequestListValue&& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 2 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>5</code> | <code>14</code> | <code>15</code> | <code>16</code> |
     * <code>17</code> | <code>18</code> | <code>19</code> | <code>20</code> |
     * <code>21</code> | <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline const Aws::Vector<Phase2DHGroupNumbersRequestListValue>& GetPhase2DHGroupNumbers() const{ return m_phase2DHGroupNumbers; }

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 2 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>5</code> | <code>14</code> | <code>15</code> | <code>16</code> |
     * <code>17</code> | <code>18</code> | <code>19</code> | <code>20</code> |
     * <code>21</code> | <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline bool Phase2DHGroupNumbersHasBeenSet() const { return m_phase2DHGroupNumbersHasBeenSet; }

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 2 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>5</code> | <code>14</code> | <code>15</code> | <code>16</code> |
     * <code>17</code> | <code>18</code> | <code>19</code> | <code>20</code> |
     * <code>21</code> | <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline void SetPhase2DHGroupNumbers(const Aws::Vector<Phase2DHGroupNumbersRequestListValue>& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers = value; }

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 2 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>5</code> | <code>14</code> | <code>15</code> | <code>16</code> |
     * <code>17</code> | <code>18</code> | <code>19</code> | <code>20</code> |
     * <code>21</code> | <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline void SetPhase2DHGroupNumbers(Aws::Vector<Phase2DHGroupNumbersRequestListValue>&& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers = std::move(value); }

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 2 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>5</code> | <code>14</code> | <code>15</code> | <code>16</code> |
     * <code>17</code> | <code>18</code> | <code>19</code> | <code>20</code> |
     * <code>21</code> | <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase2DHGroupNumbers(const Aws::Vector<Phase2DHGroupNumbersRequestListValue>& value) { SetPhase2DHGroupNumbers(value); return *this;}

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 2 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>5</code> | <code>14</code> | <code>15</code> | <code>16</code> |
     * <code>17</code> | <code>18</code> | <code>19</code> | <code>20</code> |
     * <code>21</code> | <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithPhase2DHGroupNumbers(Aws::Vector<Phase2DHGroupNumbersRequestListValue>&& value) { SetPhase2DHGroupNumbers(std::move(value)); return *this;}

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 2 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>5</code> | <code>14</code> | <code>15</code> | <code>16</code> |
     * <code>17</code> | <code>18</code> | <code>19</code> | <code>20</code> |
     * <code>21</code> | <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase2DHGroupNumbers(const Phase2DHGroupNumbersRequestListValue& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers.push_back(value); return *this; }

    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 2 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>5</code> | <code>14</code> | <code>15</code> | <code>16</code> |
     * <code>17</code> | <code>18</code> | <code>19</code> | <code>20</code> |
     * <code>21</code> | <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddPhase2DHGroupNumbers(Phase2DHGroupNumbersRequestListValue&& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers.push_back(std::move(value)); return *this; }


    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p> <p>Valid values:
     * <code>ikev1</code> | <code>ikev2</code> </p>
     */
    inline const Aws::Vector<IKEVersionsRequestListValue>& GetIKEVersions() const{ return m_iKEVersions; }

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p> <p>Valid values:
     * <code>ikev1</code> | <code>ikev2</code> </p>
     */
    inline bool IKEVersionsHasBeenSet() const { return m_iKEVersionsHasBeenSet; }

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p> <p>Valid values:
     * <code>ikev1</code> | <code>ikev2</code> </p>
     */
    inline void SetIKEVersions(const Aws::Vector<IKEVersionsRequestListValue>& value) { m_iKEVersionsHasBeenSet = true; m_iKEVersions = value; }

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p> <p>Valid values:
     * <code>ikev1</code> | <code>ikev2</code> </p>
     */
    inline void SetIKEVersions(Aws::Vector<IKEVersionsRequestListValue>&& value) { m_iKEVersionsHasBeenSet = true; m_iKEVersions = std::move(value); }

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p> <p>Valid values:
     * <code>ikev1</code> | <code>ikev2</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithIKEVersions(const Aws::Vector<IKEVersionsRequestListValue>& value) { SetIKEVersions(value); return *this;}

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p> <p>Valid values:
     * <code>ikev1</code> | <code>ikev2</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithIKEVersions(Aws::Vector<IKEVersionsRequestListValue>&& value) { SetIKEVersions(std::move(value)); return *this;}

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p> <p>Valid values:
     * <code>ikev1</code> | <code>ikev2</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddIKEVersions(const IKEVersionsRequestListValue& value) { m_iKEVersionsHasBeenSet = true; m_iKEVersions.push_back(value); return *this; }

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p> <p>Valid values:
     * <code>ikev1</code> | <code>ikev2</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& AddIKEVersions(IKEVersionsRequestListValue&& value) { m_iKEVersionsHasBeenSet = true; m_iKEVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>The action to take when the establishing the tunnel for the VPN connection.
     * By default, your customer gateway device must initiate the IKE negotiation and
     * bring up the tunnel. Specify <code>start</code> for Amazon Web Services to
     * initiate the IKE negotiation.</p> <p>Valid Values: <code>add</code> |
     * <code>start</code> </p> <p>Default: <code>add</code> </p>
     */
    inline const Aws::String& GetStartupAction() const{ return m_startupAction; }

    /**
     * <p>The action to take when the establishing the tunnel for the VPN connection.
     * By default, your customer gateway device must initiate the IKE negotiation and
     * bring up the tunnel. Specify <code>start</code> for Amazon Web Services to
     * initiate the IKE negotiation.</p> <p>Valid Values: <code>add</code> |
     * <code>start</code> </p> <p>Default: <code>add</code> </p>
     */
    inline bool StartupActionHasBeenSet() const { return m_startupActionHasBeenSet; }

    /**
     * <p>The action to take when the establishing the tunnel for the VPN connection.
     * By default, your customer gateway device must initiate the IKE negotiation and
     * bring up the tunnel. Specify <code>start</code> for Amazon Web Services to
     * initiate the IKE negotiation.</p> <p>Valid Values: <code>add</code> |
     * <code>start</code> </p> <p>Default: <code>add</code> </p>
     */
    inline void SetStartupAction(const Aws::String& value) { m_startupActionHasBeenSet = true; m_startupAction = value; }

    /**
     * <p>The action to take when the establishing the tunnel for the VPN connection.
     * By default, your customer gateway device must initiate the IKE negotiation and
     * bring up the tunnel. Specify <code>start</code> for Amazon Web Services to
     * initiate the IKE negotiation.</p> <p>Valid Values: <code>add</code> |
     * <code>start</code> </p> <p>Default: <code>add</code> </p>
     */
    inline void SetStartupAction(Aws::String&& value) { m_startupActionHasBeenSet = true; m_startupAction = std::move(value); }

    /**
     * <p>The action to take when the establishing the tunnel for the VPN connection.
     * By default, your customer gateway device must initiate the IKE negotiation and
     * bring up the tunnel. Specify <code>start</code> for Amazon Web Services to
     * initiate the IKE negotiation.</p> <p>Valid Values: <code>add</code> |
     * <code>start</code> </p> <p>Default: <code>add</code> </p>
     */
    inline void SetStartupAction(const char* value) { m_startupActionHasBeenSet = true; m_startupAction.assign(value); }

    /**
     * <p>The action to take when the establishing the tunnel for the VPN connection.
     * By default, your customer gateway device must initiate the IKE negotiation and
     * bring up the tunnel. Specify <code>start</code> for Amazon Web Services to
     * initiate the IKE negotiation.</p> <p>Valid Values: <code>add</code> |
     * <code>start</code> </p> <p>Default: <code>add</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithStartupAction(const Aws::String& value) { SetStartupAction(value); return *this;}

    /**
     * <p>The action to take when the establishing the tunnel for the VPN connection.
     * By default, your customer gateway device must initiate the IKE negotiation and
     * bring up the tunnel. Specify <code>start</code> for Amazon Web Services to
     * initiate the IKE negotiation.</p> <p>Valid Values: <code>add</code> |
     * <code>start</code> </p> <p>Default: <code>add</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithStartupAction(Aws::String&& value) { SetStartupAction(std::move(value)); return *this;}

    /**
     * <p>The action to take when the establishing the tunnel for the VPN connection.
     * By default, your customer gateway device must initiate the IKE negotiation and
     * bring up the tunnel. Specify <code>start</code> for Amazon Web Services to
     * initiate the IKE negotiation.</p> <p>Valid Values: <code>add</code> |
     * <code>start</code> </p> <p>Default: <code>add</code> </p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithStartupAction(const char* value) { SetStartupAction(value); return *this;}


    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline const VpnTunnelLogOptionsSpecification& GetLogOptions() const{ return m_logOptions; }

    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline bool LogOptionsHasBeenSet() const { return m_logOptionsHasBeenSet; }

    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline void SetLogOptions(const VpnTunnelLogOptionsSpecification& value) { m_logOptionsHasBeenSet = true; m_logOptions = value; }

    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline void SetLogOptions(VpnTunnelLogOptionsSpecification&& value) { m_logOptionsHasBeenSet = true; m_logOptions = std::move(value); }

    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithLogOptions(const VpnTunnelLogOptionsSpecification& value) { SetLogOptions(value); return *this;}

    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline ModifyVpnTunnelOptionsSpecification& WithLogOptions(VpnTunnelLogOptionsSpecification&& value) { SetLogOptions(std::move(value)); return *this;}

  private:

    Aws::String m_tunnelInsideCidr;
    bool m_tunnelInsideCidrHasBeenSet = false;

    Aws::String m_tunnelInsideIpv6Cidr;
    bool m_tunnelInsideIpv6CidrHasBeenSet = false;

    Aws::String m_preSharedKey;
    bool m_preSharedKeyHasBeenSet = false;

    int m_phase1LifetimeSeconds;
    bool m_phase1LifetimeSecondsHasBeenSet = false;

    int m_phase2LifetimeSeconds;
    bool m_phase2LifetimeSecondsHasBeenSet = false;

    int m_rekeyMarginTimeSeconds;
    bool m_rekeyMarginTimeSecondsHasBeenSet = false;

    int m_rekeyFuzzPercentage;
    bool m_rekeyFuzzPercentageHasBeenSet = false;

    int m_replayWindowSize;
    bool m_replayWindowSizeHasBeenSet = false;

    int m_dPDTimeoutSeconds;
    bool m_dPDTimeoutSecondsHasBeenSet = false;

    Aws::String m_dPDTimeoutAction;
    bool m_dPDTimeoutActionHasBeenSet = false;

    Aws::Vector<Phase1EncryptionAlgorithmsRequestListValue> m_phase1EncryptionAlgorithms;
    bool m_phase1EncryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<Phase2EncryptionAlgorithmsRequestListValue> m_phase2EncryptionAlgorithms;
    bool m_phase2EncryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<Phase1IntegrityAlgorithmsRequestListValue> m_phase1IntegrityAlgorithms;
    bool m_phase1IntegrityAlgorithmsHasBeenSet = false;

    Aws::Vector<Phase2IntegrityAlgorithmsRequestListValue> m_phase2IntegrityAlgorithms;
    bool m_phase2IntegrityAlgorithmsHasBeenSet = false;

    Aws::Vector<Phase1DHGroupNumbersRequestListValue> m_phase1DHGroupNumbers;
    bool m_phase1DHGroupNumbersHasBeenSet = false;

    Aws::Vector<Phase2DHGroupNumbersRequestListValue> m_phase2DHGroupNumbers;
    bool m_phase2DHGroupNumbersHasBeenSet = false;

    Aws::Vector<IKEVersionsRequestListValue> m_iKEVersions;
    bool m_iKEVersionsHasBeenSet = false;

    Aws::String m_startupAction;
    bool m_startupActionHasBeenSet = false;

    VpnTunnelLogOptionsSpecification m_logOptions;
    bool m_logOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
