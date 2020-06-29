/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ScheduleStatus.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Summarizes the monitoring schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringScheduleSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MonitoringScheduleSummary
  {
  public:
    MonitoringScheduleSummary();
    MonitoringScheduleSummary(Aws::Utils::Json::JsonView jsonValue);
    MonitoringScheduleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const{ return m_monitoringScheduleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline bool MonitoringScheduleArnHasBeenSet() const { return m_monitoringScheduleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(const Aws::String& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(Aws::String&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(const char* value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithMonitoringScheduleArn(const Aws::String& value) { SetMonitoringScheduleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithMonitoringScheduleArn(Aws::String&& value) { SetMonitoringScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithMonitoringScheduleArn(const char* value) { SetMonitoringScheduleArn(value); return *this;}


    /**
     * <p>The creation time of the monitoring schedule.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the monitoring schedule.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of the monitoring schedule.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the monitoring schedule.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time of the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time of the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the monitoring schedule was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time the monitoring schedule was modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last time the monitoring schedule was modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last time the monitoring schedule was modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time the monitoring schedule was modified.</p>
     */
    inline MonitoringScheduleSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time the monitoring schedule was modified.</p>
     */
    inline MonitoringScheduleSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline const ScheduleStatus& GetMonitoringScheduleStatus() const{ return m_monitoringScheduleStatus; }

    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline bool MonitoringScheduleStatusHasBeenSet() const { return m_monitoringScheduleStatusHasBeenSet; }

    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleStatus(const ScheduleStatus& value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = value; }

    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleStatus(ScheduleStatus&& value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = std::move(value); }

    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithMonitoringScheduleStatus(const ScheduleStatus& value) { SetMonitoringScheduleStatus(value); return *this;}

    /**
     * <p>The status of the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithMonitoringScheduleStatus(ScheduleStatus&& value) { SetMonitoringScheduleStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the endpoint using the monitoring schedule.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint using the monitoring schedule.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint using the monitoring schedule.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint using the monitoring schedule.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint using the monitoring schedule.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint using the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint using the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint using the monitoring schedule.</p>
     */
    inline MonitoringScheduleSummary& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}

  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet;

    Aws::String m_monitoringScheduleArn;
    bool m_monitoringScheduleArnHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    ScheduleStatus m_monitoringScheduleStatus;
    bool m_monitoringScheduleStatusHasBeenSet;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
