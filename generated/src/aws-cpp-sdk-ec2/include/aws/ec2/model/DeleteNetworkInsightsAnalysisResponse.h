/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteNetworkInsightsAnalysisResponse
  {
  public:
    AWS_EC2_API DeleteNetworkInsightsAnalysisResponse() = default;
    AWS_EC2_API DeleteNetworkInsightsAnalysisResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteNetworkInsightsAnalysisResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAnalysisId() const { return m_networkInsightsAnalysisId; }
    template<typename NetworkInsightsAnalysisIdT = Aws::String>
    void SetNetworkInsightsAnalysisId(NetworkInsightsAnalysisIdT&& value) { m_networkInsightsAnalysisIdHasBeenSet = true; m_networkInsightsAnalysisId = std::forward<NetworkInsightsAnalysisIdT>(value); }
    template<typename NetworkInsightsAnalysisIdT = Aws::String>
    DeleteNetworkInsightsAnalysisResponse& WithNetworkInsightsAnalysisId(NetworkInsightsAnalysisIdT&& value) { SetNetworkInsightsAnalysisId(std::forward<NetworkInsightsAnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteNetworkInsightsAnalysisResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkInsightsAnalysisId;
    bool m_networkInsightsAnalysisIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
