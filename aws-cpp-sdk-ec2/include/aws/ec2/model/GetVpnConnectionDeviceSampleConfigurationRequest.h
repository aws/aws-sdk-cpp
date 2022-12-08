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
    AWS_EC2_API GetVpnConnectionDeviceSampleConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVpnConnectionDeviceSampleConfiguration"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The <code>VpnConnectionId</code> specifies the Site-to-Site VPN connection
     * used for the sample configuration.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const{ return m_vpnConnectionId; }

    /**
     * <p>The <code>VpnConnectionId</code> specifies the Site-to-Site VPN connection
     * used for the sample configuration.</p>
     */
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }

    /**
     * <p>The <code>VpnConnectionId</code> specifies the Site-to-Site VPN connection
     * used for the sample configuration.</p>
     */
    inline void SetVpnConnectionId(const Aws::String& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = value; }

    /**
     * <p>The <code>VpnConnectionId</code> specifies the Site-to-Site VPN connection
     * used for the sample configuration.</p>
     */
    inline void SetVpnConnectionId(Aws::String&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::move(value); }

    /**
     * <p>The <code>VpnConnectionId</code> specifies the Site-to-Site VPN connection
     * used for the sample configuration.</p>
     */
    inline void SetVpnConnectionId(const char* value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId.assign(value); }

    /**
     * <p>The <code>VpnConnectionId</code> specifies the Site-to-Site VPN connection
     * used for the sample configuration.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}

    /**
     * <p>The <code>VpnConnectionId</code> specifies the Site-to-Site VPN connection
     * used for the sample configuration.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(std::move(value)); return *this;}

    /**
     * <p>The <code>VpnConnectionId</code> specifies the Site-to-Site VPN connection
     * used for the sample configuration.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}


    /**
     * <p>Device identifier provided by the <code>GetVpnConnectionDeviceTypes</code>
     * API.</p>
     */
    inline const Aws::String& GetVpnConnectionDeviceTypeId() const{ return m_vpnConnectionDeviceTypeId; }

    /**
     * <p>Device identifier provided by the <code>GetVpnConnectionDeviceTypes</code>
     * API.</p>
     */
    inline bool VpnConnectionDeviceTypeIdHasBeenSet() const { return m_vpnConnectionDeviceTypeIdHasBeenSet; }

    /**
     * <p>Device identifier provided by the <code>GetVpnConnectionDeviceTypes</code>
     * API.</p>
     */
    inline void SetVpnConnectionDeviceTypeId(const Aws::String& value) { m_vpnConnectionDeviceTypeIdHasBeenSet = true; m_vpnConnectionDeviceTypeId = value; }

    /**
     * <p>Device identifier provided by the <code>GetVpnConnectionDeviceTypes</code>
     * API.</p>
     */
    inline void SetVpnConnectionDeviceTypeId(Aws::String&& value) { m_vpnConnectionDeviceTypeIdHasBeenSet = true; m_vpnConnectionDeviceTypeId = std::move(value); }

    /**
     * <p>Device identifier provided by the <code>GetVpnConnectionDeviceTypes</code>
     * API.</p>
     */
    inline void SetVpnConnectionDeviceTypeId(const char* value) { m_vpnConnectionDeviceTypeIdHasBeenSet = true; m_vpnConnectionDeviceTypeId.assign(value); }

    /**
     * <p>Device identifier provided by the <code>GetVpnConnectionDeviceTypes</code>
     * API.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithVpnConnectionDeviceTypeId(const Aws::String& value) { SetVpnConnectionDeviceTypeId(value); return *this;}

    /**
     * <p>Device identifier provided by the <code>GetVpnConnectionDeviceTypes</code>
     * API.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithVpnConnectionDeviceTypeId(Aws::String&& value) { SetVpnConnectionDeviceTypeId(std::move(value)); return *this;}

    /**
     * <p>Device identifier provided by the <code>GetVpnConnectionDeviceTypes</code>
     * API.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithVpnConnectionDeviceTypeId(const char* value) { SetVpnConnectionDeviceTypeId(value); return *this;}


    /**
     * <p>The IKE version to be used in the sample configuration file for your customer
     * gateway device. You can specify one of the following versions:
     * <code>ikev1</code> or <code>ikev2</code>.</p>
     */
    inline const Aws::String& GetInternetKeyExchangeVersion() const{ return m_internetKeyExchangeVersion; }

    /**
     * <p>The IKE version to be used in the sample configuration file for your customer
     * gateway device. You can specify one of the following versions:
     * <code>ikev1</code> or <code>ikev2</code>.</p>
     */
    inline bool InternetKeyExchangeVersionHasBeenSet() const { return m_internetKeyExchangeVersionHasBeenSet; }

    /**
     * <p>The IKE version to be used in the sample configuration file for your customer
     * gateway device. You can specify one of the following versions:
     * <code>ikev1</code> or <code>ikev2</code>.</p>
     */
    inline void SetInternetKeyExchangeVersion(const Aws::String& value) { m_internetKeyExchangeVersionHasBeenSet = true; m_internetKeyExchangeVersion = value; }

    /**
     * <p>The IKE version to be used in the sample configuration file for your customer
     * gateway device. You can specify one of the following versions:
     * <code>ikev1</code> or <code>ikev2</code>.</p>
     */
    inline void SetInternetKeyExchangeVersion(Aws::String&& value) { m_internetKeyExchangeVersionHasBeenSet = true; m_internetKeyExchangeVersion = std::move(value); }

    /**
     * <p>The IKE version to be used in the sample configuration file for your customer
     * gateway device. You can specify one of the following versions:
     * <code>ikev1</code> or <code>ikev2</code>.</p>
     */
    inline void SetInternetKeyExchangeVersion(const char* value) { m_internetKeyExchangeVersionHasBeenSet = true; m_internetKeyExchangeVersion.assign(value); }

    /**
     * <p>The IKE version to be used in the sample configuration file for your customer
     * gateway device. You can specify one of the following versions:
     * <code>ikev1</code> or <code>ikev2</code>.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithInternetKeyExchangeVersion(const Aws::String& value) { SetInternetKeyExchangeVersion(value); return *this;}

    /**
     * <p>The IKE version to be used in the sample configuration file for your customer
     * gateway device. You can specify one of the following versions:
     * <code>ikev1</code> or <code>ikev2</code>.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithInternetKeyExchangeVersion(Aws::String&& value) { SetInternetKeyExchangeVersion(std::move(value)); return *this;}

    /**
     * <p>The IKE version to be used in the sample configuration file for your customer
     * gateway device. You can specify one of the following versions:
     * <code>ikev1</code> or <code>ikev2</code>.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithInternetKeyExchangeVersion(const char* value) { SetInternetKeyExchangeVersion(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline GetVpnConnectionDeviceSampleConfigurationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_vpnConnectionDeviceTypeId;
    bool m_vpnConnectionDeviceTypeIdHasBeenSet = false;

    Aws::String m_internetKeyExchangeVersion;
    bool m_internetKeyExchangeVersionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
