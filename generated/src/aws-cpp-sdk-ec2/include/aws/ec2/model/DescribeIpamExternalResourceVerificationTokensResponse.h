/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamExternalResourceVerificationToken.h>
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
  class DescribeIpamExternalResourceVerificationTokensResponse
  {
  public:
    AWS_EC2_API DescribeIpamExternalResourceVerificationTokensResponse() = default;
    AWS_EC2_API DescribeIpamExternalResourceVerificationTokensResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpamExternalResourceVerificationTokensResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeIpamExternalResourceVerificationTokensResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Verification tokens.</p>
     */
    inline const Aws::Vector<IpamExternalResourceVerificationToken>& GetIpamExternalResourceVerificationTokens() const { return m_ipamExternalResourceVerificationTokens; }
    template<typename IpamExternalResourceVerificationTokensT = Aws::Vector<IpamExternalResourceVerificationToken>>
    void SetIpamExternalResourceVerificationTokens(IpamExternalResourceVerificationTokensT&& value) { m_ipamExternalResourceVerificationTokensHasBeenSet = true; m_ipamExternalResourceVerificationTokens = std::forward<IpamExternalResourceVerificationTokensT>(value); }
    template<typename IpamExternalResourceVerificationTokensT = Aws::Vector<IpamExternalResourceVerificationToken>>
    DescribeIpamExternalResourceVerificationTokensResponse& WithIpamExternalResourceVerificationTokens(IpamExternalResourceVerificationTokensT&& value) { SetIpamExternalResourceVerificationTokens(std::forward<IpamExternalResourceVerificationTokensT>(value)); return *this;}
    template<typename IpamExternalResourceVerificationTokensT = IpamExternalResourceVerificationToken>
    DescribeIpamExternalResourceVerificationTokensResponse& AddIpamExternalResourceVerificationTokens(IpamExternalResourceVerificationTokensT&& value) { m_ipamExternalResourceVerificationTokensHasBeenSet = true; m_ipamExternalResourceVerificationTokens.emplace_back(std::forward<IpamExternalResourceVerificationTokensT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeIpamExternalResourceVerificationTokensResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<IpamExternalResourceVerificationToken> m_ipamExternalResourceVerificationTokens;
    bool m_ipamExternalResourceVerificationTokensHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
