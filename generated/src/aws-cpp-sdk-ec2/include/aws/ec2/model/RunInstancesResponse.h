/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <aws/ec2/model/Instance.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
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
  class RunInstancesResponse
  {
  public:
    AWS_EC2_API RunInstancesResponse() = default;
    AWS_EC2_API RunInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RunInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the reservation.</p>
     */
    inline const Aws::String& GetReservationId() const { return m_reservationId; }
    template<typename ReservationIdT = Aws::String>
    void SetReservationId(ReservationIdT&& value) { m_reservationIdHasBeenSet = true; m_reservationId = std::forward<ReservationIdT>(value); }
    template<typename ReservationIdT = Aws::String>
    RunInstancesResponse& WithReservationId(ReservationIdT&& value) { SetReservationId(std::forward<ReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the reservation.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    RunInstancesResponse& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, Amazon Web Services Management Console or Auto Scaling).</p>
     */
    inline const Aws::String& GetRequesterId() const { return m_requesterId; }
    template<typename RequesterIdT = Aws::String>
    void SetRequesterId(RequesterIdT&& value) { m_requesterIdHasBeenSet = true; m_requesterId = std::forward<RequesterIdT>(value); }
    template<typename RequesterIdT = Aws::String>
    RunInstancesResponse& WithRequesterId(RequesterIdT&& value) { SetRequesterId(std::forward<RequesterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const { return m_groups; }
    template<typename GroupsT = Aws::Vector<GroupIdentifier>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<GroupIdentifier>>
    RunInstancesResponse& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = GroupIdentifier>
    RunInstancesResponse& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instances.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const { return m_instances; }
    template<typename InstancesT = Aws::Vector<Instance>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<Instance>>
    RunInstancesResponse& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = Instance>
    RunInstancesResponse& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RunInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
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
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
