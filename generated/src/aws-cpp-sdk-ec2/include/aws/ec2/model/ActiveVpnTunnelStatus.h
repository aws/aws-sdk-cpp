/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpnTunnelProvisioningStatus.h>
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
   * <p>Contains information about the current security configuration of an active
   * VPN tunnel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ActiveVpnTunnelStatus">AWS
   * API Reference</a></p>
   */
  class ActiveVpnTunnelStatus
  {
  public:
    AWS_EC2_API ActiveVpnTunnelStatus() = default;
    AWS_EC2_API ActiveVpnTunnelStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ActiveVpnTunnelStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The encryption algorithm negotiated in Phase 1 IKE negotiations.</p>
     */
    inline const Aws::String& GetPhase1EncryptionAlgorithm() const { return m_phase1EncryptionAlgorithm; }
    inline bool Phase1EncryptionAlgorithmHasBeenSet() const { return m_phase1EncryptionAlgorithmHasBeenSet; }
    template<typename Phase1EncryptionAlgorithmT = Aws::String>
    void SetPhase1EncryptionAlgorithm(Phase1EncryptionAlgorithmT&& value) { m_phase1EncryptionAlgorithmHasBeenSet = true; m_phase1EncryptionAlgorithm = std::forward<Phase1EncryptionAlgorithmT>(value); }
    template<typename Phase1EncryptionAlgorithmT = Aws::String>
    ActiveVpnTunnelStatus& WithPhase1EncryptionAlgorithm(Phase1EncryptionAlgorithmT&& value) { SetPhase1EncryptionAlgorithm(std::forward<Phase1EncryptionAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption algorithm negotiated in Phase 2 IKE negotiations.</p>
     */
    inline const Aws::String& GetPhase2EncryptionAlgorithm() const { return m_phase2EncryptionAlgorithm; }
    inline bool Phase2EncryptionAlgorithmHasBeenSet() const { return m_phase2EncryptionAlgorithmHasBeenSet; }
    template<typename Phase2EncryptionAlgorithmT = Aws::String>
    void SetPhase2EncryptionAlgorithm(Phase2EncryptionAlgorithmT&& value) { m_phase2EncryptionAlgorithmHasBeenSet = true; m_phase2EncryptionAlgorithm = std::forward<Phase2EncryptionAlgorithmT>(value); }
    template<typename Phase2EncryptionAlgorithmT = Aws::String>
    ActiveVpnTunnelStatus& WithPhase2EncryptionAlgorithm(Phase2EncryptionAlgorithmT&& value) { SetPhase2EncryptionAlgorithm(std::forward<Phase2EncryptionAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integrity algorithm negotiated in Phase 1 IKE negotiations.</p>
     */
    inline const Aws::String& GetPhase1IntegrityAlgorithm() const { return m_phase1IntegrityAlgorithm; }
    inline bool Phase1IntegrityAlgorithmHasBeenSet() const { return m_phase1IntegrityAlgorithmHasBeenSet; }
    template<typename Phase1IntegrityAlgorithmT = Aws::String>
    void SetPhase1IntegrityAlgorithm(Phase1IntegrityAlgorithmT&& value) { m_phase1IntegrityAlgorithmHasBeenSet = true; m_phase1IntegrityAlgorithm = std::forward<Phase1IntegrityAlgorithmT>(value); }
    template<typename Phase1IntegrityAlgorithmT = Aws::String>
    ActiveVpnTunnelStatus& WithPhase1IntegrityAlgorithm(Phase1IntegrityAlgorithmT&& value) { SetPhase1IntegrityAlgorithm(std::forward<Phase1IntegrityAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integrity algorithm negotiated in Phase 2 IKE negotiations.</p>
     */
    inline const Aws::String& GetPhase2IntegrityAlgorithm() const { return m_phase2IntegrityAlgorithm; }
    inline bool Phase2IntegrityAlgorithmHasBeenSet() const { return m_phase2IntegrityAlgorithmHasBeenSet; }
    template<typename Phase2IntegrityAlgorithmT = Aws::String>
    void SetPhase2IntegrityAlgorithm(Phase2IntegrityAlgorithmT&& value) { m_phase2IntegrityAlgorithmHasBeenSet = true; m_phase2IntegrityAlgorithm = std::forward<Phase2IntegrityAlgorithmT>(value); }
    template<typename Phase2IntegrityAlgorithmT = Aws::String>
    ActiveVpnTunnelStatus& WithPhase2IntegrityAlgorithm(Phase2IntegrityAlgorithmT&& value) { SetPhase2IntegrityAlgorithm(std::forward<Phase2IntegrityAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Diffie-Hellman group number being used in Phase 1 IKE negotiations.</p>
     */
    inline int GetPhase1DHGroup() const { return m_phase1DHGroup; }
    inline bool Phase1DHGroupHasBeenSet() const { return m_phase1DHGroupHasBeenSet; }
    inline void SetPhase1DHGroup(int value) { m_phase1DHGroupHasBeenSet = true; m_phase1DHGroup = value; }
    inline ActiveVpnTunnelStatus& WithPhase1DHGroup(int value) { SetPhase1DHGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Diffie-Hellman group number being used in Phase 2 IKE negotiations.</p>
     */
    inline int GetPhase2DHGroup() const { return m_phase2DHGroup; }
    inline bool Phase2DHGroupHasBeenSet() const { return m_phase2DHGroupHasBeenSet; }
    inline void SetPhase2DHGroup(int value) { m_phase2DHGroupHasBeenSet = true; m_phase2DHGroup = value; }
    inline ActiveVpnTunnelStatus& WithPhase2DHGroup(int value) { SetPhase2DHGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Internet Key Exchange (IKE) protocol being used.</p>
     */
    inline const Aws::String& GetIkeVersion() const { return m_ikeVersion; }
    inline bool IkeVersionHasBeenSet() const { return m_ikeVersionHasBeenSet; }
    template<typename IkeVersionT = Aws::String>
    void SetIkeVersion(IkeVersionT&& value) { m_ikeVersionHasBeenSet = true; m_ikeVersion = std::forward<IkeVersionT>(value); }
    template<typename IkeVersionT = Aws::String>
    ActiveVpnTunnelStatus& WithIkeVersion(IkeVersionT&& value) { SetIkeVersion(std::forward<IkeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current provisioning status of the VPN tunnel.</p>
     */
    inline VpnTunnelProvisioningStatus GetProvisioningStatus() const { return m_provisioningStatus; }
    inline bool ProvisioningStatusHasBeenSet() const { return m_provisioningStatusHasBeenSet; }
    inline void SetProvisioningStatus(VpnTunnelProvisioningStatus value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = value; }
    inline ActiveVpnTunnelStatus& WithProvisioningStatus(VpnTunnelProvisioningStatus value) { SetProvisioningStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current provisioning status.</p>
     */
    inline const Aws::String& GetProvisioningStatusReason() const { return m_provisioningStatusReason; }
    inline bool ProvisioningStatusReasonHasBeenSet() const { return m_provisioningStatusReasonHasBeenSet; }
    template<typename ProvisioningStatusReasonT = Aws::String>
    void SetProvisioningStatusReason(ProvisioningStatusReasonT&& value) { m_provisioningStatusReasonHasBeenSet = true; m_provisioningStatusReason = std::forward<ProvisioningStatusReasonT>(value); }
    template<typename ProvisioningStatusReasonT = Aws::String>
    ActiveVpnTunnelStatus& WithProvisioningStatusReason(ProvisioningStatusReasonT&& value) { SetProvisioningStatusReason(std::forward<ProvisioningStatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phase1EncryptionAlgorithm;
    bool m_phase1EncryptionAlgorithmHasBeenSet = false;

    Aws::String m_phase2EncryptionAlgorithm;
    bool m_phase2EncryptionAlgorithmHasBeenSet = false;

    Aws::String m_phase1IntegrityAlgorithm;
    bool m_phase1IntegrityAlgorithmHasBeenSet = false;

    Aws::String m_phase2IntegrityAlgorithm;
    bool m_phase2IntegrityAlgorithmHasBeenSet = false;

    int m_phase1DHGroup{0};
    bool m_phase1DHGroupHasBeenSet = false;

    int m_phase2DHGroup{0};
    bool m_phase2DHGroupHasBeenSet = false;

    Aws::String m_ikeVersion;
    bool m_ikeVersionHasBeenSet = false;

    VpnTunnelProvisioningStatus m_provisioningStatus{VpnTunnelProvisioningStatus::NOT_SET};
    bool m_provisioningStatusHasBeenSet = false;

    Aws::String m_provisioningStatusReason;
    bool m_provisioningStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
