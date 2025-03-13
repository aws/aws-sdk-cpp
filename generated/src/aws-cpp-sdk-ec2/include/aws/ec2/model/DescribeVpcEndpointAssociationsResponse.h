/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpcEndpointAssociation.h>
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
  class DescribeVpcEndpointAssociationsResponse
  {
  public:
    AWS_EC2_API DescribeVpcEndpointAssociationsResponse() = default;
    AWS_EC2_API DescribeVpcEndpointAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcEndpointAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details of the endpoint associations.</p>
     */
    inline const Aws::Vector<VpcEndpointAssociation>& GetVpcEndpointAssociations() const { return m_vpcEndpointAssociations; }
    template<typename VpcEndpointAssociationsT = Aws::Vector<VpcEndpointAssociation>>
    void SetVpcEndpointAssociations(VpcEndpointAssociationsT&& value) { m_vpcEndpointAssociationsHasBeenSet = true; m_vpcEndpointAssociations = std::forward<VpcEndpointAssociationsT>(value); }
    template<typename VpcEndpointAssociationsT = Aws::Vector<VpcEndpointAssociation>>
    DescribeVpcEndpointAssociationsResponse& WithVpcEndpointAssociations(VpcEndpointAssociationsT&& value) { SetVpcEndpointAssociations(std::forward<VpcEndpointAssociationsT>(value)); return *this;}
    template<typename VpcEndpointAssociationsT = VpcEndpointAssociation>
    DescribeVpcEndpointAssociationsResponse& AddVpcEndpointAssociations(VpcEndpointAssociationsT&& value) { m_vpcEndpointAssociationsHasBeenSet = true; m_vpcEndpointAssociations.emplace_back(std::forward<VpcEndpointAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVpcEndpointAssociationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpcEndpointAssociationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcEndpointAssociation> m_vpcEndpointAssociations;
    bool m_vpcEndpointAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
