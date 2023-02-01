/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityReservationFleet.h>
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
  class DescribeCapacityReservationFleetsResponse
  {
  public:
    AWS_EC2_API DescribeCapacityReservationFleetsResponse();
    AWS_EC2_API DescribeCapacityReservationFleetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityReservationFleetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Capacity Reservation Fleets.</p>
     */
    inline const Aws::Vector<CapacityReservationFleet>& GetCapacityReservationFleets() const{ return m_capacityReservationFleets; }

    /**
     * <p>Information about the Capacity Reservation Fleets.</p>
     */
    inline void SetCapacityReservationFleets(const Aws::Vector<CapacityReservationFleet>& value) { m_capacityReservationFleets = value; }

    /**
     * <p>Information about the Capacity Reservation Fleets.</p>
     */
    inline void SetCapacityReservationFleets(Aws::Vector<CapacityReservationFleet>&& value) { m_capacityReservationFleets = std::move(value); }

    /**
     * <p>Information about the Capacity Reservation Fleets.</p>
     */
    inline DescribeCapacityReservationFleetsResponse& WithCapacityReservationFleets(const Aws::Vector<CapacityReservationFleet>& value) { SetCapacityReservationFleets(value); return *this;}

    /**
     * <p>Information about the Capacity Reservation Fleets.</p>
     */
    inline DescribeCapacityReservationFleetsResponse& WithCapacityReservationFleets(Aws::Vector<CapacityReservationFleet>&& value) { SetCapacityReservationFleets(std::move(value)); return *this;}

    /**
     * <p>Information about the Capacity Reservation Fleets.</p>
     */
    inline DescribeCapacityReservationFleetsResponse& AddCapacityReservationFleets(const CapacityReservationFleet& value) { m_capacityReservationFleets.push_back(value); return *this; }

    /**
     * <p>Information about the Capacity Reservation Fleets.</p>
     */
    inline DescribeCapacityReservationFleetsResponse& AddCapacityReservationFleets(CapacityReservationFleet&& value) { m_capacityReservationFleets.push_back(std::move(value)); return *this; }


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
    inline DescribeCapacityReservationFleetsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeCapacityReservationFleetsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeCapacityReservationFleetsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCapacityReservationFleetsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCapacityReservationFleetsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<CapacityReservationFleet> m_capacityReservationFleets;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
