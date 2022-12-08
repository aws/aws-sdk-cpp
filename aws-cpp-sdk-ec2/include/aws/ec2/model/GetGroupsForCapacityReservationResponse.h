/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityReservationGroup.h>
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
  class GetGroupsForCapacityReservationResponse
  {
  public:
    AWS_EC2_API GetGroupsForCapacityReservationResponse();
    AWS_EC2_API GetGroupsForCapacityReservationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetGroupsForCapacityReservationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetGroupsForCapacityReservationResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetGroupsForCapacityReservationResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetGroupsForCapacityReservationResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the resource groups to which the Capacity Reservation has
     * been added.</p>
     */
    inline const Aws::Vector<CapacityReservationGroup>& GetCapacityReservationGroups() const{ return m_capacityReservationGroups; }

    /**
     * <p>Information about the resource groups to which the Capacity Reservation has
     * been added.</p>
     */
    inline void SetCapacityReservationGroups(const Aws::Vector<CapacityReservationGroup>& value) { m_capacityReservationGroups = value; }

    /**
     * <p>Information about the resource groups to which the Capacity Reservation has
     * been added.</p>
     */
    inline void SetCapacityReservationGroups(Aws::Vector<CapacityReservationGroup>&& value) { m_capacityReservationGroups = std::move(value); }

    /**
     * <p>Information about the resource groups to which the Capacity Reservation has
     * been added.</p>
     */
    inline GetGroupsForCapacityReservationResponse& WithCapacityReservationGroups(const Aws::Vector<CapacityReservationGroup>& value) { SetCapacityReservationGroups(value); return *this;}

    /**
     * <p>Information about the resource groups to which the Capacity Reservation has
     * been added.</p>
     */
    inline GetGroupsForCapacityReservationResponse& WithCapacityReservationGroups(Aws::Vector<CapacityReservationGroup>&& value) { SetCapacityReservationGroups(std::move(value)); return *this;}

    /**
     * <p>Information about the resource groups to which the Capacity Reservation has
     * been added.</p>
     */
    inline GetGroupsForCapacityReservationResponse& AddCapacityReservationGroups(const CapacityReservationGroup& value) { m_capacityReservationGroups.push_back(value); return *this; }

    /**
     * <p>Information about the resource groups to which the Capacity Reservation has
     * been added.</p>
     */
    inline GetGroupsForCapacityReservationResponse& AddCapacityReservationGroups(CapacityReservationGroup&& value) { m_capacityReservationGroups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetGroupsForCapacityReservationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetGroupsForCapacityReservationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<CapacityReservationGroup> m_capacityReservationGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
