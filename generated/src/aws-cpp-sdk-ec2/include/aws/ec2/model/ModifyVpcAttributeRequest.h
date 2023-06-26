/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpcAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpcAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * enabled, instances in the VPC get DNS hostnames; otherwise, they do not.</p>
     * <p>You cannot modify the DNS resolution and DNS hostnames attributes in the same
     * request. Use separate requests for each attribute. You can only enable DNS
     * hostnames if you've enabled DNS support.</p>
     */
    inline const AttributeBooleanValue& GetEnableDnsHostnames() const{ return m_enableDnsHostnames; }

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * enabled, instances in the VPC get DNS hostnames; otherwise, they do not.</p>
     * <p>You cannot modify the DNS resolution and DNS hostnames attributes in the same
     * request. Use separate requests for each attribute. You can only enable DNS
     * hostnames if you've enabled DNS support.</p>
     */
    inline bool EnableDnsHostnamesHasBeenSet() const { return m_enableDnsHostnamesHasBeenSet; }

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * enabled, instances in the VPC get DNS hostnames; otherwise, they do not.</p>
     * <p>You cannot modify the DNS resolution and DNS hostnames attributes in the same
     * request. Use separate requests for each attribute. You can only enable DNS
     * hostnames if you've enabled DNS support.</p>
     */
    inline void SetEnableDnsHostnames(const AttributeBooleanValue& value) { m_enableDnsHostnamesHasBeenSet = true; m_enableDnsHostnames = value; }

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * enabled, instances in the VPC get DNS hostnames; otherwise, they do not.</p>
     * <p>You cannot modify the DNS resolution and DNS hostnames attributes in the same
     * request. Use separate requests for each attribute. You can only enable DNS
     * hostnames if you've enabled DNS support.</p>
     */
    inline void SetEnableDnsHostnames(AttributeBooleanValue&& value) { m_enableDnsHostnamesHasBeenSet = true; m_enableDnsHostnames = std::move(value); }

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * enabled, instances in the VPC get DNS hostnames; otherwise, they do not.</p>
     * <p>You cannot modify the DNS resolution and DNS hostnames attributes in the same
     * request. Use separate requests for each attribute. You can only enable DNS
     * hostnames if you've enabled DNS support.</p>
     */
    inline ModifyVpcAttributeRequest& WithEnableDnsHostnames(const AttributeBooleanValue& value) { SetEnableDnsHostnames(value); return *this;}

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * enabled, instances in the VPC get DNS hostnames; otherwise, they do not.</p>
     * <p>You cannot modify the DNS resolution and DNS hostnames attributes in the same
     * request. Use separate requests for each attribute. You can only enable DNS
     * hostnames if you've enabled DNS support.</p>
     */
    inline ModifyVpcAttributeRequest& WithEnableDnsHostnames(AttributeBooleanValue&& value) { SetEnableDnsHostnames(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" succeed.
     * If disabled, the Amazon provided DNS service in the VPC that resolves public DNS
     * hostnames to IP addresses is not enabled.</p> <p>You cannot modify the DNS
     * resolution and DNS hostnames attributes in the same request. Use separate
     * requests for each attribute.</p>
     */
    inline const AttributeBooleanValue& GetEnableDnsSupport() const{ return m_enableDnsSupport; }

    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" succeed.
     * If disabled, the Amazon provided DNS service in the VPC that resolves public DNS
     * hostnames to IP addresses is not enabled.</p> <p>You cannot modify the DNS
     * resolution and DNS hostnames attributes in the same request. Use separate
     * requests for each attribute.</p>
     */
    inline bool EnableDnsSupportHasBeenSet() const { return m_enableDnsSupportHasBeenSet; }

    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" succeed.
     * If disabled, the Amazon provided DNS service in the VPC that resolves public DNS
     * hostnames to IP addresses is not enabled.</p> <p>You cannot modify the DNS
     * resolution and DNS hostnames attributes in the same request. Use separate
     * requests for each attribute.</p>
     */
    inline void SetEnableDnsSupport(const AttributeBooleanValue& value) { m_enableDnsSupportHasBeenSet = true; m_enableDnsSupport = value; }

    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" succeed.
     * If disabled, the Amazon provided DNS service in the VPC that resolves public DNS
     * hostnames to IP addresses is not enabled.</p> <p>You cannot modify the DNS
     * resolution and DNS hostnames attributes in the same request. Use separate
     * requests for each attribute.</p>
     */
    inline void SetEnableDnsSupport(AttributeBooleanValue&& value) { m_enableDnsSupportHasBeenSet = true; m_enableDnsSupport = std::move(value); }

    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" succeed.
     * If disabled, the Amazon provided DNS service in the VPC that resolves public DNS
     * hostnames to IP addresses is not enabled.</p> <p>You cannot modify the DNS
     * resolution and DNS hostnames attributes in the same request. Use separate
     * requests for each attribute.</p>
     */
    inline ModifyVpcAttributeRequest& WithEnableDnsSupport(const AttributeBooleanValue& value) { SetEnableDnsSupport(value); return *this;}

    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" succeed.
     * If disabled, the Amazon provided DNS service in the VPC that resolves public DNS
     * hostnames to IP addresses is not enabled.</p> <p>You cannot modify the DNS
     * resolution and DNS hostnames attributes in the same request. Use separate
     * requests for each attribute.</p>
     */
    inline ModifyVpcAttributeRequest& WithEnableDnsSupport(AttributeBooleanValue&& value) { SetEnableDnsSupport(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ModifyVpcAttributeRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ModifyVpcAttributeRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ModifyVpcAttributeRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Indicates whether Network Address Usage metrics are enabled for your VPC.</p>
     */
    inline const AttributeBooleanValue& GetEnableNetworkAddressUsageMetrics() const{ return m_enableNetworkAddressUsageMetrics; }

    /**
     * <p>Indicates whether Network Address Usage metrics are enabled for your VPC.</p>
     */
    inline bool EnableNetworkAddressUsageMetricsHasBeenSet() const { return m_enableNetworkAddressUsageMetricsHasBeenSet; }

    /**
     * <p>Indicates whether Network Address Usage metrics are enabled for your VPC.</p>
     */
    inline void SetEnableNetworkAddressUsageMetrics(const AttributeBooleanValue& value) { m_enableNetworkAddressUsageMetricsHasBeenSet = true; m_enableNetworkAddressUsageMetrics = value; }

    /**
     * <p>Indicates whether Network Address Usage metrics are enabled for your VPC.</p>
     */
    inline void SetEnableNetworkAddressUsageMetrics(AttributeBooleanValue&& value) { m_enableNetworkAddressUsageMetricsHasBeenSet = true; m_enableNetworkAddressUsageMetrics = std::move(value); }

    /**
     * <p>Indicates whether Network Address Usage metrics are enabled for your VPC.</p>
     */
    inline ModifyVpcAttributeRequest& WithEnableNetworkAddressUsageMetrics(const AttributeBooleanValue& value) { SetEnableNetworkAddressUsageMetrics(value); return *this;}

    /**
     * <p>Indicates whether Network Address Usage metrics are enabled for your VPC.</p>
     */
    inline ModifyVpcAttributeRequest& WithEnableNetworkAddressUsageMetrics(AttributeBooleanValue&& value) { SetEnableNetworkAddressUsageMetrics(std::move(value)); return *this;}

  private:

    AttributeBooleanValue m_enableDnsHostnames;
    bool m_enableDnsHostnamesHasBeenSet = false;

    AttributeBooleanValue m_enableDnsSupport;
    bool m_enableDnsSupportHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    AttributeBooleanValue m_enableNetworkAddressUsageMetrics;
    bool m_enableNetworkAddressUsageMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
