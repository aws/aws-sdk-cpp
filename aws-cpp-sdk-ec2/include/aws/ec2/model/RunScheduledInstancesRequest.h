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
#include <aws/ec2/model/ScheduledInstancesLaunchSpecification.h>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RunScheduledInstances.</p>
   */
  class AWS_EC2_API RunScheduledInstancesRequest : public EC2Request
  {
  public:
    RunScheduledInstancesRequest();
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
    inline RunScheduledInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline RunScheduledInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline RunScheduledInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline RunScheduledInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /**
     * <p>The number of instances.</p> <p>Default: 1</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances.</p> <p>Default: 1</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances.</p> <p>Default: 1</p>
     */
    inline RunScheduledInstancesRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline const Aws::String& GetScheduledInstanceId() const{ return m_scheduledInstanceId; }

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline void SetScheduledInstanceId(const Aws::String& value) { m_scheduledInstanceIdHasBeenSet = true; m_scheduledInstanceId = value; }

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline void SetScheduledInstanceId(Aws::String&& value) { m_scheduledInstanceIdHasBeenSet = true; m_scheduledInstanceId = value; }

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline void SetScheduledInstanceId(const char* value) { m_scheduledInstanceIdHasBeenSet = true; m_scheduledInstanceId.assign(value); }

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline RunScheduledInstancesRequest& WithScheduledInstanceId(const Aws::String& value) { SetScheduledInstanceId(value); return *this;}

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline RunScheduledInstancesRequest& WithScheduledInstanceId(Aws::String&& value) { SetScheduledInstanceId(value); return *this;}

    /**
     * <p>The Scheduled Instance ID.</p>
     */
    inline RunScheduledInstancesRequest& WithScheduledInstanceId(const char* value) { SetScheduledInstanceId(value); return *this;}

    /**
     * <p>The launch specification.</p>
     */
    inline const ScheduledInstancesLaunchSpecification& GetLaunchSpecification() const{ return m_launchSpecification; }

    /**
     * <p>The launch specification.</p>
     */
    inline void SetLaunchSpecification(const ScheduledInstancesLaunchSpecification& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }

    /**
     * <p>The launch specification.</p>
     */
    inline void SetLaunchSpecification(ScheduledInstancesLaunchSpecification&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }

    /**
     * <p>The launch specification.</p>
     */
    inline RunScheduledInstancesRequest& WithLaunchSpecification(const ScheduledInstancesLaunchSpecification& value) { SetLaunchSpecification(value); return *this;}

    /**
     * <p>The launch specification.</p>
     */
    inline RunScheduledInstancesRequest& WithLaunchSpecification(ScheduledInstancesLaunchSpecification&& value) { SetLaunchSpecification(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    int m_instanceCount;
    bool m_instanceCountHasBeenSet;
    Aws::String m_scheduledInstanceId;
    bool m_scheduledInstanceIdHasBeenSet;
    ScheduledInstancesLaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
