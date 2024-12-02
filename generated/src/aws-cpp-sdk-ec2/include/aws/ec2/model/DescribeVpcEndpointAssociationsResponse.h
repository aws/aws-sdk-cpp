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
    AWS_EC2_API DescribeVpcEndpointAssociationsResponse();
    AWS_EC2_API DescribeVpcEndpointAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcEndpointAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details of the endpoint associations.</p>
     */
    inline const Aws::Vector<VpcEndpointAssociation>& GetVpcEndpointAssociations() const{ return m_vpcEndpointAssociations; }
    inline void SetVpcEndpointAssociations(const Aws::Vector<VpcEndpointAssociation>& value) { m_vpcEndpointAssociations = value; }
    inline void SetVpcEndpointAssociations(Aws::Vector<VpcEndpointAssociation>&& value) { m_vpcEndpointAssociations = std::move(value); }
    inline DescribeVpcEndpointAssociationsResponse& WithVpcEndpointAssociations(const Aws::Vector<VpcEndpointAssociation>& value) { SetVpcEndpointAssociations(value); return *this;}
    inline DescribeVpcEndpointAssociationsResponse& WithVpcEndpointAssociations(Aws::Vector<VpcEndpointAssociation>&& value) { SetVpcEndpointAssociations(std::move(value)); return *this;}
    inline DescribeVpcEndpointAssociationsResponse& AddVpcEndpointAssociations(const VpcEndpointAssociation& value) { m_vpcEndpointAssociations.push_back(value); return *this; }
    inline DescribeVpcEndpointAssociationsResponse& AddVpcEndpointAssociations(VpcEndpointAssociation&& value) { m_vpcEndpointAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeVpcEndpointAssociationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeVpcEndpointAssociationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeVpcEndpointAssociationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeVpcEndpointAssociationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeVpcEndpointAssociationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcEndpointAssociation> m_vpcEndpointAssociations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
