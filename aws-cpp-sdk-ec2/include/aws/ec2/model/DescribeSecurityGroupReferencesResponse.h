/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SecurityGroupReference.h>
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
  class DescribeSecurityGroupReferencesResponse
  {
  public:
    AWS_EC2_API DescribeSecurityGroupReferencesResponse();
    AWS_EC2_API DescribeSecurityGroupReferencesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSecurityGroupReferencesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the VPCs with the referencing security groups.</p>
     */
    inline const Aws::Vector<SecurityGroupReference>& GetSecurityGroupReferenceSet() const{ return m_securityGroupReferenceSet; }

    /**
     * <p>Information about the VPCs with the referencing security groups.</p>
     */
    inline void SetSecurityGroupReferenceSet(const Aws::Vector<SecurityGroupReference>& value) { m_securityGroupReferenceSet = value; }

    /**
     * <p>Information about the VPCs with the referencing security groups.</p>
     */
    inline void SetSecurityGroupReferenceSet(Aws::Vector<SecurityGroupReference>&& value) { m_securityGroupReferenceSet = std::move(value); }

    /**
     * <p>Information about the VPCs with the referencing security groups.</p>
     */
    inline DescribeSecurityGroupReferencesResponse& WithSecurityGroupReferenceSet(const Aws::Vector<SecurityGroupReference>& value) { SetSecurityGroupReferenceSet(value); return *this;}

    /**
     * <p>Information about the VPCs with the referencing security groups.</p>
     */
    inline DescribeSecurityGroupReferencesResponse& WithSecurityGroupReferenceSet(Aws::Vector<SecurityGroupReference>&& value) { SetSecurityGroupReferenceSet(std::move(value)); return *this;}

    /**
     * <p>Information about the VPCs with the referencing security groups.</p>
     */
    inline DescribeSecurityGroupReferencesResponse& AddSecurityGroupReferenceSet(const SecurityGroupReference& value) { m_securityGroupReferenceSet.push_back(value); return *this; }

    /**
     * <p>Information about the VPCs with the referencing security groups.</p>
     */
    inline DescribeSecurityGroupReferencesResponse& AddSecurityGroupReferenceSet(SecurityGroupReference&& value) { m_securityGroupReferenceSet.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeSecurityGroupReferencesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSecurityGroupReferencesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SecurityGroupReference> m_securityGroupReferenceSet;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
