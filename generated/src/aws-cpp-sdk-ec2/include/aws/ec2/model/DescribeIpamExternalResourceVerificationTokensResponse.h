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
    AWS_EC2_API DescribeIpamExternalResourceVerificationTokensResponse();
    AWS_EC2_API DescribeIpamExternalResourceVerificationTokensResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpamExternalResourceVerificationTokensResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeIpamExternalResourceVerificationTokensResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Verification tokens.</p>
     */
    inline const Aws::Vector<IpamExternalResourceVerificationToken>& GetIpamExternalResourceVerificationTokens() const{ return m_ipamExternalResourceVerificationTokens; }
    inline void SetIpamExternalResourceVerificationTokens(const Aws::Vector<IpamExternalResourceVerificationToken>& value) { m_ipamExternalResourceVerificationTokens = value; }
    inline void SetIpamExternalResourceVerificationTokens(Aws::Vector<IpamExternalResourceVerificationToken>&& value) { m_ipamExternalResourceVerificationTokens = std::move(value); }
    inline DescribeIpamExternalResourceVerificationTokensResponse& WithIpamExternalResourceVerificationTokens(const Aws::Vector<IpamExternalResourceVerificationToken>& value) { SetIpamExternalResourceVerificationTokens(value); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensResponse& WithIpamExternalResourceVerificationTokens(Aws::Vector<IpamExternalResourceVerificationToken>&& value) { SetIpamExternalResourceVerificationTokens(std::move(value)); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensResponse& AddIpamExternalResourceVerificationTokens(const IpamExternalResourceVerificationToken& value) { m_ipamExternalResourceVerificationTokens.push_back(value); return *this; }
    inline DescribeIpamExternalResourceVerificationTokensResponse& AddIpamExternalResourceVerificationTokens(IpamExternalResourceVerificationToken&& value) { m_ipamExternalResourceVerificationTokens.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeIpamExternalResourceVerificationTokensResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeIpamExternalResourceVerificationTokensResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<IpamExternalResourceVerificationToken> m_ipamExternalResourceVerificationTokens;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
