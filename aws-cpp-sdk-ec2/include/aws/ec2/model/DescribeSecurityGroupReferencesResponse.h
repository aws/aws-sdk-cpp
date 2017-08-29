/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API DescribeSecurityGroupReferencesResponse
  {
  public:
    DescribeSecurityGroupReferencesResponse();
    DescribeSecurityGroupReferencesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeSecurityGroupReferencesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
