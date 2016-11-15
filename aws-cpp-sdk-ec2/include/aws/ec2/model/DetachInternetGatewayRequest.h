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

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DetachInternetGateway.</p>
   */
  class AWS_EC2_API DetachInternetGatewayRequest : public EC2Request
  {
  public:
    DetachInternetGatewayRequest();
    Aws::String SerializePayload() const override;

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
    inline DetachInternetGatewayRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the Internet gateway.</p>
     */
    inline const Aws::String& GetInternetGatewayId() const{ return m_internetGatewayId; }

    /**
     * <p>The ID of the Internet gateway.</p>
     */
    inline void SetInternetGatewayId(const Aws::String& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = value; }

    /**
     * <p>The ID of the Internet gateway.</p>
     */
    inline void SetInternetGatewayId(Aws::String&& value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId = value; }

    /**
     * <p>The ID of the Internet gateway.</p>
     */
    inline void SetInternetGatewayId(const char* value) { m_internetGatewayIdHasBeenSet = true; m_internetGatewayId.assign(value); }

    /**
     * <p>The ID of the Internet gateway.</p>
     */
    inline DetachInternetGatewayRequest& WithInternetGatewayId(const Aws::String& value) { SetInternetGatewayId(value); return *this;}

    /**
     * <p>The ID of the Internet gateway.</p>
     */
    inline DetachInternetGatewayRequest& WithInternetGatewayId(Aws::String&& value) { SetInternetGatewayId(value); return *this;}

    /**
     * <p>The ID of the Internet gateway.</p>
     */
    inline DetachInternetGatewayRequest& WithInternetGatewayId(const char* value) { SetInternetGatewayId(value); return *this;}

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
    inline DetachInternetGatewayRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline DetachInternetGatewayRequest& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline DetachInternetGatewayRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_internetGatewayId;
    bool m_internetGatewayIdHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
