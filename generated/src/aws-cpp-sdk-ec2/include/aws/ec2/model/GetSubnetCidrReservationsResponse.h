/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SubnetCidrReservation.h>
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
  class GetSubnetCidrReservationsResponse
  {
  public:
    AWS_EC2_API GetSubnetCidrReservationsResponse() = default;
    AWS_EC2_API GetSubnetCidrReservationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetSubnetCidrReservationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the IPv4 subnet CIDR reservations.</p>
     */
    inline const Aws::Vector<SubnetCidrReservation>& GetSubnetIpv4CidrReservations() const { return m_subnetIpv4CidrReservations; }
    template<typename SubnetIpv4CidrReservationsT = Aws::Vector<SubnetCidrReservation>>
    void SetSubnetIpv4CidrReservations(SubnetIpv4CidrReservationsT&& value) { m_subnetIpv4CidrReservationsHasBeenSet = true; m_subnetIpv4CidrReservations = std::forward<SubnetIpv4CidrReservationsT>(value); }
    template<typename SubnetIpv4CidrReservationsT = Aws::Vector<SubnetCidrReservation>>
    GetSubnetCidrReservationsResponse& WithSubnetIpv4CidrReservations(SubnetIpv4CidrReservationsT&& value) { SetSubnetIpv4CidrReservations(std::forward<SubnetIpv4CidrReservationsT>(value)); return *this;}
    template<typename SubnetIpv4CidrReservationsT = SubnetCidrReservation>
    GetSubnetCidrReservationsResponse& AddSubnetIpv4CidrReservations(SubnetIpv4CidrReservationsT&& value) { m_subnetIpv4CidrReservationsHasBeenSet = true; m_subnetIpv4CidrReservations.emplace_back(std::forward<SubnetIpv4CidrReservationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 subnet CIDR reservations.</p>
     */
    inline const Aws::Vector<SubnetCidrReservation>& GetSubnetIpv6CidrReservations() const { return m_subnetIpv6CidrReservations; }
    template<typename SubnetIpv6CidrReservationsT = Aws::Vector<SubnetCidrReservation>>
    void SetSubnetIpv6CidrReservations(SubnetIpv6CidrReservationsT&& value) { m_subnetIpv6CidrReservationsHasBeenSet = true; m_subnetIpv6CidrReservations = std::forward<SubnetIpv6CidrReservationsT>(value); }
    template<typename SubnetIpv6CidrReservationsT = Aws::Vector<SubnetCidrReservation>>
    GetSubnetCidrReservationsResponse& WithSubnetIpv6CidrReservations(SubnetIpv6CidrReservationsT&& value) { SetSubnetIpv6CidrReservations(std::forward<SubnetIpv6CidrReservationsT>(value)); return *this;}
    template<typename SubnetIpv6CidrReservationsT = SubnetCidrReservation>
    GetSubnetCidrReservationsResponse& AddSubnetIpv6CidrReservations(SubnetIpv6CidrReservationsT&& value) { m_subnetIpv6CidrReservationsHasBeenSet = true; m_subnetIpv6CidrReservations.emplace_back(std::forward<SubnetIpv6CidrReservationsT>(value)); return *this; }
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
    GetSubnetCidrReservationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetSubnetCidrReservationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SubnetCidrReservation> m_subnetIpv4CidrReservations;
    bool m_subnetIpv4CidrReservationsHasBeenSet = false;

    Aws::Vector<SubnetCidrReservation> m_subnetIpv6CidrReservations;
    bool m_subnetIpv6CidrReservationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
