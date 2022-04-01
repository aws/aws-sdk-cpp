/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateCustomAvailabilityZoneMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API CreateCustomAvailabilityZoneRequest : public RDSRequest
  {
  public:
    CreateCustomAvailabilityZoneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomAvailabilityZone"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the custom Availability Zone (AZ).</p>
     */
    inline const Aws::String& GetCustomAvailabilityZoneName() const{ return m_customAvailabilityZoneName; }

    /**
     * <p>The name of the custom Availability Zone (AZ).</p>
     */
    inline bool CustomAvailabilityZoneNameHasBeenSet() const { return m_customAvailabilityZoneNameHasBeenSet; }

    /**
     * <p>The name of the custom Availability Zone (AZ).</p>
     */
    inline void SetCustomAvailabilityZoneName(const Aws::String& value) { m_customAvailabilityZoneNameHasBeenSet = true; m_customAvailabilityZoneName = value; }

    /**
     * <p>The name of the custom Availability Zone (AZ).</p>
     */
    inline void SetCustomAvailabilityZoneName(Aws::String&& value) { m_customAvailabilityZoneNameHasBeenSet = true; m_customAvailabilityZoneName = std::move(value); }

    /**
     * <p>The name of the custom Availability Zone (AZ).</p>
     */
    inline void SetCustomAvailabilityZoneName(const char* value) { m_customAvailabilityZoneNameHasBeenSet = true; m_customAvailabilityZoneName.assign(value); }

    /**
     * <p>The name of the custom Availability Zone (AZ).</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithCustomAvailabilityZoneName(const Aws::String& value) { SetCustomAvailabilityZoneName(value); return *this;}

    /**
     * <p>The name of the custom Availability Zone (AZ).</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithCustomAvailabilityZoneName(Aws::String&& value) { SetCustomAvailabilityZoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom Availability Zone (AZ).</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithCustomAvailabilityZoneName(const char* value) { SetCustomAvailabilityZoneName(value); return *this;}


    /**
     * <p>The ID of an existing virtual private network (VPN) between the Amazon RDS
     * website and the VMware vSphere cluster.</p>
     */
    inline const Aws::String& GetExistingVpnId() const{ return m_existingVpnId; }

    /**
     * <p>The ID of an existing virtual private network (VPN) between the Amazon RDS
     * website and the VMware vSphere cluster.</p>
     */
    inline bool ExistingVpnIdHasBeenSet() const { return m_existingVpnIdHasBeenSet; }

    /**
     * <p>The ID of an existing virtual private network (VPN) between the Amazon RDS
     * website and the VMware vSphere cluster.</p>
     */
    inline void SetExistingVpnId(const Aws::String& value) { m_existingVpnIdHasBeenSet = true; m_existingVpnId = value; }

    /**
     * <p>The ID of an existing virtual private network (VPN) between the Amazon RDS
     * website and the VMware vSphere cluster.</p>
     */
    inline void SetExistingVpnId(Aws::String&& value) { m_existingVpnIdHasBeenSet = true; m_existingVpnId = std::move(value); }

    /**
     * <p>The ID of an existing virtual private network (VPN) between the Amazon RDS
     * website and the VMware vSphere cluster.</p>
     */
    inline void SetExistingVpnId(const char* value) { m_existingVpnIdHasBeenSet = true; m_existingVpnId.assign(value); }

    /**
     * <p>The ID of an existing virtual private network (VPN) between the Amazon RDS
     * website and the VMware vSphere cluster.</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithExistingVpnId(const Aws::String& value) { SetExistingVpnId(value); return *this;}

    /**
     * <p>The ID of an existing virtual private network (VPN) between the Amazon RDS
     * website and the VMware vSphere cluster.</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithExistingVpnId(Aws::String&& value) { SetExistingVpnId(std::move(value)); return *this;}

    /**
     * <p>The ID of an existing virtual private network (VPN) between the Amazon RDS
     * website and the VMware vSphere cluster.</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithExistingVpnId(const char* value) { SetExistingVpnId(value); return *this;}


    /**
     * <p>The name of a new VPN tunnel between the Amazon RDS website and the VMware
     * vSphere cluster.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline const Aws::String& GetNewVpnTunnelName() const{ return m_newVpnTunnelName; }

    /**
     * <p>The name of a new VPN tunnel between the Amazon RDS website and the VMware
     * vSphere cluster.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline bool NewVpnTunnelNameHasBeenSet() const { return m_newVpnTunnelNameHasBeenSet; }

    /**
     * <p>The name of a new VPN tunnel between the Amazon RDS website and the VMware
     * vSphere cluster.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline void SetNewVpnTunnelName(const Aws::String& value) { m_newVpnTunnelNameHasBeenSet = true; m_newVpnTunnelName = value; }

    /**
     * <p>The name of a new VPN tunnel between the Amazon RDS website and the VMware
     * vSphere cluster.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline void SetNewVpnTunnelName(Aws::String&& value) { m_newVpnTunnelNameHasBeenSet = true; m_newVpnTunnelName = std::move(value); }

    /**
     * <p>The name of a new VPN tunnel between the Amazon RDS website and the VMware
     * vSphere cluster.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline void SetNewVpnTunnelName(const char* value) { m_newVpnTunnelNameHasBeenSet = true; m_newVpnTunnelName.assign(value); }

    /**
     * <p>The name of a new VPN tunnel between the Amazon RDS website and the VMware
     * vSphere cluster.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithNewVpnTunnelName(const Aws::String& value) { SetNewVpnTunnelName(value); return *this;}

    /**
     * <p>The name of a new VPN tunnel between the Amazon RDS website and the VMware
     * vSphere cluster.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithNewVpnTunnelName(Aws::String&& value) { SetNewVpnTunnelName(std::move(value)); return *this;}

    /**
     * <p>The name of a new VPN tunnel between the Amazon RDS website and the VMware
     * vSphere cluster.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithNewVpnTunnelName(const char* value) { SetNewVpnTunnelName(value); return *this;}


    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline const Aws::String& GetVpnTunnelOriginatorIP() const{ return m_vpnTunnelOriginatorIP; }

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline bool VpnTunnelOriginatorIPHasBeenSet() const { return m_vpnTunnelOriginatorIPHasBeenSet; }

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline void SetVpnTunnelOriginatorIP(const Aws::String& value) { m_vpnTunnelOriginatorIPHasBeenSet = true; m_vpnTunnelOriginatorIP = value; }

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline void SetVpnTunnelOriginatorIP(Aws::String&& value) { m_vpnTunnelOriginatorIPHasBeenSet = true; m_vpnTunnelOriginatorIP = std::move(value); }

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline void SetVpnTunnelOriginatorIP(const char* value) { m_vpnTunnelOriginatorIPHasBeenSet = true; m_vpnTunnelOriginatorIP.assign(value); }

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithVpnTunnelOriginatorIP(const Aws::String& value) { SetVpnTunnelOriginatorIP(value); return *this;}

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithVpnTunnelOriginatorIP(Aws::String&& value) { SetVpnTunnelOriginatorIP(std::move(value)); return *this;}

    /**
     * <p>The IP address of network traffic from your on-premises data center. A custom
     * AZ receives the network traffic.</p> <p>Specify this parameter only if
     * <code>ExistingVpnId</code> isn't specified.</p>
     */
    inline CreateCustomAvailabilityZoneRequest& WithVpnTunnelOriginatorIP(const char* value) { SetVpnTunnelOriginatorIP(value); return *this;}

  private:

    Aws::String m_customAvailabilityZoneName;
    bool m_customAvailabilityZoneNameHasBeenSet;

    Aws::String m_existingVpnId;
    bool m_existingVpnIdHasBeenSet;

    Aws::String m_newVpnTunnelName;
    bool m_newVpnTunnelNameHasBeenSet;

    Aws::String m_vpnTunnelOriginatorIP;
    bool m_vpnTunnelOriginatorIPHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
