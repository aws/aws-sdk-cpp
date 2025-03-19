/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NetworkInsightsPath.h>
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
  class DescribeNetworkInsightsPathsResponse
  {
  public:
    AWS_EC2_API DescribeNetworkInsightsPathsResponse() = default;
    AWS_EC2_API DescribeNetworkInsightsPathsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeNetworkInsightsPathsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the paths.</p>
     */
    inline const Aws::Vector<NetworkInsightsPath>& GetNetworkInsightsPaths() const { return m_networkInsightsPaths; }
    template<typename NetworkInsightsPathsT = Aws::Vector<NetworkInsightsPath>>
    void SetNetworkInsightsPaths(NetworkInsightsPathsT&& value) { m_networkInsightsPathsHasBeenSet = true; m_networkInsightsPaths = std::forward<NetworkInsightsPathsT>(value); }
    template<typename NetworkInsightsPathsT = Aws::Vector<NetworkInsightsPath>>
    DescribeNetworkInsightsPathsResponse& WithNetworkInsightsPaths(NetworkInsightsPathsT&& value) { SetNetworkInsightsPaths(std::forward<NetworkInsightsPathsT>(value)); return *this;}
    template<typename NetworkInsightsPathsT = NetworkInsightsPath>
    DescribeNetworkInsightsPathsResponse& AddNetworkInsightsPaths(NetworkInsightsPathsT&& value) { m_networkInsightsPathsHasBeenSet = true; m_networkInsightsPaths.emplace_back(std::forward<NetworkInsightsPathsT>(value)); return *this; }
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
    DescribeNetworkInsightsPathsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeNetworkInsightsPathsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkInsightsPath> m_networkInsightsPaths;
    bool m_networkInsightsPathsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
