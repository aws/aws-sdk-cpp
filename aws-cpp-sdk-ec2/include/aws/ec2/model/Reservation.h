/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Reservation">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API Reservation
  {
  public:
    Reservation();
    Reservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    Reservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>[EC2-Classic only] One or more security groups.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }

    /**
     * <p>[EC2-Classic only] One or more security groups.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>[EC2-Classic only] One or more security groups.</p>
     */
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>[EC2-Classic only] One or more security groups.</p>
     */
    inline Reservation& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}

    /**
     * <p>[EC2-Classic only] One or more security groups.</p>
     */
    inline Reservation& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic only] One or more security groups.</p>
     */
    inline Reservation& AddGroups(const GroupIdentifier& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>[EC2-Classic only] One or more security groups.</p>
     */
    inline Reservation& AddGroups(GroupIdentifier&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more instances.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }

    /**
     * <p>One or more instances.</p>
     */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>One or more instances.</p>
     */
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>One or more instances.</p>
     */
    inline Reservation& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /**
     * <p>One or more instances.</p>
     */
    inline Reservation& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>One or more instances.</p>
     */
    inline Reservation& AddInstances(const Instance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>One or more instances.</p>
     */
    inline Reservation& AddInstances(Instance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline Reservation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline Reservation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline Reservation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline const Aws::String& GetRequesterId() const{ return m_requesterId; }

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline void SetRequesterId(const Aws::String& value) { m_requesterIdHasBeenSet = true; m_requesterId = value; }

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline void SetRequesterId(Aws::String&& value) { m_requesterIdHasBeenSet = true; m_requesterId = std::move(value); }

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline void SetRequesterId(const char* value) { m_requesterIdHasBeenSet = true; m_requesterId.assign(value); }

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline Reservation& WithRequesterId(const Aws::String& value) { SetRequesterId(value); return *this;}

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline Reservation& WithRequesterId(Aws::String&& value) { SetRequesterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline Reservation& WithRequesterId(const char* value) { SetRequesterId(value); return *this;}


    /**
     * <p>The ID of the reservation.</p>
     */
    inline const Aws::String& GetReservationId() const{ return m_reservationId; }

    /**
     * <p>The ID of the reservation.</p>
     */
    inline void SetReservationId(const Aws::String& value) { m_reservationIdHasBeenSet = true; m_reservationId = value; }

    /**
     * <p>The ID of the reservation.</p>
     */
    inline void SetReservationId(Aws::String&& value) { m_reservationIdHasBeenSet = true; m_reservationId = std::move(value); }

    /**
     * <p>The ID of the reservation.</p>
     */
    inline void SetReservationId(const char* value) { m_reservationIdHasBeenSet = true; m_reservationId.assign(value); }

    /**
     * <p>The ID of the reservation.</p>
     */
    inline Reservation& WithReservationId(const Aws::String& value) { SetReservationId(value); return *this;}

    /**
     * <p>The ID of the reservation.</p>
     */
    inline Reservation& WithReservationId(Aws::String&& value) { SetReservationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the reservation.</p>
     */
    inline Reservation& WithReservationId(const char* value) { SetReservationId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline Reservation& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline Reservation& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<GroupIdentifier> m_groups;
    bool m_groupsHasBeenSet;

    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::String m_requesterId;
    bool m_requesterIdHasBeenSet;

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
