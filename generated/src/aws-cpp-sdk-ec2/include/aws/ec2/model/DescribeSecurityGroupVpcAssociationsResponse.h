/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SecurityGroupVpcAssociation.h>
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
  class DescribeSecurityGroupVpcAssociationsResponse
  {
  public:
    AWS_EC2_API DescribeSecurityGroupVpcAssociationsResponse();
    AWS_EC2_API DescribeSecurityGroupVpcAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSecurityGroupVpcAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The security group VPC associations.</p>
     */
    inline const Aws::Vector<SecurityGroupVpcAssociation>& GetSecurityGroupVpcAssociations() const{ return m_securityGroupVpcAssociations; }
    inline void SetSecurityGroupVpcAssociations(const Aws::Vector<SecurityGroupVpcAssociation>& value) { m_securityGroupVpcAssociations = value; }
    inline void SetSecurityGroupVpcAssociations(Aws::Vector<SecurityGroupVpcAssociation>&& value) { m_securityGroupVpcAssociations = std::move(value); }
    inline DescribeSecurityGroupVpcAssociationsResponse& WithSecurityGroupVpcAssociations(const Aws::Vector<SecurityGroupVpcAssociation>& value) { SetSecurityGroupVpcAssociations(value); return *this;}
    inline DescribeSecurityGroupVpcAssociationsResponse& WithSecurityGroupVpcAssociations(Aws::Vector<SecurityGroupVpcAssociation>&& value) { SetSecurityGroupVpcAssociations(std::move(value)); return *this;}
    inline DescribeSecurityGroupVpcAssociationsResponse& AddSecurityGroupVpcAssociations(const SecurityGroupVpcAssociation& value) { m_securityGroupVpcAssociations.push_back(value); return *this; }
    inline DescribeSecurityGroupVpcAssociationsResponse& AddSecurityGroupVpcAssociations(SecurityGroupVpcAssociation&& value) { m_securityGroupVpcAssociations.push_back(std::move(value)); return *this; }
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
    inline DescribeSecurityGroupVpcAssociationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSecurityGroupVpcAssociationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSecurityGroupVpcAssociationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeSecurityGroupVpcAssociationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeSecurityGroupVpcAssociationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityGroupVpcAssociation> m_securityGroupVpcAssociations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
