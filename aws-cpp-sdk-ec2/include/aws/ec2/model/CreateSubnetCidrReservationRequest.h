/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SubnetCidrReservationType.h>
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
  class CreateSubnetCidrReservationRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateSubnetCidrReservationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubnetCidrReservation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The IPv4 or IPV6 CIDR range to reserve.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The IPv4 or IPV6 CIDR range to reserve.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The IPv4 or IPV6 CIDR range to reserve.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The IPv4 or IPV6 CIDR range to reserve.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The IPv4 or IPV6 CIDR range to reserve.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The IPv4 or IPV6 CIDR range to reserve.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The IPv4 or IPV6 CIDR range to reserve.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The IPv4 or IPV6 CIDR range to reserve.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The type of reservation.</p> <p>The following are valid values:</p> <ul> <li>
     * <p> <code>prefix</code>: The Amazon EC2 Prefix Delegation feature assigns the IP
     * addresses to network interfaces that are associated with an instance. For
     * information about Prefix Delegation, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-delegation.html">Prefix
     * Delegation for Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p> </li> <li> <p> <code>explicit</code>: You
     * manually assign the IP addresses to resources that reside in your subnet. </p>
     * </li> </ul>
     */
    inline const SubnetCidrReservationType& GetReservationType() const{ return m_reservationType; }

    /**
     * <p>The type of reservation.</p> <p>The following are valid values:</p> <ul> <li>
     * <p> <code>prefix</code>: The Amazon EC2 Prefix Delegation feature assigns the IP
     * addresses to network interfaces that are associated with an instance. For
     * information about Prefix Delegation, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-delegation.html">Prefix
     * Delegation for Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p> </li> <li> <p> <code>explicit</code>: You
     * manually assign the IP addresses to resources that reside in your subnet. </p>
     * </li> </ul>
     */
    inline bool ReservationTypeHasBeenSet() const { return m_reservationTypeHasBeenSet; }

    /**
     * <p>The type of reservation.</p> <p>The following are valid values:</p> <ul> <li>
     * <p> <code>prefix</code>: The Amazon EC2 Prefix Delegation feature assigns the IP
     * addresses to network interfaces that are associated with an instance. For
     * information about Prefix Delegation, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-delegation.html">Prefix
     * Delegation for Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p> </li> <li> <p> <code>explicit</code>: You
     * manually assign the IP addresses to resources that reside in your subnet. </p>
     * </li> </ul>
     */
    inline void SetReservationType(const SubnetCidrReservationType& value) { m_reservationTypeHasBeenSet = true; m_reservationType = value; }

    /**
     * <p>The type of reservation.</p> <p>The following are valid values:</p> <ul> <li>
     * <p> <code>prefix</code>: The Amazon EC2 Prefix Delegation feature assigns the IP
     * addresses to network interfaces that are associated with an instance. For
     * information about Prefix Delegation, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-delegation.html">Prefix
     * Delegation for Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p> </li> <li> <p> <code>explicit</code>: You
     * manually assign the IP addresses to resources that reside in your subnet. </p>
     * </li> </ul>
     */
    inline void SetReservationType(SubnetCidrReservationType&& value) { m_reservationTypeHasBeenSet = true; m_reservationType = std::move(value); }

    /**
     * <p>The type of reservation.</p> <p>The following are valid values:</p> <ul> <li>
     * <p> <code>prefix</code>: The Amazon EC2 Prefix Delegation feature assigns the IP
     * addresses to network interfaces that are associated with an instance. For
     * information about Prefix Delegation, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-delegation.html">Prefix
     * Delegation for Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p> </li> <li> <p> <code>explicit</code>: You
     * manually assign the IP addresses to resources that reside in your subnet. </p>
     * </li> </ul>
     */
    inline CreateSubnetCidrReservationRequest& WithReservationType(const SubnetCidrReservationType& value) { SetReservationType(value); return *this;}

    /**
     * <p>The type of reservation.</p> <p>The following are valid values:</p> <ul> <li>
     * <p> <code>prefix</code>: The Amazon EC2 Prefix Delegation feature assigns the IP
     * addresses to network interfaces that are associated with an instance. For
     * information about Prefix Delegation, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-prefix-delegation.html">Prefix
     * Delegation for Amazon EC2 network interfaces</a> in the <i>Amazon Elastic
     * Compute Cloud User Guide</i>.</p> </li> <li> <p> <code>explicit</code>: You
     * manually assign the IP addresses to resources that reside in your subnet. </p>
     * </li> </ul>
     */
    inline CreateSubnetCidrReservationRequest& WithReservationType(SubnetCidrReservationType&& value) { SetReservationType(std::move(value)); return *this;}


    /**
     * <p>The description to assign to the subnet CIDR reservation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to assign to the subnet CIDR reservation.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to assign to the subnet CIDR reservation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to assign to the subnet CIDR reservation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to assign to the subnet CIDR reservation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to assign to the subnet CIDR reservation.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to assign to the subnet CIDR reservation.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to assign to the subnet CIDR reservation.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateSubnetCidrReservationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The tags to assign to the subnet CIDR reservation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the subnet CIDR reservation.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the subnet CIDR reservation.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the subnet CIDR reservation.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the subnet CIDR reservation.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the subnet CIDR reservation.</p>
     */
    inline CreateSubnetCidrReservationRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the subnet CIDR reservation.</p>
     */
    inline CreateSubnetCidrReservationRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the subnet CIDR reservation.</p>
     */
    inline CreateSubnetCidrReservationRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    SubnetCidrReservationType m_reservationType;
    bool m_reservationTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
