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
    AWS_EC2_API DescribeSecurityGroupReferencesResponse() = default;
    AWS_EC2_API DescribeSecurityGroupReferencesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSecurityGroupReferencesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the VPCs with the referencing security groups.</p>
     */
    inline const Aws::Vector<SecurityGroupReference>& GetSecurityGroupReferenceSet() const { return m_securityGroupReferenceSet; }
    template<typename SecurityGroupReferenceSetT = Aws::Vector<SecurityGroupReference>>
    void SetSecurityGroupReferenceSet(SecurityGroupReferenceSetT&& value) { m_securityGroupReferenceSetHasBeenSet = true; m_securityGroupReferenceSet = std::forward<SecurityGroupReferenceSetT>(value); }
    template<typename SecurityGroupReferenceSetT = Aws::Vector<SecurityGroupReference>>
    DescribeSecurityGroupReferencesResponse& WithSecurityGroupReferenceSet(SecurityGroupReferenceSetT&& value) { SetSecurityGroupReferenceSet(std::forward<SecurityGroupReferenceSetT>(value)); return *this;}
    template<typename SecurityGroupReferenceSetT = SecurityGroupReference>
    DescribeSecurityGroupReferencesResponse& AddSecurityGroupReferenceSet(SecurityGroupReferenceSetT&& value) { m_securityGroupReferenceSetHasBeenSet = true; m_securityGroupReferenceSet.emplace_back(std::forward<SecurityGroupReferenceSetT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSecurityGroupReferencesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityGroupReference> m_securityGroupReferenceSet;
    bool m_securityGroupReferenceSetHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
