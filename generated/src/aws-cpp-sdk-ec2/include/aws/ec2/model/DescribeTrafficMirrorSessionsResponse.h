/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TrafficMirrorSession.h>
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
  class DescribeTrafficMirrorSessionsResponse
  {
  public:
    AWS_EC2_API DescribeTrafficMirrorSessionsResponse() = default;
    AWS_EC2_API DescribeTrafficMirrorSessionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTrafficMirrorSessionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Describes one or more Traffic Mirror sessions. By default, all Traffic Mirror
     * sessions are described. Alternatively, you can filter the results.</p>
     */
    inline const Aws::Vector<TrafficMirrorSession>& GetTrafficMirrorSessions() const { return m_trafficMirrorSessions; }
    template<typename TrafficMirrorSessionsT = Aws::Vector<TrafficMirrorSession>>
    void SetTrafficMirrorSessions(TrafficMirrorSessionsT&& value) { m_trafficMirrorSessionsHasBeenSet = true; m_trafficMirrorSessions = std::forward<TrafficMirrorSessionsT>(value); }
    template<typename TrafficMirrorSessionsT = Aws::Vector<TrafficMirrorSession>>
    DescribeTrafficMirrorSessionsResponse& WithTrafficMirrorSessions(TrafficMirrorSessionsT&& value) { SetTrafficMirrorSessions(std::forward<TrafficMirrorSessionsT>(value)); return *this;}
    template<typename TrafficMirrorSessionsT = TrafficMirrorSession>
    DescribeTrafficMirrorSessionsResponse& AddTrafficMirrorSessions(TrafficMirrorSessionsT&& value) { m_trafficMirrorSessionsHasBeenSet = true; m_trafficMirrorSessions.emplace_back(std::forward<TrafficMirrorSessionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTrafficMirrorSessionsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTrafficMirrorSessionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrafficMirrorSession> m_trafficMirrorSessions;
    bool m_trafficMirrorSessionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
