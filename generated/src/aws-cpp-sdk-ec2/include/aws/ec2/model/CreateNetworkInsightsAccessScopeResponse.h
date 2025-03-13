/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkInsightsAccessScope.h>
#include <aws/ec2/model/NetworkInsightsAccessScopeContent.h>
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
  class CreateNetworkInsightsAccessScopeResponse
  {
  public:
    AWS_EC2_API CreateNetworkInsightsAccessScopeResponse() = default;
    AWS_EC2_API CreateNetworkInsightsAccessScopeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateNetworkInsightsAccessScopeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Network Access Scope.</p>
     */
    inline const NetworkInsightsAccessScope& GetNetworkInsightsAccessScope() const { return m_networkInsightsAccessScope; }
    template<typename NetworkInsightsAccessScopeT = NetworkInsightsAccessScope>
    void SetNetworkInsightsAccessScope(NetworkInsightsAccessScopeT&& value) { m_networkInsightsAccessScopeHasBeenSet = true; m_networkInsightsAccessScope = std::forward<NetworkInsightsAccessScopeT>(value); }
    template<typename NetworkInsightsAccessScopeT = NetworkInsightsAccessScope>
    CreateNetworkInsightsAccessScopeResponse& WithNetworkInsightsAccessScope(NetworkInsightsAccessScopeT&& value) { SetNetworkInsightsAccessScope(std::forward<NetworkInsightsAccessScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Network Access Scope content.</p>
     */
    inline const NetworkInsightsAccessScopeContent& GetNetworkInsightsAccessScopeContent() const { return m_networkInsightsAccessScopeContent; }
    template<typename NetworkInsightsAccessScopeContentT = NetworkInsightsAccessScopeContent>
    void SetNetworkInsightsAccessScopeContent(NetworkInsightsAccessScopeContentT&& value) { m_networkInsightsAccessScopeContentHasBeenSet = true; m_networkInsightsAccessScopeContent = std::forward<NetworkInsightsAccessScopeContentT>(value); }
    template<typename NetworkInsightsAccessScopeContentT = NetworkInsightsAccessScopeContent>
    CreateNetworkInsightsAccessScopeResponse& WithNetworkInsightsAccessScopeContent(NetworkInsightsAccessScopeContentT&& value) { SetNetworkInsightsAccessScopeContent(std::forward<NetworkInsightsAccessScopeContentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateNetworkInsightsAccessScopeResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    NetworkInsightsAccessScope m_networkInsightsAccessScope;
    bool m_networkInsightsAccessScopeHasBeenSet = false;

    NetworkInsightsAccessScopeContent m_networkInsightsAccessScopeContent;
    bool m_networkInsightsAccessScopeContentHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
