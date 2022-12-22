/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VerifiedAccessGroup.h>
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
  class DescribeVerifiedAccessGroupsResponse
  {
  public:
    AWS_EC2_API DescribeVerifiedAccessGroupsResponse();
    AWS_EC2_API DescribeVerifiedAccessGroupsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVerifiedAccessGroupsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline const Aws::Vector<VerifiedAccessGroup>& GetVerifiedAccessGroups() const{ return m_verifiedAccessGroups; }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroups(const Aws::Vector<VerifiedAccessGroup>& value) { m_verifiedAccessGroups = value; }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroups(Aws::Vector<VerifiedAccessGroup>&& value) { m_verifiedAccessGroups = std::move(value); }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline DescribeVerifiedAccessGroupsResponse& WithVerifiedAccessGroups(const Aws::Vector<VerifiedAccessGroup>& value) { SetVerifiedAccessGroups(value); return *this;}

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline DescribeVerifiedAccessGroupsResponse& WithVerifiedAccessGroups(Aws::Vector<VerifiedAccessGroup>&& value) { SetVerifiedAccessGroups(std::move(value)); return *this;}

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline DescribeVerifiedAccessGroupsResponse& AddVerifiedAccessGroups(const VerifiedAccessGroup& value) { m_verifiedAccessGroups.push_back(value); return *this; }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline DescribeVerifiedAccessGroupsResponse& AddVerifiedAccessGroups(VerifiedAccessGroup&& value) { m_verifiedAccessGroups.push_back(std::move(value)); return *this; }


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
    inline DescribeVerifiedAccessGroupsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVerifiedAccessGroupsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVerifiedAccessGroupsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeVerifiedAccessGroupsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVerifiedAccessGroupsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<VerifiedAccessGroup> m_verifiedAccessGroups;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
