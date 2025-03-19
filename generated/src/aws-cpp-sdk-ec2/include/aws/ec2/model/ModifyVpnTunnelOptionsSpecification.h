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
    AWS_EC2_API ModifyVpnTunnelOptionsSpecification() = default;
    AWS_EC2_API ModifyVpnTunnelOptionsSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyVpnTunnelOptionsSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
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
    inline const Aws::String& GetTunnelInsideCidr() const { return m_tunnelInsideCidr; }
    inline bool TunnelInsideCidrHasBeenSet() const { return m_tunnelInsideCidrHasBeenSet; }
    template<typename TunnelInsideCidrT = Aws::String>
    void SetTunnelInsideCidr(TunnelInsideCidrT&& value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr = std::forward<TunnelInsideCidrT>(value); }
    template<typename TunnelInsideCidrT = Aws::String>
    ModifyVpnTunnelOptionsSpecification& WithTunnelInsideCidr(TunnelInsideCidrT&& value) { SetTunnelInsideCidr(std::forward<TunnelInsideCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of inside IPv6 addresses for the tunnel. Any specified CIDR blocks
     * must be unique across all VPN connections that use the same transit gateway.</p>
     * <p>Constraints: A size /126 CIDR block from the local <code>fd00::/8</code>
     * range.</p>
     */
    inline const Aws::String& GetTunnelInsideIpv6Cidr() const { return m_tunnelInsideIpv6Cidr; }
    inline bool TunnelInsideIpv6CidrHasBeenSet() const { return m_tunnelInsideIpv6CidrHasBeenSet; }
    template<typename TunnelInsideIpv6CidrT = Aws::String>
    void SetTunnelInsideIpv6Cidr(TunnelInsideIpv6CidrT&& value) { m_tunnelInsideIpv6CidrHasBeenSet = true; m_tunnelInsideIpv6Cidr = std::forward<TunnelInsideIpv6CidrT>(value); }
    template<typename TunnelInsideIpv6CidrT = Aws::String>
    ModifyVpnTunnelOptionsSpecification& WithTunnelInsideIpv6Cidr(TunnelInsideIpv6CidrT&& value) { SetTunnelInsideIpv6Cidr(std::forward<TunnelInsideIpv6CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p> <p>Constraints: Allowed
     * characters are alphanumeric characters, periods (.), and underscores (_). Must
     * be between 8 and 64 characters in length and cannot start with zero (0).</p>
     */
    inline const Aws::String& GetPreSharedKey() const { return m_preSharedKey; }
    inline bool PreSharedKeyHasBeenSet() const { return m_preSharedKeyHasBeenSet; }
    template<typename PreSharedKeyT = Aws::String>
    void SetPreSharedKey(PreSharedKeyT&& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = std::forward<PreSharedKeyT>(value); }
    template<typename PreSharedKeyT = Aws::String>
    ModifyVpnTunnelOptionsSpecification& WithPreSharedKey(PreSharedKeyT&& value) { SetPreSharedKey(std::forward<PreSharedKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     * <p>Constraints: A value between 900 and 28,800.</p> <p>Default:
     * <code>28800</code> </p>
     */
    inline int GetPhase1LifetimeSeconds() const { return m_phase1LifetimeSeconds; }
    inline bool Phase1LifetimeSecondsHasBeenSet() const { return m_phase1LifetimeSecondsHasBeenSet; }
    inline void SetPhase1LifetimeSeconds(int value) { m_phase1LifetimeSecondsHasBeenSet = true; m_phase1LifetimeSeconds = value; }
    inline ModifyVpnTunnelOptionsSpecification& WithPhase1LifetimeSeconds(int value) { SetPhase1LifetimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     * <p>Constraints: A value between 900 and 3,600. The value must be less than the
     * value for <code>Phase1LifetimeSeconds</code>.</p> <p>Default: <code>3600</code>
     * </p>
     */
    inline int GetPhase2LifetimeSeconds() const { return m_phase2LifetimeSeconds; }
    inline bool Phase2LifetimeSecondsHasBeenSet() const { return m_phase2LifetimeSecondsHasBeenSet; }
    inline void SetPhase2LifetimeSeconds(int value) { m_phase2LifetimeSecondsHasBeenSet = true; m_phase2LifetimeSeconds = value; }
    inline ModifyVpnTunnelOptionsSpecification& WithPhase2LifetimeSeconds(int value) { SetPhase2LifetimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE rekey.
     * The exact time of the rekey is randomly selected based on the value for
     * <code>RekeyFuzzPercentage</code>.</p> <p>Constraints: A value between 60 and
     * half of <code>Phase2LifetimeSeconds</code>.</p> <p>Default: <code>270</code>
     * </p>
     */
    inline int GetRekeyMarginTimeSeconds() const { return m_rekeyMarginTimeSeconds; }
    inline bool RekeyMarginTimeSecondsHasBeenSet() const { return m_rekeyMarginTimeSecondsHasBeenSet; }
    inline void SetRekeyMarginTimeSeconds(int value) { m_rekeyMarginTimeSecondsHasBeenSet = true; m_rekeyMarginTimeSeconds = value; }
    inline ModifyVpnTunnelOptionsSpecification& WithRekeyMarginTimeSeconds(int value) { SetRekeyMarginTimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the rekey window (determined by
     * <code>RekeyMarginTimeSeconds</code>) during which the rekey time is randomly
     * selected.</p> <p>Constraints: A value between 0 and 100.</p> <p>Default:
     * <code>100</code> </p>
     */
    inline int GetRekeyFuzzPercentage() const { return m_rekeyFuzzPercentage; }
    inline bool RekeyFuzzPercentageHasBeenSet() const { return m_rekeyFuzzPercentageHasBeenSet; }
    inline void SetRekeyFuzzPercentage(int value) { m_rekeyFuzzPercentageHasBeenSet = true; m_rekeyFuzzPercentage = value; }
    inline ModifyVpnTunnelOptionsSpecification& WithRekeyFuzzPercentage(int value) { SetRekeyFuzzPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of packets in an IKE replay window.</p> <p>Constraints: A value
     * between 64 and 2048.</p> <p>Default: <code>1024</code> </p>
     */
    inline int GetReplayWindowSize() const { return m_replayWindowSize; }
    inline bool ReplayWindowSizeHasBeenSet() const { return m_replayWindowSizeHasBeenSet; }
    inline void SetReplayWindowSize(int value) { m_replayWindowSizeHasBeenSet = true; m_replayWindowSize = value; }
    inline ModifyVpnTunnelOptionsSpecification& WithReplayWindowSize(int value) { SetReplayWindowSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds after which a DPD timeout occurs. A DPD timeout of 40
     * seconds means that the VPN endpoint will consider the peer dead 30 seconds after
     * the first failed keep-alive.</p> <p>Constraints: A value greater than or equal
     * to 30.</p> <p>Default: <code>40</code> </p>
     */
    inline int GetDPDTimeoutSeconds() const { return m_dPDTimeoutSeconds; }
    inline bool DPDTimeoutSecondsHasBeenSet() const { return m_dPDTimeoutSecondsHasBeenSet; }
    inline void SetDPDTimeoutSeconds(int value) { m_dPDTimeoutSecondsHasBeenSet = true; m_dPDTimeoutSeconds = value; }
    inline ModifyVpnTunnelOptionsSpecification& WithDPDTimeoutSeconds(int value) { SetDPDTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take after DPD timeout occurs. Specify <code>restart</code> to
     * restart the IKE initiation. Specify <code>clear</code> to end the IKE
     * session.</p> <p>Valid Values: <code>clear</code> | <code>none</code> |
     * <code>restart</code> </p> <p>Default: <code>clear</code> </p>
     */
    inline const Aws::String& GetDPDTimeoutAction() const { return m_dPDTimeoutAction; }
    inline bool DPDTimeoutActionHasBeenSet() const { return m_dPDTimeoutActionHasBeenSet; }
    template<typename DPDTimeoutActionT = Aws::String>
    void SetDPDTimeoutAction(DPDTimeoutActionT&& value) { m_dPDTimeoutActionHasBeenSet = true; m_dPDTimeoutAction = std::forward<DPDTimeoutActionT>(value); }
    template<typename DPDTimeoutActionT = Aws::String>
    ModifyVpnTunnelOptionsSpecification& WithDPDTimeoutAction(DPDTimeoutActionT&& value) { SetDPDTimeoutAction(std::forward<DPDTimeoutActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline const Aws::Vector<Phase1EncryptionAlgorithmsRequestListValue>& GetPhase1EncryptionAlgorithms() const { return m_phase1EncryptionAlgorithms; }
    inline bool Phase1EncryptionAlgorithmsHasBeenSet() const { return m_phase1EncryptionAlgorithmsHasBeenSet; }
    template<typename Phase1EncryptionAlgorithmsT = Aws::Vector<Phase1EncryptionAlgorithmsRequestListValue>>
    void SetPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsT&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms = std::forward<Phase1EncryptionAlgorithmsT>(value); }
    template<typename Phase1EncryptionAlgorithmsT = Aws::Vector<Phase1EncryptionAlgorithmsRequestListValue>>
    ModifyVpnTunnelOptionsSpecification& WithPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsT&& value) { SetPhase1EncryptionAlgorithms(std::forward<Phase1EncryptionAlgorithmsT>(value)); return *this;}
    template<typename Phase1EncryptionAlgorithmsT = Phase1EncryptionAlgorithmsRequestListValue>
    ModifyVpnTunnelOptionsSpecification& AddPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsT&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms.emplace_back(std::forward<Phase1EncryptionAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more encryption algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>AES128</code> |
     * <code>AES256</code> | <code>AES128-GCM-16</code> | <code>AES256-GCM-16</code>
     * </p>
     */
    inline const Aws::Vector<Phase2EncryptionAlgorithmsRequestListValue>& GetPhase2EncryptionAlgorithms() const { return m_phase2EncryptionAlgorithms; }
    inline bool Phase2EncryptionAlgorithmsHasBeenSet() const { return m_phase2EncryptionAlgorithmsHasBeenSet; }
    template<typename Phase2EncryptionAlgorithmsT = Aws::Vector<Phase2EncryptionAlgorithmsRequestListValue>>
    void SetPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsT&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms = std::forward<Phase2EncryptionAlgorithmsT>(value); }
    template<typename Phase2EncryptionAlgorithmsT = Aws::Vector<Phase2EncryptionAlgorithmsRequestListValue>>
    ModifyVpnTunnelOptionsSpecification& WithPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsT&& value) { SetPhase2EncryptionAlgorithms(std::forward<Phase2EncryptionAlgorithmsT>(value)); return *this;}
    template<typename Phase2EncryptionAlgorithmsT = Phase2EncryptionAlgorithmsRequestListValue>
    ModifyVpnTunnelOptionsSpecification& AddPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsT&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms.emplace_back(std::forward<Phase2EncryptionAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 1 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline const Aws::Vector<Phase1IntegrityAlgorithmsRequestListValue>& GetPhase1IntegrityAlgorithms() const { return m_phase1IntegrityAlgorithms; }
    inline bool Phase1IntegrityAlgorithmsHasBeenSet() const { return m_phase1IntegrityAlgorithmsHasBeenSet; }
    template<typename Phase1IntegrityAlgorithmsT = Aws::Vector<Phase1IntegrityAlgorithmsRequestListValue>>
    void SetPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsT&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms = std::forward<Phase1IntegrityAlgorithmsT>(value); }
    template<typename Phase1IntegrityAlgorithmsT = Aws::Vector<Phase1IntegrityAlgorithmsRequestListValue>>
    ModifyVpnTunnelOptionsSpecification& WithPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsT&& value) { SetPhase1IntegrityAlgorithms(std::forward<Phase1IntegrityAlgorithmsT>(value)); return *this;}
    template<typename Phase1IntegrityAlgorithmsT = Phase1IntegrityAlgorithmsRequestListValue>
    ModifyVpnTunnelOptionsSpecification& AddPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsT&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms.emplace_back(std::forward<Phase1IntegrityAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more integrity algorithms that are permitted for the VPN tunnel for
     * phase 2 IKE negotiations.</p> <p>Valid values: <code>SHA1</code> |
     * <code>SHA2-256</code> | <code>SHA2-384</code> | <code>SHA2-512</code> </p>
     */
    inline const Aws::Vector<Phase2IntegrityAlgorithmsRequestListValue>& GetPhase2IntegrityAlgorithms() const { return m_phase2IntegrityAlgorithms; }
    inline bool Phase2IntegrityAlgorithmsHasBeenSet() const { return m_phase2IntegrityAlgorithmsHasBeenSet; }
    template<typename Phase2IntegrityAlgorithmsT = Aws::Vector<Phase2IntegrityAlgorithmsRequestListValue>>
    void SetPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsT&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms = std::forward<Phase2IntegrityAlgorithmsT>(value); }
    template<typename Phase2IntegrityAlgorithmsT = Aws::Vector<Phase2IntegrityAlgorithmsRequestListValue>>
    ModifyVpnTunnelOptionsSpecification& WithPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsT&& value) { SetPhase2IntegrityAlgorithms(std::forward<Phase2IntegrityAlgorithmsT>(value)); return *this;}
    template<typename Phase2IntegrityAlgorithmsT = Phase2IntegrityAlgorithmsRequestListValue>
    ModifyVpnTunnelOptionsSpecification& AddPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsT&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms.emplace_back(std::forward<Phase2IntegrityAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 1 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>14</code> | <code>15</code> | <code>16</code> | <code>17</code> |
     * <code>18</code> | <code>19</code> | <code>20</code> | <code>21</code> |
     * <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline const Aws::Vector<Phase1DHGroupNumbersRequestListValue>& GetPhase1DHGroupNumbers() const { return m_phase1DHGroupNumbers; }
    inline bool Phase1DHGroupNumbersHasBeenSet() const { return m_phase1DHGroupNumbersHasBeenSet; }
    template<typename Phase1DHGroupNumbersT = Aws::Vector<Phase1DHGroupNumbersRequestListValue>>
    void SetPhase1DHGroupNumbers(Phase1DHGroupNumbersT&& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers = std::forward<Phase1DHGroupNumbersT>(value); }
    template<typename Phase1DHGroupNumbersT = Aws::Vector<Phase1DHGroupNumbersRequestListValue>>
    ModifyVpnTunnelOptionsSpecification& WithPhase1DHGroupNumbers(Phase1DHGroupNumbersT&& value) { SetPhase1DHGroupNumbers(std::forward<Phase1DHGroupNumbersT>(value)); return *this;}
    template<typename Phase1DHGroupNumbersT = Phase1DHGroupNumbersRequestListValue>
    ModifyVpnTunnelOptionsSpecification& AddPhase1DHGroupNumbers(Phase1DHGroupNumbersT&& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers.emplace_back(std::forward<Phase1DHGroupNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more Diffie-Hellman group numbers that are permitted for the VPN
     * tunnel for phase 2 IKE negotiations.</p> <p>Valid values: <code>2</code> |
     * <code>5</code> | <code>14</code> | <code>15</code> | <code>16</code> |
     * <code>17</code> | <code>18</code> | <code>19</code> | <code>20</code> |
     * <code>21</code> | <code>22</code> | <code>23</code> | <code>24</code> </p>
     */
    inline const Aws::Vector<Phase2DHGroupNumbersRequestListValue>& GetPhase2DHGroupNumbers() const { return m_phase2DHGroupNumbers; }
    inline bool Phase2DHGroupNumbersHasBeenSet() const { return m_phase2DHGroupNumbersHasBeenSet; }
    template<typename Phase2DHGroupNumbersT = Aws::Vector<Phase2DHGroupNumbersRequestListValue>>
    void SetPhase2DHGroupNumbers(Phase2DHGroupNumbersT&& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers = std::forward<Phase2DHGroupNumbersT>(value); }
    template<typename Phase2DHGroupNumbersT = Aws::Vector<Phase2DHGroupNumbersRequestListValue>>
    ModifyVpnTunnelOptionsSpecification& WithPhase2DHGroupNumbers(Phase2DHGroupNumbersT&& value) { SetPhase2DHGroupNumbers(std::forward<Phase2DHGroupNumbersT>(value)); return *this;}
    template<typename Phase2DHGroupNumbersT = Phase2DHGroupNumbersRequestListValue>
    ModifyVpnTunnelOptionsSpecification& AddPhase2DHGroupNumbers(Phase2DHGroupNumbersT&& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers.emplace_back(std::forward<Phase2DHGroupNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p> <p>Valid values:
     * <code>ikev1</code> | <code>ikev2</code> </p>
     */
    inline const Aws::Vector<IKEVersionsRequestListValue>& GetIKEVersions() const { return m_iKEVersions; }
    inline bool IKEVersionsHasBeenSet() const { return m_iKEVersionsHasBeenSet; }
    template<typename IKEVersionsT = Aws::Vector<IKEVersionsRequestListValue>>
    void SetIKEVersions(IKEVersionsT&& value) { m_iKEVersionsHasBeenSet = true; m_iKEVersions = std::forward<IKEVersionsT>(value); }
    template<typename IKEVersionsT = Aws::Vector<IKEVersionsRequestListValue>>
    ModifyVpnTunnelOptionsSpecification& WithIKEVersions(IKEVersionsT&& value) { SetIKEVersions(std::forward<IKEVersionsT>(value)); return *this;}
    template<typename IKEVersionsT = IKEVersionsRequestListValue>
    ModifyVpnTunnelOptionsSpecification& AddIKEVersions(IKEVersionsT&& value) { m_iKEVersionsHasBeenSet = true; m_iKEVersions.emplace_back(std::forward<IKEVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action to take when the establishing the tunnel for the VPN connection.
     * By default, your customer gateway device must initiate the IKE negotiation and
     * bring up the tunnel. Specify <code>start</code> for Amazon Web Services to
     * initiate the IKE negotiation.</p> <p>Valid Values: <code>add</code> |
     * <code>start</code> </p> <p>Default: <code>add</code> </p>
     */
    inline const Aws::String& GetStartupAction() const { return m_startupAction; }
    inline bool StartupActionHasBeenSet() const { return m_startupActionHasBeenSet; }
    template<typename StartupActionT = Aws::String>
    void SetStartupAction(StartupActionT&& value) { m_startupActionHasBeenSet = true; m_startupAction = std::forward<StartupActionT>(value); }
    template<typename StartupActionT = Aws::String>
    ModifyVpnTunnelOptionsSpecification& WithStartupAction(StartupActionT&& value) { SetStartupAction(std::forward<StartupActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline const VpnTunnelLogOptionsSpecification& GetLogOptions() const { return m_logOptions; }
    inline bool LogOptionsHasBeenSet() const { return m_logOptionsHasBeenSet; }
    template<typename LogOptionsT = VpnTunnelLogOptionsSpecification>
    void SetLogOptions(LogOptionsT&& value) { m_logOptionsHasBeenSet = true; m_logOptions = std::forward<LogOptionsT>(value); }
    template<typename LogOptionsT = VpnTunnelLogOptionsSpecification>
    ModifyVpnTunnelOptionsSpecification& WithLogOptions(LogOptionsT&& value) { SetLogOptions(std::forward<LogOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Turn on or off tunnel endpoint lifecycle control feature.</p>
     */
    inline bool GetEnableTunnelLifecycleControl() const { return m_enableTunnelLifecycleControl; }
    inline bool EnableTunnelLifecycleControlHasBeenSet() const { return m_enableTunnelLifecycleControlHasBeenSet; }
    inline void SetEnableTunnelLifecycleControl(bool value) { m_enableTunnelLifecycleControlHasBeenSet = true; m_enableTunnelLifecycleControl = value; }
    inline ModifyVpnTunnelOptionsSpecification& WithEnableTunnelLifecycleControl(bool value) { SetEnableTunnelLifecycleControl(value); return *this;}
    ///@}
  private:

    Aws::String m_tunnelInsideCidr;
    bool m_tunnelInsideCidrHasBeenSet = false;

    Aws::String m_tunnelInsideIpv6Cidr;
    bool m_tunnelInsideIpv6CidrHasBeenSet = false;

    Aws::String m_preSharedKey;
    bool m_preSharedKeyHasBeenSet = false;

    int m_phase1LifetimeSeconds{0};
    bool m_phase1LifetimeSecondsHasBeenSet = false;

    int m_phase2LifetimeSeconds{0};
    bool m_phase2LifetimeSecondsHasBeenSet = false;

    int m_rekeyMarginTimeSeconds{0};
    bool m_rekeyMarginTimeSecondsHasBeenSet = false;

    int m_rekeyFuzzPercentage{0};
    bool m_rekeyFuzzPercentageHasBeenSet = false;

    int m_replayWindowSize{0};
    bool m_replayWindowSizeHasBeenSet = false;

    int m_dPDTimeoutSeconds{0};
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

    bool m_enableTunnelLifecycleControl{false};
    bool m_enableTunnelLifecycleControlHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
