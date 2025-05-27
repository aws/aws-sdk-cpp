/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetVpnConnectionDeviceSampleConfigurationRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetVpnConnectionDeviceSampleConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVpnConnectionDeviceSampleConfiguration"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The <code>VpnConnectionId</code> specifies the Site-to-Site VPN connection
     * used for the sample configuration.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const { return m_vpnConnectionId; }
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }
    template<typename VpnConnectionIdT = Aws::String>
    void SetVpnConnectionId(VpnConnectionIdT&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::forward<VpnConnectionIdT>(value); }
    template<typename VpnConnectionIdT = Aws::String>
    GetVpnConnectionDeviceSampleConfigurationRequest& WithVpnConnectionId(VpnConnectionIdT&& value) { SetVpnConnectionId(std::forward<VpnConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device identifier provided by the <code>GetVpnConnectionDeviceTypes</code>
     * API.</p>
     */
    inline const Aws::String& GetVpnConnectionDeviceTypeId() const { return m_vpnConnectionDeviceTypeId; }
    inline bool VpnConnectionDeviceTypeIdHasBeenSet() const { return m_vpnConnectionDeviceTypeIdHasBeenSet; }
    template<typename VpnConnectionDeviceTypeIdT = Aws::String>
    void SetVpnConnectionDeviceTypeId(VpnConnectionDeviceTypeIdT&& value) { m_vpnConnectionDeviceTypeIdHasBeenSet = true; m_vpnConnectionDeviceTypeId = std::forward<VpnConnectionDeviceTypeIdT>(value); }
    template<typename VpnConnectionDeviceTypeIdT = Aws::String>
    GetVpnConnectionDeviceSampleConfigurationRequest& WithVpnConnectionDeviceTypeId(VpnConnectionDeviceTypeIdT&& value) { SetVpnConnectionDeviceTypeId(std::forward<VpnConnectionDeviceTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IKE version to be used in the sample configuration file for your customer
     * gateway device. You can specify one of the following versions:
     * <code>ikev1</code> or <code>ikev2</code>.</p>
     */
    inline const Aws::String& GetInternetKeyExchangeVersion() const { return m_internetKeyExchangeVersion; }
    inline bool InternetKeyExchangeVersionHasBeenSet() const { return m_internetKeyExchangeVersionHasBeenSet; }
    template<typename InternetKeyExchangeVersionT = Aws::String>
    void SetInternetKeyExchangeVersion(InternetKeyExchangeVersionT&& value) { m_internetKeyExchangeVersionHasBeenSet = true; m_internetKeyExchangeVersion = std::forward<InternetKeyExchangeVersionT>(value); }
    template<typename InternetKeyExchangeVersionT = Aws::String>
    GetVpnConnectionDeviceSampleConfigurationRequest& WithInternetKeyExchangeVersion(InternetKeyExchangeVersionT&& value) { SetInternetKeyExchangeVersion(std::forward<InternetKeyExchangeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of sample configuration to generate. Valid values are
     * "compatibility" (includes IKEv1) or "recommended" (throws
     * UnsupportedOperationException for IKEv1).</p>
     */
    inline const Aws::String& GetSampleType() const { return m_sampleType; }
    inline bool SampleTypeHasBeenSet() const { return m_sampleTypeHasBeenSet; }
    template<typename SampleTypeT = Aws::String>
    void SetSampleType(SampleTypeT&& value) { m_sampleTypeHasBeenSet = true; m_sampleType = std::forward<SampleTypeT>(value); }
    template<typename SampleTypeT = Aws::String>
    GetVpnConnectionDeviceSampleConfigurationRequest& WithSampleType(SampleTypeT&& value) { SetSampleType(std::forward<SampleTypeT>(value)); return *this;}
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
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_vpnConnectionDeviceTypeId;
    bool m_vpnConnectionDeviceTypeIdHasBeenSet = false;

    Aws::String m_internetKeyExchangeVersion;
    bool m_internetKeyExchangeVersionHasBeenSet = false;

    Aws::String m_sampleType;
    bool m_sampleTypeHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
