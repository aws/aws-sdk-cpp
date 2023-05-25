/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Placement">AWS API
   * Reference</a></p>
   */
  class Placement
  {
  public:
    AWS_EC2_API Placement();
    AWS_EC2_API Placement(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Placement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Availability Zone of the instance.</p> <p>If not specified, an
     * Availability Zone will be automatically chosen for you based on the load
     * balancing criteria for the Region.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of the instance.</p> <p>If not specified, an
     * Availability Zone will be automatically chosen for you based on the load
     * balancing criteria for the Region.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone of the instance.</p> <p>If not specified, an
     * Availability Zone will be automatically chosen for you based on the load
     * balancing criteria for the Region.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the instance.</p> <p>If not specified, an
     * Availability Zone will be automatically chosen for you based on the load
     * balancing criteria for the Region.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone of the instance.</p> <p>If not specified, an
     * Availability Zone will be automatically chosen for you based on the load
     * balancing criteria for the Region.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the instance.</p> <p>If not specified, an
     * Availability Zone will be automatically chosen for you based on the load
     * balancing criteria for the Region.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline Placement& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the instance.</p> <p>If not specified, an
     * Availability Zone will be automatically chosen for you based on the load
     * balancing criteria for the Region.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline Placement& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of the instance.</p> <p>If not specified, an
     * Availability Zone will be automatically chosen for you based on the load
     * balancing criteria for the Region.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline Placement& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline const Aws::String& GetAffinity() const{ return m_affinity; }

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline bool AffinityHasBeenSet() const { return m_affinityHasBeenSet; }

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline void SetAffinity(const Aws::String& value) { m_affinityHasBeenSet = true; m_affinity = value; }

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline void SetAffinity(Aws::String&& value) { m_affinityHasBeenSet = true; m_affinity = std::move(value); }

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline void SetAffinity(const char* value) { m_affinityHasBeenSet = true; m_affinity.assign(value); }

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline Placement& WithAffinity(const Aws::String& value) { SetAffinity(value); return *this;}

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline Placement& WithAffinity(Aws::String&& value) { SetAffinity(std::move(value)); return *this;}

    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline Placement& WithAffinity(const char* value) { SetAffinity(value); return *this;}


    /**
     * <p>The name of the placement group that the instance is in. If you specify
     * <code>GroupName</code>, you can't specify <code>GroupId</code>.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the placement group that the instance is in. If you specify
     * <code>GroupName</code>, you can't specify <code>GroupId</code>.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the placement group that the instance is in. If you specify
     * <code>GroupName</code>, you can't specify <code>GroupId</code>.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the placement group that the instance is in. If you specify
     * <code>GroupName</code>, you can't specify <code>GroupId</code>.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the placement group that the instance is in. If you specify
     * <code>GroupName</code>, you can't specify <code>GroupId</code>.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the placement group that the instance is in. If you specify
     * <code>GroupName</code>, you can't specify <code>GroupId</code>.</p>
     */
    inline Placement& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the placement group that the instance is in. If you specify
     * <code>GroupName</code>, you can't specify <code>GroupId</code>.</p>
     */
    inline Placement& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the placement group that the instance is in. If you specify
     * <code>GroupName</code>, you can't specify <code>GroupId</code>.</p>
     */
    inline Placement& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The number of the partition that the instance is in. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p> <p>This parameter
     * is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline int GetPartitionNumber() const{ return m_partitionNumber; }

    /**
     * <p>The number of the partition that the instance is in. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p> <p>This parameter
     * is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline bool PartitionNumberHasBeenSet() const { return m_partitionNumberHasBeenSet; }

    /**
     * <p>The number of the partition that the instance is in. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p> <p>This parameter
     * is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline void SetPartitionNumber(int value) { m_partitionNumberHasBeenSet = true; m_partitionNumber = value; }

    /**
     * <p>The number of the partition that the instance is in. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p> <p>This parameter
     * is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline Placement& WithPartitionNumber(int value) { SetPartitionNumber(value); return *this;}


    /**
     * <p>The ID of the Dedicated Host on which the instance resides.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }

    /**
     * <p>The ID of the Dedicated Host on which the instance resides.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }

    /**
     * <p>The ID of the Dedicated Host on which the instance resides.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p>The ID of the Dedicated Host on which the instance resides.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }

    /**
     * <p>The ID of the Dedicated Host on which the instance resides.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }

    /**
     * <p>The ID of the Dedicated Host on which the instance resides.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline Placement& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}

    /**
     * <p>The ID of the Dedicated Host on which the instance resides.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline Placement& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Dedicated Host on which the instance resides.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>
     * or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>.</p>
     */
    inline Placement& WithHostId(const char* value) { SetHostId(value); return *this;}


    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.
     * The <code>host</code> tenancy is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>
     * or for T3 instances that are configured for the <code>unlimited</code> CPU
     * credit option.</p>
     */
    inline const Tenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.
     * The <code>host</code> tenancy is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>
     * or for T3 instances that are configured for the <code>unlimited</code> CPU
     * credit option.</p>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.
     * The <code>host</code> tenancy is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>
     * or for T3 instances that are configured for the <code>unlimited</code> CPU
     * credit option.</p>
     */
    inline void SetTenancy(const Tenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.
     * The <code>host</code> tenancy is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>
     * or for T3 instances that are configured for the <code>unlimited</code> CPU
     * credit option.</p>
     */
    inline void SetTenancy(Tenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.
     * The <code>host</code> tenancy is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>
     * or for T3 instances that are configured for the <code>unlimited</code> CPU
     * credit option.</p>
     */
    inline Placement& WithTenancy(const Tenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>The tenancy of the instance (if the instance is running in a VPC). An
     * instance with a tenancy of <code>dedicated</code> runs on single-tenant
     * hardware.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.
     * The <code>host</code> tenancy is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportInstance.html">ImportInstance</a>
     * or for T3 instances that are configured for the <code>unlimited</code> CPU
     * credit option.</p>
     */
    inline Placement& WithTenancy(Tenancy&& value) { SetTenancy(std::move(value)); return *this;}


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
    inline Placement& WithSpreadDomain(const Aws::String& value) { SetSpreadDomain(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline Placement& WithSpreadDomain(Aws::String&& value) { SetSpreadDomain(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline Placement& WithSpreadDomain(const char* value) { SetSpreadDomain(value); return *this;}


    /**
     * <p>The ARN of the host resource group in which to launch the instances.</p>
     * <p>If you specify this parameter, either omit the <b>Tenancy</b> parameter or
     * set it to <code>host</code>.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline const Aws::String& GetHostResourceGroupArn() const{ return m_hostResourceGroupArn; }

    /**
     * <p>The ARN of the host resource group in which to launch the instances.</p>
     * <p>If you specify this parameter, either omit the <b>Tenancy</b> parameter or
     * set it to <code>host</code>.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline bool HostResourceGroupArnHasBeenSet() const { return m_hostResourceGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the host resource group in which to launch the instances.</p>
     * <p>If you specify this parameter, either omit the <b>Tenancy</b> parameter or
     * set it to <code>host</code>.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline void SetHostResourceGroupArn(const Aws::String& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = value; }

    /**
     * <p>The ARN of the host resource group in which to launch the instances.</p>
     * <p>If you specify this parameter, either omit the <b>Tenancy</b> parameter or
     * set it to <code>host</code>.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline void SetHostResourceGroupArn(Aws::String&& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = std::move(value); }

    /**
     * <p>The ARN of the host resource group in which to launch the instances.</p>
     * <p>If you specify this parameter, either omit the <b>Tenancy</b> parameter or
     * set it to <code>host</code>.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline void SetHostResourceGroupArn(const char* value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn.assign(value); }

    /**
     * <p>The ARN of the host resource group in which to launch the instances.</p>
     * <p>If you specify this parameter, either omit the <b>Tenancy</b> parameter or
     * set it to <code>host</code>.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline Placement& WithHostResourceGroupArn(const Aws::String& value) { SetHostResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN of the host resource group in which to launch the instances.</p>
     * <p>If you specify this parameter, either omit the <b>Tenancy</b> parameter or
     * set it to <code>host</code>.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline Placement& WithHostResourceGroupArn(Aws::String&& value) { SetHostResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the host resource group in which to launch the instances.</p>
     * <p>If you specify this parameter, either omit the <b>Tenancy</b> parameter or
     * set it to <code>host</code>.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateFleet">CreateFleet</a>.</p>
     */
    inline Placement& WithHostResourceGroupArn(const char* value) { SetHostResourceGroupArn(value); return *this;}


    /**
     * <p>The ID of the placement group that the instance is in. If you specify
     * <code>GroupId</code>, you can't specify <code>GroupName</code>.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the placement group that the instance is in. If you specify
     * <code>GroupId</code>, you can't specify <code>GroupName</code>.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The ID of the placement group that the instance is in. If you specify
     * <code>GroupId</code>, you can't specify <code>GroupName</code>.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the placement group that the instance is in. If you specify
     * <code>GroupId</code>, you can't specify <code>GroupName</code>.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The ID of the placement group that the instance is in. If you specify
     * <code>GroupId</code>, you can't specify <code>GroupName</code>.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the placement group that the instance is in. If you specify
     * <code>GroupId</code>, you can't specify <code>GroupName</code>.</p>
     */
    inline Placement& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the placement group that the instance is in. If you specify
     * <code>GroupId</code>, you can't specify <code>GroupName</code>.</p>
     */
    inline Placement& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the placement group that the instance is in. If you specify
     * <code>GroupId</code>, you can't specify <code>GroupName</code>.</p>
     */
    inline Placement& WithGroupId(const char* value) { SetGroupId(value); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_affinity;
    bool m_affinityHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    int m_partitionNumber;
    bool m_partitionNumberHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    Tenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    Aws::String m_spreadDomain;
    bool m_spreadDomainHasBeenSet = false;

    Aws::String m_hostResourceGroupArn;
    bool m_hostResourceGroupArnHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
