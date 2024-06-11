/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/HostOffering.h>
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
  class DescribeHostReservationOfferingsResponse
  {
  public:
    AWS_EC2_API DescribeHostReservationOfferingsResponse();
    AWS_EC2_API DescribeHostReservationOfferingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeHostReservationOfferingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeHostReservationOfferingsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeHostReservationOfferingsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeHostReservationOfferingsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the offerings.</p>
     */
    inline const Aws::Vector<HostOffering>& GetOfferingSet() const{ return m_offeringSet; }
    inline void SetOfferingSet(const Aws::Vector<HostOffering>& value) { m_offeringSet = value; }
    inline void SetOfferingSet(Aws::Vector<HostOffering>&& value) { m_offeringSet = std::move(value); }
    inline DescribeHostReservationOfferingsResponse& WithOfferingSet(const Aws::Vector<HostOffering>& value) { SetOfferingSet(value); return *this;}
    inline DescribeHostReservationOfferingsResponse& WithOfferingSet(Aws::Vector<HostOffering>&& value) { SetOfferingSet(std::move(value)); return *this;}
    inline DescribeHostReservationOfferingsResponse& AddOfferingSet(const HostOffering& value) { m_offeringSet.push_back(value); return *this; }
    inline DescribeHostReservationOfferingsResponse& AddOfferingSet(HostOffering&& value) { m_offeringSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeHostReservationOfferingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeHostReservationOfferingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<HostOffering> m_offeringSet;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
