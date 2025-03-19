/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/lightsail/model/MonitoredResourceInfo.h>
#include <aws/lightsail/model/ComparisonOperator.h>
#include <aws/lightsail/model/TreatMissingData.h>
#include <aws/lightsail/model/MetricStatistic.h>
#include <aws/lightsail/model/MetricName.h>
#include <aws/lightsail/model/AlarmState.h>
#include <aws/lightsail/model/MetricUnit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/ContactProtocol.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an alarm.</p> <p>An alarm is a way to monitor your Lightsail
   * resource metrics. For more information, see <a
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-alarms">Alarms
   * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Alarm">AWS API
   * Reference</a></p>
   */
  class Alarm
  {
  public:
    AWS_LIGHTSAIL_API Alarm() = default;
    AWS_LIGHTSAIL_API Alarm(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Alarm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Alarm& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Alarm& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the alarm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Alarm& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that lists information about the location of the alarm.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    Alarm& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type of the alarm.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline Alarm& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail alarm. This code enables our support team to look
     * up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    Alarm& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that lists information about the resource monitored by the
     * alarm.</p>
     */
    inline const MonitoredResourceInfo& GetMonitoredResourceInfo() const { return m_monitoredResourceInfo; }
    inline bool MonitoredResourceInfoHasBeenSet() const { return m_monitoredResourceInfoHasBeenSet; }
    template<typename MonitoredResourceInfoT = MonitoredResourceInfo>
    void SetMonitoredResourceInfo(MonitoredResourceInfoT&& value) { m_monitoredResourceInfoHasBeenSet = true; m_monitoredResourceInfo = std::forward<MonitoredResourceInfoT>(value); }
    template<typename MonitoredResourceInfoT = MonitoredResourceInfo>
    Alarm& WithMonitoredResourceInfo(MonitoredResourceInfoT&& value) { SetMonitoredResourceInfo(std::forward<MonitoredResourceInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arithmetic operation used when comparing the specified statistic and
     * threshold.</p>
     */
    inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline Alarm& WithComparisonOperator(ComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline int GetEvaluationPeriods() const { return m_evaluationPeriods; }
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline Alarm& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline Alarm& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline Alarm& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data points that must not within the specified threshold to
     * trigger the alarm.</p>
     */
    inline int GetDatapointsToAlarm() const { return m_datapointsToAlarm; }
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }
    inline Alarm& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the alarm handles missing data points.</p> <p>An alarm can
     * treat missing data in the following ways:</p> <ul> <li> <p>
     * <code>breaching</code> - Assume the missing data is not within the threshold.
     * Missing data counts towards the number of times the metric is not within the
     * threshold.</p> </li> <li> <p> <code>notBreaching</code> - Assume the missing
     * data is within the threshold. Missing data does not count towards the number of
     * times the metric is not within the threshold.</p> </li> <li> <p>
     * <code>ignore</code> - Ignore the missing data. Maintains the current alarm
     * state.</p> </li> <li> <p> <code>missing</code> - Missing data is treated as
     * missing.</p> </li> </ul>
     */
    inline TreatMissingData GetTreatMissingData() const { return m_treatMissingData; }
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }
    inline void SetTreatMissingData(TreatMissingData value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = value; }
    inline Alarm& WithTreatMissingData(TreatMissingData value) { SetTreatMissingData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric associated with the alarm.</p> <p>The following
     * statistics are available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest
     * value observed during the specified period. Use this value to determine low
     * volumes of activity for your application.</p> </li> <li> <p>
     * <code>Maximum</code> - The highest value observed during the specified period.
     * Use this value to determine high volumes of activity for your application.</p>
     * </li> <li> <p> <code>Sum</code> - All values submitted for the matching metric
     * added together. You can use this statistic to determine the total volume of a
     * metric.</p> </li> <li> <p> <code>Average</code> - The value of Sum / SampleCount
     * during the specified period. By comparing this statistic with the Minimum and
     * Maximum values, you can determine the full scope of a metric and how close the
     * average use is to the Minimum and Maximum values. This comparison helps you to
     * know when to increase or decrease your resources.</p> </li> <li> <p>
     * <code>SampleCount</code> - The count, or number, of data points used for the
     * statistical calculation.</p> </li> </ul>
     */
    inline MetricStatistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(MetricStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline Alarm& WithStatistic(MetricStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric associated with the alarm.</p>
     */
    inline MetricName GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(MetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline Alarm& WithMetricName(MetricName value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the alarm.</p> <p>An alarm has the following possible
     * states:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside of the
     * defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> - The alarm
     * has just started, the metric is not available, or not enough data is available
     * for the metric to determine the alarm state.</p> </li> <li> <p> <code>OK</code>
     * - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline AlarmState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AlarmState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Alarm& WithState(AlarmState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline MetricUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(MetricUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline Alarm& WithUnit(MetricUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact protocols for the alarm, such as <code>Email</code>,
     * <code>SMS</code> (text messaging), or both.</p>
     */
    inline const Aws::Vector<ContactProtocol>& GetContactProtocols() const { return m_contactProtocols; }
    inline bool ContactProtocolsHasBeenSet() const { return m_contactProtocolsHasBeenSet; }
    template<typename ContactProtocolsT = Aws::Vector<ContactProtocol>>
    void SetContactProtocols(ContactProtocolsT&& value) { m_contactProtocolsHasBeenSet = true; m_contactProtocols = std::forward<ContactProtocolsT>(value); }
    template<typename ContactProtocolsT = Aws::Vector<ContactProtocol>>
    Alarm& WithContactProtocols(ContactProtocolsT&& value) { SetContactProtocols(std::forward<ContactProtocolsT>(value)); return *this;}
    inline Alarm& AddContactProtocols(ContactProtocol value) { m_contactProtocolsHasBeenSet = true; m_contactProtocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The alarm states that trigger a notification.</p>
     */
    inline const Aws::Vector<AlarmState>& GetNotificationTriggers() const { return m_notificationTriggers; }
    inline bool NotificationTriggersHasBeenSet() const { return m_notificationTriggersHasBeenSet; }
    template<typename NotificationTriggersT = Aws::Vector<AlarmState>>
    void SetNotificationTriggers(NotificationTriggersT&& value) { m_notificationTriggersHasBeenSet = true; m_notificationTriggers = std::forward<NotificationTriggersT>(value); }
    template<typename NotificationTriggersT = Aws::Vector<AlarmState>>
    Alarm& WithNotificationTriggers(NotificationTriggersT&& value) { SetNotificationTriggers(std::forward<NotificationTriggersT>(value)); return *this;}
    inline Alarm& AddNotificationTriggers(AlarmState value) { m_notificationTriggersHasBeenSet = true; m_notificationTriggers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the alarm is enabled.</p>
     */
    inline bool GetNotificationEnabled() const { return m_notificationEnabled; }
    inline bool NotificationEnabledHasBeenSet() const { return m_notificationEnabledHasBeenSet; }
    inline void SetNotificationEnabled(bool value) { m_notificationEnabledHasBeenSet = true; m_notificationEnabled = value; }
    inline Alarm& WithNotificationEnabled(bool value) { SetNotificationEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    MonitoredResourceInfo m_monitoredResourceInfo;
    bool m_monitoredResourceInfoHasBeenSet = false;

    ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    int m_evaluationPeriods{0};
    bool m_evaluationPeriodsHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;

    int m_datapointsToAlarm{0};
    bool m_datapointsToAlarmHasBeenSet = false;

    TreatMissingData m_treatMissingData{TreatMissingData::NOT_SET};
    bool m_treatMissingDataHasBeenSet = false;

    MetricStatistic m_statistic{MetricStatistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    MetricName m_metricName{MetricName::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    AlarmState m_state{AlarmState::NOT_SET};
    bool m_stateHasBeenSet = false;

    MetricUnit m_unit{MetricUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    Aws::Vector<ContactProtocol> m_contactProtocols;
    bool m_contactProtocolsHasBeenSet = false;

    Aws::Vector<AlarmState> m_notificationTriggers;
    bool m_notificationTriggersHasBeenSet = false;

    bool m_notificationEnabled{false};
    bool m_notificationEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
