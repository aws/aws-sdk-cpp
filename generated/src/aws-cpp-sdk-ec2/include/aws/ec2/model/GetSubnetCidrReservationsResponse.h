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
    AWS_EC2_API GetSubnetCidrReservationsResponse();
    AWS_EC2_API GetSubnetCidrReservationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetSubnetCidrReservationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the IPv4 subnet CIDR reservations.</p>
     */
    inline const Aws::Vector<SubnetCidrReservation>& GetSubnetIpv4CidrReservations() const{ return m_subnetIpv4CidrReservations; }

    /**
     * <p>Information about the IPv4 subnet CIDR reservations.</p>
     */
    inline void SetSubnetIpv4CidrReservations(const Aws::Vector<SubnetCidrReservation>& value) { m_subnetIpv4CidrReservations = value; }

    /**
     * <p>Information about the IPv4 subnet CIDR reservations.</p>
     */
    inline void SetSubnetIpv4CidrReservations(Aws::Vector<SubnetCidrReservation>&& value) { m_subnetIpv4CidrReservations = std::move(value); }

    /**
     * <p>Information about the IPv4 subnet CIDR reservations.</p>
     */
    inline GetSubnetCidrReservationsResponse& WithSubnetIpv4CidrReservations(const Aws::Vector<SubnetCidrReservation>& value) { SetSubnetIpv4CidrReservations(value); return *this;}

    /**
     * <p>Information about the IPv4 subnet CIDR reservations.</p>
     */
    inline GetSubnetCidrReservationsResponse& WithSubnetIpv4CidrReservations(Aws::Vector<SubnetCidrReservation>&& value) { SetSubnetIpv4CidrReservations(std::move(value)); return *this;}

    /**
     * <p>Information about the IPv4 subnet CIDR reservations.</p>
     */
    inline GetSubnetCidrReservationsResponse& AddSubnetIpv4CidrReservations(const SubnetCidrReservation& value) { m_subnetIpv4CidrReservations.push_back(value); return *this; }

    /**
     * <p>Information about the IPv4 subnet CIDR reservations.</p>
     */
    inline GetSubnetCidrReservationsResponse& AddSubnetIpv4CidrReservations(SubnetCidrReservation&& value) { m_subnetIpv4CidrReservations.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the IPv6 subnet CIDR reservations.</p>
     */
    inline const Aws::Vector<SubnetCidrReservation>& GetSubnetIpv6CidrReservations() const{ return m_subnetIpv6CidrReservations; }

    /**
     * <p>Information about the IPv6 subnet CIDR reservations.</p>
     */
    inline void SetSubnetIpv6CidrReservations(const Aws::Vector<SubnetCidrReservation>& value) { m_subnetIpv6CidrReservations = value; }

    /**
     * <p>Information about the IPv6 subnet CIDR reservations.</p>
     */
    inline void SetSubnetIpv6CidrReservations(Aws::Vector<SubnetCidrReservation>&& value) { m_subnetIpv6CidrReservations = std::move(value); }

    /**
     * <p>Information about the IPv6 subnet CIDR reservations.</p>
     */
    inline GetSubnetCidrReservationsResponse& WithSubnetIpv6CidrReservations(const Aws::Vector<SubnetCidrReservation>& value) { SetSubnetIpv6CidrReservations(value); return *this;}

    /**
     * <p>Information about the IPv6 subnet CIDR reservations.</p>
     */
    inline GetSubnetCidrReservationsResponse& WithSubnetIpv6CidrReservations(Aws::Vector<SubnetCidrReservation>&& value) { SetSubnetIpv6CidrReservations(std::move(value)); return *this;}

    /**
     * <p>Information about the IPv6 subnet CIDR reservations.</p>
     */
    inline GetSubnetCidrReservationsResponse& AddSubnetIpv6CidrReservations(const SubnetCidrReservation& value) { m_subnetIpv6CidrReservations.push_back(value); return *this; }

    /**
     * <p>Information about the IPv6 subnet CIDR reservations.</p>
     */
    inline GetSubnetCidrReservationsResponse& AddSubnetIpv6CidrReservations(SubnetCidrReservation&& value) { m_subnetIpv6CidrReservations.push_back(std::move(value)); return *this; }


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
    inline GetSubnetCidrReservationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetSubnetCidrReservationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetSubnetCidrReservationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetSubnetCidrReservationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSubnetCidrReservationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SubnetCidrReservation> m_subnetIpv4CidrReservations;

    Aws::Vector<SubnetCidrReservation> m_subnetIpv6CidrReservations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
