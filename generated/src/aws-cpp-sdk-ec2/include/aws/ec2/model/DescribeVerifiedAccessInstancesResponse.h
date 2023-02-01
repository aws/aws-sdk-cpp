/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VerifiedAccessInstance.h>
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
  class DescribeVerifiedAccessInstancesResponse
  {
  public:
    AWS_EC2_API DescribeVerifiedAccessInstancesResponse();
    AWS_EC2_API DescribeVerifiedAccessInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVerifiedAccessInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The IDs of the Amazon Web Services Verified Access instances.</p>
     */
    inline const Aws::Vector<VerifiedAccessInstance>& GetVerifiedAccessInstances() const{ return m_verifiedAccessInstances; }

    /**
     * <p>The IDs of the Amazon Web Services Verified Access instances.</p>
     */
    inline void SetVerifiedAccessInstances(const Aws::Vector<VerifiedAccessInstance>& value) { m_verifiedAccessInstances = value; }

    /**
     * <p>The IDs of the Amazon Web Services Verified Access instances.</p>
     */
    inline void SetVerifiedAccessInstances(Aws::Vector<VerifiedAccessInstance>&& value) { m_verifiedAccessInstances = std::move(value); }

    /**
     * <p>The IDs of the Amazon Web Services Verified Access instances.</p>
     */
    inline DescribeVerifiedAccessInstancesResponse& WithVerifiedAccessInstances(const Aws::Vector<VerifiedAccessInstance>& value) { SetVerifiedAccessInstances(value); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services Verified Access instances.</p>
     */
    inline DescribeVerifiedAccessInstancesResponse& WithVerifiedAccessInstances(Aws::Vector<VerifiedAccessInstance>&& value) { SetVerifiedAccessInstances(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services Verified Access instances.</p>
     */
    inline DescribeVerifiedAccessInstancesResponse& AddVerifiedAccessInstances(const VerifiedAccessInstance& value) { m_verifiedAccessInstances.push_back(value); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services Verified Access instances.</p>
     */
    inline DescribeVerifiedAccessInstancesResponse& AddVerifiedAccessInstances(VerifiedAccessInstance&& value) { m_verifiedAccessInstances.push_back(std::move(value)); return *this; }


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
    inline DescribeVerifiedAccessInstancesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVerifiedAccessInstancesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVerifiedAccessInstancesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeVerifiedAccessInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVerifiedAccessInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<VerifiedAccessInstance> m_verifiedAccessInstances;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
