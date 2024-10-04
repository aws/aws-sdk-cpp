/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <aws/ec2/model/Instance.h>
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
   * <p>Describes a launch request for one or more instances, and includes owner,
   * requester, and security group information that applies to all instances in the
   * launch request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Reservation">AWS API
   * Reference</a></p>
   */
  class Reservation
  {
  public:
    AWS_EC2_API Reservation();
    AWS_EC2_API Reservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Reservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the reservation.</p>
     */
    inline const Aws::String& GetReservationId() const{ return m_reservationId; }
    inline bool ReservationIdHasBeenSet() const { return m_reservationIdHasBeenSet; }
    inline void SetReservationId(const Aws::String& value) { m_reservationIdHasBeenSet = true; m_reservationId = value; }
    inline void SetReservationId(Aws::String&& value) { m_reservationIdHasBeenSet = true; m_reservationId = std::move(value); }
    inline void SetReservationId(const char* value) { m_reservationIdHasBeenSet = true; m_reservationId.assign(value); }
    inline Reservation& WithReservationId(const Aws::String& value) { SetReservationId(value); return *this;}
    inline Reservation& WithReservationId(Aws::String&& value) { SetReservationId(std::move(value)); return *this;}
    inline Reservation& WithReservationId(const char* value) { SetReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the reservation.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline Reservation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline Reservation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline Reservation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, Amazon Web Services Management Console or Auto Scaling).</p>
     */
    inline const Aws::String& GetRequesterId() const{ return m_requesterId; }
    inline bool RequesterIdHasBeenSet() const { return m_requesterIdHasBeenSet; }
    inline void SetRequesterId(const Aws::String& value) { m_requesterIdHasBeenSet = true; m_requesterId = value; }
    inline void SetRequesterId(Aws::String&& value) { m_requesterIdHasBeenSet = true; m_requesterId = std::move(value); }
    inline void SetRequesterId(const char* value) { m_requesterIdHasBeenSet = true; m_requesterId.assign(value); }
    inline Reservation& WithRequesterId(const Aws::String& value) { SetRequesterId(value); return *this;}
    inline Reservation& WithRequesterId(Aws::String&& value) { SetRequesterId(std::move(value)); return *this;}
    inline Reservation& WithRequesterId(const char* value) { SetRequesterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline Reservation& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}
    inline Reservation& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}
    inline Reservation& AddGroups(const GroupIdentifier& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline Reservation& AddGroups(GroupIdentifier&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instances.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instancesHasBeenSet = true; m_instances = value; }
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }
    inline Reservation& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}
    inline Reservation& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}
    inline Reservation& AddInstances(const Instance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    inline Reservation& AddInstances(Instance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline Reservation& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline Reservation& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_requesterId;
    bool m_requesterIdHasBeenSet = false;

    Aws::Vector<GroupIdentifier> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
