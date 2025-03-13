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
    AWS_EC2_API DescribeCapacityReservationFleetsResponse() = default;
    AWS_EC2_API DescribeCapacityReservationFleetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityReservationFleetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the Capacity Reservation Fleets.</p>
     */
    inline const Aws::Vector<CapacityReservationFleet>& GetCapacityReservationFleets() const { return m_capacityReservationFleets; }
    template<typename CapacityReservationFleetsT = Aws::Vector<CapacityReservationFleet>>
    void SetCapacityReservationFleets(CapacityReservationFleetsT&& value) { m_capacityReservationFleetsHasBeenSet = true; m_capacityReservationFleets = std::forward<CapacityReservationFleetsT>(value); }
    template<typename CapacityReservationFleetsT = Aws::Vector<CapacityReservationFleet>>
    DescribeCapacityReservationFleetsResponse& WithCapacityReservationFleets(CapacityReservationFleetsT&& value) { SetCapacityReservationFleets(std::forward<CapacityReservationFleetsT>(value)); return *this;}
    template<typename CapacityReservationFleetsT = CapacityReservationFleet>
    DescribeCapacityReservationFleetsResponse& AddCapacityReservationFleets(CapacityReservationFleetsT&& value) { m_capacityReservationFleetsHasBeenSet = true; m_capacityReservationFleets.emplace_back(std::forward<CapacityReservationFleetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCapacityReservationFleetsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCapacityReservationFleetsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityReservationFleet> m_capacityReservationFleets;
    bool m_capacityReservationFleetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
