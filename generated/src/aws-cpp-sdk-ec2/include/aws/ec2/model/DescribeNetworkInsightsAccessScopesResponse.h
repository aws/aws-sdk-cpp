/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NetworkInsightsAccessScope.h>
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
  class DescribeNetworkInsightsAccessScopesResponse
  {
  public:
    AWS_EC2_API DescribeNetworkInsightsAccessScopesResponse() = default;
    AWS_EC2_API DescribeNetworkInsightsAccessScopesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeNetworkInsightsAccessScopesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Network Access Scopes.</p>
     */
    inline const Aws::Vector<NetworkInsightsAccessScope>& GetNetworkInsightsAccessScopes() const { return m_networkInsightsAccessScopes; }
    template<typename NetworkInsightsAccessScopesT = Aws::Vector<NetworkInsightsAccessScope>>
    void SetNetworkInsightsAccessScopes(NetworkInsightsAccessScopesT&& value) { m_networkInsightsAccessScopesHasBeenSet = true; m_networkInsightsAccessScopes = std::forward<NetworkInsightsAccessScopesT>(value); }
    template<typename NetworkInsightsAccessScopesT = Aws::Vector<NetworkInsightsAccessScope>>
    DescribeNetworkInsightsAccessScopesResponse& WithNetworkInsightsAccessScopes(NetworkInsightsAccessScopesT&& value) { SetNetworkInsightsAccessScopes(std::forward<NetworkInsightsAccessScopesT>(value)); return *this;}
    template<typename NetworkInsightsAccessScopesT = NetworkInsightsAccessScope>
    DescribeNetworkInsightsAccessScopesResponse& AddNetworkInsightsAccessScopes(NetworkInsightsAccessScopesT&& value) { m_networkInsightsAccessScopesHasBeenSet = true; m_networkInsightsAccessScopes.emplace_back(std::forward<NetworkInsightsAccessScopesT>(value)); return *this; }
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
    DescribeNetworkInsightsAccessScopesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeNetworkInsightsAccessScopesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkInsightsAccessScope> m_networkInsightsAccessScopes;
    bool m_networkInsightsAccessScopesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
