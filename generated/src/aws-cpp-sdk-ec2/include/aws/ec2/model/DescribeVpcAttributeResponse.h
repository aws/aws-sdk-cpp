/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class DescribeVpcAttributeResponse
  {
  public:
    AWS_EC2_API DescribeVpcAttributeResponse();
    AWS_EC2_API DescribeVpcAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * this attribute is <code>true</code>, instances in the VPC get DNS hostnames;
     * otherwise, they do not.</p>
     */
    inline const AttributeBooleanValue& GetEnableDnsHostnames() const{ return m_enableDnsHostnames; }
    inline void SetEnableDnsHostnames(const AttributeBooleanValue& value) { m_enableDnsHostnames = value; }
    inline void SetEnableDnsHostnames(AttributeBooleanValue&& value) { m_enableDnsHostnames = std::move(value); }
    inline DescribeVpcAttributeResponse& WithEnableDnsHostnames(const AttributeBooleanValue& value) { SetEnableDnsHostnames(value); return *this;}
    inline DescribeVpcAttributeResponse& WithEnableDnsHostnames(AttributeBooleanValue&& value) { SetEnableDnsHostnames(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DNS resolution is enabled for the VPC. If this attribute is
     * <code>true</code>, the Amazon DNS server resolves DNS hostnames for your
     * instances to their corresponding IP addresses; otherwise, it does not.</p>
     */
    inline const AttributeBooleanValue& GetEnableDnsSupport() const{ return m_enableDnsSupport; }
    inline void SetEnableDnsSupport(const AttributeBooleanValue& value) { m_enableDnsSupport = value; }
    inline void SetEnableDnsSupport(AttributeBooleanValue&& value) { m_enableDnsSupport = std::move(value); }
    inline DescribeVpcAttributeResponse& WithEnableDnsSupport(const AttributeBooleanValue& value) { SetEnableDnsSupport(value); return *this;}
    inline DescribeVpcAttributeResponse& WithEnableDnsSupport(AttributeBooleanValue&& value) { SetEnableDnsSupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Network Address Usage metrics are enabled for your VPC.</p>
     */
    inline const AttributeBooleanValue& GetEnableNetworkAddressUsageMetrics() const{ return m_enableNetworkAddressUsageMetrics; }
    inline void SetEnableNetworkAddressUsageMetrics(const AttributeBooleanValue& value) { m_enableNetworkAddressUsageMetrics = value; }
    inline void SetEnableNetworkAddressUsageMetrics(AttributeBooleanValue&& value) { m_enableNetworkAddressUsageMetrics = std::move(value); }
    inline DescribeVpcAttributeResponse& WithEnableNetworkAddressUsageMetrics(const AttributeBooleanValue& value) { SetEnableNetworkAddressUsageMetrics(value); return *this;}
    inline DescribeVpcAttributeResponse& WithEnableNetworkAddressUsageMetrics(AttributeBooleanValue&& value) { SetEnableNetworkAddressUsageMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline DescribeVpcAttributeResponse& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline DescribeVpcAttributeResponse& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline DescribeVpcAttributeResponse& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeVpcAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeVpcAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    AttributeBooleanValue m_enableDnsHostnames;

    AttributeBooleanValue m_enableDnsSupport;

    AttributeBooleanValue m_enableNetworkAddressUsageMetrics;

    Aws::String m_vpcId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
