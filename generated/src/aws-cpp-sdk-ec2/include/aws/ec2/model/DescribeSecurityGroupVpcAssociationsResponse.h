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
    AWS_EC2_API DescribeSecurityGroupVpcAssociationsResponse() = default;
    AWS_EC2_API DescribeSecurityGroupVpcAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSecurityGroupVpcAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The security group VPC associations.</p>
     */
    inline const Aws::Vector<SecurityGroupVpcAssociation>& GetSecurityGroupVpcAssociations() const { return m_securityGroupVpcAssociations; }
    template<typename SecurityGroupVpcAssociationsT = Aws::Vector<SecurityGroupVpcAssociation>>
    void SetSecurityGroupVpcAssociations(SecurityGroupVpcAssociationsT&& value) { m_securityGroupVpcAssociationsHasBeenSet = true; m_securityGroupVpcAssociations = std::forward<SecurityGroupVpcAssociationsT>(value); }
    template<typename SecurityGroupVpcAssociationsT = Aws::Vector<SecurityGroupVpcAssociation>>
    DescribeSecurityGroupVpcAssociationsResponse& WithSecurityGroupVpcAssociations(SecurityGroupVpcAssociationsT&& value) { SetSecurityGroupVpcAssociations(std::forward<SecurityGroupVpcAssociationsT>(value)); return *this;}
    template<typename SecurityGroupVpcAssociationsT = SecurityGroupVpcAssociation>
    DescribeSecurityGroupVpcAssociationsResponse& AddSecurityGroupVpcAssociations(SecurityGroupVpcAssociationsT&& value) { m_securityGroupVpcAssociationsHasBeenSet = true; m_securityGroupVpcAssociations.emplace_back(std::forward<SecurityGroupVpcAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSecurityGroupVpcAssociationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSecurityGroupVpcAssociationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityGroupVpcAssociation> m_securityGroupVpcAssociations;
    bool m_securityGroupVpcAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
