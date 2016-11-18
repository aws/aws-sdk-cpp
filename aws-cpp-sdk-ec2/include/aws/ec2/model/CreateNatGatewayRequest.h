﻿/*
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
   * <p>Contains the parameters for CreateNatGateway.</p>
   */
  class AWS_EC2_API CreateNatGatewayRequest : public EC2Request
  {
  public:
    CreateNatGatewayRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline CreateNatGatewayRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline CreateNatGatewayRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline CreateNatGatewayRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>The allocation ID of an Elastic IP address to associate with the NAT gateway.
     * If the Elastic IP address is associated with another resource, you must first
     * disassociate it.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>The allocation ID of an Elastic IP address to associate with the NAT gateway.
     * If the Elastic IP address is associated with another resource, you must first
     * disassociate it.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>The allocation ID of an Elastic IP address to associate with the NAT gateway.
     * If the Elastic IP address is associated with another resource, you must first
     * disassociate it.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>The allocation ID of an Elastic IP address to associate with the NAT gateway.
     * If the Elastic IP address is associated with another resource, you must first
     * disassociate it.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>The allocation ID of an Elastic IP address to associate with the NAT gateway.
     * If the Elastic IP address is associated with another resource, you must first
     * disassociate it.</p>
     */
    inline CreateNatGatewayRequest& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>The allocation ID of an Elastic IP address to associate with the NAT gateway.
     * If the Elastic IP address is associated with another resource, you must first
     * disassociate it.</p>
     */
    inline CreateNatGatewayRequest& WithAllocationId(Aws::String&& value) { SetAllocationId(value); return *this;}

    /**
     * <p>The allocation ID of an Elastic IP address to associate with the NAT gateway.
     * If the Elastic IP address is associated with another resource, you must first
     * disassociate it.</p>
     */
    inline CreateNatGatewayRequest& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline CreateNatGatewayRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline CreateNatGatewayRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline CreateNatGatewayRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:
    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
