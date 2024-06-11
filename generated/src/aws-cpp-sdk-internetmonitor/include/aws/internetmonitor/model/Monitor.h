﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/model/MonitorConfigState.h>
#include <aws/internetmonitor/model/MonitorProcessingStatusCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>The description of and information about a monitor in Amazon CloudWatch
   * Internet Monitor. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/Monitor">AWS
   * API Reference</a></p>
   */
  class Monitor
  {
  public:
    AWS_INTERNETMONITOR_API Monitor();
    AWS_INTERNETMONITOR_API Monitor(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Monitor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }
    inline Monitor& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}
    inline Monitor& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}
    inline Monitor& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArnHasBeenSet = true; m_monitorArn = value; }
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::move(value); }
    inline void SetMonitorArn(const char* value) { m_monitorArnHasBeenSet = true; m_monitorArn.assign(value); }
    inline Monitor& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}
    inline Monitor& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}
    inline Monitor& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a monitor.</p>
     */
    inline const MonitorConfigState& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MonitorConfigState& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MonitorConfigState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Monitor& WithStatus(const MonitorConfigState& value) { SetStatus(value); return *this;}
    inline Monitor& WithStatus(MonitorConfigState&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health of data processing for the monitor.</p>
     */
    inline const MonitorProcessingStatusCode& GetProcessingStatus() const{ return m_processingStatus; }
    inline bool ProcessingStatusHasBeenSet() const { return m_processingStatusHasBeenSet; }
    inline void SetProcessingStatus(const MonitorProcessingStatusCode& value) { m_processingStatusHasBeenSet = true; m_processingStatus = value; }
    inline void SetProcessingStatus(MonitorProcessingStatusCode&& value) { m_processingStatusHasBeenSet = true; m_processingStatus = std::move(value); }
    inline Monitor& WithProcessingStatus(const MonitorProcessingStatusCode& value) { SetProcessingStatus(value); return *this;}
    inline Monitor& WithProcessingStatus(MonitorProcessingStatusCode&& value) { SetProcessingStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    MonitorConfigState m_status;
    bool m_statusHasBeenSet = false;

    MonitorProcessingStatusCode m_processingStatus;
    bool m_processingStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
