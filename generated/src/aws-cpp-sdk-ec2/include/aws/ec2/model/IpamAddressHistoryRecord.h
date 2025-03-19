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
    AWS_EC2_API IpamAddressHistoryRecord() = default;
    AWS_EC2_API IpamAddressHistoryRecord(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamAddressHistoryRecord& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the resource owner.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const { return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    template<typename ResourceOwnerIdT = Aws::String>
    void SetResourceOwnerId(ResourceOwnerIdT&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::forward<ResourceOwnerIdT>(value); }
    template<typename ResourceOwnerIdT = Aws::String>
    IpamAddressHistoryRecord& WithResourceOwnerId(ResourceOwnerIdT&& value) { SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the resource.</p>
     */
    inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
    template<typename ResourceRegionT = Aws::String>
    void SetResourceRegion(ResourceRegionT&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::forward<ResourceRegionT>(value); }
    template<typename ResourceRegionT = Aws::String>
    IpamAddressHistoryRecord& WithResourceRegion(ResourceRegionT&& value) { SetResourceRegion(std::forward<ResourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource.</p>
     */
    inline IpamAddressHistoryResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(IpamAddressHistoryResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline IpamAddressHistoryRecord& WithResourceType(IpamAddressHistoryResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    IpamAddressHistoryRecord& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR of the resource.</p>
     */
    inline const Aws::String& GetResourceCidr() const { return m_resourceCidr; }
    inline bool ResourceCidrHasBeenSet() const { return m_resourceCidrHasBeenSet; }
    template<typename ResourceCidrT = Aws::String>
    void SetResourceCidr(ResourceCidrT&& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = std::forward<ResourceCidrT>(value); }
    template<typename ResourceCidrT = Aws::String>
    IpamAddressHistoryRecord& WithResourceCidr(ResourceCidrT&& value) { SetResourceCidr(std::forward<ResourceCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    IpamAddressHistoryRecord& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance status of a resource. For more information on compliance
     * statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamComplianceStatus GetResourceComplianceStatus() const { return m_resourceComplianceStatus; }
    inline bool ResourceComplianceStatusHasBeenSet() const { return m_resourceComplianceStatusHasBeenSet; }
    inline void SetResourceComplianceStatus(IpamComplianceStatus value) { m_resourceComplianceStatusHasBeenSet = true; m_resourceComplianceStatus = value; }
    inline IpamAddressHistoryRecord& WithResourceComplianceStatus(IpamComplianceStatus value) { SetResourceComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamOverlapStatus GetResourceOverlapStatus() const { return m_resourceOverlapStatus; }
    inline bool ResourceOverlapStatusHasBeenSet() const { return m_resourceOverlapStatusHasBeenSet; }
    inline void SetResourceOverlapStatus(IpamOverlapStatus value) { m_resourceOverlapStatusHasBeenSet = true; m_resourceOverlapStatus = value; }
    inline IpamAddressHistoryRecord& WithResourceOverlapStatus(IpamOverlapStatus value) { SetResourceOverlapStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID of the resource.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    IpamAddressHistoryRecord& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sampled start time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the start time may have occurred
     * before this specific time.</p>
     */
    inline const Aws::Utils::DateTime& GetSampledStartTime() const { return m_sampledStartTime; }
    inline bool SampledStartTimeHasBeenSet() const { return m_sampledStartTimeHasBeenSet; }
    template<typename SampledStartTimeT = Aws::Utils::DateTime>
    void SetSampledStartTime(SampledStartTimeT&& value) { m_sampledStartTimeHasBeenSet = true; m_sampledStartTime = std::forward<SampledStartTimeT>(value); }
    template<typename SampledStartTimeT = Aws::Utils::DateTime>
    IpamAddressHistoryRecord& WithSampledStartTime(SampledStartTimeT&& value) { SetSampledStartTime(std::forward<SampledStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sampled end time of the resource-to-CIDR association within the IPAM scope.
     * Changes are picked up in periodic snapshots, so the end time may have occurred
     * before this specific time.</p>
     */
    inline const Aws::Utils::DateTime& GetSampledEndTime() const { return m_sampledEndTime; }
    inline bool SampledEndTimeHasBeenSet() const { return m_sampledEndTimeHasBeenSet; }
    template<typename SampledEndTimeT = Aws::Utils::DateTime>
    void SetSampledEndTime(SampledEndTimeT&& value) { m_sampledEndTimeHasBeenSet = true; m_sampledEndTime = std::forward<SampledEndTimeT>(value); }
    template<typename SampledEndTimeT = Aws::Utils::DateTime>
    IpamAddressHistoryRecord& WithSampledEndTime(SampledEndTimeT&& value) { SetSampledEndTime(std::forward<SampledEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::String m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    IpamAddressHistoryResourceType m_resourceType{IpamAddressHistoryResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceCidr;
    bool m_resourceCidrHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    IpamComplianceStatus m_resourceComplianceStatus{IpamComplianceStatus::NOT_SET};
    bool m_resourceComplianceStatusHasBeenSet = false;

    IpamOverlapStatus m_resourceOverlapStatus{IpamOverlapStatus::NOT_SET};
    bool m_resourceOverlapStatusHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Utils::DateTime m_sampledStartTime{};
    bool m_sampledStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_sampledEndTime{};
    bool m_sampledEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
