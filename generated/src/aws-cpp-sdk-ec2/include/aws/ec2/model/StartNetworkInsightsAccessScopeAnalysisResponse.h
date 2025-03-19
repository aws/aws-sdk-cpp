/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkInsightsAccessScopeAnalysis.h>
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
  class StartNetworkInsightsAccessScopeAnalysisResponse
  {
  public:
    AWS_EC2_API StartNetworkInsightsAccessScopeAnalysisResponse() = default;
    AWS_EC2_API StartNetworkInsightsAccessScopeAnalysisResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API StartNetworkInsightsAccessScopeAnalysisResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Network Access Scope analysis.</p>
     */
    inline const NetworkInsightsAccessScopeAnalysis& GetNetworkInsightsAccessScopeAnalysis() const { return m_networkInsightsAccessScopeAnalysis; }
    template<typename NetworkInsightsAccessScopeAnalysisT = NetworkInsightsAccessScopeAnalysis>
    void SetNetworkInsightsAccessScopeAnalysis(NetworkInsightsAccessScopeAnalysisT&& value) { m_networkInsightsAccessScopeAnalysisHasBeenSet = true; m_networkInsightsAccessScopeAnalysis = std::forward<NetworkInsightsAccessScopeAnalysisT>(value); }
    template<typename NetworkInsightsAccessScopeAnalysisT = NetworkInsightsAccessScopeAnalysis>
    StartNetworkInsightsAccessScopeAnalysisResponse& WithNetworkInsightsAccessScopeAnalysis(NetworkInsightsAccessScopeAnalysisT&& value) { SetNetworkInsightsAccessScopeAnalysis(std::forward<NetworkInsightsAccessScopeAnalysisT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    StartNetworkInsightsAccessScopeAnalysisResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    NetworkInsightsAccessScopeAnalysis m_networkInsightsAccessScopeAnalysis;
    bool m_networkInsightsAccessScopeAnalysisHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
