/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ByoipCidr.h>
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
  class DescribeByoipCidrsResponse
  {
  public:
    AWS_EC2_API DescribeByoipCidrsResponse();
    AWS_EC2_API DescribeByoipCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeByoipCidrsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about your address ranges.</p>
     */
    inline const Aws::Vector<ByoipCidr>& GetByoipCidrs() const{ return m_byoipCidrs; }

    /**
     * <p>Information about your address ranges.</p>
     */
    inline void SetByoipCidrs(const Aws::Vector<ByoipCidr>& value) { m_byoipCidrs = value; }

    /**
     * <p>Information about your address ranges.</p>
     */
    inline void SetByoipCidrs(Aws::Vector<ByoipCidr>&& value) { m_byoipCidrs = std::move(value); }

    /**
     * <p>Information about your address ranges.</p>
     */
    inline DescribeByoipCidrsResponse& WithByoipCidrs(const Aws::Vector<ByoipCidr>& value) { SetByoipCidrs(value); return *this;}

    /**
     * <p>Information about your address ranges.</p>
     */
    inline DescribeByoipCidrsResponse& WithByoipCidrs(Aws::Vector<ByoipCidr>&& value) { SetByoipCidrs(std::move(value)); return *this;}

    /**
     * <p>Information about your address ranges.</p>
     */
    inline DescribeByoipCidrsResponse& AddByoipCidrs(const ByoipCidr& value) { m_byoipCidrs.push_back(value); return *this; }

    /**
     * <p>Information about your address ranges.</p>
     */
    inline DescribeByoipCidrsResponse& AddByoipCidrs(ByoipCidr&& value) { m_byoipCidrs.push_back(std::move(value)); return *this; }


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
    inline DescribeByoipCidrsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeByoipCidrsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeByoipCidrsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeByoipCidrsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeByoipCidrsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ByoipCidr> m_byoipCidrs;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
