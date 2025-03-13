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
  class DeleteNetworkInsightsAccessScopeAnalysisResponse
  {
  public:
    AWS_EC2_API DeleteNetworkInsightsAccessScopeAnalysisResponse() = default;
    AWS_EC2_API DeleteNetworkInsightsAccessScopeAnalysisResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteNetworkInsightsAccessScopeAnalysisResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeAnalysisId() const { return m_networkInsightsAccessScopeAnalysisId; }
    template<typename NetworkInsightsAccessScopeAnalysisIdT = Aws::String>
    void SetNetworkInsightsAccessScopeAnalysisId(NetworkInsightsAccessScopeAnalysisIdT&& value) { m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true; m_networkInsightsAccessScopeAnalysisId = std::forward<NetworkInsightsAccessScopeAnalysisIdT>(value); }
    template<typename NetworkInsightsAccessScopeAnalysisIdT = Aws::String>
    DeleteNetworkInsightsAccessScopeAnalysisResponse& WithNetworkInsightsAccessScopeAnalysisId(NetworkInsightsAccessScopeAnalysisIdT&& value) { SetNetworkInsightsAccessScopeAnalysisId(std::forward<NetworkInsightsAccessScopeAnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteNetworkInsightsAccessScopeAnalysisResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkInsightsAccessScopeAnalysisId;
    bool m_networkInsightsAccessScopeAnalysisIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
