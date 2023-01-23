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
    AWS_EC2_API StartNetworkInsightsAnalysisResponse();
    AWS_EC2_API StartNetworkInsightsAnalysisResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API StartNetworkInsightsAnalysisResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the network insights analysis.</p>
     */
    inline const NetworkInsightsAnalysis& GetNetworkInsightsAnalysis() const{ return m_networkInsightsAnalysis; }

    /**
     * <p>Information about the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysis(const NetworkInsightsAnalysis& value) { m_networkInsightsAnalysis = value; }

    /**
     * <p>Information about the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysis(NetworkInsightsAnalysis&& value) { m_networkInsightsAnalysis = std::move(value); }

    /**
     * <p>Information about the network insights analysis.</p>
     */
    inline StartNetworkInsightsAnalysisResponse& WithNetworkInsightsAnalysis(const NetworkInsightsAnalysis& value) { SetNetworkInsightsAnalysis(value); return *this;}

    /**
     * <p>Information about the network insights analysis.</p>
     */
    inline StartNetworkInsightsAnalysisResponse& WithNetworkInsightsAnalysis(NetworkInsightsAnalysis&& value) { SetNetworkInsightsAnalysis(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline StartNetworkInsightsAnalysisResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline StartNetworkInsightsAnalysisResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    NetworkInsightsAnalysis m_networkInsightsAnalysis;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
