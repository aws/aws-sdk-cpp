/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpnTunnelLogOptions.h>
#include <aws/ec2/model/Phase1EncryptionAlgorithmsListValue.h>
#include <aws/ec2/model/Phase2EncryptionAlgorithmsListValue.h>
#include <aws/ec2/model/Phase1IntegrityAlgorithmsListValue.h>
#include <aws/ec2/model/Phase2IntegrityAlgorithmsListValue.h>
#include <aws/ec2/model/Phase1DHGroupNumbersListValue.h>
#include <aws/ec2/model/Phase2DHGroupNumbersListValue.h>
#include <aws/ec2/model/IKEVersionsListValue.h>
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
   * <p>The VPN tunnel options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TunnelOption">AWS
   * API Reference</a></p>
   */
  class TunnelOption
  {
  public:
    AWS_EC2_API TunnelOption() = default;
    AWS_EC2_API TunnelOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TunnelOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline const Aws::String& GetOutsideIpAddress() const { return m_outsideIpAddress; }
    inline bool OutsideIpAddressHasBeenSet() const { return m_outsideIpAddressHasBeenSet; }
    template<typename OutsideIpAddressT = Aws::String>
    void SetOutsideIpAddress(OutsideIpAddressT&& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = std::forward<OutsideIpAddressT>(value); }
    template<typename OutsideIpAddressT = Aws::String>
    TunnelOption& WithOutsideIpAddress(OutsideIpAddressT&& value) { SetOutsideIpAddress(std::forward<OutsideIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelInsideCidr() const { return m_tunnelInsideCidr; }
    inline bool TunnelInsideCidrHasBeenSet() const { return m_tunnelInsideCidrHasBeenSet; }
    template<typename TunnelInsideCidrT = Aws::String>
    void SetTunnelInsideCidr(TunnelInsideCidrT&& value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr = std::forward<TunnelInsideCidrT>(value); }
    template<typename TunnelInsideCidrT = Aws::String>
    TunnelOption& WithTunnelInsideCidr(TunnelInsideCidrT&& value) { SetTunnelInsideCidr(std::forward<TunnelInsideCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of inside IPv6 addresses for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelInsideIpv6Cidr() const { return m_tunnelInsideIpv6Cidr; }
    inline bool TunnelInsideIpv6CidrHasBeenSet() const { return m_tunnelInsideIpv6CidrHasBeenSet; }
    template<typename TunnelInsideIpv6CidrT = Aws::String>
    void SetTunnelInsideIpv6Cidr(TunnelInsideIpv6CidrT&& value) { m_tunnelInsideIpv6CidrHasBeenSet = true; m_tunnelInsideIpv6Cidr = std::forward<TunnelInsideIpv6CidrT>(value); }
    template<typename TunnelInsideIpv6CidrT = Aws::String>
    TunnelOption& WithTunnelInsideIpv6Cidr(TunnelInsideIpv6CidrT&& value) { SetTunnelInsideIpv6Cidr(std::forward<TunnelInsideIpv6CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p>
     */
    inline const Aws::String& GetPreSharedKey() const { return m_preSharedKey; }
    inline bool PreSharedKeyHasBeenSet() const { return m_preSharedKeyHasBeenSet; }
    template<typename PreSharedKeyT = Aws::String>
    void SetPreSharedKey(PreSharedKeyT&& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = std::forward<PreSharedKeyT>(value); }
    template<typename PreSharedKeyT = Aws::String>
    TunnelOption& WithPreSharedKey(PreSharedKeyT&& value) { SetPreSharedKey(std::forward<PreSharedKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     */
    inline int GetPhase1LifetimeSeconds() const { return m_phase1LifetimeSeconds; }
    inline bool Phase1LifetimeSecondsHasBeenSet() const { return m_phase1LifetimeSecondsHasBeenSet; }
    inline void SetPhase1LifetimeSeconds(int value) { m_phase1LifetimeSecondsHasBeenSet = true; m_phase1LifetimeSeconds = value; }
    inline TunnelOption& WithPhase1LifetimeSeconds(int value) { SetPhase1LifetimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     */
    inline int GetPhase2LifetimeSeconds() const { return m_phase2LifetimeSeconds; }
    inline bool Phase2LifetimeSecondsHasBeenSet() const { return m_phase2LifetimeSecondsHasBeenSet; }
    inline void SetPhase2LifetimeSeconds(int value) { m_phase2LifetimeSecondsHasBeenSet = true; m_phase2LifetimeSeconds = value; }
    inline TunnelOption& WithPhase2LifetimeSeconds(int value) { SetPhase2LifetimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE
     * rekey.</p>
     */
    inline int GetRekeyMarginTimeSeconds() const { return m_rekeyMarginTimeSeconds; }
    inline bool RekeyMarginTimeSecondsHasBeenSet() const { return m_rekeyMarginTimeSecondsHasBeenSet; }
    inline void SetRekeyMarginTimeSeconds(int value) { m_rekeyMarginTimeSecondsHasBeenSet = true; m_rekeyMarginTimeSeconds = value; }
    inline TunnelOption& WithRekeyMarginTimeSeconds(int value) { SetRekeyMarginTimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the rekey window determined by
     * <code>RekeyMarginTimeSeconds</code> during which the rekey time is randomly
     * selected.</p>
     */
    inline int GetRekeyFuzzPercentage() const { return m_rekeyFuzzPercentage; }
    inline bool RekeyFuzzPercentageHasBeenSet() const { return m_rekeyFuzzPercentageHasBeenSet; }
    inline void SetRekeyFuzzPercentage(int value) { m_rekeyFuzzPercentageHasBeenSet = true; m_rekeyFuzzPercentage = value; }
    inline TunnelOption& WithRekeyFuzzPercentage(int value) { SetRekeyFuzzPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of packets in an IKE replay window.</p>
     */
    inline int GetReplayWindowSize() const { return m_replayWindowSize; }
    inline bool ReplayWindowSizeHasBeenSet() const { return m_replayWindowSizeHasBeenSet; }
    inline void SetReplayWindowSize(int value) { m_replayWindowSizeHasBeenSet = true; m_replayWindowSize = value; }
    inline TunnelOption& WithReplayWindowSize(int value) { SetReplayWindowSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds after which a DPD timeout occurs.</p>
     */
    inline int GetDpdTimeoutSeconds() const { return m_dpdTimeoutSeconds; }
    inline bool DpdTimeoutSecondsHasBeenSet() const { return m_dpdTimeoutSecondsHasBeenSet; }
    inline void SetDpdTimeoutSeconds(int value) { m_dpdTimeoutSecondsHasBeenSet = true; m_dpdTimeoutSeconds = value; }
    inline TunnelOption& WithDpdTimeoutSeconds(int value) { SetDpdTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take after a DPD timeout occurs.</p>
     */
    inline const Aws::String& GetDpdTimeoutAction() const { return m_dpdTimeoutAction; }
    inline bool DpdTimeoutActionHasBeenSet() const { return m_dpdTimeoutActionHasBeenSet; }
    template<typename DpdTimeoutActionT = Aws::String>
    void SetDpdTimeoutAction(DpdTimeoutActionT&& value) { m_dpdTimeoutActionHasBeenSet = true; m_dpdTimeoutAction = std::forward<DpdTimeoutActionT>(value); }
    template<typename DpdTimeoutActionT = Aws::String>
    TunnelOption& WithDpdTimeoutAction(DpdTimeoutActionT&& value) { SetDpdTimeoutAction(std::forward<DpdTimeoutActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase1EncryptionAlgorithmsListValue>& GetPhase1EncryptionAlgorithms() const { return m_phase1EncryptionAlgorithms; }
    inline bool Phase1EncryptionAlgorithmsHasBeenSet() const { return m_phase1EncryptionAlgorithmsHasBeenSet; }
    template<typename Phase1EncryptionAlgorithmsT = Aws::Vector<Phase1EncryptionAlgorithmsListValue>>
    void SetPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsT&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms = std::forward<Phase1EncryptionAlgorithmsT>(value); }
    template<typename Phase1EncryptionAlgorithmsT = Aws::Vector<Phase1EncryptionAlgorithmsListValue>>
    TunnelOption& WithPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsT&& value) { SetPhase1EncryptionAlgorithms(std::forward<Phase1EncryptionAlgorithmsT>(value)); return *this;}
    template<typename Phase1EncryptionAlgorithmsT = Phase1EncryptionAlgorithmsListValue>
    TunnelOption& AddPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsT&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms.emplace_back(std::forward<Phase1EncryptionAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase2EncryptionAlgorithmsListValue>& GetPhase2EncryptionAlgorithms() const { return m_phase2EncryptionAlgorithms; }
    inline bool Phase2EncryptionAlgorithmsHasBeenSet() const { return m_phase2EncryptionAlgorithmsHasBeenSet; }
    template<typename Phase2EncryptionAlgorithmsT = Aws::Vector<Phase2EncryptionAlgorithmsListValue>>
    void SetPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsT&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms = std::forward<Phase2EncryptionAlgorithmsT>(value); }
    template<typename Phase2EncryptionAlgorithmsT = Aws::Vector<Phase2EncryptionAlgorithmsListValue>>
    TunnelOption& WithPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsT&& value) { SetPhase2EncryptionAlgorithms(std::forward<Phase2EncryptionAlgorithmsT>(value)); return *this;}
    template<typename Phase2EncryptionAlgorithmsT = Phase2EncryptionAlgorithmsListValue>
    TunnelOption& AddPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsT&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms.emplace_back(std::forward<Phase2EncryptionAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase1IntegrityAlgorithmsListValue>& GetPhase1IntegrityAlgorithms() const { return m_phase1IntegrityAlgorithms; }
    inline bool Phase1IntegrityAlgorithmsHasBeenSet() const { return m_phase1IntegrityAlgorithmsHasBeenSet; }
    template<typename Phase1IntegrityAlgorithmsT = Aws::Vector<Phase1IntegrityAlgorithmsListValue>>
    void SetPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsT&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms = std::forward<Phase1IntegrityAlgorithmsT>(value); }
    template<typename Phase1IntegrityAlgorithmsT = Aws::Vector<Phase1IntegrityAlgorithmsListValue>>
    TunnelOption& WithPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsT&& value) { SetPhase1IntegrityAlgorithms(std::forward<Phase1IntegrityAlgorithmsT>(value)); return *this;}
    template<typename Phase1IntegrityAlgorithmsT = Phase1IntegrityAlgorithmsListValue>
    TunnelOption& AddPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsT&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms.emplace_back(std::forward<Phase1IntegrityAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase2IntegrityAlgorithmsListValue>& GetPhase2IntegrityAlgorithms() const { return m_phase2IntegrityAlgorithms; }
    inline bool Phase2IntegrityAlgorithmsHasBeenSet() const { return m_phase2IntegrityAlgorithmsHasBeenSet; }
    template<typename Phase2IntegrityAlgorithmsT = Aws::Vector<Phase2IntegrityAlgorithmsListValue>>
    void SetPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsT&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms = std::forward<Phase2IntegrityAlgorithmsT>(value); }
    template<typename Phase2IntegrityAlgorithmsT = Aws::Vector<Phase2IntegrityAlgorithmsListValue>>
    TunnelOption& WithPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsT&& value) { SetPhase2IntegrityAlgorithms(std::forward<Phase2IntegrityAlgorithmsT>(value)); return *this;}
    template<typename Phase2IntegrityAlgorithmsT = Phase2IntegrityAlgorithmsListValue>
    TunnelOption& AddPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsT&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms.emplace_back(std::forward<Phase2IntegrityAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase1DHGroupNumbersListValue>& GetPhase1DHGroupNumbers() const { return m_phase1DHGroupNumbers; }
    inline bool Phase1DHGroupNumbersHasBeenSet() const { return m_phase1DHGroupNumbersHasBeenSet; }
    template<typename Phase1DHGroupNumbersT = Aws::Vector<Phase1DHGroupNumbersListValue>>
    void SetPhase1DHGroupNumbers(Phase1DHGroupNumbersT&& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers = std::forward<Phase1DHGroupNumbersT>(value); }
    template<typename Phase1DHGroupNumbersT = Aws::Vector<Phase1DHGroupNumbersListValue>>
    TunnelOption& WithPhase1DHGroupNumbers(Phase1DHGroupNumbersT&& value) { SetPhase1DHGroupNumbers(std::forward<Phase1DHGroupNumbersT>(value)); return *this;}
    template<typename Phase1DHGroupNumbersT = Phase1DHGroupNumbersListValue>
    TunnelOption& AddPhase1DHGroupNumbers(Phase1DHGroupNumbersT&& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers.emplace_back(std::forward<Phase1DHGroupNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase2DHGroupNumbersListValue>& GetPhase2DHGroupNumbers() const { return m_phase2DHGroupNumbers; }
    inline bool Phase2DHGroupNumbersHasBeenSet() const { return m_phase2DHGroupNumbersHasBeenSet; }
    template<typename Phase2DHGroupNumbersT = Aws::Vector<Phase2DHGroupNumbersListValue>>
    void SetPhase2DHGroupNumbers(Phase2DHGroupNumbersT&& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers = std::forward<Phase2DHGroupNumbersT>(value); }
    template<typename Phase2DHGroupNumbersT = Aws::Vector<Phase2DHGroupNumbersListValue>>
    TunnelOption& WithPhase2DHGroupNumbers(Phase2DHGroupNumbersT&& value) { SetPhase2DHGroupNumbers(std::forward<Phase2DHGroupNumbersT>(value)); return *this;}
    template<typename Phase2DHGroupNumbersT = Phase2DHGroupNumbersListValue>
    TunnelOption& AddPhase2DHGroupNumbers(Phase2DHGroupNumbersT&& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers.emplace_back(std::forward<Phase2DHGroupNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p>
     */
    inline const Aws::Vector<IKEVersionsListValue>& GetIkeVersions() const { return m_ikeVersions; }
    inline bool IkeVersionsHasBeenSet() const { return m_ikeVersionsHasBeenSet; }
    template<typename IkeVersionsT = Aws::Vector<IKEVersionsListValue>>
    void SetIkeVersions(IkeVersionsT&& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions = std::forward<IkeVersionsT>(value); }
    template<typename IkeVersionsT = Aws::Vector<IKEVersionsListValue>>
    TunnelOption& WithIkeVersions(IkeVersionsT&& value) { SetIkeVersions(std::forward<IkeVersionsT>(value)); return *this;}
    template<typename IkeVersionsT = IKEVersionsListValue>
    TunnelOption& AddIkeVersions(IkeVersionsT&& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions.emplace_back(std::forward<IkeVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action to take when the establishing the VPN tunnels for a VPN
     * connection.</p>
     */
    inline const Aws::String& GetStartupAction() const { return m_startupAction; }
    inline bool StartupActionHasBeenSet() const { return m_startupActionHasBeenSet; }
    template<typename StartupActionT = Aws::String>
    void SetStartupAction(StartupActionT&& value) { m_startupActionHasBeenSet = true; m_startupAction = std::forward<StartupActionT>(value); }
    template<typename StartupActionT = Aws::String>
    TunnelOption& WithStartupAction(StartupActionT&& value) { SetStartupAction(std::forward<StartupActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline const VpnTunnelLogOptions& GetLogOptions() const { return m_logOptions; }
    inline bool LogOptionsHasBeenSet() const { return m_logOptionsHasBeenSet; }
    template<typename LogOptionsT = VpnTunnelLogOptions>
    void SetLogOptions(LogOptionsT&& value) { m_logOptionsHasBeenSet = true; m_logOptions = std::forward<LogOptionsT>(value); }
    template<typename LogOptionsT = VpnTunnelLogOptions>
    TunnelOption& WithLogOptions(LogOptionsT&& value) { SetLogOptions(std::forward<LogOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of tunnel endpoint lifecycle control feature.</p>
     */
    inline bool GetEnableTunnelLifecycleControl() const { return m_enableTunnelLifecycleControl; }
    inline bool EnableTunnelLifecycleControlHasBeenSet() const { return m_enableTunnelLifecycleControlHasBeenSet; }
    inline void SetEnableTunnelLifecycleControl(bool value) { m_enableTunnelLifecycleControlHasBeenSet = true; m_enableTunnelLifecycleControl = value; }
    inline TunnelOption& WithEnableTunnelLifecycleControl(bool value) { SetEnableTunnelLifecycleControl(value); return *this;}
    ///@}
  private:

    Aws::String m_outsideIpAddress;
    bool m_outsideIpAddressHasBeenSet = false;

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

    int m_dpdTimeoutSeconds{0};
    bool m_dpdTimeoutSecondsHasBeenSet = false;

    Aws::String m_dpdTimeoutAction;
    bool m_dpdTimeoutActionHasBeenSet = false;

    Aws::Vector<Phase1EncryptionAlgorithmsListValue> m_phase1EncryptionAlgorithms;
    bool m_phase1EncryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<Phase2EncryptionAlgorithmsListValue> m_phase2EncryptionAlgorithms;
    bool m_phase2EncryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<Phase1IntegrityAlgorithmsListValue> m_phase1IntegrityAlgorithms;
    bool m_phase1IntegrityAlgorithmsHasBeenSet = false;

    Aws::Vector<Phase2IntegrityAlgorithmsListValue> m_phase2IntegrityAlgorithms;
    bool m_phase2IntegrityAlgorithmsHasBeenSet = false;

    Aws::Vector<Phase1DHGroupNumbersListValue> m_phase1DHGroupNumbers;
    bool m_phase1DHGroupNumbersHasBeenSet = false;

    Aws::Vector<Phase2DHGroupNumbersListValue> m_phase2DHGroupNumbers;
    bool m_phase2DHGroupNumbersHasBeenSet = false;

    Aws::Vector<IKEVersionsListValue> m_ikeVersions;
    bool m_ikeVersionsHasBeenSet = false;

    Aws::String m_startupAction;
    bool m_startupActionHasBeenSet = false;

    VpnTunnelLogOptions m_logOptions;
    bool m_logOptionsHasBeenSet = false;

    bool m_enableTunnelLifecycleControl{false};
    bool m_enableTunnelLifecycleControlHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
