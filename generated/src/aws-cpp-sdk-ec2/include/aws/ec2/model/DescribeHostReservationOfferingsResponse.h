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
    AWS_EC2_API DescribeHostReservationOfferingsResponse() = default;
    AWS_EC2_API DescribeHostReservationOfferingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeHostReservationOfferingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeHostReservationOfferingsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the offerings.</p>
     */
    inline const Aws::Vector<HostOffering>& GetOfferingSet() const { return m_offeringSet; }
    template<typename OfferingSetT = Aws::Vector<HostOffering>>
    void SetOfferingSet(OfferingSetT&& value) { m_offeringSetHasBeenSet = true; m_offeringSet = std::forward<OfferingSetT>(value); }
    template<typename OfferingSetT = Aws::Vector<HostOffering>>
    DescribeHostReservationOfferingsResponse& WithOfferingSet(OfferingSetT&& value) { SetOfferingSet(std::forward<OfferingSetT>(value)); return *this;}
    template<typename OfferingSetT = HostOffering>
    DescribeHostReservationOfferingsResponse& AddOfferingSet(OfferingSetT&& value) { m_offeringSetHasBeenSet = true; m_offeringSet.emplace_back(std::forward<OfferingSetT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeHostReservationOfferingsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<HostOffering> m_offeringSet;
    bool m_offeringSetHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
