/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkInsightsAnalysis.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class StartNetworkInsightsAnalysisResponse
  {
  public:
    AWS_EC2_API StartNetworkInsightsAnalysisResponse() = default;
    AWS_EC2_API StartNetworkInsightsAnalysisResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API StartNetworkInsightsAnalysisResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the network insights analysis.</p>
     */
    inline const NetworkInsightsAnalysis& GetNetworkInsightsAnalysis() const { return m_networkInsightsAnalysis; }
    template<typename NetworkInsightsAnalysisT = NetworkInsightsAnalysis>
    void SetNetworkInsightsAnalysis(NetworkInsightsAnalysisT&& value) { m_networkInsightsAnalysisHasBeenSet = true; m_networkInsightsAnalysis = std::forward<NetworkInsightsAnalysisT>(value); }
    template<typename NetworkInsightsAnalysisT = NetworkInsightsAnalysis>
    StartNetworkInsightsAnalysisResponse& WithNetworkInsightsAnalysis(NetworkInsightsAnalysisT&& value) { SetNetworkInsightsAnalysis(std::forward<NetworkInsightsAnalysisT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    StartNetworkInsightsAnalysisResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    NetworkInsightsAnalysis m_networkInsightsAnalysis;
    bool m_networkInsightsAnalysisHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
