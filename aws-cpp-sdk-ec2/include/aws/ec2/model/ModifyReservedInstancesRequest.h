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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ReservedInstancesConfiguration.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifyReservedInstances.</p>
   */
  class AWS_EC2_API ModifyReservedInstancesRequest : public EC2Request
  {
  public:
    ModifyReservedInstancesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A unique, case-sensitive token you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyReservedInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyReservedInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyReservedInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /**
     * <p>The IDs of the Reserved Instances to modify.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReservedInstancesIds() const{ return m_reservedInstancesIds; }

    /**
     * <p>The IDs of the Reserved Instances to modify.</p>
     */
    inline void SetReservedInstancesIds(const Aws::Vector<Aws::String>& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds = value; }

    /**
     * <p>The IDs of the Reserved Instances to modify.</p>
     */
    inline void SetReservedInstancesIds(Aws::Vector<Aws::String>&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds = value; }

    /**
     * <p>The IDs of the Reserved Instances to modify.</p>
     */
    inline ModifyReservedInstancesRequest& WithReservedInstancesIds(const Aws::Vector<Aws::String>& value) { SetReservedInstancesIds(value); return *this;}

    /**
     * <p>The IDs of the Reserved Instances to modify.</p>
     */
    inline ModifyReservedInstancesRequest& WithReservedInstancesIds(Aws::Vector<Aws::String>&& value) { SetReservedInstancesIds(value); return *this;}

    /**
     * <p>The IDs of the Reserved Instances to modify.</p>
     */
    inline ModifyReservedInstancesRequest& AddReservedInstancesIds(const Aws::String& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Reserved Instances to modify.</p>
     */
    inline ModifyReservedInstancesRequest& AddReservedInstancesIds(Aws::String&& value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Reserved Instances to modify.</p>
     */
    inline ModifyReservedInstancesRequest& AddReservedInstancesIds(const char* value) { m_reservedInstancesIdsHasBeenSet = true; m_reservedInstancesIds.push_back(value); return *this; }

    /**
     * <p>The configuration settings for the Reserved Instances to modify.</p>
     */
    inline const Aws::Vector<ReservedInstancesConfiguration>& GetTargetConfigurations() const{ return m_targetConfigurations; }

    /**
     * <p>The configuration settings for the Reserved Instances to modify.</p>
     */
    inline void SetTargetConfigurations(const Aws::Vector<ReservedInstancesConfiguration>& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations = value; }

    /**
     * <p>The configuration settings for the Reserved Instances to modify.</p>
     */
    inline void SetTargetConfigurations(Aws::Vector<ReservedInstancesConfiguration>&& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations = value; }

    /**
     * <p>The configuration settings for the Reserved Instances to modify.</p>
     */
    inline ModifyReservedInstancesRequest& WithTargetConfigurations(const Aws::Vector<ReservedInstancesConfiguration>& value) { SetTargetConfigurations(value); return *this;}

    /**
     * <p>The configuration settings for the Reserved Instances to modify.</p>
     */
    inline ModifyReservedInstancesRequest& WithTargetConfigurations(Aws::Vector<ReservedInstancesConfiguration>&& value) { SetTargetConfigurations(value); return *this;}

    /**
     * <p>The configuration settings for the Reserved Instances to modify.</p>
     */
    inline ModifyReservedInstancesRequest& AddTargetConfigurations(const ReservedInstancesConfiguration& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations.push_back(value); return *this; }

    /**
     * <p>The configuration settings for the Reserved Instances to modify.</p>
     */
    inline ModifyReservedInstancesRequest& AddTargetConfigurations(ReservedInstancesConfiguration&& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations.push_back(value); return *this; }

  private:
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    Aws::Vector<Aws::String> m_reservedInstancesIds;
    bool m_reservedInstancesIdsHasBeenSet;
    Aws::Vector<ReservedInstancesConfiguration> m_targetConfigurations;
    bool m_targetConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
