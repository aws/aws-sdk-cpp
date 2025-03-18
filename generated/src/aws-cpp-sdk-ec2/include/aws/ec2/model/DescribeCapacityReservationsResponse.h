/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityReservation.h>
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
  class DescribeCapacityReservationsResponse
  {
  public:
    AWS_EC2_API DescribeCapacityReservationsResponse() = default;
    AWS_EC2_API DescribeCapacityReservationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityReservationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCapacityReservationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservations.</p>
     */
    inline const Aws::Vector<CapacityReservation>& GetCapacityReservations() const { return m_capacityReservations; }
    template<typename CapacityReservationsT = Aws::Vector<CapacityReservation>>
    void SetCapacityReservations(CapacityReservationsT&& value) { m_capacityReservationsHasBeenSet = true; m_capacityReservations = std::forward<CapacityReservationsT>(value); }
    template<typename CapacityReservationsT = Aws::Vector<CapacityReservation>>
    DescribeCapacityReservationsResponse& WithCapacityReservations(CapacityReservationsT&& value) { SetCapacityReservations(std::forward<CapacityReservationsT>(value)); return *this;}
    template<typename CapacityReservationsT = CapacityReservation>
    DescribeCapacityReservationsResponse& AddCapacityReservations(CapacityReservationsT&& value) { m_capacityReservationsHasBeenSet = true; m_capacityReservations.emplace_back(std::forward<CapacityReservationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCapacityReservationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CapacityReservation> m_capacityReservations;
    bool m_capacityReservationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
