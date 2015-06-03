/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_alarmDescriptionHasBeenSet(false),
    m_actionsEnabled(false),
    m_actionsEnabledHasBeenSet(false),
    m_oKActionsHasBeenSet(false),
    m_alarmActionsHasBeenSet(false),
    m_insufficientDataActionsHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_period(0),
    m_unitHasBeenSet(false),
    m_evaluationPeriods(0),
    m_threshold(0.0)
{
}

Aws::String PutMetricAlarmRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutMetricAlarm&";
  ss << "AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  if(m_alarmDescriptionHasBeenSet)
  {
    ss << "AlarmDescription=" << StringUtils::URLEncode(m_alarmDescription.c_str()) << "&";
  }
  if(m_actionsEnabledHasBeenSet)
  {
    ss << "ActionsEnabled=" << m_actionsEnabled << "&";
  }
  if(m_oKActionsHasBeenSet)
  {
    unsigned oKActionsCount = 1;
    for(auto& item : m_oKActions)
    {
      ss << "OKActions." << oKActionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      oKActionsCount++;
    }
  }
  if(m_alarmActionsHasBeenSet)
  {
    unsigned alarmActionsCount = 1;
    for(auto& item : m_alarmActions)
    {
      ss << "AlarmActions." << alarmActionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      alarmActionsCount++;
    }
  }
  if(m_insufficientDataActionsHasBeenSet)
  {
    unsigned insufficientDataActionsCount = 1;
    for(auto& item : m_insufficientDataActions)
    {
      ss << "InsufficientDataActions." << insufficientDataActionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      insufficientDataActionsCount++;
    }
  }
  ss << "MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  ss << "Statistic=" << StatisticMapper::GetNameForStatistic(m_statistic) << "&";
  if(m_dimensionsHasBeenSet)
  {
    unsigned dimensionsCount = 1;
    for(auto& item : m_dimensions)
    {
      item.OutputToStream(ss, "Dimensions.", dimensionsCount, "");
      dimensionsCount++;
    }
  }
  ss << "Period=" << m_period << "&";
  if(m_unitHasBeenSet)
  {
    ss << "Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }
  ss << "EvaluationPeriods=" << m_evaluationPeriods << "&";
  ss << "Threshold=" << m_threshold << "&";
  ss << "ComparisonOperator=" << ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator) << "&";
  ss << "Version=2010-08-01";
  return ss.str();
}

