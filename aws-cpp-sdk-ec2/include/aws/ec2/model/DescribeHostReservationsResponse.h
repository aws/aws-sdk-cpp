/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/HostReservation.h>
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
  class DescribeHostReservationsResponse
  {
  public:
    AWS_EC2_API DescribeHostReservationsResponse();
    AWS_EC2_API DescribeHostReservationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeHostReservationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Details about the reservation's configuration.</p>
     */
    inline const Aws::Vector<HostReservation>& GetHostReservationSet() const{ return m_hostReservationSet; }

    /**
     * <p>Details about the reservation's configuration.</p>
     */
    inline void SetHostReservationSet(const Aws::Vector<HostReservation>& value) { m_hostReservationSet = value; }

    /**
     * <p>Details about the reservation's configuration.</p>
     */
    inline void SetHostReservationSet(Aws::Vector<HostReservation>&& value) { m_hostReservationSet = std::move(value); }

    /**
     * <p>Details about the reservation's configuration.</p>
     */
    inline DescribeHostReservationsResponse& WithHostReservationSet(const Aws::Vector<HostReservation>& value) { SetHostReservationSet(value); return *this;}

    /**
     * <p>Details about the reservation's configuration.</p>
     */
    inline DescribeHostReservationsResponse& WithHostReservationSet(Aws::Vector<HostReservation>&& value) { SetHostReservationSet(std::move(value)); return *this;}

    /**
     * <p>Details about the reservation's configuration.</p>
     */
    inline DescribeHostReservationsResponse& AddHostReservationSet(const HostReservation& value) { m_hostReservationSet.push_back(value); return *this; }

    /**
     * <p>Details about the reservation's configuration.</p>
     */
    inline DescribeHostReservationsResponse& AddHostReservationSet(HostReservation&& value) { m_hostReservationSet.push_back(std::move(value)); return *this; }


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
    inline DescribeHostReservationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeHostReservationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeHostReservationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeHostReservationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeHostReservationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<HostReservation> m_hostReservationSet;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
