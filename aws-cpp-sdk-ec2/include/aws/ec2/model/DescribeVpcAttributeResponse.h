/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/ec2/model/ResponseMetadata.h>

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
  /**
   * <p>Contains the output of DescribeVpcAttribute.</p>
   */
  class AWS_EC2_API DescribeVpcAttributeResponse
  {
  public:
    DescribeVpcAttributeResponse();
    DescribeVpcAttributeResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeVpcAttributeResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline DescribeVpcAttributeResponse& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline DescribeVpcAttributeResponse& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline DescribeVpcAttributeResponse& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>Indicates whether DNS resolution is enabled for the VPC. If this attribute is
     * <code>true</code>, the Amazon DNS server resolves DNS hostnames for your
     * instances to their corresponding IP addresses; otherwise, it does not.</p>
     */
    inline const AttributeBooleanValue& GetEnableDnsSupport() const{ return m_enableDnsSupport; }

    /**
     * <p>Indicates whether DNS resolution is enabled for the VPC. If this attribute is
     * <code>true</code>, the Amazon DNS server resolves DNS hostnames for your
     * instances to their corresponding IP addresses; otherwise, it does not.</p>
     */
    inline void SetEnableDnsSupport(const AttributeBooleanValue& value) { m_enableDnsSupport = value; }

    /**
     * <p>Indicates whether DNS resolution is enabled for the VPC. If this attribute is
     * <code>true</code>, the Amazon DNS server resolves DNS hostnames for your
     * instances to their corresponding IP addresses; otherwise, it does not.</p>
     */
    inline void SetEnableDnsSupport(AttributeBooleanValue&& value) { m_enableDnsSupport = value; }

    /**
     * <p>Indicates whether DNS resolution is enabled for the VPC. If this attribute is
     * <code>true</code>, the Amazon DNS server resolves DNS hostnames for your
     * instances to their corresponding IP addresses; otherwise, it does not.</p>
     */
    inline DescribeVpcAttributeResponse& WithEnableDnsSupport(const AttributeBooleanValue& value) { SetEnableDnsSupport(value); return *this;}

    /**
     * <p>Indicates whether DNS resolution is enabled for the VPC. If this attribute is
     * <code>true</code>, the Amazon DNS server resolves DNS hostnames for your
     * instances to their corresponding IP addresses; otherwise, it does not.</p>
     */
    inline DescribeVpcAttributeResponse& WithEnableDnsSupport(AttributeBooleanValue&& value) { SetEnableDnsSupport(value); return *this;}

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * this attribute is <code>true</code>, instances in the VPC get DNS hostnames;
     * otherwise, they do not.</p>
     */
    inline const AttributeBooleanValue& GetEnableDnsHostnames() const{ return m_enableDnsHostnames; }

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * this attribute is <code>true</code>, instances in the VPC get DNS hostnames;
     * otherwise, they do not.</p>
     */
    inline void SetEnableDnsHostnames(const AttributeBooleanValue& value) { m_enableDnsHostnames = value; }

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * this attribute is <code>true</code>, instances in the VPC get DNS hostnames;
     * otherwise, they do not.</p>
     */
    inline void SetEnableDnsHostnames(AttributeBooleanValue&& value) { m_enableDnsHostnames = value; }

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * this attribute is <code>true</code>, instances in the VPC get DNS hostnames;
     * otherwise, they do not.</p>
     */
    inline DescribeVpcAttributeResponse& WithEnableDnsHostnames(const AttributeBooleanValue& value) { SetEnableDnsHostnames(value); return *this;}

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * this attribute is <code>true</code>, instances in the VPC get DNS hostnames;
     * otherwise, they do not.</p>
     */
    inline DescribeVpcAttributeResponse& WithEnableDnsHostnames(AttributeBooleanValue&& value) { SetEnableDnsHostnames(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeVpcAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVpcAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_vpcId;
    AttributeBooleanValue m_enableDnsSupport;
    AttributeBooleanValue m_enableDnsHostnames;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws