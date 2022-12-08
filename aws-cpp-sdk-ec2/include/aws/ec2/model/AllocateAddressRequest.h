/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/DomainType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AllocateAddressRequest : public EC2Request
  {
  public:
    AWS_EC2_API AllocateAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocateAddress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Indicates whether the Elastic IP address is for use with instances in a VPC
     * or instances in EC2-Classic.</p> <p>Default: If the Region supports EC2-Classic,
     * the default is <code>standard</code>. Otherwise, the default is
     * <code>vpc</code>.</p>
     */
    inline const DomainType& GetDomain() const{ return m_domain; }

    /**
     * <p>Indicates whether the Elastic IP address is for use with instances in a VPC
     * or instances in EC2-Classic.</p> <p>Default: If the Region supports EC2-Classic,
     * the default is <code>standard</code>. Otherwise, the default is
     * <code>vpc</code>.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Indicates whether the Elastic IP address is for use with instances in a VPC
     * or instances in EC2-Classic.</p> <p>Default: If the Region supports EC2-Classic,
     * the default is <code>standard</code>. Otherwise, the default is
     * <code>vpc</code>.</p>
     */
    inline void SetDomain(const DomainType& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Indicates whether the Elastic IP address is for use with instances in a VPC
     * or instances in EC2-Classic.</p> <p>Default: If the Region supports EC2-Classic,
     * the default is <code>standard</code>. Otherwise, the default is
     * <code>vpc</code>.</p>
     */
    inline void SetDomain(DomainType&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Indicates whether the Elastic IP address is for use with instances in a VPC
     * or instances in EC2-Classic.</p> <p>Default: If the Region supports EC2-Classic,
     * the default is <code>standard</code>. Otherwise, the default is
     * <code>vpc</code>.</p>
     */
    inline AllocateAddressRequest& WithDomain(const DomainType& value) { SetDomain(value); return *this;}

    /**
     * <p>Indicates whether the Elastic IP address is for use with instances in a VPC
     * or instances in EC2-Classic.</p> <p>Default: If the Region supports EC2-Classic,
     * the default is <code>standard</code>. Otherwise, the default is
     * <code>vpc</code>.</p>
     */
    inline AllocateAddressRequest& WithDomain(DomainType&& value) { SetDomain(std::move(value)); return *this;}


    /**
     * <p>[EC2-VPC] The Elastic IP address to recover or an IPv4 address from an
     * address pool.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover or an IPv4 address from an
     * address pool.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover or an IPv4 address from an
     * address pool.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover or an IPv4 address from an
     * address pool.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover or an IPv4 address from an
     * address pool.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover or an IPv4 address from an
     * address pool.</p>
     */
    inline AllocateAddressRequest& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover or an IPv4 address from an
     * address pool.</p>
     */
    inline AllocateAddressRequest& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover or an IPv4 address from an
     * address pool.</p>
     */
    inline AllocateAddressRequest& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The ID of an address pool that you own. Use this parameter to let Amazon EC2
     * select an address from the address pool. To specify a specific address from the
     * address pool, use the <code>Address</code> parameter instead.</p>
     */
    inline const Aws::String& GetPublicIpv4Pool() const{ return m_publicIpv4Pool; }

    /**
     * <p>The ID of an address pool that you own. Use this parameter to let Amazon EC2
     * select an address from the address pool. To specify a specific address from the
     * address pool, use the <code>Address</code> parameter instead.</p>
     */
    inline bool PublicIpv4PoolHasBeenSet() const { return m_publicIpv4PoolHasBeenSet; }

    /**
     * <p>The ID of an address pool that you own. Use this parameter to let Amazon EC2
     * select an address from the address pool. To specify a specific address from the
     * address pool, use the <code>Address</code> parameter instead.</p>
     */
    inline void SetPublicIpv4Pool(const Aws::String& value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool = value; }

    /**
     * <p>The ID of an address pool that you own. Use this parameter to let Amazon EC2
     * select an address from the address pool. To specify a specific address from the
     * address pool, use the <code>Address</code> parameter instead.</p>
     */
    inline void SetPublicIpv4Pool(Aws::String&& value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool = std::move(value); }

    /**
     * <p>The ID of an address pool that you own. Use this parameter to let Amazon EC2
     * select an address from the address pool. To specify a specific address from the
     * address pool, use the <code>Address</code> parameter instead.</p>
     */
    inline void SetPublicIpv4Pool(const char* value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool.assign(value); }

    /**
     * <p>The ID of an address pool that you own. Use this parameter to let Amazon EC2
     * select an address from the address pool. To specify a specific address from the
     * address pool, use the <code>Address</code> parameter instead.</p>
     */
    inline AllocateAddressRequest& WithPublicIpv4Pool(const Aws::String& value) { SetPublicIpv4Pool(value); return *this;}

    /**
     * <p>The ID of an address pool that you own. Use this parameter to let Amazon EC2
     * select an address from the address pool. To specify a specific address from the
     * address pool, use the <code>Address</code> parameter instead.</p>
     */
    inline AllocateAddressRequest& WithPublicIpv4Pool(Aws::String&& value) { SetPublicIpv4Pool(std::move(value)); return *this;}

    /**
     * <p>The ID of an address pool that you own. Use this parameter to let Amazon EC2
     * select an address from the address pool. To specify a specific address from the
     * address pool, use the <code>Address</code> parameter instead.</p>
     */
    inline AllocateAddressRequest& WithPublicIpv4Pool(const char* value) { SetPublicIpv4Pool(value); return *this;}


    /**
     * <p> A unique set of Availability Zones, Local Zones, or Wavelength Zones from
     * which Amazon Web Services advertises IP addresses. Use this parameter to limit
     * the IP address to this location. IP addresses cannot move between network border
     * groups.</p> <p>Use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeAvailabilityZones.html">DescribeAvailabilityZones</a>
     * to view the network border groups.</p> <p>You cannot use a network border group
     * with EC2 Classic. If you attempt this operation on EC2 Classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }

    /**
     * <p> A unique set of Availability Zones, Local Zones, or Wavelength Zones from
     * which Amazon Web Services advertises IP addresses. Use this parameter to limit
     * the IP address to this location. IP addresses cannot move between network border
     * groups.</p> <p>Use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeAvailabilityZones.html">DescribeAvailabilityZones</a>
     * to view the network border groups.</p> <p>You cannot use a network border group
     * with EC2 Classic. If you attempt this operation on EC2 Classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }

    /**
     * <p> A unique set of Availability Zones, Local Zones, or Wavelength Zones from
     * which Amazon Web Services advertises IP addresses. Use this parameter to limit
     * the IP address to this location. IP addresses cannot move between network border
     * groups.</p> <p>Use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeAvailabilityZones.html">DescribeAvailabilityZones</a>
     * to view the network border groups.</p> <p>You cannot use a network border group
     * with EC2 Classic. If you attempt this operation on EC2 Classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }

    /**
     * <p> A unique set of Availability Zones, Local Zones, or Wavelength Zones from
     * which Amazon Web Services advertises IP addresses. Use this parameter to limit
     * the IP address to this location. IP addresses cannot move between network border
     * groups.</p> <p>Use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeAvailabilityZones.html">DescribeAvailabilityZones</a>
     * to view the network border groups.</p> <p>You cannot use a network border group
     * with EC2 Classic. If you attempt this operation on EC2 Classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }

    /**
     * <p> A unique set of Availability Zones, Local Zones, or Wavelength Zones from
     * which Amazon Web Services advertises IP addresses. Use this parameter to limit
     * the IP address to this location. IP addresses cannot move between network border
     * groups.</p> <p>Use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeAvailabilityZones.html">DescribeAvailabilityZones</a>
     * to view the network border groups.</p> <p>You cannot use a network border group
     * with EC2 Classic. If you attempt this operation on EC2 Classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }

    /**
     * <p> A unique set of Availability Zones, Local Zones, or Wavelength Zones from
     * which Amazon Web Services advertises IP addresses. Use this parameter to limit
     * the IP address to this location. IP addresses cannot move between network border
     * groups.</p> <p>Use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeAvailabilityZones.html">DescribeAvailabilityZones</a>
     * to view the network border groups.</p> <p>You cannot use a network border group
     * with EC2 Classic. If you attempt this operation on EC2 Classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline AllocateAddressRequest& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}

    /**
     * <p> A unique set of Availability Zones, Local Zones, or Wavelength Zones from
     * which Amazon Web Services advertises IP addresses. Use this parameter to limit
     * the IP address to this location. IP addresses cannot move between network border
     * groups.</p> <p>Use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeAvailabilityZones.html">DescribeAvailabilityZones</a>
     * to view the network border groups.</p> <p>You cannot use a network border group
     * with EC2 Classic. If you attempt this operation on EC2 Classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline AllocateAddressRequest& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}

    /**
     * <p> A unique set of Availability Zones, Local Zones, or Wavelength Zones from
     * which Amazon Web Services advertises IP addresses. Use this parameter to limit
     * the IP address to this location. IP addresses cannot move between network border
     * groups.</p> <p>Use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeAvailabilityZones.html">DescribeAvailabilityZones</a>
     * to view the network border groups.</p> <p>You cannot use a network border group
     * with EC2 Classic. If you attempt this operation on EC2 Classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline AllocateAddressRequest& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}


    /**
     * <p>The ID of a customer-owned address pool. Use this parameter to let Amazon EC2
     * select an address from the address pool. Alternatively, specify a specific
     * address from the address pool.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const{ return m_customerOwnedIpv4Pool; }

    /**
     * <p>The ID of a customer-owned address pool. Use this parameter to let Amazon EC2
     * select an address from the address pool. Alternatively, specify a specific
     * address from the address pool.</p>
     */
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }

    /**
     * <p>The ID of a customer-owned address pool. Use this parameter to let Amazon EC2
     * select an address from the address pool. Alternatively, specify a specific
     * address from the address pool.</p>
     */
    inline void SetCustomerOwnedIpv4Pool(const Aws::String& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = value; }

    /**
     * <p>The ID of a customer-owned address pool. Use this parameter to let Amazon EC2
     * select an address from the address pool. Alternatively, specify a specific
     * address from the address pool.</p>
     */
    inline void SetCustomerOwnedIpv4Pool(Aws::String&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::move(value); }

    /**
     * <p>The ID of a customer-owned address pool. Use this parameter to let Amazon EC2
     * select an address from the address pool. Alternatively, specify a specific
     * address from the address pool.</p>
     */
    inline void SetCustomerOwnedIpv4Pool(const char* value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool.assign(value); }

    /**
     * <p>The ID of a customer-owned address pool. Use this parameter to let Amazon EC2
     * select an address from the address pool. Alternatively, specify a specific
     * address from the address pool.</p>
     */
    inline AllocateAddressRequest& WithCustomerOwnedIpv4Pool(const Aws::String& value) { SetCustomerOwnedIpv4Pool(value); return *this;}

    /**
     * <p>The ID of a customer-owned address pool. Use this parameter to let Amazon EC2
     * select an address from the address pool. Alternatively, specify a specific
     * address from the address pool.</p>
     */
    inline AllocateAddressRequest& WithCustomerOwnedIpv4Pool(Aws::String&& value) { SetCustomerOwnedIpv4Pool(std::move(value)); return *this;}

    /**
     * <p>The ID of a customer-owned address pool. Use this parameter to let Amazon EC2
     * select an address from the address pool. Alternatively, specify a specific
     * address from the address pool.</p>
     */
    inline AllocateAddressRequest& WithCustomerOwnedIpv4Pool(const char* value) { SetCustomerOwnedIpv4Pool(value); return *this;}


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
    inline AllocateAddressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The tags to assign to the Elastic IP address.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the Elastic IP address.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the Elastic IP address.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the Elastic IP address.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the Elastic IP address.</p>
     */
    inline AllocateAddressRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the Elastic IP address.</p>
     */
    inline AllocateAddressRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the Elastic IP address.</p>
     */
    inline AllocateAddressRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the Elastic IP address.</p>
     */
    inline AllocateAddressRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    DomainType m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_publicIpv4Pool;
    bool m_publicIpv4PoolHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
