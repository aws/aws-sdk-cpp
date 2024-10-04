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
    AWS_EC2_API RunInstancesResponse();
    AWS_EC2_API RunInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RunInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the reservation.</p>
     */
    inline const Aws::String& GetReservationId() const{ return m_reservationId; }
    inline void SetReservationId(const Aws::String& value) { m_reservationId = value; }
    inline void SetReservationId(Aws::String&& value) { m_reservationId = std::move(value); }
    inline void SetReservationId(const char* value) { m_reservationId.assign(value); }
    inline RunInstancesResponse& WithReservationId(const Aws::String& value) { SetReservationId(value); return *this;}
    inline RunInstancesResponse& WithReservationId(Aws::String&& value) { SetReservationId(std::move(value)); return *this;}
    inline RunInstancesResponse& WithReservationId(const char* value) { SetReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the reservation.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }
    inline RunInstancesResponse& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline RunInstancesResponse& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline RunInstancesResponse& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, Amazon Web Services Management Console or Auto Scaling).</p>
     */
    inline const Aws::String& GetRequesterId() const{ return m_requesterId; }
    inline void SetRequesterId(const Aws::String& value) { m_requesterId = value; }
    inline void SetRequesterId(Aws::String&& value) { m_requesterId = std::move(value); }
    inline void SetRequesterId(const char* value) { m_requesterId.assign(value); }
    inline RunInstancesResponse& WithRequesterId(const Aws::String& value) { SetRequesterId(value); return *this;}
    inline RunInstancesResponse& WithRequesterId(Aws::String&& value) { SetRequesterId(std::move(value)); return *this;}
    inline RunInstancesResponse& WithRequesterId(const char* value) { SetRequesterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groups = std::move(value); }
    inline RunInstancesResponse& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}
    inline RunInstancesResponse& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}
    inline RunInstancesResponse& AddGroups(const GroupIdentifier& value) { m_groups.push_back(value); return *this; }
    inline RunInstancesResponse& AddGroups(GroupIdentifier&& value) { m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instances.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instances = value; }
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instances = std::move(value); }
    inline RunInstancesResponse& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}
    inline RunInstancesResponse& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}
    inline RunInstancesResponse& AddInstances(const Instance& value) { m_instances.push_back(value); return *this; }
    inline RunInstancesResponse& AddInstances(Instance&& value) { m_instances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline RunInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline RunInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservationId;

    Aws::String m_ownerId;

    Aws::String m_requesterId;

    Aws::Vector<GroupIdentifier> m_groups;

    Aws::Vector<Instance> m_instances;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
