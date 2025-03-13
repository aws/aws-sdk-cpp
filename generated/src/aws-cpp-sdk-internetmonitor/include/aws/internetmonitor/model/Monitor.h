/**
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
    AWS_INTERNETMONITOR_API Monitor() = default;
    AWS_INTERNETMONITOR_API Monitor(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Monitor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    Monitor& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    Monitor& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a monitor.</p>
     */
    inline MonitorConfigState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MonitorConfigState value) { m_statusHasBeenSet = true; m_status = value; }
    inline Monitor& WithStatus(MonitorConfigState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health of data processing for the monitor.</p>
     */
    inline MonitorProcessingStatusCode GetProcessingStatus() const { return m_processingStatus; }
    inline bool ProcessingStatusHasBeenSet() const { return m_processingStatusHasBeenSet; }
    inline void SetProcessingStatus(MonitorProcessingStatusCode value) { m_processingStatusHasBeenSet = true; m_processingStatus = value; }
    inline Monitor& WithProcessingStatus(MonitorProcessingStatusCode value) { SetProcessingStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    MonitorConfigState m_status{MonitorConfigState::NOT_SET};
    bool m_statusHasBeenSet = false;

    MonitorProcessingStatusCode m_processingStatus{MonitorProcessingStatusCode::NOT_SET};
    bool m_processingStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
