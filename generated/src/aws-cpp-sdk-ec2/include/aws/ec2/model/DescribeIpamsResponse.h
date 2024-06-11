/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Ipam.h>
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
  class DescribeIpamsResponse
  {
  public:
    AWS_EC2_API DescribeIpamsResponse();
    AWS_EC2_API DescribeIpamsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpamsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeIpamsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeIpamsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeIpamsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPAMs.</p>
     */
    inline const Aws::Vector<Ipam>& GetIpams() const{ return m_ipams; }
    inline void SetIpams(const Aws::Vector<Ipam>& value) { m_ipams = value; }
    inline void SetIpams(Aws::Vector<Ipam>&& value) { m_ipams = std::move(value); }
    inline DescribeIpamsResponse& WithIpams(const Aws::Vector<Ipam>& value) { SetIpams(value); return *this;}
    inline DescribeIpamsResponse& WithIpams(Aws::Vector<Ipam>&& value) { SetIpams(std::move(value)); return *this;}
    inline DescribeIpamsResponse& AddIpams(const Ipam& value) { m_ipams.push_back(value); return *this; }
    inline DescribeIpamsResponse& AddIpams(Ipam&& value) { m_ipams.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeIpamsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeIpamsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Ipam> m_ipams;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
