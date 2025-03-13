/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkInsightsPath.h>
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
  class CreateNetworkInsightsPathResponse
  {
  public:
    AWS_EC2_API CreateNetworkInsightsPathResponse() = default;
    AWS_EC2_API CreateNetworkInsightsPathResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateNetworkInsightsPathResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the path.</p>
     */
    inline const NetworkInsightsPath& GetNetworkInsightsPath() const { return m_networkInsightsPath; }
    template<typename NetworkInsightsPathT = NetworkInsightsPath>
    void SetNetworkInsightsPath(NetworkInsightsPathT&& value) { m_networkInsightsPathHasBeenSet = true; m_networkInsightsPath = std::forward<NetworkInsightsPathT>(value); }
    template<typename NetworkInsightsPathT = NetworkInsightsPath>
    CreateNetworkInsightsPathResponse& WithNetworkInsightsPath(NetworkInsightsPathT&& value) { SetNetworkInsightsPath(std::forward<NetworkInsightsPathT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateNetworkInsightsPathResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    NetworkInsightsPath m_networkInsightsPath;
    bool m_networkInsightsPathHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
