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
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
   * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Alarm">AWS API
   * Reference</a></p>
   */
  class Alarm
  {
  public:
    AWS_LIGHTSAIL_API Alarm();
    AWS_LIGHTSAIL_API Alarm(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Alarm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the alarm.</p>
     */
    inline Alarm& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the alarm.</p>
     */
    inline Alarm& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm.</p>
     */
    inline Alarm& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline Alarm& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline Alarm& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline Alarm& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The timestamp when the alarm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the alarm was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the alarm was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the alarm was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the alarm was created.</p>
     */
    inline Alarm& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the alarm was created.</p>
     */
    inline Alarm& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>An object that lists information about the location of the alarm.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>An object that lists information about the location of the alarm.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>An object that lists information about the location of the alarm.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>An object that lists information about the location of the alarm.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>An object that lists information about the location of the alarm.</p>
     */
    inline Alarm& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>An object that lists information about the location of the alarm.</p>
     */
    inline Alarm& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The Lightsail resource type (e.g., <code>Alarm</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type (e.g., <code>Alarm</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type (e.g., <code>Alarm</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type (e.g., <code>Alarm</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type (e.g., <code>Alarm</code>).</p>
     */
    inline Alarm& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type (e.g., <code>Alarm</code>).</p>
     */
    inline Alarm& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail alarm. This code enables our support team to look
     * up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail alarm. This code enables our support team to look
     * up your Lightsail information more easily.</p>
     */
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail alarm. This code enables our support team to look
     * up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail alarm. This code enables our support team to look
     * up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail alarm. This code enables our support team to look
     * up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail alarm. This code enables our support team to look
     * up your Lightsail information more easily.</p>
     */
    inline Alarm& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail alarm. This code enables our support team to look
     * up your Lightsail information more easily.</p>
     */
    inline Alarm& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail alarm. This code enables our support team to look
     * up your Lightsail information more easily.</p>
     */
    inline Alarm& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}


    /**
     * <p>An object that lists information about the resource monitored by the
     * alarm.</p>
     */
    inline const MonitoredResourceInfo& GetMonitoredResourceInfo() const{ return m_monitoredResourceInfo; }

    /**
     * <p>An object that lists information about the resource monitored by the
     * alarm.</p>
     */
    inline bool MonitoredResourceInfoHasBeenSet() const { return m_monitoredResourceInfoHasBeenSet; }

    /**
     * <p>An object that lists information about the resource monitored by the
     * alarm.</p>
     */
    inline void SetMonitoredResourceInfo(const MonitoredResourceInfo& value) { m_monitoredResourceInfoHasBeenSet = true; m_monitoredResourceInfo = value; }

    /**
     * <p>An object that lists information about the resource monitored by the
     * alarm.</p>
     */
    inline void SetMonitoredResourceInfo(MonitoredResourceInfo&& value) { m_monitoredResourceInfoHasBeenSet = true; m_monitoredResourceInfo = std::move(value); }

    /**
     * <p>An object that lists information about the resource monitored by the
     * alarm.</p>
     */
    inline Alarm& WithMonitoredResourceInfo(const MonitoredResourceInfo& value) { SetMonitoredResourceInfo(value); return *this;}

    /**
     * <p>An object that lists information about the resource monitored by the
     * alarm.</p>
     */
    inline Alarm& WithMonitoredResourceInfo(MonitoredResourceInfo&& value) { SetMonitoredResourceInfo(std::move(value)); return *this;}


    /**
     * <p>The arithmetic operation used when comparing the specified statistic and
     * threshold.</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The arithmetic operation used when comparing the specified statistic and
     * threshold.</p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>The arithmetic operation used when comparing the specified statistic and
     * threshold.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The arithmetic operation used when comparing the specified statistic and
     * threshold.</p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The arithmetic operation used when comparing the specified statistic and
     * threshold.</p>
     */
    inline Alarm& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The arithmetic operation used when comparing the specified statistic and
     * threshold.</p>
     */
    inline Alarm& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }

    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }

    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }

    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline Alarm& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}


    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline Alarm& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The value against which the specified statistic is compared.</p>
     */
    inline Alarm& WithThreshold(double value) { SetThreshold(value); return *this;}


    /**
     * <p>The number of data points that must not within the specified threshold to
     * trigger the alarm.</p>
     */
    inline int GetDatapointsToAlarm() const{ return m_datapointsToAlarm; }

    /**
     * <p>The number of data points that must not within the specified threshold to
     * trigger the alarm.</p>
     */
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }

    /**
     * <p>The number of data points that must not within the specified threshold to
     * trigger the alarm.</p>
     */
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }

    /**
     * <p>The number of data points that must not within the specified threshold to
     * trigger the alarm.</p>
     */
    inline Alarm& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}


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
    inline const TreatMissingData& GetTreatMissingData() const{ return m_treatMissingData; }

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
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }

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
    inline void SetTreatMissingData(const TreatMissingData& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = value; }

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
    inline void SetTreatMissingData(TreatMissingData&& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = std::move(value); }

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
    inline Alarm& WithTreatMissingData(const TreatMissingData& value) { SetTreatMissingData(value); return *this;}

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
    inline Alarm& WithTreatMissingData(TreatMissingData&& value) { SetTreatMissingData(std::move(value)); return *this;}


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
    inline const MetricStatistic& GetStatistic() const{ return m_statistic; }

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
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

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
    inline void SetStatistic(const MetricStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

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
    inline void SetStatistic(MetricStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

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
    inline Alarm& WithStatistic(const MetricStatistic& value) { SetStatistic(value); return *this;}

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
    inline Alarm& WithStatistic(MetricStatistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The name of the metric associated with the alarm.</p>
     */
    inline const MetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric associated with the alarm.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric associated with the alarm.</p>
     */
    inline void SetMetricName(const MetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric associated with the alarm.</p>
     */
    inline void SetMetricName(MetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric associated with the alarm.</p>
     */
    inline Alarm& WithMetricName(const MetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric associated with the alarm.</p>
     */
    inline Alarm& WithMetricName(MetricName&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>The current state of the alarm.</p> <p>An alarm has the following possible
     * states:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside of the
     * defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> - The alarm
     * has just started, the metric is not available, or not enough data is available
     * for the metric to determine the alarm state.</p> </li> <li> <p> <code>OK</code>
     * - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline const AlarmState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the alarm.</p> <p>An alarm has the following possible
     * states:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside of the
     * defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> - The alarm
     * has just started, the metric is not available, or not enough data is available
     * for the metric to determine the alarm state.</p> </li> <li> <p> <code>OK</code>
     * - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the alarm.</p> <p>An alarm has the following possible
     * states:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside of the
     * defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> - The alarm
     * has just started, the metric is not available, or not enough data is available
     * for the metric to determine the alarm state.</p> </li> <li> <p> <code>OK</code>
     * - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline void SetState(const AlarmState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the alarm.</p> <p>An alarm has the following possible
     * states:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside of the
     * defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> - The alarm
     * has just started, the metric is not available, or not enough data is available
     * for the metric to determine the alarm state.</p> </li> <li> <p> <code>OK</code>
     * - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline void SetState(AlarmState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the alarm.</p> <p>An alarm has the following possible
     * states:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside of the
     * defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> - The alarm
     * has just started, the metric is not available, or not enough data is available
     * for the metric to determine the alarm state.</p> </li> <li> <p> <code>OK</code>
     * - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline Alarm& WithState(const AlarmState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the alarm.</p> <p>An alarm has the following possible
     * states:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside of the
     * defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> - The alarm
     * has just started, the metric is not available, or not enough data is available
     * for the metric to determine the alarm state.</p> </li> <li> <p> <code>OK</code>
     * - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline Alarm& WithState(AlarmState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline const MetricUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline void SetUnit(const MetricUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline void SetUnit(MetricUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline Alarm& WithUnit(const MetricUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline Alarm& WithUnit(MetricUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The contact protocols for the alarm, such as <code>Email</code>,
     * <code>SMS</code> (text messaging), or both.</p>
     */
    inline const Aws::Vector<ContactProtocol>& GetContactProtocols() const{ return m_contactProtocols; }

    /**
     * <p>The contact protocols for the alarm, such as <code>Email</code>,
     * <code>SMS</code> (text messaging), or both.</p>
     */
    inline bool ContactProtocolsHasBeenSet() const { return m_contactProtocolsHasBeenSet; }

    /**
     * <p>The contact protocols for the alarm, such as <code>Email</code>,
     * <code>SMS</code> (text messaging), or both.</p>
     */
    inline void SetContactProtocols(const Aws::Vector<ContactProtocol>& value) { m_contactProtocolsHasBeenSet = true; m_contactProtocols = value; }

    /**
     * <p>The contact protocols for the alarm, such as <code>Email</code>,
     * <code>SMS</code> (text messaging), or both.</p>
     */
    inline void SetContactProtocols(Aws::Vector<ContactProtocol>&& value) { m_contactProtocolsHasBeenSet = true; m_contactProtocols = std::move(value); }

    /**
     * <p>The contact protocols for the alarm, such as <code>Email</code>,
     * <code>SMS</code> (text messaging), or both.</p>
     */
    inline Alarm& WithContactProtocols(const Aws::Vector<ContactProtocol>& value) { SetContactProtocols(value); return *this;}

    /**
     * <p>The contact protocols for the alarm, such as <code>Email</code>,
     * <code>SMS</code> (text messaging), or both.</p>
     */
    inline Alarm& WithContactProtocols(Aws::Vector<ContactProtocol>&& value) { SetContactProtocols(std::move(value)); return *this;}

    /**
     * <p>The contact protocols for the alarm, such as <code>Email</code>,
     * <code>SMS</code> (text messaging), or both.</p>
     */
    inline Alarm& AddContactProtocols(const ContactProtocol& value) { m_contactProtocolsHasBeenSet = true; m_contactProtocols.push_back(value); return *this; }

    /**
     * <p>The contact protocols for the alarm, such as <code>Email</code>,
     * <code>SMS</code> (text messaging), or both.</p>
     */
    inline Alarm& AddContactProtocols(ContactProtocol&& value) { m_contactProtocolsHasBeenSet = true; m_contactProtocols.push_back(std::move(value)); return *this; }


    /**
     * <p>The alarm states that trigger a notification.</p>
     */
    inline const Aws::Vector<AlarmState>& GetNotificationTriggers() const{ return m_notificationTriggers; }

    /**
     * <p>The alarm states that trigger a notification.</p>
     */
    inline bool NotificationTriggersHasBeenSet() const { return m_notificationTriggersHasBeenSet; }

    /**
     * <p>The alarm states that trigger a notification.</p>
     */
    inline void SetNotificationTriggers(const Aws::Vector<AlarmState>& value) { m_notificationTriggersHasBeenSet = true; m_notificationTriggers = value; }

    /**
     * <p>The alarm states that trigger a notification.</p>
     */
    inline void SetNotificationTriggers(Aws::Vector<AlarmState>&& value) { m_notificationTriggersHasBeenSet = true; m_notificationTriggers = std::move(value); }

    /**
     * <p>The alarm states that trigger a notification.</p>
     */
    inline Alarm& WithNotificationTriggers(const Aws::Vector<AlarmState>& value) { SetNotificationTriggers(value); return *this;}

    /**
     * <p>The alarm states that trigger a notification.</p>
     */
    inline Alarm& WithNotificationTriggers(Aws::Vector<AlarmState>&& value) { SetNotificationTriggers(std::move(value)); return *this;}

    /**
     * <p>The alarm states that trigger a notification.</p>
     */
    inline Alarm& AddNotificationTriggers(const AlarmState& value) { m_notificationTriggersHasBeenSet = true; m_notificationTriggers.push_back(value); return *this; }

    /**
     * <p>The alarm states that trigger a notification.</p>
     */
    inline Alarm& AddNotificationTriggers(AlarmState&& value) { m_notificationTriggersHasBeenSet = true; m_notificationTriggers.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the alarm is enabled.</p>
     */
    inline bool GetNotificationEnabled() const{ return m_notificationEnabled; }

    /**
     * <p>Indicates whether the alarm is enabled.</p>
     */
    inline bool NotificationEnabledHasBeenSet() const { return m_notificationEnabledHasBeenSet; }

    /**
     * <p>Indicates whether the alarm is enabled.</p>
     */
    inline void SetNotificationEnabled(bool value) { m_notificationEnabledHasBeenSet = true; m_notificationEnabled = value; }

    /**
     * <p>Indicates whether the alarm is enabled.</p>
     */
    inline Alarm& WithNotificationEnabled(bool value) { SetNotificationEnabled(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    MonitoredResourceInfo m_monitoredResourceInfo;
    bool m_monitoredResourceInfoHasBeenSet = false;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    double m_threshold;
    bool m_thresholdHasBeenSet = false;

    int m_datapointsToAlarm;
    bool m_datapointsToAlarmHasBeenSet = false;

    TreatMissingData m_treatMissingData;
    bool m_treatMissingDataHasBeenSet = false;

    MetricStatistic m_statistic;
    bool m_statisticHasBeenSet = false;

    MetricName m_metricName;
    bool m_metricNameHasBeenSet = false;

    AlarmState m_state;
    bool m_stateHasBeenSet = false;

    MetricUnit m_unit;
    bool m_unitHasBeenSet = false;

    Aws::Vector<ContactProtocol> m_contactProtocols;
    bool m_contactProtocolsHasBeenSet = false;

    Aws::Vector<AlarmState> m_notificationTriggers;
    bool m_notificationTriggersHasBeenSet = false;

    bool m_notificationEnabled;
    bool m_notificationEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
