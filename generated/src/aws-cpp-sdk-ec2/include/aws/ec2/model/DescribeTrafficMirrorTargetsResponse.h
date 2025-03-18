/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TrafficMirrorTarget.h>
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
  class DescribeTrafficMirrorTargetsResponse
  {
  public:
    AWS_EC2_API DescribeTrafficMirrorTargetsResponse() = default;
    AWS_EC2_API DescribeTrafficMirrorTargetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTrafficMirrorTargetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about one or more Traffic Mirror targets.</p>
     */
    inline const Aws::Vector<TrafficMirrorTarget>& GetTrafficMirrorTargets() const { return m_trafficMirrorTargets; }
    template<typename TrafficMirrorTargetsT = Aws::Vector<TrafficMirrorTarget>>
    void SetTrafficMirrorTargets(TrafficMirrorTargetsT&& value) { m_trafficMirrorTargetsHasBeenSet = true; m_trafficMirrorTargets = std::forward<TrafficMirrorTargetsT>(value); }
    template<typename TrafficMirrorTargetsT = Aws::Vector<TrafficMirrorTarget>>
    DescribeTrafficMirrorTargetsResponse& WithTrafficMirrorTargets(TrafficMirrorTargetsT&& value) { SetTrafficMirrorTargets(std::forward<TrafficMirrorTargetsT>(value)); return *this;}
    template<typename TrafficMirrorTargetsT = TrafficMirrorTarget>
    DescribeTrafficMirrorTargetsResponse& AddTrafficMirrorTargets(TrafficMirrorTargetsT&& value) { m_trafficMirrorTargetsHasBeenSet = true; m_trafficMirrorTargets.emplace_back(std::forward<TrafficMirrorTargetsT>(value)); return *this; }
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
    DescribeTrafficMirrorTargetsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTrafficMirrorTargetsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrafficMirrorTarget> m_trafficMirrorTargets;
    bool m_trafficMirrorTargetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
