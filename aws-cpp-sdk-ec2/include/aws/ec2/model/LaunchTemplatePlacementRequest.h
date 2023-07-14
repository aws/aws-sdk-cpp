﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Tenancy.h>
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
   * <p>Describes the placement of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplatePlacementRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplatePlacementRequest
  {
  public:
    LaunchTemplatePlacementRequest();
    LaunchTemplatePlacementRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplatePlacementRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline LaunchTemplatePlacementRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline LaunchTemplatePlacementRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline LaunchTemplatePlacementRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The affinity setting for an instance on a Dedicated Host.</p>
     */
    inline const Aws::String& GetAffinity() const{ return m_affinity; }

    /**
     * <p>The affinity setting for an instance on a Dedicated Host.</p>
     */
    inline bool AffinityHasBeenSet() const { return m_affinityHasBeenSet; }

    /**
     * <p>The affinity setting for an instance on a Dedicated Host.</p>
     */
    inline void SetAffinity(const Aws::String& value) { m_affinityHasBeenSet = true; m_affinity = value; }

    /**
     * <p>The affinity setting for an instance on a Dedicated Host.</p>
     */
    inline void SetAffinity(Aws::String&& value) { m_affinityHasBeenSet = true; m_affinity = std::move(value); }

    /**
     * <p>The affinity setting for an instance on a Dedicated Host.</p>
     */
    inline void SetAffinity(const char* value) { m_affinityHasBeenSet = true; m_affinity.assign(value); }

    /**
     * <p>The affinity setting for an instance on a Dedicated Host.</p>
     */
    inline LaunchTemplatePlacementRequest& WithAffinity(const Aws::String& value) { SetAffinity(value); return *this;}

    /**
     * <p>The affinity setting for an instance on a Dedicated Host.</p>
     */
    inline LaunchTemplatePlacementRequest& WithAffinity(Aws::String&& value) { SetAffinity(std::move(value)); return *this;}

    /**
     * <p>The affinity setting for an instance on a Dedicated Host.</p>
     */
    inline LaunchTemplatePlacementRequest& WithAffinity(const char* value) { SetAffinity(value); return *this;}


    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline LaunchTemplatePlacementRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline LaunchTemplatePlacementRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline LaunchTemplatePlacementRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline LaunchTemplatePlacementRequest& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline LaunchTemplatePlacementRequest& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline LaunchTemplatePlacementRequest& WithHostId(const char* value) { SetHostId(value); return *this;}


    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of dedicated runs on single-tenant hardware.</p>
     */
    inline const Tenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of dedicated runs on single-tenant hardware.</p>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of dedicated runs on single-tenant hardware.</p>
     */
    inline void SetTenancy(const Tenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of dedicated runs on single-tenant hardware.</p>
     */
    inline void SetTenancy(Tenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of dedicated runs on single-tenant hardware.</p>
     */
    inline LaunchTemplatePlacementRequest& WithTenancy(const Tenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of dedicated runs on single-tenant hardware.</p>
     */
    inline LaunchTemplatePlacementRequest& WithTenancy(Tenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetSpreadDomain() const{ return m_spreadDomain; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool SpreadDomainHasBeenSet() const { return m_spreadDomainHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetSpreadDomain(const Aws::String& value) { m_spreadDomainHasBeenSet = true; m_spreadDomain = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetSpreadDomain(Aws::String&& value) { m_spreadDomainHasBeenSet = true; m_spreadDomain = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetSpreadDomain(const char* value) { m_spreadDomainHasBeenSet = true; m_spreadDomain.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline LaunchTemplatePlacementRequest& WithSpreadDomain(const Aws::String& value) { SetSpreadDomain(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline LaunchTemplatePlacementRequest& WithSpreadDomain(Aws::String&& value) { SetSpreadDomain(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline LaunchTemplatePlacementRequest& WithSpreadDomain(const char* value) { SetSpreadDomain(value); return *this;}


    /**
     * <p>The ARN of the host resource group in which to launch the instances. If you
     * specify a host resource group ARN, omit the <b>Tenancy</b> parameter or set it
     * to <code>host</code>.</p>
     */
    inline const Aws::String& GetHostResourceGroupArn() const{ return m_hostResourceGroupArn; }

    /**
     * <p>The ARN of the host resource group in which to launch the instances. If you
     * specify a host resource group ARN, omit the <b>Tenancy</b> parameter or set it
     * to <code>host</code>.</p>
     */
    inline bool HostResourceGroupArnHasBeenSet() const { return m_hostResourceGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the host resource group in which to launch the instances. If you
     * specify a host resource group ARN, omit the <b>Tenancy</b> parameter or set it
     * to <code>host</code>.</p>
     */
    inline void SetHostResourceGroupArn(const Aws::String& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = value; }

    /**
     * <p>The ARN of the host resource group in which to launch the instances. If you
     * specify a host resource group ARN, omit the <b>Tenancy</b> parameter or set it
     * to <code>host</code>.</p>
     */
    inline void SetHostResourceGroupArn(Aws::String&& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = std::move(value); }

    /**
     * <p>The ARN of the host resource group in which to launch the instances. If you
     * specify a host resource group ARN, omit the <b>Tenancy</b> parameter or set it
     * to <code>host</code>.</p>
     */
    inline void SetHostResourceGroupArn(const char* value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn.assign(value); }

    /**
     * <p>The ARN of the host resource group in which to launch the instances. If you
     * specify a host resource group ARN, omit the <b>Tenancy</b> parameter or set it
     * to <code>host</code>.</p>
     */
    inline LaunchTemplatePlacementRequest& WithHostResourceGroupArn(const Aws::String& value) { SetHostResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN of the host resource group in which to launch the instances. If you
     * specify a host resource group ARN, omit the <b>Tenancy</b> parameter or set it
     * to <code>host</code>.</p>
     */
    inline LaunchTemplatePlacementRequest& WithHostResourceGroupArn(Aws::String&& value) { SetHostResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the host resource group in which to launch the instances. If you
     * specify a host resource group ARN, omit the <b>Tenancy</b> parameter or set it
     * to <code>host</code>.</p>
     */
    inline LaunchTemplatePlacementRequest& WithHostResourceGroupArn(const char* value) { SetHostResourceGroupArn(value); return *this;}


    /**
     * <p>The number of the partition the instance should launch in. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline int GetPartitionNumber() const{ return m_partitionNumber; }

    /**
     * <p>The number of the partition the instance should launch in. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline bool PartitionNumberHasBeenSet() const { return m_partitionNumberHasBeenSet; }

    /**
     * <p>The number of the partition the instance should launch in. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline void SetPartitionNumber(int value) { m_partitionNumberHasBeenSet = true; m_partitionNumber = value; }

    /**
     * <p>The number of the partition the instance should launch in. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline LaunchTemplatePlacementRequest& WithPartitionNumber(int value) { SetPartitionNumber(value); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_affinity;
    bool m_affinityHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet;

    Tenancy m_tenancy;
    bool m_tenancyHasBeenSet;

    Aws::String m_spreadDomain;
    bool m_spreadDomainHasBeenSet;

    Aws::String m_hostResourceGroupArn;
    bool m_hostResourceGroupArnHasBeenSet;

    int m_partitionNumber;
    bool m_partitionNumberHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
