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
    AWS_EC2_API DescribeHostReservationsResponse() = default;
    AWS_EC2_API DescribeHostReservationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeHostReservationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about the reservation's configuration.</p>
     */
    inline const Aws::Vector<HostReservation>& GetHostReservationSet() const { return m_hostReservationSet; }
    template<typename HostReservationSetT = Aws::Vector<HostReservation>>
    void SetHostReservationSet(HostReservationSetT&& value) { m_hostReservationSetHasBeenSet = true; m_hostReservationSet = std::forward<HostReservationSetT>(value); }
    template<typename HostReservationSetT = Aws::Vector<HostReservation>>
    DescribeHostReservationsResponse& WithHostReservationSet(HostReservationSetT&& value) { SetHostReservationSet(std::forward<HostReservationSetT>(value)); return *this;}
    template<typename HostReservationSetT = HostReservation>
    DescribeHostReservationsResponse& AddHostReservationSet(HostReservationSetT&& value) { m_hostReservationSetHasBeenSet = true; m_hostReservationSet.emplace_back(std::forward<HostReservationSetT>(value)); return *this; }
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
    DescribeHostReservationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeHostReservationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HostReservation> m_hostReservationSet;
    bool m_hostReservationSetHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
