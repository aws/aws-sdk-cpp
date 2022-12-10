/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/MonitoringAlertStatus.h>
#include <aws/sagemaker/model/MonitoringAlertActions.h>
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
   * <p>Provides summary information about a monitor alert.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringAlertSummary">AWS
   * API Reference</a></p>
   */
  class MonitoringAlertSummary
  {
  public:
    AWS_SAGEMAKER_API MonitoringAlertSummary();
    AWS_SAGEMAKER_API MonitoringAlertSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringAlertSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline const Aws::String& GetMonitoringAlertName() const{ return m_monitoringAlertName; }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline bool MonitoringAlertNameHasBeenSet() const { return m_monitoringAlertNameHasBeenSet; }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline void SetMonitoringAlertName(const Aws::String& value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName = value; }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline void SetMonitoringAlertName(Aws::String&& value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName = std::move(value); }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline void SetMonitoringAlertName(const char* value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName.assign(value); }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline MonitoringAlertSummary& WithMonitoringAlertName(const Aws::String& value) { SetMonitoringAlertName(value); return *this;}

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline MonitoringAlertSummary& WithMonitoringAlertName(Aws::String&& value) { SetMonitoringAlertName(std::move(value)); return *this;}

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline MonitoringAlertSummary& WithMonitoringAlertName(const char* value) { SetMonitoringAlertName(value); return *this;}


    /**
     * <p>A timestamp that indicates when a monitor alert was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that indicates when a monitor alert was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when a monitor alert was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that indicates when a monitor alert was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when a monitor alert was created.</p>
     */
    inline MonitoringAlertSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when a monitor alert was created.</p>
     */
    inline MonitoringAlertSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when a monitor alert was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that indicates when a monitor alert was last updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when a monitor alert was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that indicates when a monitor alert was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when a monitor alert was last updated.</p>
     */
    inline MonitoringAlertSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when a monitor alert was last updated.</p>
     */
    inline MonitoringAlertSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The current status of an alert.</p>
     */
    inline const MonitoringAlertStatus& GetAlertStatus() const{ return m_alertStatus; }

    /**
     * <p>The current status of an alert.</p>
     */
    inline bool AlertStatusHasBeenSet() const { return m_alertStatusHasBeenSet; }

    /**
     * <p>The current status of an alert.</p>
     */
    inline void SetAlertStatus(const MonitoringAlertStatus& value) { m_alertStatusHasBeenSet = true; m_alertStatus = value; }

    /**
     * <p>The current status of an alert.</p>
     */
    inline void SetAlertStatus(MonitoringAlertStatus&& value) { m_alertStatusHasBeenSet = true; m_alertStatus = std::move(value); }

    /**
     * <p>The current status of an alert.</p>
     */
    inline MonitoringAlertSummary& WithAlertStatus(const MonitoringAlertStatus& value) { SetAlertStatus(value); return *this;}

    /**
     * <p>The current status of an alert.</p>
     */
    inline MonitoringAlertSummary& WithAlertStatus(MonitoringAlertStatus&& value) { SetAlertStatus(std::move(value)); return *this;}


    /**
     * <p>Within <code>EvaluationPeriod</code>, how many execution failures will raise
     * an alert.</p>
     */
    inline int GetDatapointsToAlert() const{ return m_datapointsToAlert; }

    /**
     * <p>Within <code>EvaluationPeriod</code>, how many execution failures will raise
     * an alert.</p>
     */
    inline bool DatapointsToAlertHasBeenSet() const { return m_datapointsToAlertHasBeenSet; }

    /**
     * <p>Within <code>EvaluationPeriod</code>, how many execution failures will raise
     * an alert.</p>
     */
    inline void SetDatapointsToAlert(int value) { m_datapointsToAlertHasBeenSet = true; m_datapointsToAlert = value; }

    /**
     * <p>Within <code>EvaluationPeriod</code>, how many execution failures will raise
     * an alert.</p>
     */
    inline MonitoringAlertSummary& WithDatapointsToAlert(int value) { SetDatapointsToAlert(value); return *this;}


    /**
     * <p>The number of most recent monitoring executions to consider when evaluating
     * alert status.</p>
     */
    inline int GetEvaluationPeriod() const{ return m_evaluationPeriod; }

    /**
     * <p>The number of most recent monitoring executions to consider when evaluating
     * alert status.</p>
     */
    inline bool EvaluationPeriodHasBeenSet() const { return m_evaluationPeriodHasBeenSet; }

    /**
     * <p>The number of most recent monitoring executions to consider when evaluating
     * alert status.</p>
     */
    inline void SetEvaluationPeriod(int value) { m_evaluationPeriodHasBeenSet = true; m_evaluationPeriod = value; }

    /**
     * <p>The number of most recent monitoring executions to consider when evaluating
     * alert status.</p>
     */
    inline MonitoringAlertSummary& WithEvaluationPeriod(int value) { SetEvaluationPeriod(value); return *this;}


    /**
     * <p>A list of alert actions taken in response to an alert going into
     * <code>InAlert</code> status.</p>
     */
    inline const MonitoringAlertActions& GetActions() const{ return m_actions; }

    /**
     * <p>A list of alert actions taken in response to an alert going into
     * <code>InAlert</code> status.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>A list of alert actions taken in response to an alert going into
     * <code>InAlert</code> status.</p>
     */
    inline void SetActions(const MonitoringAlertActions& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>A list of alert actions taken in response to an alert going into
     * <code>InAlert</code> status.</p>
     */
    inline void SetActions(MonitoringAlertActions&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>A list of alert actions taken in response to an alert going into
     * <code>InAlert</code> status.</p>
     */
    inline MonitoringAlertSummary& WithActions(const MonitoringAlertActions& value) { SetActions(value); return *this;}

    /**
     * <p>A list of alert actions taken in response to an alert going into
     * <code>InAlert</code> status.</p>
     */
    inline MonitoringAlertSummary& WithActions(MonitoringAlertActions&& value) { SetActions(std::move(value)); return *this;}

  private:

    Aws::String m_monitoringAlertName;
    bool m_monitoringAlertNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    MonitoringAlertStatus m_alertStatus;
    bool m_alertStatusHasBeenSet = false;

    int m_datapointsToAlert;
    bool m_datapointsToAlertHasBeenSet = false;

    int m_evaluationPeriod;
    bool m_evaluationPeriodHasBeenSet = false;

    MonitoringAlertActions m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
