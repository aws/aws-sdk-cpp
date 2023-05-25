/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamScope.h>
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
  class DescribeIpamScopesResponse
  {
  public:
    AWS_EC2_API DescribeIpamScopesResponse();
    AWS_EC2_API DescribeIpamScopesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpamScopesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeIpamScopesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeIpamScopesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeIpamScopesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The scopes you want information on.</p>
     */
    inline const Aws::Vector<IpamScope>& GetIpamScopes() const{ return m_ipamScopes; }

    /**
     * <p>The scopes you want information on.</p>
     */
    inline void SetIpamScopes(const Aws::Vector<IpamScope>& value) { m_ipamScopes = value; }

    /**
     * <p>The scopes you want information on.</p>
     */
    inline void SetIpamScopes(Aws::Vector<IpamScope>&& value) { m_ipamScopes = std::move(value); }

    /**
     * <p>The scopes you want information on.</p>
     */
    inline DescribeIpamScopesResponse& WithIpamScopes(const Aws::Vector<IpamScope>& value) { SetIpamScopes(value); return *this;}

    /**
     * <p>The scopes you want information on.</p>
     */
    inline DescribeIpamScopesResponse& WithIpamScopes(Aws::Vector<IpamScope>&& value) { SetIpamScopes(std::move(value)); return *this;}

    /**
     * <p>The scopes you want information on.</p>
     */
    inline DescribeIpamScopesResponse& AddIpamScopes(const IpamScope& value) { m_ipamScopes.push_back(value); return *this; }

    /**
     * <p>The scopes you want information on.</p>
     */
    inline DescribeIpamScopesResponse& AddIpamScopes(IpamScope&& value) { m_ipamScopes.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeIpamScopesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeIpamScopesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<IpamScope> m_ipamScopes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
