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
    AWS_EC2_API TunnelOption();
    AWS_EC2_API TunnelOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TunnelOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline const Aws::String& GetOutsideIpAddress() const{ return m_outsideIpAddress; }

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline bool OutsideIpAddressHasBeenSet() const { return m_outsideIpAddressHasBeenSet; }

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline void SetOutsideIpAddress(const Aws::String& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = value; }

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline void SetOutsideIpAddress(Aws::String&& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = std::move(value); }

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline void SetOutsideIpAddress(const char* value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress.assign(value); }

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline TunnelOption& WithOutsideIpAddress(const Aws::String& value) { SetOutsideIpAddress(value); return *this;}

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline TunnelOption& WithOutsideIpAddress(Aws::String&& value) { SetOutsideIpAddress(std::move(value)); return *this;}

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline TunnelOption& WithOutsideIpAddress(const char* value) { SetOutsideIpAddress(value); return *this;}


    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelInsideCidr() const{ return m_tunnelInsideCidr; }

    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline bool TunnelInsideCidrHasBeenSet() const { return m_tunnelInsideCidrHasBeenSet; }

    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline void SetTunnelInsideCidr(const Aws::String& value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr = value; }

    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline void SetTunnelInsideCidr(Aws::String&& value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr = std::move(value); }

    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline void SetTunnelInsideCidr(const char* value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr.assign(value); }

    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline TunnelOption& WithTunnelInsideCidr(const Aws::String& value) { SetTunnelInsideCidr(value); return *this;}

    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline TunnelOption& WithTunnelInsideCidr(Aws::String&& value) { SetTunnelInsideCidr(std::move(value)); return *this;}

    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline TunnelOption& WithTunnelInsideCidr(const char* value) { SetTunnelInsideCidr(value); return *this;}


    /**
     * <p>The range of inside IPv6 addresses for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelInsideIpv6Cidr() const{ return m_tunnelInsideIpv6Cidr; }

    /**
     * <p>The range of inside IPv6 addresses for the tunnel.</p>
     */
    inline bool TunnelInsideIpv6CidrHasBeenSet() const { return m_tunnelInsideIpv6CidrHasBeenSet; }

    /**
     * <p>The range of inside IPv6 addresses for the tunnel.</p>
     */
    inline void SetTunnelInsideIpv6Cidr(const Aws::String& value) { m_tunnelInsideIpv6CidrHasBeenSet = true; m_tunnelInsideIpv6Cidr = value; }

    /**
     * <p>The range of inside IPv6 addresses for the tunnel.</p>
     */
    inline void SetTunnelInsideIpv6Cidr(Aws::String&& value) { m_tunnelInsideIpv6CidrHasBeenSet = true; m_tunnelInsideIpv6Cidr = std::move(value); }

    /**
     * <p>The range of inside IPv6 addresses for the tunnel.</p>
     */
    inline void SetTunnelInsideIpv6Cidr(const char* value) { m_tunnelInsideIpv6CidrHasBeenSet = true; m_tunnelInsideIpv6Cidr.assign(value); }

    /**
     * <p>The range of inside IPv6 addresses for the tunnel.</p>
     */
    inline TunnelOption& WithTunnelInsideIpv6Cidr(const Aws::String& value) { SetTunnelInsideIpv6Cidr(value); return *this;}

    /**
     * <p>The range of inside IPv6 addresses for the tunnel.</p>
     */
    inline TunnelOption& WithTunnelInsideIpv6Cidr(Aws::String&& value) { SetTunnelInsideIpv6Cidr(std::move(value)); return *this;}

    /**
     * <p>The range of inside IPv6 addresses for the tunnel.</p>
     */
    inline TunnelOption& WithTunnelInsideIpv6Cidr(const char* value) { SetTunnelInsideIpv6Cidr(value); return *this;}


    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p>
     */
    inline const Aws::String& GetPreSharedKey() const{ return m_preSharedKey; }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p>
     */
    inline bool PreSharedKeyHasBeenSet() const { return m_preSharedKeyHasBeenSet; }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p>
     */
    inline void SetPreSharedKey(const Aws::String& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = value; }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p>
     */
    inline void SetPreSharedKey(Aws::String&& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = std::move(value); }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p>
     */
    inline void SetPreSharedKey(const char* value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey.assign(value); }

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p>
     */
    inline TunnelOption& WithPreSharedKey(const Aws::String& value) { SetPreSharedKey(value); return *this;}

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p>
     */
    inline TunnelOption& WithPreSharedKey(Aws::String&& value) { SetPreSharedKey(std::move(value)); return *this;}

    /**
     * <p>The pre-shared key (PSK) to establish initial authentication between the
     * virtual private gateway and the customer gateway.</p>
     */
    inline TunnelOption& WithPreSharedKey(const char* value) { SetPreSharedKey(value); return *this;}


    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     */
    inline int GetPhase1LifetimeSeconds() const{ return m_phase1LifetimeSeconds; }

    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     */
    inline bool Phase1LifetimeSecondsHasBeenSet() const { return m_phase1LifetimeSecondsHasBeenSet; }

    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     */
    inline void SetPhase1LifetimeSeconds(int value) { m_phase1LifetimeSecondsHasBeenSet = true; m_phase1LifetimeSeconds = value; }

    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     */
    inline TunnelOption& WithPhase1LifetimeSeconds(int value) { SetPhase1LifetimeSeconds(value); return *this;}


    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     */
    inline int GetPhase2LifetimeSeconds() const{ return m_phase2LifetimeSeconds; }

    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     */
    inline bool Phase2LifetimeSecondsHasBeenSet() const { return m_phase2LifetimeSecondsHasBeenSet; }

    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     */
    inline void SetPhase2LifetimeSeconds(int value) { m_phase2LifetimeSecondsHasBeenSet = true; m_phase2LifetimeSeconds = value; }

    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     */
    inline TunnelOption& WithPhase2LifetimeSeconds(int value) { SetPhase2LifetimeSeconds(value); return *this;}


    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE
     * rekey.</p>
     */
    inline int GetRekeyMarginTimeSeconds() const{ return m_rekeyMarginTimeSeconds; }

    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE
     * rekey.</p>
     */
    inline bool RekeyMarginTimeSecondsHasBeenSet() const { return m_rekeyMarginTimeSecondsHasBeenSet; }

    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE
     * rekey.</p>
     */
    inline void SetRekeyMarginTimeSeconds(int value) { m_rekeyMarginTimeSecondsHasBeenSet = true; m_rekeyMarginTimeSeconds = value; }

    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE
     * rekey.</p>
     */
    inline TunnelOption& WithRekeyMarginTimeSeconds(int value) { SetRekeyMarginTimeSeconds(value); return *this;}


    /**
     * <p>The percentage of the rekey window determined by
     * <code>RekeyMarginTimeSeconds</code> during which the rekey time is randomly
     * selected.</p>
     */
    inline int GetRekeyFuzzPercentage() const{ return m_rekeyFuzzPercentage; }

    /**
     * <p>The percentage of the rekey window determined by
     * <code>RekeyMarginTimeSeconds</code> during which the rekey time is randomly
     * selected.</p>
     */
    inline bool RekeyFuzzPercentageHasBeenSet() const { return m_rekeyFuzzPercentageHasBeenSet; }

    /**
     * <p>The percentage of the rekey window determined by
     * <code>RekeyMarginTimeSeconds</code> during which the rekey time is randomly
     * selected.</p>
     */
    inline void SetRekeyFuzzPercentage(int value) { m_rekeyFuzzPercentageHasBeenSet = true; m_rekeyFuzzPercentage = value; }

    /**
     * <p>The percentage of the rekey window determined by
     * <code>RekeyMarginTimeSeconds</code> during which the rekey time is randomly
     * selected.</p>
     */
    inline TunnelOption& WithRekeyFuzzPercentage(int value) { SetRekeyFuzzPercentage(value); return *this;}


    /**
     * <p>The number of packets in an IKE replay window.</p>
     */
    inline int GetReplayWindowSize() const{ return m_replayWindowSize; }

    /**
     * <p>The number of packets in an IKE replay window.</p>
     */
    inline bool ReplayWindowSizeHasBeenSet() const { return m_replayWindowSizeHasBeenSet; }

    /**
     * <p>The number of packets in an IKE replay window.</p>
     */
    inline void SetReplayWindowSize(int value) { m_replayWindowSizeHasBeenSet = true; m_replayWindowSize = value; }

    /**
     * <p>The number of packets in an IKE replay window.</p>
     */
    inline TunnelOption& WithReplayWindowSize(int value) { SetReplayWindowSize(value); return *this;}


    /**
     * <p>The number of seconds after which a DPD timeout occurs.</p>
     */
    inline int GetDpdTimeoutSeconds() const{ return m_dpdTimeoutSeconds; }

    /**
     * <p>The number of seconds after which a DPD timeout occurs.</p>
     */
    inline bool DpdTimeoutSecondsHasBeenSet() const { return m_dpdTimeoutSecondsHasBeenSet; }

    /**
     * <p>The number of seconds after which a DPD timeout occurs.</p>
     */
    inline void SetDpdTimeoutSeconds(int value) { m_dpdTimeoutSecondsHasBeenSet = true; m_dpdTimeoutSeconds = value; }

    /**
     * <p>The number of seconds after which a DPD timeout occurs.</p>
     */
    inline TunnelOption& WithDpdTimeoutSeconds(int value) { SetDpdTimeoutSeconds(value); return *this;}


    /**
     * <p>The action to take after a DPD timeout occurs.</p>
     */
    inline const Aws::String& GetDpdTimeoutAction() const{ return m_dpdTimeoutAction; }

    /**
     * <p>The action to take after a DPD timeout occurs.</p>
     */
    inline bool DpdTimeoutActionHasBeenSet() const { return m_dpdTimeoutActionHasBeenSet; }

    /**
     * <p>The action to take after a DPD timeout occurs.</p>
     */
    inline void SetDpdTimeoutAction(const Aws::String& value) { m_dpdTimeoutActionHasBeenSet = true; m_dpdTimeoutAction = value; }

    /**
     * <p>The action to take after a DPD timeout occurs.</p>
     */
    inline void SetDpdTimeoutAction(Aws::String&& value) { m_dpdTimeoutActionHasBeenSet = true; m_dpdTimeoutAction = std::move(value); }

    /**
     * <p>The action to take after a DPD timeout occurs.</p>
     */
    inline void SetDpdTimeoutAction(const char* value) { m_dpdTimeoutActionHasBeenSet = true; m_dpdTimeoutAction.assign(value); }

    /**
     * <p>The action to take after a DPD timeout occurs.</p>
     */
    inline TunnelOption& WithDpdTimeoutAction(const Aws::String& value) { SetDpdTimeoutAction(value); return *this;}

    /**
     * <p>The action to take after a DPD timeout occurs.</p>
     */
    inline TunnelOption& WithDpdTimeoutAction(Aws::String&& value) { SetDpdTimeoutAction(std::move(value)); return *this;}

    /**
     * <p>The action to take after a DPD timeout occurs.</p>
     */
    inline TunnelOption& WithDpdTimeoutAction(const char* value) { SetDpdTimeoutAction(value); return *this;}


    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase1EncryptionAlgorithmsListValue>& GetPhase1EncryptionAlgorithms() const{ return m_phase1EncryptionAlgorithms; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline bool Phase1EncryptionAlgorithmsHasBeenSet() const { return m_phase1EncryptionAlgorithmsHasBeenSet; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1EncryptionAlgorithms(const Aws::Vector<Phase1EncryptionAlgorithmsListValue>& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms = value; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1EncryptionAlgorithms(Aws::Vector<Phase1EncryptionAlgorithmsListValue>&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms = std::move(value); }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase1EncryptionAlgorithms(const Aws::Vector<Phase1EncryptionAlgorithmsListValue>& value) { SetPhase1EncryptionAlgorithms(value); return *this;}

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase1EncryptionAlgorithms(Aws::Vector<Phase1EncryptionAlgorithmsListValue>&& value) { SetPhase1EncryptionAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase1EncryptionAlgorithms(const Phase1EncryptionAlgorithmsListValue& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms.push_back(value); return *this; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsListValue&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase2EncryptionAlgorithmsListValue>& GetPhase2EncryptionAlgorithms() const{ return m_phase2EncryptionAlgorithms; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline bool Phase2EncryptionAlgorithmsHasBeenSet() const { return m_phase2EncryptionAlgorithmsHasBeenSet; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2EncryptionAlgorithms(const Aws::Vector<Phase2EncryptionAlgorithmsListValue>& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms = value; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2EncryptionAlgorithms(Aws::Vector<Phase2EncryptionAlgorithmsListValue>&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms = std::move(value); }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase2EncryptionAlgorithms(const Aws::Vector<Phase2EncryptionAlgorithmsListValue>& value) { SetPhase2EncryptionAlgorithms(value); return *this;}

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase2EncryptionAlgorithms(Aws::Vector<Phase2EncryptionAlgorithmsListValue>&& value) { SetPhase2EncryptionAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase2EncryptionAlgorithms(const Phase2EncryptionAlgorithmsListValue& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms.push_back(value); return *this; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsListValue&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase1IntegrityAlgorithmsListValue>& GetPhase1IntegrityAlgorithms() const{ return m_phase1IntegrityAlgorithms; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline bool Phase1IntegrityAlgorithmsHasBeenSet() const { return m_phase1IntegrityAlgorithmsHasBeenSet; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1IntegrityAlgorithms(const Aws::Vector<Phase1IntegrityAlgorithmsListValue>& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms = value; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1IntegrityAlgorithms(Aws::Vector<Phase1IntegrityAlgorithmsListValue>&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms = std::move(value); }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase1IntegrityAlgorithms(const Aws::Vector<Phase1IntegrityAlgorithmsListValue>& value) { SetPhase1IntegrityAlgorithms(value); return *this;}

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase1IntegrityAlgorithms(Aws::Vector<Phase1IntegrityAlgorithmsListValue>&& value) { SetPhase1IntegrityAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase1IntegrityAlgorithms(const Phase1IntegrityAlgorithmsListValue& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms.push_back(value); return *this; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsListValue&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase2IntegrityAlgorithmsListValue>& GetPhase2IntegrityAlgorithms() const{ return m_phase2IntegrityAlgorithms; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline bool Phase2IntegrityAlgorithmsHasBeenSet() const { return m_phase2IntegrityAlgorithmsHasBeenSet; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2IntegrityAlgorithms(const Aws::Vector<Phase2IntegrityAlgorithmsListValue>& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms = value; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2IntegrityAlgorithms(Aws::Vector<Phase2IntegrityAlgorithmsListValue>&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms = std::move(value); }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase2IntegrityAlgorithms(const Aws::Vector<Phase2IntegrityAlgorithmsListValue>& value) { SetPhase2IntegrityAlgorithms(value); return *this;}

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase2IntegrityAlgorithms(Aws::Vector<Phase2IntegrityAlgorithmsListValue>&& value) { SetPhase2IntegrityAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase2IntegrityAlgorithms(const Phase2IntegrityAlgorithmsListValue& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms.push_back(value); return *this; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsListValue&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms.push_back(std::move(value)); return *this; }


    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase1DHGroupNumbersListValue>& GetPhase1DHGroupNumbers() const{ return m_phase1DHGroupNumbers; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline bool Phase1DHGroupNumbersHasBeenSet() const { return m_phase1DHGroupNumbersHasBeenSet; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1DHGroupNumbers(const Aws::Vector<Phase1DHGroupNumbersListValue>& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers = value; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1DHGroupNumbers(Aws::Vector<Phase1DHGroupNumbersListValue>&& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers = std::move(value); }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase1DHGroupNumbers(const Aws::Vector<Phase1DHGroupNumbersListValue>& value) { SetPhase1DHGroupNumbers(value); return *this;}

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase1DHGroupNumbers(Aws::Vector<Phase1DHGroupNumbersListValue>&& value) { SetPhase1DHGroupNumbers(std::move(value)); return *this;}

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase1DHGroupNumbers(const Phase1DHGroupNumbersListValue& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers.push_back(value); return *this; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase1DHGroupNumbers(Phase1DHGroupNumbersListValue&& value) { m_phase1DHGroupNumbersHasBeenSet = true; m_phase1DHGroupNumbers.push_back(std::move(value)); return *this; }


    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Phase2DHGroupNumbersListValue>& GetPhase2DHGroupNumbers() const{ return m_phase2DHGroupNumbers; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline bool Phase2DHGroupNumbersHasBeenSet() const { return m_phase2DHGroupNumbersHasBeenSet; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2DHGroupNumbers(const Aws::Vector<Phase2DHGroupNumbersListValue>& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers = value; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2DHGroupNumbers(Aws::Vector<Phase2DHGroupNumbersListValue>&& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers = std::move(value); }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase2DHGroupNumbers(const Aws::Vector<Phase2DHGroupNumbersListValue>& value) { SetPhase2DHGroupNumbers(value); return *this;}

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& WithPhase2DHGroupNumbers(Aws::Vector<Phase2DHGroupNumbersListValue>&& value) { SetPhase2DHGroupNumbers(std::move(value)); return *this;}

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase2DHGroupNumbers(const Phase2DHGroupNumbersListValue& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers.push_back(value); return *this; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline TunnelOption& AddPhase2DHGroupNumbers(Phase2DHGroupNumbersListValue&& value) { m_phase2DHGroupNumbersHasBeenSet = true; m_phase2DHGroupNumbers.push_back(std::move(value)); return *this; }


    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p>
     */
    inline const Aws::Vector<IKEVersionsListValue>& GetIkeVersions() const{ return m_ikeVersions; }

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p>
     */
    inline bool IkeVersionsHasBeenSet() const { return m_ikeVersionsHasBeenSet; }

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p>
     */
    inline void SetIkeVersions(const Aws::Vector<IKEVersionsListValue>& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions = value; }

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p>
     */
    inline void SetIkeVersions(Aws::Vector<IKEVersionsListValue>&& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions = std::move(value); }

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p>
     */
    inline TunnelOption& WithIkeVersions(const Aws::Vector<IKEVersionsListValue>& value) { SetIkeVersions(value); return *this;}

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p>
     */
    inline TunnelOption& WithIkeVersions(Aws::Vector<IKEVersionsListValue>&& value) { SetIkeVersions(std::move(value)); return *this;}

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p>
     */
    inline TunnelOption& AddIkeVersions(const IKEVersionsListValue& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions.push_back(value); return *this; }

    /**
     * <p>The IKE versions that are permitted for the VPN tunnel.</p>
     */
    inline TunnelOption& AddIkeVersions(IKEVersionsListValue&& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>The action to take when the establishing the VPN tunnels for a VPN
     * connection.</p>
     */
    inline const Aws::String& GetStartupAction() const{ return m_startupAction; }

    /**
     * <p>The action to take when the establishing the VPN tunnels for a VPN
     * connection.</p>
     */
    inline bool StartupActionHasBeenSet() const { return m_startupActionHasBeenSet; }

    /**
     * <p>The action to take when the establishing the VPN tunnels for a VPN
     * connection.</p>
     */
    inline void SetStartupAction(const Aws::String& value) { m_startupActionHasBeenSet = true; m_startupAction = value; }

    /**
     * <p>The action to take when the establishing the VPN tunnels for a VPN
     * connection.</p>
     */
    inline void SetStartupAction(Aws::String&& value) { m_startupActionHasBeenSet = true; m_startupAction = std::move(value); }

    /**
     * <p>The action to take when the establishing the VPN tunnels for a VPN
     * connection.</p>
     */
    inline void SetStartupAction(const char* value) { m_startupActionHasBeenSet = true; m_startupAction.assign(value); }

    /**
     * <p>The action to take when the establishing the VPN tunnels for a VPN
     * connection.</p>
     */
    inline TunnelOption& WithStartupAction(const Aws::String& value) { SetStartupAction(value); return *this;}

    /**
     * <p>The action to take when the establishing the VPN tunnels for a VPN
     * connection.</p>
     */
    inline TunnelOption& WithStartupAction(Aws::String&& value) { SetStartupAction(std::move(value)); return *this;}

    /**
     * <p>The action to take when the establishing the VPN tunnels for a VPN
     * connection.</p>
     */
    inline TunnelOption& WithStartupAction(const char* value) { SetStartupAction(value); return *this;}


    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline const VpnTunnelLogOptions& GetLogOptions() const{ return m_logOptions; }

    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline bool LogOptionsHasBeenSet() const { return m_logOptionsHasBeenSet; }

    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline void SetLogOptions(const VpnTunnelLogOptions& value) { m_logOptionsHasBeenSet = true; m_logOptions = value; }

    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline void SetLogOptions(VpnTunnelLogOptions&& value) { m_logOptionsHasBeenSet = true; m_logOptions = std::move(value); }

    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline TunnelOption& WithLogOptions(const VpnTunnelLogOptions& value) { SetLogOptions(value); return *this;}

    /**
     * <p>Options for logging VPN tunnel activity.</p>
     */
    inline TunnelOption& WithLogOptions(VpnTunnelLogOptions&& value) { SetLogOptions(std::move(value)); return *this;}

  private:

    Aws::String m_outsideIpAddress;
    bool m_outsideIpAddressHasBeenSet = false;

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

    int m_dpdTimeoutSeconds;
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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
