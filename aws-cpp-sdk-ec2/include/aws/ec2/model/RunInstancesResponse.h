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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Reservation">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API RunInstancesResponse
  {
  public:
    RunInstancesResponse();
    RunInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    RunInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>[EC2-Classic only] The security groups.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }

    /**
     * <p>[EC2-Classic only] The security groups.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groups = value; }

    /**
     * <p>[EC2-Classic only] The security groups.</p>
     */
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groups = std::move(value); }

    /**
     * <p>[EC2-Classic only] The security groups.</p>
     */
    inline RunInstancesResponse& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}

    /**
     * <p>[EC2-Classic only] The security groups.</p>
     */
    inline RunInstancesResponse& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic only] The security groups.</p>
     */
    inline RunInstancesResponse& AddGroups(const GroupIdentifier& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>[EC2-Classic only] The security groups.</p>
     */
    inline RunInstancesResponse& AddGroups(GroupIdentifier&& value) { m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The instances.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }

    /**
     * <p>The instances.</p>
     */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instances = value; }

    /**
     * <p>The instances.</p>
     */
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instances = std::move(value); }

    /**
     * <p>The instances.</p>
     */
    inline RunInstancesResponse& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /**
     * <p>The instances.</p>
     */
    inline RunInstancesResponse& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>The instances.</p>
     */
    inline RunInstancesResponse& AddInstances(const Instance& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>The instances.</p>
     */
    inline RunInstancesResponse& AddInstances(Instance&& value) { m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline RunInstancesResponse& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline RunInstancesResponse& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the reservation.</p>
     */
    inline RunInstancesResponse& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline const Aws::String& GetRequesterId() const{ return m_requesterId; }

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline void SetRequesterId(const Aws::String& value) { m_requesterId = value; }

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline void SetRequesterId(Aws::String&& value) { m_requesterId = std::move(value); }

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline void SetRequesterId(const char* value) { m_requesterId.assign(value); }

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline RunInstancesResponse& WithRequesterId(const Aws::String& value) { SetRequesterId(value); return *this;}

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline RunInstancesResponse& WithRequesterId(Aws::String&& value) { SetRequesterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the requester that launched the instances on your behalf (for
     * example, AWS Management Console or Auto Scaling).</p>
     */
    inline RunInstancesResponse& WithRequesterId(const char* value) { SetRequesterId(value); return *this;}


    /**
     * <p>The ID of the reservation.</p>
     */
    inline const Aws::String& GetReservationId() const{ return m_reservationId; }

    /**
     * <p>The ID of the reservation.</p>
     */
    inline void SetReservationId(const Aws::String& value) { m_reservationId = value; }

    /**
     * <p>The ID of the reservation.</p>
     */
    inline void SetReservationId(Aws::String&& value) { m_reservationId = std::move(value); }

    /**
     * <p>The ID of the reservation.</p>
     */
    inline void SetReservationId(const char* value) { m_reservationId.assign(value); }

    /**
     * <p>The ID of the reservation.</p>
     */
    inline RunInstancesResponse& WithReservationId(const Aws::String& value) { SetReservationId(value); return *this;}

    /**
     * <p>The ID of the reservation.</p>
     */
    inline RunInstancesResponse& WithReservationId(Aws::String&& value) { SetReservationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the reservation.</p>
     */
    inline RunInstancesResponse& WithReservationId(const char* value) { SetReservationId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RunInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RunInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<GroupIdentifier> m_groups;

    Aws::Vector<Instance> m_instances;

    Aws::String m_ownerId;

    Aws::String m_requesterId;

    Aws::String m_reservationId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
