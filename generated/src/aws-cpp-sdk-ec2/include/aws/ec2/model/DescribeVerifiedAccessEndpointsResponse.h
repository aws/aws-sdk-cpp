/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VerifiedAccessEndpoint.h>
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
  class DescribeVerifiedAccessEndpointsResponse
  {
  public:
    AWS_EC2_API DescribeVerifiedAccessEndpointsResponse();
    AWS_EC2_API DescribeVerifiedAccessEndpointsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVerifiedAccessEndpointsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const Aws::Vector<VerifiedAccessEndpoint>& GetVerifiedAccessEndpoints() const{ return m_verifiedAccessEndpoints; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpoints(const Aws::Vector<VerifiedAccessEndpoint>& value) { m_verifiedAccessEndpoints = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpoints(Aws::Vector<VerifiedAccessEndpoint>&& value) { m_verifiedAccessEndpoints = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DescribeVerifiedAccessEndpointsResponse& WithVerifiedAccessEndpoints(const Aws::Vector<VerifiedAccessEndpoint>& value) { SetVerifiedAccessEndpoints(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DescribeVerifiedAccessEndpointsResponse& WithVerifiedAccessEndpoints(Aws::Vector<VerifiedAccessEndpoint>&& value) { SetVerifiedAccessEndpoints(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DescribeVerifiedAccessEndpointsResponse& AddVerifiedAccessEndpoints(const VerifiedAccessEndpoint& value) { m_verifiedAccessEndpoints.push_back(value); return *this; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DescribeVerifiedAccessEndpointsResponse& AddVerifiedAccessEndpoints(VerifiedAccessEndpoint&& value) { m_verifiedAccessEndpoints.push_back(std::move(value)); return *this; }


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
    inline DescribeVerifiedAccessEndpointsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVerifiedAccessEndpointsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVerifiedAccessEndpointsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeVerifiedAccessEndpointsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVerifiedAccessEndpointsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<VerifiedAccessEndpoint> m_verifiedAccessEndpoints;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
