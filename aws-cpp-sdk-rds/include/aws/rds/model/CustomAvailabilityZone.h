/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/VpnDetails.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>A custom Availability Zone (AZ) is an on-premises AZ that is integrated with
   * a VMware vSphere cluster.</p> <p>For more information about RDS on VMware, see
   * the <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/RDSonVMwareUserGuide/rds-on-vmware.html">
   * <i>RDS on VMware User Guide.</i> </a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CustomAvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API CustomAvailabilityZone
  {
  public:
    CustomAvailabilityZone();
    CustomAvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomAvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of the custom AZ.</p> <p>Amazon RDS generates a unique
     * identifier when a custom AZ is created.</p>
     */
    inline const Aws::String& GetCustomAvailabilityZoneId() const{ return m_customAvailabilityZoneId; }

    /**
     * <p>The identifier of the custom AZ.</p> <p>Amazon RDS generates a unique
     * identifier when a custom AZ is created.</p>
     */
    inline bool CustomAvailabilityZoneIdHasBeenSet() const { return m_customAvailabilityZoneIdHasBeenSet; }

    /**
     * <p>The identifier of the custom AZ.</p> <p>Amazon RDS generates a unique
     * identifier when a custom AZ is created.</p>
     */
    inline void SetCustomAvailabilityZoneId(const Aws::String& value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId = value; }

    /**
     * <p>The identifier of the custom AZ.</p> <p>Amazon RDS generates a unique
     * identifier when a custom AZ is created.</p>
     */
    inline void SetCustomAvailabilityZoneId(Aws::String&& value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId = std::move(value); }

    /**
     * <p>The identifier of the custom AZ.</p> <p>Amazon RDS generates a unique
     * identifier when a custom AZ is created.</p>
     */
    inline void SetCustomAvailabilityZoneId(const char* value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId.assign(value); }

    /**
     * <p>The identifier of the custom AZ.</p> <p>Amazon RDS generates a unique
     * identifier when a custom AZ is created.</p>
     */
    inline CustomAvailabilityZone& WithCustomAvailabilityZoneId(const Aws::String& value) { SetCustomAvailabilityZoneId(value); return *this;}

    /**
     * <p>The identifier of the custom AZ.</p> <p>Amazon RDS generates a unique
     * identifier when a custom AZ is created.</p>
     */
    inline CustomAvailabilityZone& WithCustomAvailabilityZoneId(Aws::String&& value) { SetCustomAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the custom AZ.</p> <p>Amazon RDS generates a unique
     * identifier when a custom AZ is created.</p>
     */
    inline CustomAvailabilityZone& WithCustomAvailabilityZoneId(const char* value) { SetCustomAvailabilityZoneId(value); return *this;}


    /**
     * <p>The name of the custom AZ.</p>
     */
    inline const Aws::String& GetCustomAvailabilityZoneName() const{ return m_customAvailabilityZoneName; }

    /**
     * <p>The name of the custom AZ.</p>
     */
    inline bool CustomAvailabilityZoneNameHasBeenSet() const { return m_customAvailabilityZoneNameHasBeenSet; }

    /**
     * <p>The name of the custom AZ.</p>
     */
    inline void SetCustomAvailabilityZoneName(const Aws::String& value) { m_customAvailabilityZoneNameHasBeenSet = true; m_customAvailabilityZoneName = value; }

    /**
     * <p>The name of the custom AZ.</p>
     */
    inline void SetCustomAvailabilityZoneName(Aws::String&& value) { m_customAvailabilityZoneNameHasBeenSet = true; m_customAvailabilityZoneName = std::move(value); }

    /**
     * <p>The name of the custom AZ.</p>
     */
    inline void SetCustomAvailabilityZoneName(const char* value) { m_customAvailabilityZoneNameHasBeenSet = true; m_customAvailabilityZoneName.assign(value); }

    /**
     * <p>The name of the custom AZ.</p>
     */
    inline CustomAvailabilityZone& WithCustomAvailabilityZoneName(const Aws::String& value) { SetCustomAvailabilityZoneName(value); return *this;}

    /**
     * <p>The name of the custom AZ.</p>
     */
    inline CustomAvailabilityZone& WithCustomAvailabilityZoneName(Aws::String&& value) { SetCustomAvailabilityZoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom AZ.</p>
     */
    inline CustomAvailabilityZone& WithCustomAvailabilityZoneName(const char* value) { SetCustomAvailabilityZoneName(value); return *this;}


    /**
     * <p>The status of the custom AZ.</p>
     */
    inline const Aws::String& GetCustomAvailabilityZoneStatus() const{ return m_customAvailabilityZoneStatus; }

    /**
     * <p>The status of the custom AZ.</p>
     */
    inline bool CustomAvailabilityZoneStatusHasBeenSet() const { return m_customAvailabilityZoneStatusHasBeenSet; }

    /**
     * <p>The status of the custom AZ.</p>
     */
    inline void SetCustomAvailabilityZoneStatus(const Aws::String& value) { m_customAvailabilityZoneStatusHasBeenSet = true; m_customAvailabilityZoneStatus = value; }

    /**
     * <p>The status of the custom AZ.</p>
     */
    inline void SetCustomAvailabilityZoneStatus(Aws::String&& value) { m_customAvailabilityZoneStatusHasBeenSet = true; m_customAvailabilityZoneStatus = std::move(value); }

    /**
     * <p>The status of the custom AZ.</p>
     */
    inline void SetCustomAvailabilityZoneStatus(const char* value) { m_customAvailabilityZoneStatusHasBeenSet = true; m_customAvailabilityZoneStatus.assign(value); }

    /**
     * <p>The status of the custom AZ.</p>
     */
    inline CustomAvailabilityZone& WithCustomAvailabilityZoneStatus(const Aws::String& value) { SetCustomAvailabilityZoneStatus(value); return *this;}

    /**
     * <p>The status of the custom AZ.</p>
     */
    inline CustomAvailabilityZone& WithCustomAvailabilityZoneStatus(Aws::String&& value) { SetCustomAvailabilityZoneStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the custom AZ.</p>
     */
    inline CustomAvailabilityZone& WithCustomAvailabilityZoneStatus(const char* value) { SetCustomAvailabilityZoneStatus(value); return *this;}


    /**
     * <p>Information about the virtual private network (VPN) between the VMware
     * vSphere cluster and the AWS website.</p>
     */
    inline const VpnDetails& GetVpnDetails() const{ return m_vpnDetails; }

    /**
     * <p>Information about the virtual private network (VPN) between the VMware
     * vSphere cluster and the AWS website.</p>
     */
    inline bool VpnDetailsHasBeenSet() const { return m_vpnDetailsHasBeenSet; }

    /**
     * <p>Information about the virtual private network (VPN) between the VMware
     * vSphere cluster and the AWS website.</p>
     */
    inline void SetVpnDetails(const VpnDetails& value) { m_vpnDetailsHasBeenSet = true; m_vpnDetails = value; }

    /**
     * <p>Information about the virtual private network (VPN) between the VMware
     * vSphere cluster and the AWS website.</p>
     */
    inline void SetVpnDetails(VpnDetails&& value) { m_vpnDetailsHasBeenSet = true; m_vpnDetails = std::move(value); }

    /**
     * <p>Information about the virtual private network (VPN) between the VMware
     * vSphere cluster and the AWS website.</p>
     */
    inline CustomAvailabilityZone& WithVpnDetails(const VpnDetails& value) { SetVpnDetails(value); return *this;}

    /**
     * <p>Information about the virtual private network (VPN) between the VMware
     * vSphere cluster and the AWS website.</p>
     */
    inline CustomAvailabilityZone& WithVpnDetails(VpnDetails&& value) { SetVpnDetails(std::move(value)); return *this;}

  private:

    Aws::String m_customAvailabilityZoneId;
    bool m_customAvailabilityZoneIdHasBeenSet;

    Aws::String m_customAvailabilityZoneName;
    bool m_customAvailabilityZoneNameHasBeenSet;

    Aws::String m_customAvailabilityZoneStatus;
    bool m_customAvailabilityZoneStatusHasBeenSet;

    VpnDetails m_vpnDetails;
    bool m_vpnDetailsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
