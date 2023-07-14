﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/WeeklyAutoScalingSchedule.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API SetTimeBasedAutoScalingRequest : public OpsWorksRequest
  {
  public:
    SetTimeBasedAutoScalingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetTimeBasedAutoScaling"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline SetTimeBasedAutoScalingRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline SetTimeBasedAutoScalingRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline SetTimeBasedAutoScalingRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>An <code>AutoScalingSchedule</code> with the instance schedule.</p>
     */
    inline const WeeklyAutoScalingSchedule& GetAutoScalingSchedule() const{ return m_autoScalingSchedule; }

    /**
     * <p>An <code>AutoScalingSchedule</code> with the instance schedule.</p>
     */
    inline bool AutoScalingScheduleHasBeenSet() const { return m_autoScalingScheduleHasBeenSet; }

    /**
     * <p>An <code>AutoScalingSchedule</code> with the instance schedule.</p>
     */
    inline void SetAutoScalingSchedule(const WeeklyAutoScalingSchedule& value) { m_autoScalingScheduleHasBeenSet = true; m_autoScalingSchedule = value; }

    /**
     * <p>An <code>AutoScalingSchedule</code> with the instance schedule.</p>
     */
    inline void SetAutoScalingSchedule(WeeklyAutoScalingSchedule&& value) { m_autoScalingScheduleHasBeenSet = true; m_autoScalingSchedule = std::move(value); }

    /**
     * <p>An <code>AutoScalingSchedule</code> with the instance schedule.</p>
     */
    inline SetTimeBasedAutoScalingRequest& WithAutoScalingSchedule(const WeeklyAutoScalingSchedule& value) { SetAutoScalingSchedule(value); return *this;}

    /**
     * <p>An <code>AutoScalingSchedule</code> with the instance schedule.</p>
     */
    inline SetTimeBasedAutoScalingRequest& WithAutoScalingSchedule(WeeklyAutoScalingSchedule&& value) { SetAutoScalingSchedule(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    WeeklyAutoScalingSchedule m_autoScalingSchedule;
    bool m_autoScalingScheduleHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
