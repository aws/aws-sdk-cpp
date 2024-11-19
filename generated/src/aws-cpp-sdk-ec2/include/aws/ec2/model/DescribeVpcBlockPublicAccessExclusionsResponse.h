/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpcBlockPublicAccessExclusion.h>
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
  class DescribeVpcBlockPublicAccessExclusionsResponse
  {
  public:
    AWS_EC2_API DescribeVpcBlockPublicAccessExclusionsResponse();
    AWS_EC2_API DescribeVpcBlockPublicAccessExclusionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcBlockPublicAccessExclusionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details related to the exclusions.</p>
     */
    inline const Aws::Vector<VpcBlockPublicAccessExclusion>& GetVpcBlockPublicAccessExclusions() const{ return m_vpcBlockPublicAccessExclusions; }
    inline void SetVpcBlockPublicAccessExclusions(const Aws::Vector<VpcBlockPublicAccessExclusion>& value) { m_vpcBlockPublicAccessExclusions = value; }
    inline void SetVpcBlockPublicAccessExclusions(Aws::Vector<VpcBlockPublicAccessExclusion>&& value) { m_vpcBlockPublicAccessExclusions = std::move(value); }
    inline DescribeVpcBlockPublicAccessExclusionsResponse& WithVpcBlockPublicAccessExclusions(const Aws::Vector<VpcBlockPublicAccessExclusion>& value) { SetVpcBlockPublicAccessExclusions(value); return *this;}
    inline DescribeVpcBlockPublicAccessExclusionsResponse& WithVpcBlockPublicAccessExclusions(Aws::Vector<VpcBlockPublicAccessExclusion>&& value) { SetVpcBlockPublicAccessExclusions(std::move(value)); return *this;}
    inline DescribeVpcBlockPublicAccessExclusionsResponse& AddVpcBlockPublicAccessExclusions(const VpcBlockPublicAccessExclusion& value) { m_vpcBlockPublicAccessExclusions.push_back(value); return *this; }
    inline DescribeVpcBlockPublicAccessExclusionsResponse& AddVpcBlockPublicAccessExclusions(VpcBlockPublicAccessExclusion&& value) { m_vpcBlockPublicAccessExclusions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeVpcBlockPublicAccessExclusionsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeVpcBlockPublicAccessExclusionsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeVpcBlockPublicAccessExclusionsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeVpcBlockPublicAccessExclusionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeVpcBlockPublicAccessExclusionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcBlockPublicAccessExclusion> m_vpcBlockPublicAccessExclusions;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
