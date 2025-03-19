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
    AWS_EC2_API DescribeVpcAttributeResponse() = default;
    AWS_EC2_API DescribeVpcAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * this attribute is <code>true</code>, instances in the VPC get DNS hostnames;
     * otherwise, they do not.</p>
     */
    inline const AttributeBooleanValue& GetEnableDnsHostnames() const { return m_enableDnsHostnames; }
    template<typename EnableDnsHostnamesT = AttributeBooleanValue>
    void SetEnableDnsHostnames(EnableDnsHostnamesT&& value) { m_enableDnsHostnamesHasBeenSet = true; m_enableDnsHostnames = std::forward<EnableDnsHostnamesT>(value); }
    template<typename EnableDnsHostnamesT = AttributeBooleanValue>
    DescribeVpcAttributeResponse& WithEnableDnsHostnames(EnableDnsHostnamesT&& value) { SetEnableDnsHostnames(std::forward<EnableDnsHostnamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DNS resolution is enabled for the VPC. If this attribute is
     * <code>true</code>, the Amazon DNS server resolves DNS hostnames for your
     * instances to their corresponding IP addresses; otherwise, it does not.</p>
     */
    inline const AttributeBooleanValue& GetEnableDnsSupport() const { return m_enableDnsSupport; }
    template<typename EnableDnsSupportT = AttributeBooleanValue>
    void SetEnableDnsSupport(EnableDnsSupportT&& value) { m_enableDnsSupportHasBeenSet = true; m_enableDnsSupport = std::forward<EnableDnsSupportT>(value); }
    template<typename EnableDnsSupportT = AttributeBooleanValue>
    DescribeVpcAttributeResponse& WithEnableDnsSupport(EnableDnsSupportT&& value) { SetEnableDnsSupport(std::forward<EnableDnsSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Network Address Usage metrics are enabled for your VPC.</p>
     */
    inline const AttributeBooleanValue& GetEnableNetworkAddressUsageMetrics() const { return m_enableNetworkAddressUsageMetrics; }
    template<typename EnableNetworkAddressUsageMetricsT = AttributeBooleanValue>
    void SetEnableNetworkAddressUsageMetrics(EnableNetworkAddressUsageMetricsT&& value) { m_enableNetworkAddressUsageMetricsHasBeenSet = true; m_enableNetworkAddressUsageMetrics = std::forward<EnableNetworkAddressUsageMetricsT>(value); }
    template<typename EnableNetworkAddressUsageMetricsT = AttributeBooleanValue>
    DescribeVpcAttributeResponse& WithEnableNetworkAddressUsageMetrics(EnableNetworkAddressUsageMetricsT&& value) { SetEnableNetworkAddressUsageMetrics(std::forward<EnableNetworkAddressUsageMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DescribeVpcAttributeResponse& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpcAttributeResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    AttributeBooleanValue m_enableDnsHostnames;
    bool m_enableDnsHostnamesHasBeenSet = false;

    AttributeBooleanValue m_enableDnsSupport;
    bool m_enableDnsSupportHasBeenSet = false;

    AttributeBooleanValue m_enableNetworkAddressUsageMetrics;
    bool m_enableNetworkAddressUsageMetricsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
