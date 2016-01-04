/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace EC2
{
namespace Model
{

  /*
  */
  class AWS_EC2_API CreateVpcRequest : public EC2Request
  {
  public:
    CreateVpcRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
    */
    inline bool GetDryRun() const{ return m_dryRun; }

    /*
     <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
    */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /*
     <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
    */
    inline CreateVpcRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /*
     <p>The network range for the VPC, in CIDR notation. For example, <code>10.0.0.0/16</code>.</p>
    */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /*
     <p>The network range for the VPC, in CIDR notation. For example, <code>10.0.0.0/16</code>.</p>
    */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /*
     <p>The network range for the VPC, in CIDR notation. For example, <code>10.0.0.0/16</code>.</p>
    */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /*
     <p>The network range for the VPC, in CIDR notation. For example, <code>10.0.0.0/16</code>.</p>
    */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /*
     <p>The network range for the VPC, in CIDR notation. For example, <code>10.0.0.0/16</code>.</p>
    */
    inline CreateVpcRequest& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /*
     <p>The network range for the VPC, in CIDR notation. For example, <code>10.0.0.0/16</code>.</p>
    */
    inline CreateVpcRequest& WithCidrBlock(Aws::String&& value) { SetCidrBlock(value); return *this;}

    /*
     <p>The network range for the VPC, in CIDR notation. For example, <code>10.0.0.0/16</code>.</p>
    */
    inline CreateVpcRequest& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}

    /*
     <p>The supported tenancy options for instances launched into the VPC. A value of <code>default</code> means that instances can be launched with any tenancy; a value of <code>dedicated</code> means all instances launched into the VPC are launched as dedicated tenancy instances regardless of the tenancy assigned to the instance at launch. Dedicated tenancy instances run on single-tenant hardware.</p> <p>Default: <code>default</code></p>
    */
    inline const Tenancy& GetInstanceTenancy() const{ return m_instanceTenancy; }

    /*
     <p>The supported tenancy options for instances launched into the VPC. A value of <code>default</code> means that instances can be launched with any tenancy; a value of <code>dedicated</code> means all instances launched into the VPC are launched as dedicated tenancy instances regardless of the tenancy assigned to the instance at launch. Dedicated tenancy instances run on single-tenant hardware.</p> <p>Default: <code>default</code></p>
    */
    inline void SetInstanceTenancy(const Tenancy& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }

    /*
     <p>The supported tenancy options for instances launched into the VPC. A value of <code>default</code> means that instances can be launched with any tenancy; a value of <code>dedicated</code> means all instances launched into the VPC are launched as dedicated tenancy instances regardless of the tenancy assigned to the instance at launch. Dedicated tenancy instances run on single-tenant hardware.</p> <p>Default: <code>default</code></p>
    */
    inline void SetInstanceTenancy(Tenancy&& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }

    /*
     <p>The supported tenancy options for instances launched into the VPC. A value of <code>default</code> means that instances can be launched with any tenancy; a value of <code>dedicated</code> means all instances launched into the VPC are launched as dedicated tenancy instances regardless of the tenancy assigned to the instance at launch. Dedicated tenancy instances run on single-tenant hardware.</p> <p>Default: <code>default</code></p>
    */
    inline CreateVpcRequest& WithInstanceTenancy(const Tenancy& value) { SetInstanceTenancy(value); return *this;}

    /*
     <p>The supported tenancy options for instances launched into the VPC. A value of <code>default</code> means that instances can be launched with any tenancy; a value of <code>dedicated</code> means all instances launched into the VPC are launched as dedicated tenancy instances regardless of the tenancy assigned to the instance at launch. Dedicated tenancy instances run on single-tenant hardware.</p> <p>Default: <code>default</code></p>
    */
    inline CreateVpcRequest& WithInstanceTenancy(Tenancy&& value) { SetInstanceTenancy(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;
    Tenancy m_instanceTenancy;
    bool m_instanceTenancyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
