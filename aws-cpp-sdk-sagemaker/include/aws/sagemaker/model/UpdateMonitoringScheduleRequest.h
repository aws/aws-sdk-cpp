﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringScheduleConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API UpdateMonitoringScheduleRequest : public SageMakerRequest
  {
  public:
    UpdateMonitoringScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMonitoringSchedule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the monitoring schedule. The name must be unique within an Amazon
     * Web Services Region within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }

    /**
     * <p>The name of the monitoring schedule. The name must be unique within an Amazon
     * Web Services Region within an Amazon Web Services account.</p>
     */
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }

    /**
     * <p>The name of the monitoring schedule. The name must be unique within an Amazon
     * Web Services Region within an Amazon Web Services account.</p>
     */
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }

    /**
     * <p>The name of the monitoring schedule. The name must be unique within an Amazon
     * Web Services Region within an Amazon Web Services account.</p>
     */
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }

    /**
     * <p>The name of the monitoring schedule. The name must be unique within an Amazon
     * Web Services Region within an Amazon Web Services account.</p>
     */
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }

    /**
     * <p>The name of the monitoring schedule. The name must be unique within an Amazon
     * Web Services Region within an Amazon Web Services account.</p>
     */
    inline UpdateMonitoringScheduleRequest& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}

    /**
     * <p>The name of the monitoring schedule. The name must be unique within an Amazon
     * Web Services Region within an Amazon Web Services account.</p>
     */
    inline UpdateMonitoringScheduleRequest& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitoring schedule. The name must be unique within an Amazon
     * Web Services Region within an Amazon Web Services account.</p>
     */
    inline UpdateMonitoringScheduleRequest& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}


    /**
     * <p>The configuration object that specifies the monitoring schedule and defines
     * the monitoring job.</p>
     */
    inline const MonitoringScheduleConfig& GetMonitoringScheduleConfig() const{ return m_monitoringScheduleConfig; }

    /**
     * <p>The configuration object that specifies the monitoring schedule and defines
     * the monitoring job.</p>
     */
    inline bool MonitoringScheduleConfigHasBeenSet() const { return m_monitoringScheduleConfigHasBeenSet; }

    /**
     * <p>The configuration object that specifies the monitoring schedule and defines
     * the monitoring job.</p>
     */
    inline void SetMonitoringScheduleConfig(const MonitoringScheduleConfig& value) { m_monitoringScheduleConfigHasBeenSet = true; m_monitoringScheduleConfig = value; }

    /**
     * <p>The configuration object that specifies the monitoring schedule and defines
     * the monitoring job.</p>
     */
    inline void SetMonitoringScheduleConfig(MonitoringScheduleConfig&& value) { m_monitoringScheduleConfigHasBeenSet = true; m_monitoringScheduleConfig = std::move(value); }

    /**
     * <p>The configuration object that specifies the monitoring schedule and defines
     * the monitoring job.</p>
     */
    inline UpdateMonitoringScheduleRequest& WithMonitoringScheduleConfig(const MonitoringScheduleConfig& value) { SetMonitoringScheduleConfig(value); return *this;}

    /**
     * <p>The configuration object that specifies the monitoring schedule and defines
     * the monitoring job.</p>
     */
    inline UpdateMonitoringScheduleRequest& WithMonitoringScheduleConfig(MonitoringScheduleConfig&& value) { SetMonitoringScheduleConfig(std::move(value)); return *this;}

  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet;

    MonitoringScheduleConfig m_monitoringScheduleConfig;
    bool m_monitoringScheduleConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
