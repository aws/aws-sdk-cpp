/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamAddressHistoryResourceType.h>
#include <aws/ec2/model/IpamComplianceStatus.h>
#include <aws/ec2/model/IpamOverlapStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The historical record of a CIDR within an IPAM scope. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/vpc/latest/ipam/view-history-cidr-ipam.html">View
   * the history of IP addresses</a> in the <i>Amazon VPC IPAM User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamAddressHistoryRecord">AWS
   * API Reference</a></p>
   */
  class IpamAddressHistoryRecord
  {
  public:
    AWS_EC2_API IpamAddressHistoryRecord();
    AWS_EC2_API IpamAddressHistoryRecord(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamAddressHistoryRecord& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the resource owner.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }

    /**
     * <p>The ID of the resource owner.</p>
     */
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }

    /**
     * <p>The ID of the resource owner.</p>
     */
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }

    /**
     * <p>The ID of the resource owner.</p>
     */
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }

    /**
     * <p>The ID of the resource owner.</p>
     */
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }

    /**
     * <p>The ID of the resource owner.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}

    /**
     * <p>The ID of the resource owner.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource owner.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline const Aws::String& GetResourceRegion() const{ return m_resourceRegion; }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline void SetResourceRegion(const Aws::String& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = value; }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline void SetResourceRegion(Aws::String&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline void SetResourceRegion(const char* value) { m_resourceRegionHasBeenSet = true; m_resourceRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceRegion(const Aws::String& value) { SetResourceRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceRegion(Aws::String&& value) { SetResourceRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceRegion(const char* value) { SetResourceRegion(value); return *this;}


    /**
     * <p>The type of the resource.</p>
     */
    inline const IpamAddressHistoryResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(const IpamAddressHistoryResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(IpamAddressHistoryResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceType(const IpamAddressHistoryResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceType(IpamAddressHistoryResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The CIDR of the resource.</p>
     */
    inline const Aws::String& GetResourceCidr() const{ return m_resourceCidr; }

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline bool ResourceCidrHasBeenSet() const { return m_resourceCidrHasBeenSet; }

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline void SetResourceCidr(const Aws::String& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = value; }

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline void SetResourceCidr(Aws::String&& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = std::move(value); }

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline void SetResourceCidr(const char* value) { m_resourceCidrHasBeenSet = true; m_resourceCidr.assign(value); }

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceCidr(const Aws::String& value) { SetResourceCidr(value); return *this;}

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceCidr(Aws::String&& value) { SetResourceCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceCidr(const char* value) { SetResourceCidr(value); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the resource.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The compliance status of a resource. For more information on compliance
     * statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const IpamComplianceStatus& GetResourceComplianceStatus() const{ return m_resourceComplianceStatus; }

    /**
     * <p>The compliance status of a resource. For more information on compliance
     * statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline bool ResourceComplianceStatusHasBeenSet() const { return m_resourceComplianceStatusHasBeenSet; }

    /**
     * <p>The compliance status of a resource. For more information on compliance
     * statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetResourceComplianceStatus(const IpamComplianceStatus& value) { m_resourceComplianceStatusHasBeenSet = true; m_resourceComplianceStatus = value; }

    /**
     * <p>The compliance status of a resource. For more information on compliance
     * statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetResourceComplianceStatus(IpamComplianceStatus&& value) { m_resourceComplianceStatusHasBeenSet = true; m_resourceComplianceStatus = std::move(value); }

    /**
     * <p>The compliance status of a resource. For more information on compliance
     * statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceComplianceStatus(const IpamComplianceStatus& value) { SetResourceComplianceStatus(value); return *this;}

    /**
     * <p>The compliance status of a resource. For more information on compliance
     * statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceComplianceStatus(IpamComplianceStatus&& value) { SetResourceComplianceStatus(std::move(value)); return *this;}


    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const IpamOverlapStatus& GetResourceOverlapStatus() const{ return m_resourceOverlapStatus; }

    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline bool ResourceOverlapStatusHasBeenSet() const { return m_resourceOverlapStatusHasBeenSet; }

    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetResourceOverlapStatus(const IpamOverlapStatus& value) { m_resourceOverlapStatusHasBeenSet = true; m_resourceOverlapStatus = value; }

    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetResourceOverlapStatus(IpamOverlapStatus&& value) { m_resourceOverlapStatusHasBeenSet = true; m_resourceOverlapStatus = std::move(value); }

    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceOverlapStatus(const IpamOverlapStatus& value) { SetResourceOverlapStatus(value); return *this;}

    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamAddressHistoryRecord& WithResourceOverlapStatus(IpamOverlapStatus&& value) { SetResourceOverlapStatus(std::move(value)); return *this;}


    /**
     * <p>The VPC ID of the resource.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID of the resource.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID of the resource.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID of the resource.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID of the resource.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID of the resource.</p>
     */
    inline IpamAddressHistoryRecord& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Sampled start time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the start time may have occurred
     * before this specific time.</p>
     */
    inline const Aws::Utils::DateTime& GetSampledStartTime() const{ return m_sampledStartTime; }

    /**
     * <p>Sampled start time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the start time may have occurred
     * before this specific time.</p>
     */
    inline bool SampledStartTimeHasBeenSet() const { return m_sampledStartTimeHasBeenSet; }

    /**
     * <p>Sampled start time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the start time may have occurred
     * before this specific time.</p>
     */
    inline void SetSampledStartTime(const Aws::Utils::DateTime& value) { m_sampledStartTimeHasBeenSet = true; m_sampledStartTime = value; }

    /**
     * <p>Sampled start time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the start time may have occurred
     * before this specific time.</p>
     */
    inline void SetSampledStartTime(Aws::Utils::DateTime&& value) { m_sampledStartTimeHasBeenSet = true; m_sampledStartTime = std::move(value); }

    /**
     * <p>Sampled start time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the start time may have occurred
     * before this specific time.</p>
     */
    inline IpamAddressHistoryRecord& WithSampledStartTime(const Aws::Utils::DateTime& value) { SetSampledStartTime(value); return *this;}

    /**
     * <p>Sampled start time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the start time may have occurred
     * before this specific time.</p>
     */
    inline IpamAddressHistoryRecord& WithSampledStartTime(Aws::Utils::DateTime&& value) { SetSampledStartTime(std::move(value)); return *this;}


    /**
     * <p>Sampled end time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the end time may have occurred
     * before this specific time.</p>
     */
    inline const Aws::Utils::DateTime& GetSampledEndTime() const{ return m_sampledEndTime; }

    /**
     * <p>Sampled end time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the end time may have occurred
     * before this specific time.</p>
     */
    inline bool SampledEndTimeHasBeenSet() const { return m_sampledEndTimeHasBeenSet; }

    /**
     * <p>Sampled end time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the end time may have occurred
     * before this specific time.</p>
     */
    inline void SetSampledEndTime(const Aws::Utils::DateTime& value) { m_sampledEndTimeHasBeenSet = true; m_sampledEndTime = value; }

    /**
     * <p>Sampled end time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the end time may have occurred
     * before this specific time.</p>
     */
    inline void SetSampledEndTime(Aws::Utils::DateTime&& value) { m_sampledEndTimeHasBeenSet = true; m_sampledEndTime = std::move(value); }

    /**
     * <p>Sampled end time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the end time may have occurred
     * before this specific time.</p>
     */
    inline IpamAddressHistoryRecord& WithSampledEndTime(const Aws::Utils::DateTime& value) { SetSampledEndTime(value); return *this;}

    /**
     * <p>Sampled end time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the end time may have occurred
     * before this specific time.</p>
     */
    inline IpamAddressHistoryRecord& WithSampledEndTime(Aws::Utils::DateTime&& value) { SetSampledEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::String m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    IpamAddressHistoryResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceCidr;
    bool m_resourceCidrHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    IpamComplianceStatus m_resourceComplianceStatus;
    bool m_resourceComplianceStatusHasBeenSet = false;

    IpamOverlapStatus m_resourceOverlapStatus;
    bool m_resourceOverlapStatusHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Utils::DateTime m_sampledStartTime;
    bool m_sampledStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_sampledEndTime;
    bool m_sampledEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
