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
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Tenancy.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateVpc.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateVpcRequest : public EC2Request
  {
  public:
    CreateVpcRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpc"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>.</p>
     */
    inline CreateVpcRequest& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>.</p>
     */
    inline CreateVpcRequest& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>.</p>
     */
    inline CreateVpcRequest& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IP addresses, or the size of the CIDR
     * block.</p>
     */
    inline bool GetAmazonProvidedIpv6CidrBlock() const{ return m_amazonProvidedIpv6CidrBlock; }

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IP addresses, or the size of the CIDR
     * block.</p>
     */
    inline void SetAmazonProvidedIpv6CidrBlock(bool value) { m_amazonProvidedIpv6CidrBlockHasBeenSet = true; m_amazonProvidedIpv6CidrBlock = value; }

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IP addresses, or the size of the CIDR
     * block.</p>
     */
    inline CreateVpcRequest& WithAmazonProvidedIpv6CidrBlock(bool value) { SetAmazonProvidedIpv6CidrBlock(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateVpcRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline const Tenancy& GetInstanceTenancy() const{ return m_instanceTenancy; }

    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline void SetInstanceTenancy(const Tenancy& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }

    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline void SetInstanceTenancy(Tenancy&& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = std::move(value); }

    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline CreateVpcRequest& WithInstanceTenancy(const Tenancy& value) { SetInstanceTenancy(value); return *this;}

    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline CreateVpcRequest& WithInstanceTenancy(Tenancy&& value) { SetInstanceTenancy(std::move(value)); return *this;}

  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;

    bool m_amazonProvidedIpv6CidrBlock;
    bool m_amazonProvidedIpv6CidrBlockHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Tenancy m_instanceTenancy;
    bool m_instanceTenancyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
