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
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttributeBooleanValue.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifyVpcAttribute.</p>
   */
  class AWS_EC2_API ModifyVpcAttributeRequest : public EC2Request
  {
  public:
    ModifyVpcAttributeRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

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
    inline ModifyVpcAttributeRequest& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline ModifyVpcAttributeRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" will
     * succeed. If disabled, the Amazon provided DNS service in the VPC that resolves
     * public DNS hostnames to IP addresses is not enabled. </p> <p>You cannot modify
     * the DNS resolution and DNS hostnames attributes in the same request. Use
     * separate requests for each attribute.</p>
     */
    inline const AttributeBooleanValue& GetEnableDnsSupport() const{ return m_enableDnsSupport; }

    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" will
     * succeed. If disabled, the Amazon provided DNS service in the VPC that resolves
     * public DNS hostnames to IP addresses is not enabled. </p> <p>You cannot modify
     * the DNS resolution and DNS hostnames attributes in the same request. Use
     * separate requests for each attribute.</p>
     */
    inline void SetEnableDnsSupport(const AttributeBooleanValue& value) { m_enableDnsSupportHasBeenSet = true; m_enableDnsSupport = value; }

    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" will
     * succeed. If disabled, the Amazon provided DNS service in the VPC that resolves
     * public DNS hostnames to IP addresses is not enabled. </p> <p>You cannot modify
     * the DNS resolution and DNS hostnames attributes in the same request. Use
     * separate requests for each attribute.</p>
     */
    inline void SetEnableDnsSupport(AttributeBooleanValue&& value) { m_enableDnsSupportHasBeenSet = true; m_enableDnsSupport = value; }

    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" will
     * succeed. If disabled, the Amazon provided DNS service in the VPC that resolves
     * public DNS hostnames to IP addresses is not enabled. </p> <p>You cannot modify
     * the DNS resolution and DNS hostnames attributes in the same request. Use
     * separate requests for each attribute.</p>
     */
    inline ModifyVpcAttributeRequest& WithEnableDnsSupport(const AttributeBooleanValue& value) { SetEnableDnsSupport(value); return *this;}

    /**
     * <p>Indicates whether the DNS resolution is supported for the VPC. If enabled,
     * queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or
     * the reserved IP address at the base of the VPC network range "plus two" will
     * succeed. If disabled, the Amazon provided DNS service in the VPC that resolves
     * public DNS hostnames to IP addresses is not enabled. </p> <p>You cannot modify
     * the DNS resolution and DNS hostnames attributes in the same request. Use
     * separate requests for each attribute.</p>
     */
    inline ModifyVpcAttributeRequest& WithEnableDnsSupport(AttributeBooleanValue&& value) { SetEnableDnsSupport(value); return *this;}

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
    inline void SetEnableDnsHostnames(const AttributeBooleanValue& value) { m_enableDnsHostnamesHasBeenSet = true; m_enableDnsHostnames = value; }

    /**
     * <p>Indicates whether the instances launched in the VPC get DNS hostnames. If
     * enabled, instances in the VPC get DNS hostnames; otherwise, they do not.</p>
     * <p>You cannot modify the DNS resolution and DNS hostnames attributes in the same
     * request. Use separate requests for each attribute. You can only enable DNS
     * hostnames if you've enabled DNS support.</p>
     */
    inline void SetEnableDnsHostnames(AttributeBooleanValue&& value) { m_enableDnsHostnamesHasBeenSet = true; m_enableDnsHostnames = value; }

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
    inline ModifyVpcAttributeRequest& WithEnableDnsHostnames(AttributeBooleanValue&& value) { SetEnableDnsHostnames(value); return *this;}

  private:
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    AttributeBooleanValue m_enableDnsSupport;
    bool m_enableDnsSupportHasBeenSet;
    AttributeBooleanValue m_enableDnsHostnames;
    bool m_enableDnsHostnamesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
