/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ModifyVpnTunnelOptionsSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpnTunnelOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpnTunnelOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpnTunnelOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Site-to-Site VPN connection.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const { return m_vpnConnectionId; }
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }
    template<typename VpnConnectionIdT = Aws::String>
    void SetVpnConnectionId(VpnConnectionIdT&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::forward<VpnConnectionIdT>(value); }
    template<typename VpnConnectionIdT = Aws::String>
    ModifyVpnTunnelOptionsRequest& WithVpnConnectionId(VpnConnectionIdT&& value) { SetVpnConnectionId(std::forward<VpnConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline const Aws::String& GetVpnTunnelOutsideIpAddress() const { return m_vpnTunnelOutsideIpAddress; }
    inline bool VpnTunnelOutsideIpAddressHasBeenSet() const { return m_vpnTunnelOutsideIpAddressHasBeenSet; }
    template<typename VpnTunnelOutsideIpAddressT = Aws::String>
    void SetVpnTunnelOutsideIpAddress(VpnTunnelOutsideIpAddressT&& value) { m_vpnTunnelOutsideIpAddressHasBeenSet = true; m_vpnTunnelOutsideIpAddress = std::forward<VpnTunnelOutsideIpAddressT>(value); }
    template<typename VpnTunnelOutsideIpAddressT = Aws::String>
    ModifyVpnTunnelOptionsRequest& WithVpnTunnelOutsideIpAddress(VpnTunnelOutsideIpAddressT&& value) { SetVpnTunnelOutsideIpAddress(std::forward<VpnTunnelOutsideIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tunnel options to modify.</p>
     */
    inline const ModifyVpnTunnelOptionsSpecification& GetTunnelOptions() const { return m_tunnelOptions; }
    inline bool TunnelOptionsHasBeenSet() const { return m_tunnelOptionsHasBeenSet; }
    template<typename TunnelOptionsT = ModifyVpnTunnelOptionsSpecification>
    void SetTunnelOptions(TunnelOptionsT&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = std::forward<TunnelOptionsT>(value); }
    template<typename TunnelOptionsT = ModifyVpnTunnelOptionsSpecification>
    ModifyVpnTunnelOptionsRequest& WithTunnelOptions(TunnelOptionsT&& value) { SetTunnelOptions(std::forward<TunnelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVpnTunnelOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose whether or not to trigger immediate tunnel replacement. This is only
     * applicable when turning on or off <code>EnableTunnelLifecycleControl</code>.</p>
     * <p>Valid values: <code>True</code> | <code>False</code> </p>
     */
    inline bool GetSkipTunnelReplacement() const { return m_skipTunnelReplacement; }
    inline bool SkipTunnelReplacementHasBeenSet() const { return m_skipTunnelReplacementHasBeenSet; }
    inline void SetSkipTunnelReplacement(bool value) { m_skipTunnelReplacementHasBeenSet = true; m_skipTunnelReplacement = value; }
    inline ModifyVpnTunnelOptionsRequest& WithSkipTunnelReplacement(bool value) { SetSkipTunnelReplacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage mode for the pre-shared key (PSK). Valid values are
     * <code>Standard</code> (stored in Site-to-Site VPN service) or
     * <code>SecretsManager</code> (stored in Amazon Web Services Secrets Manager).</p>
     */
    inline const Aws::String& GetPreSharedKeyStorage() const { return m_preSharedKeyStorage; }
    inline bool PreSharedKeyStorageHasBeenSet() const { return m_preSharedKeyStorageHasBeenSet; }
    template<typename PreSharedKeyStorageT = Aws::String>
    void SetPreSharedKeyStorage(PreSharedKeyStorageT&& value) { m_preSharedKeyStorageHasBeenSet = true; m_preSharedKeyStorage = std::forward<PreSharedKeyStorageT>(value); }
    template<typename PreSharedKeyStorageT = Aws::String>
    ModifyVpnTunnelOptionsRequest& WithPreSharedKeyStorage(PreSharedKeyStorageT&& value) { SetPreSharedKeyStorage(std::forward<PreSharedKeyStorageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_vpnTunnelOutsideIpAddress;
    bool m_vpnTunnelOutsideIpAddressHasBeenSet = false;

    ModifyVpnTunnelOptionsSpecification m_tunnelOptions;
    bool m_tunnelOptionsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    bool m_skipTunnelReplacement{false};
    bool m_skipTunnelReplacementHasBeenSet = false;

    Aws::String m_preSharedKeyStorage;
    bool m_preSharedKeyStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
