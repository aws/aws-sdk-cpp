/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityReservationBillingRequest.h>
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
  class DescribeCapacityReservationBillingRequestsResponse
  {
  public:
    AWS_EC2_API DescribeCapacityReservationBillingRequestsResponse();
    AWS_EC2_API DescribeCapacityReservationBillingRequestsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityReservationBillingRequestsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeCapacityReservationBillingRequestsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeCapacityReservationBillingRequestsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeCapacityReservationBillingRequestsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the request.</p>
     */
    inline const Aws::Vector<CapacityReservationBillingRequest>& GetCapacityReservationBillingRequests() const{ return m_capacityReservationBillingRequests; }
    inline void SetCapacityReservationBillingRequests(const Aws::Vector<CapacityReservationBillingRequest>& value) { m_capacityReservationBillingRequests = value; }
    inline void SetCapacityReservationBillingRequests(Aws::Vector<CapacityReservationBillingRequest>&& value) { m_capacityReservationBillingRequests = std::move(value); }
    inline DescribeCapacityReservationBillingRequestsResponse& WithCapacityReservationBillingRequests(const Aws::Vector<CapacityReservationBillingRequest>& value) { SetCapacityReservationBillingRequests(value); return *this;}
    inline DescribeCapacityReservationBillingRequestsResponse& WithCapacityReservationBillingRequests(Aws::Vector<CapacityReservationBillingRequest>&& value) { SetCapacityReservationBillingRequests(std::move(value)); return *this;}
    inline DescribeCapacityReservationBillingRequestsResponse& AddCapacityReservationBillingRequests(const CapacityReservationBillingRequest& value) { m_capacityReservationBillingRequests.push_back(value); return *this; }
    inline DescribeCapacityReservationBillingRequestsResponse& AddCapacityReservationBillingRequests(CapacityReservationBillingRequest&& value) { m_capacityReservationBillingRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeCapacityReservationBillingRequestsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeCapacityReservationBillingRequestsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CapacityReservationBillingRequest> m_capacityReservationBillingRequests;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
