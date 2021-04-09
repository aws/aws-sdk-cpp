/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_EC2_API CreateSubnetRequest : public EC2Request
  {
  public:
    CreateSubnetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubnet"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The tags to assign to the subnet.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the subnet.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the subnet.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the subnet.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the subnet.</p>
     */
    inline CreateSubnetRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the subnet.</p>
     */
    inline CreateSubnetRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the subnet.</p>
     */
    inline CreateSubnetRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the subnet.</p>
     */
    inline CreateSubnetRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The Availability Zone or Local Zone for the subnet.</p> <p>Default: AWS
     * selects one for you. If you create more than one subnet in your VPC, we do not
     * necessarily select a different zone for each subnet.</p> <p>To create a subnet
     * in a Local Zone, set this value to the Local Zone ID, for example
     * <code>us-west-2-lax-1a</code>. For information about the Regions that support
     * Local Zones, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-available-regions">Available
     * Regions</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>To
     * create a subnet in an Outpost, set this value to the Availability Zone for the
     * Outpost and specify the Outpost ARN.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone or Local Zone for the subnet.</p> <p>Default: AWS
     * selects one for you. If you create more than one subnet in your VPC, we do not
     * necessarily select a different zone for each subnet.</p> <p>To create a subnet
     * in a Local Zone, set this value to the Local Zone ID, for example
     * <code>us-west-2-lax-1a</code>. For information about the Regions that support
     * Local Zones, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-available-regions">Available
     * Regions</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>To
     * create a subnet in an Outpost, set this value to the Availability Zone for the
     * Outpost and specify the Outpost ARN.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone or Local Zone for the subnet.</p> <p>Default: AWS
     * selects one for you. If you create more than one subnet in your VPC, we do not
     * necessarily select a different zone for each subnet.</p> <p>To create a subnet
     * in a Local Zone, set this value to the Local Zone ID, for example
     * <code>us-west-2-lax-1a</code>. For information about the Regions that support
     * Local Zones, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-available-regions">Available
     * Regions</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>To
     * create a subnet in an Outpost, set this value to the Availability Zone for the
     * Outpost and specify the Outpost ARN.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone or Local Zone for the subnet.</p> <p>Default: AWS
     * selects one for you. If you create more than one subnet in your VPC, we do not
     * necessarily select a different zone for each subnet.</p> <p>To create a subnet
     * in a Local Zone, set this value to the Local Zone ID, for example
     * <code>us-west-2-lax-1a</code>. For information about the Regions that support
     * Local Zones, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-available-regions">Available
     * Regions</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>To
     * create a subnet in an Outpost, set this value to the Availability Zone for the
     * Outpost and specify the Outpost ARN.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone or Local Zone for the subnet.</p> <p>Default: AWS
     * selects one for you. If you create more than one subnet in your VPC, we do not
     * necessarily select a different zone for each subnet.</p> <p>To create a subnet
     * in a Local Zone, set this value to the Local Zone ID, for example
     * <code>us-west-2-lax-1a</code>. For information about the Regions that support
     * Local Zones, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-available-regions">Available
     * Regions</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>To
     * create a subnet in an Outpost, set this value to the Availability Zone for the
     * Outpost and specify the Outpost ARN.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone or Local Zone for the subnet.</p> <p>Default: AWS
     * selects one for you. If you create more than one subnet in your VPC, we do not
     * necessarily select a different zone for each subnet.</p> <p>To create a subnet
     * in a Local Zone, set this value to the Local Zone ID, for example
     * <code>us-west-2-lax-1a</code>. For information about the Regions that support
     * Local Zones, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-available-regions">Available
     * Regions</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>To
     * create a subnet in an Outpost, set this value to the Availability Zone for the
     * Outpost and specify the Outpost ARN.</p>
     */
    inline CreateSubnetRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone or Local Zone for the subnet.</p> <p>Default: AWS
     * selects one for you. If you create more than one subnet in your VPC, we do not
     * necessarily select a different zone for each subnet.</p> <p>To create a subnet
     * in a Local Zone, set this value to the Local Zone ID, for example
     * <code>us-west-2-lax-1a</code>. For information about the Regions that support
     * Local Zones, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-available-regions">Available
     * Regions</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>To
     * create a subnet in an Outpost, set this value to the Availability Zone for the
     * Outpost and specify the Outpost ARN.</p>
     */
    inline CreateSubnetRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone or Local Zone for the subnet.</p> <p>Default: AWS
     * selects one for you. If you create more than one subnet in your VPC, we do not
     * necessarily select a different zone for each subnet.</p> <p>To create a subnet
     * in a Local Zone, set this value to the Local Zone ID, for example
     * <code>us-west-2-lax-1a</code>. For information about the Regions that support
     * Local Zones, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-available-regions">Available
     * Regions</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>To
     * create a subnet in an Outpost, set this value to the Availability Zone for the
     * Outpost and specify the Outpost ARN.</p>
     */
    inline CreateSubnetRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The AZ ID or the Local Zone ID of the subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p>The AZ ID or the Local Zone ID of the subnet.</p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p>The AZ ID or the Local Zone ID of the subnet.</p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p>The AZ ID or the Local Zone ID of the subnet.</p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p>The AZ ID or the Local Zone ID of the subnet.</p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p>The AZ ID or the Local Zone ID of the subnet.</p>
     */
    inline CreateSubnetRequest& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The AZ ID or the Local Zone ID of the subnet.</p>
     */
    inline CreateSubnetRequest& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The AZ ID or the Local Zone ID of the subnet.</p>
     */
    inline CreateSubnetRequest& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline CreateSubnetRequest& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline CreateSubnetRequest& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline CreateSubnetRequest& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify an Outpost ARN,
     * you must also specify the Availability Zone of the Outpost subnet.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify an Outpost ARN,
     * you must also specify the Availability Zone of the Outpost subnet.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify an Outpost ARN,
     * you must also specify the Availability Zone of the Outpost subnet.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify an Outpost ARN,
     * you must also specify the Availability Zone of the Outpost subnet.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify an Outpost ARN,
     * you must also specify the Availability Zone of the Outpost subnet.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify an Outpost ARN,
     * you must also specify the Availability Zone of the Outpost subnet.</p>
     */
    inline CreateSubnetRequest& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify an Outpost ARN,
     * you must also specify the Availability Zone of the Outpost subnet.</p>
     */
    inline CreateSubnetRequest& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify an Outpost ARN,
     * you must also specify the Availability Zone of the Outpost subnet.</p>
     */
    inline CreateSubnetRequest& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateSubnetRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateSubnetRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateSubnetRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


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
    inline CreateSubnetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline CreateSubnetRequest& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline CreateSubnetRequest& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline CreateSubnetRequest& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}

  private:

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
