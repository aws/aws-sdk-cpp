/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SubnetCidrReservationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a subnet CIDR reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SubnetCidrReservation">AWS
   * API Reference</a></p>
   */
  class SubnetCidrReservation
  {
  public:
    AWS_EC2_API SubnetCidrReservation();
    AWS_EC2_API SubnetCidrReservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SubnetCidrReservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the subnet CIDR reservation.</p>
     */
    inline const Aws::String& GetSubnetCidrReservationId() const{ return m_subnetCidrReservationId; }
    inline bool SubnetCidrReservationIdHasBeenSet() const { return m_subnetCidrReservationIdHasBeenSet; }
    inline void SetSubnetCidrReservationId(const Aws::String& value) { m_subnetCidrReservationIdHasBeenSet = true; m_subnetCidrReservationId = value; }
    inline void SetSubnetCidrReservationId(Aws::String&& value) { m_subnetCidrReservationIdHasBeenSet = true; m_subnetCidrReservationId = std::move(value); }
    inline void SetSubnetCidrReservationId(const char* value) { m_subnetCidrReservationIdHasBeenSet = true; m_subnetCidrReservationId.assign(value); }
    inline SubnetCidrReservation& WithSubnetCidrReservationId(const Aws::String& value) { SetSubnetCidrReservationId(value); return *this;}
    inline SubnetCidrReservation& WithSubnetCidrReservationId(Aws::String&& value) { SetSubnetCidrReservationId(std::move(value)); return *this;}
    inline SubnetCidrReservation& WithSubnetCidrReservationId(const char* value) { SetSubnetCidrReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline SubnetCidrReservation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline SubnetCidrReservation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline SubnetCidrReservation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR that has been reserved.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline SubnetCidrReservation& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline SubnetCidrReservation& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline SubnetCidrReservation& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of reservation. </p>
     */
    inline const SubnetCidrReservationType& GetReservationType() const{ return m_reservationType; }
    inline bool ReservationTypeHasBeenSet() const { return m_reservationTypeHasBeenSet; }
    inline void SetReservationType(const SubnetCidrReservationType& value) { m_reservationTypeHasBeenSet = true; m_reservationType = value; }
    inline void SetReservationType(SubnetCidrReservationType&& value) { m_reservationTypeHasBeenSet = true; m_reservationType = std::move(value); }
    inline SubnetCidrReservation& WithReservationType(const SubnetCidrReservationType& value) { SetReservationType(value); return *this;}
    inline SubnetCidrReservation& WithReservationType(SubnetCidrReservationType&& value) { SetReservationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that owns the subnet CIDR reservation. </p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline SubnetCidrReservation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline SubnetCidrReservation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline SubnetCidrReservation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description assigned to the subnet CIDR reservation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SubnetCidrReservation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SubnetCidrReservation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SubnetCidrReservation& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the subnet CIDR reservation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SubnetCidrReservation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline SubnetCidrReservation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline SubnetCidrReservation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline SubnetCidrReservation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_subnetCidrReservationId;
    bool m_subnetCidrReservationIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    SubnetCidrReservationType m_reservationType;
    bool m_reservationTypeHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
