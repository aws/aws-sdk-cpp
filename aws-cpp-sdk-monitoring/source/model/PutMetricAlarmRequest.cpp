/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/monitoring/model/PutMetricAlarmRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

PutMetricAlarmRequest::PutMetricAlarmRequest() : 
    m_alarmNameHasBeenSet(false),
    m_alarmDescriptionHasBeenSet(false),
    m_actionsEnabled(false),
    m_actionsEnabledHasBeenSet(false),
    m_oKActionsHasBeenSet(false),
    m_alarmActionsHasBeenSet(false),
    m_insufficientDataActionsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_extendedStatisticHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_datapointsToAlarm(0),
    m_datapointsToAlarmHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_treatMissingDataHasBeenSet(false),
    m_evaluateLowSampleCountPercentileHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_thresholdMetricIdHasBeenSet(false)
{
}

Aws::String PutMetricAlarmRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutMetricAlarm&";
  if(m_alarmNameHasBeenSet)
  {
    ss << "AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_alarmDescriptionHasBeenSet)
  {
    ss << "AlarmDescription=" << StringUtils::URLEncode(m_alarmDescription.c_str()) << "&";
  }

  if(m_actionsEnabledHasBeenSet)
  {
    ss << "ActionsEnabled=" << std::boolalpha << m_actionsEnabled << "&";
  }

  if(m_oKActionsHasBeenSet)
  {
    unsigned oKActionsCount = 1;
    for(auto& item : m_oKActions)
    {
      ss << "OKActions.member." << oKActionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      oKActionsCount++;
    }
  }

  if(m_alarmActionsHasBeenSet)
  {
    unsigned alarmActionsCount = 1;
    for(auto& item : m_alarmActions)
    {
      ss << "AlarmActions.member." << alarmActionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      alarmActionsCount++;
    }
  }

  if(m_insufficientDataActionsHasBeenSet)
  {
    unsigned insufficientDataActionsCount = 1;
    for(auto& item : m_insufficientDataActions)
    {
      ss << "InsufficientDataActions.member." << insufficientDataActionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      insufficientDataActionsCount++;
    }
  }

  if(m_metricNameHasBeenSet)
  {
    ss << "MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_namespaceHasBeenSet)
  {
    ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_statisticHasBeenSet)
  {
    ss << "Statistic=" << StatisticMapper::GetNameForStatistic(m_statistic) << "&";
  }

  if(m_extendedStatisticHasBeenSet)
  {
    ss << "ExtendedStatistic=" << StringUtils::URLEncode(m_extendedStatistic.c_str()) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
    unsigned dimensionsCount = 1;
    for(auto& item : m_dimensions)
    {
      item.OutputToStream(ss, "Dimensions.member.", dimensionsCount, "");
      dimensionsCount++;
    }
  }

  if(m_periodHasBeenSet)
  {
    ss << "Period=" << m_period << "&";
  }

  if(m_unitHasBeenSet)
  {
    ss << "Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }

  if(m_evaluationPeriodsHasBeenSet)
  {
    ss << "EvaluationPeriods=" << m_evaluationPeriods << "&";
  }

  if(m_datapointsToAlarmHasBeenSet)
  {
    ss << "DatapointsToAlarm=" << m_datapointsToAlarm << "&";
  }

  if(m_thresholdHasBeenSet)
  {
    ss << "Threshold=" << StringUtils::URLEncode(m_threshold) << "&";
  }

  if(m_comparisonOperatorHasBeenSet)
  {
    ss << "ComparisonOperator=" << ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator) << "&";
  }

  if(m_treatMissingDataHasBeenSet)
  {
    ss << "TreatMissingData=" << StringUtils::URLEncode(m_treatMissingData.c_str()) << "&";
  }

  if(m_evaluateLowSampleCountPercentileHasBeenSet)
  {
    ss << "EvaluateLowSampleCountPercentile=" << StringUtils::URLEncode(m_evaluateLowSampleCountPercentile.c_str()) << "&";
  }

  if(m_metricsHasBeenSet)
  {
    unsigned metricsCount = 1;
    for(auto& item : m_metrics)
    {
      item.OutputToStream(ss, "Metrics.member.", metricsCount, "");
      metricsCount++;
    }
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_thresholdMetricIdHasBeenSet)
  {
    ss << "ThresholdMetricId=" << StringUtils::URLEncode(m_thresholdMetricId.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutMetricAlarmRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
