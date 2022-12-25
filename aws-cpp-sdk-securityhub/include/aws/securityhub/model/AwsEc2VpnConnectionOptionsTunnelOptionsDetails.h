/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The VPN tunnel options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpnConnectionOptionsTunnelOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpnConnectionOptionsTunnelOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsTunnelOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsTunnelOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsTunnelOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of seconds after which a Dead Peer Detection (DPD) timeout
     * occurs.</p>
     */
    inline int GetDpdTimeoutSeconds() const{ return m_dpdTimeoutSeconds; }

    /**
     * <p>The number of seconds after which a Dead Peer Detection (DPD) timeout
     * occurs.</p>
     */
    inline bool DpdTimeoutSecondsHasBeenSet() const { return m_dpdTimeoutSecondsHasBeenSet; }

    /**
     * <p>The number of seconds after which a Dead Peer Detection (DPD) timeout
     * occurs.</p>
     */
    inline void SetDpdTimeoutSeconds(int value) { m_dpdTimeoutSecondsHasBeenSet = true; m_dpdTimeoutSeconds = value; }

    /**
     * <p>The number of seconds after which a Dead Peer Detection (DPD) timeout
     * occurs.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithDpdTimeoutSeconds(int value) { SetDpdTimeoutSeconds(value); return *this;}


    /**
     * <p>The Internet Key Exchange (IKE) versions that are permitted for the VPN
     * tunnel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIkeVersions() const{ return m_ikeVersions; }

    /**
     * <p>The Internet Key Exchange (IKE) versions that are permitted for the VPN
     * tunnel.</p>
     */
    inline bool IkeVersionsHasBeenSet() const { return m_ikeVersionsHasBeenSet; }

    /**
     * <p>The Internet Key Exchange (IKE) versions that are permitted for the VPN
     * tunnel.</p>
     */
    inline void SetIkeVersions(const Aws::Vector<Aws::String>& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions = value; }

    /**
     * <p>The Internet Key Exchange (IKE) versions that are permitted for the VPN
     * tunnel.</p>
     */
    inline void SetIkeVersions(Aws::Vector<Aws::String>&& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions = std::move(value); }

    /**
     * <p>The Internet Key Exchange (IKE) versions that are permitted for the VPN
     * tunnel.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithIkeVersions(const Aws::Vector<Aws::String>& value) { SetIkeVersions(value); return *this;}

    /**
     * <p>The Internet Key Exchange (IKE) versions that are permitted for the VPN
     * tunnel.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithIkeVersions(Aws::Vector<Aws::String>&& value) { SetIkeVersions(std::move(value)); return *this;}

    /**
     * <p>The Internet Key Exchange (IKE) versions that are permitted for the VPN
     * tunnel.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddIkeVersions(const Aws::String& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions.push_back(value); return *this; }

    /**
     * <p>The Internet Key Exchange (IKE) versions that are permitted for the VPN
     * tunnel.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddIkeVersions(Aws::String&& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>The Internet Key Exchange (IKE) versions that are permitted for the VPN
     * tunnel.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddIkeVersions(const char* value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions.push_back(value); return *this; }


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
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithOutsideIpAddress(const Aws::String& value) { SetOutsideIpAddress(value); return *this;}

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithOutsideIpAddress(Aws::String&& value) { SetOutsideIpAddress(std::move(value)); return *this;}

    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithOutsideIpAddress(const char* value) { SetOutsideIpAddress(value); return *this;}


    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<int>& GetPhase1DhGroupNumbers() const{ return m_phase1DhGroupNumbers; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline bool Phase1DhGroupNumbersHasBeenSet() const { return m_phase1DhGroupNumbersHasBeenSet; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1DhGroupNumbers(const Aws::Vector<int>& value) { m_phase1DhGroupNumbersHasBeenSet = true; m_phase1DhGroupNumbers = value; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1DhGroupNumbers(Aws::Vector<int>&& value) { m_phase1DhGroupNumbersHasBeenSet = true; m_phase1DhGroupNumbers = std::move(value); }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1DhGroupNumbers(const Aws::Vector<int>& value) { SetPhase1DhGroupNumbers(value); return *this;}

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1DhGroupNumbers(Aws::Vector<int>&& value) { SetPhase1DhGroupNumbers(std::move(value)); return *this;}

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase1DhGroupNumbers(int value) { m_phase1DhGroupNumbersHasBeenSet = true; m_phase1DhGroupNumbers.push_back(value); return *this; }


    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhase1EncryptionAlgorithms() const{ return m_phase1EncryptionAlgorithms; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline bool Phase1EncryptionAlgorithmsHasBeenSet() const { return m_phase1EncryptionAlgorithmsHasBeenSet; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1EncryptionAlgorithms(const Aws::Vector<Aws::String>& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms = value; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1EncryptionAlgorithms(Aws::Vector<Aws::String>&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms = std::move(value); }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1EncryptionAlgorithms(const Aws::Vector<Aws::String>& value) { SetPhase1EncryptionAlgorithms(value); return *this;}

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1EncryptionAlgorithms(Aws::Vector<Aws::String>&& value) { SetPhase1EncryptionAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase1EncryptionAlgorithms(const Aws::String& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms.push_back(value); return *this; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase1EncryptionAlgorithms(Aws::String&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms.push_back(std::move(value)); return *this; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase1EncryptionAlgorithms(const char* value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms.push_back(value); return *this; }


    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhase1IntegrityAlgorithms() const{ return m_phase1IntegrityAlgorithms; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline bool Phase1IntegrityAlgorithmsHasBeenSet() const { return m_phase1IntegrityAlgorithmsHasBeenSet; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1IntegrityAlgorithms(const Aws::Vector<Aws::String>& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms = value; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline void SetPhase1IntegrityAlgorithms(Aws::Vector<Aws::String>&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms = std::move(value); }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1IntegrityAlgorithms(const Aws::Vector<Aws::String>& value) { SetPhase1IntegrityAlgorithms(value); return *this;}

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1IntegrityAlgorithms(Aws::Vector<Aws::String>&& value) { SetPhase1IntegrityAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase1IntegrityAlgorithms(const Aws::String& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms.push_back(value); return *this; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase1IntegrityAlgorithms(Aws::String&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms.push_back(std::move(value)); return *this; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase1IntegrityAlgorithms(const char* value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms.push_back(value); return *this; }


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
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1LifetimeSeconds(int value) { SetPhase1LifetimeSeconds(value); return *this;}


    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<int>& GetPhase2DhGroupNumbers() const{ return m_phase2DhGroupNumbers; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline bool Phase2DhGroupNumbersHasBeenSet() const { return m_phase2DhGroupNumbersHasBeenSet; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2DhGroupNumbers(const Aws::Vector<int>& value) { m_phase2DhGroupNumbersHasBeenSet = true; m_phase2DhGroupNumbers = value; }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2DhGroupNumbers(Aws::Vector<int>&& value) { m_phase2DhGroupNumbersHasBeenSet = true; m_phase2DhGroupNumbers = std::move(value); }

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2DhGroupNumbers(const Aws::Vector<int>& value) { SetPhase2DhGroupNumbers(value); return *this;}

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2DhGroupNumbers(Aws::Vector<int>&& value) { SetPhase2DhGroupNumbers(std::move(value)); return *this;}

    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase2DhGroupNumbers(int value) { m_phase2DhGroupNumbersHasBeenSet = true; m_phase2DhGroupNumbers.push_back(value); return *this; }


    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhase2EncryptionAlgorithms() const{ return m_phase2EncryptionAlgorithms; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline bool Phase2EncryptionAlgorithmsHasBeenSet() const { return m_phase2EncryptionAlgorithmsHasBeenSet; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2EncryptionAlgorithms(const Aws::Vector<Aws::String>& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms = value; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2EncryptionAlgorithms(Aws::Vector<Aws::String>&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms = std::move(value); }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2EncryptionAlgorithms(const Aws::Vector<Aws::String>& value) { SetPhase2EncryptionAlgorithms(value); return *this;}

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2EncryptionAlgorithms(Aws::Vector<Aws::String>&& value) { SetPhase2EncryptionAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase2EncryptionAlgorithms(const Aws::String& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms.push_back(value); return *this; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase2EncryptionAlgorithms(Aws::String&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms.push_back(std::move(value)); return *this; }

    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase2EncryptionAlgorithms(const char* value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms.push_back(value); return *this; }


    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhase2IntegrityAlgorithms() const{ return m_phase2IntegrityAlgorithms; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline bool Phase2IntegrityAlgorithmsHasBeenSet() const { return m_phase2IntegrityAlgorithmsHasBeenSet; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2IntegrityAlgorithms(const Aws::Vector<Aws::String>& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms = value; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline void SetPhase2IntegrityAlgorithms(Aws::Vector<Aws::String>&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms = std::move(value); }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2IntegrityAlgorithms(const Aws::Vector<Aws::String>& value) { SetPhase2IntegrityAlgorithms(value); return *this;}

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2IntegrityAlgorithms(Aws::Vector<Aws::String>&& value) { SetPhase2IntegrityAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase2IntegrityAlgorithms(const Aws::String& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms.push_back(value); return *this; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase2IntegrityAlgorithms(Aws::String&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms.push_back(std::move(value)); return *this; }

    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase2IntegrityAlgorithms(const char* value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms.push_back(value); return *this; }


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
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2LifetimeSeconds(int value) { SetPhase2LifetimeSeconds(value); return *this;}


    /**
     * <p>The preshared key to establish initial authentication between the virtual
     * private gateway and the customer gateway.</p>
     */
    inline const Aws::String& GetPreSharedKey() const{ return m_preSharedKey; }

    /**
     * <p>The preshared key to establish initial authentication between the virtual
     * private gateway and the customer gateway.</p>
     */
    inline bool PreSharedKeyHasBeenSet() const { return m_preSharedKeyHasBeenSet; }

    /**
     * <p>The preshared key to establish initial authentication between the virtual
     * private gateway and the customer gateway.</p>
     */
    inline void SetPreSharedKey(const Aws::String& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = value; }

    /**
     * <p>The preshared key to establish initial authentication between the virtual
     * private gateway and the customer gateway.</p>
     */
    inline void SetPreSharedKey(Aws::String&& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = std::move(value); }

    /**
     * <p>The preshared key to establish initial authentication between the virtual
     * private gateway and the customer gateway.</p>
     */
    inline void SetPreSharedKey(const char* value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey.assign(value); }

    /**
     * <p>The preshared key to establish initial authentication between the virtual
     * private gateway and the customer gateway.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPreSharedKey(const Aws::String& value) { SetPreSharedKey(value); return *this;}

    /**
     * <p>The preshared key to establish initial authentication between the virtual
     * private gateway and the customer gateway.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPreSharedKey(Aws::String&& value) { SetPreSharedKey(std::move(value)); return *this;}

    /**
     * <p>The preshared key to establish initial authentication between the virtual
     * private gateway and the customer gateway.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPreSharedKey(const char* value) { SetPreSharedKey(value); return *this;}


    /**
     * <p>The percentage of the rekey window, which is determined by
     * <code>RekeyMarginTimeSeconds</code> during which the rekey time is randomly
     * selected.</p>
     */
    inline int GetRekeyFuzzPercentage() const{ return m_rekeyFuzzPercentage; }

    /**
     * <p>The percentage of the rekey window, which is determined by
     * <code>RekeyMarginTimeSeconds</code> during which the rekey time is randomly
     * selected.</p>
     */
    inline bool RekeyFuzzPercentageHasBeenSet() const { return m_rekeyFuzzPercentageHasBeenSet; }

    /**
     * <p>The percentage of the rekey window, which is determined by
     * <code>RekeyMarginTimeSeconds</code> during which the rekey time is randomly
     * selected.</p>
     */
    inline void SetRekeyFuzzPercentage(int value) { m_rekeyFuzzPercentageHasBeenSet = true; m_rekeyFuzzPercentage = value; }

    /**
     * <p>The percentage of the rekey window, which is determined by
     * <code>RekeyMarginTimeSeconds</code> during which the rekey time is randomly
     * selected.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithRekeyFuzzPercentage(int value) { SetRekeyFuzzPercentage(value); return *this;}


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
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithRekeyMarginTimeSeconds(int value) { SetRekeyMarginTimeSeconds(value); return *this;}


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
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithReplayWindowSize(int value) { SetReplayWindowSize(value); return *this;}


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
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithTunnelInsideCidr(const Aws::String& value) { SetTunnelInsideCidr(value); return *this;}

    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithTunnelInsideCidr(Aws::String&& value) { SetTunnelInsideCidr(std::move(value)); return *this;}

    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithTunnelInsideCidr(const char* value) { SetTunnelInsideCidr(value); return *this;}

  private:

    int m_dpdTimeoutSeconds;
    bool m_dpdTimeoutSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ikeVersions;
    bool m_ikeVersionsHasBeenSet = false;

    Aws::String m_outsideIpAddress;
    bool m_outsideIpAddressHasBeenSet = false;

    Aws::Vector<int> m_phase1DhGroupNumbers;
    bool m_phase1DhGroupNumbersHasBeenSet = false;

    Aws::Vector<Aws::String> m_phase1EncryptionAlgorithms;
    bool m_phase1EncryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<Aws::String> m_phase1IntegrityAlgorithms;
    bool m_phase1IntegrityAlgorithmsHasBeenSet = false;

    int m_phase1LifetimeSeconds;
    bool m_phase1LifetimeSecondsHasBeenSet = false;

    Aws::Vector<int> m_phase2DhGroupNumbers;
    bool m_phase2DhGroupNumbersHasBeenSet = false;

    Aws::Vector<Aws::String> m_phase2EncryptionAlgorithms;
    bool m_phase2EncryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<Aws::String> m_phase2IntegrityAlgorithms;
    bool m_phase2IntegrityAlgorithmsHasBeenSet = false;

    int m_phase2LifetimeSeconds;
    bool m_phase2LifetimeSecondsHasBeenSet = false;

    Aws::String m_preSharedKey;
    bool m_preSharedKeyHasBeenSet = false;

    int m_rekeyFuzzPercentage;
    bool m_rekeyFuzzPercentageHasBeenSet = false;

    int m_rekeyMarginTimeSeconds;
    bool m_rekeyMarginTimeSecondsHasBeenSet = false;

    int m_replayWindowSize;
    bool m_replayWindowSizeHasBeenSet = false;

    Aws::String m_tunnelInsideCidr;
    bool m_tunnelInsideCidrHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
