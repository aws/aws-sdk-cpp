/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/MetricAlarm.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

MetricAlarm::MetricAlarm() : 
    m_alarmNameHasBeenSet(false),
    m_alarmArnHasBeenSet(false),
    m_alarmDescriptionHasBeenSet(false),
    m_alarmConfigurationUpdatedTimestampHasBeenSet(false),
    m_actionsEnabled(false),
    m_actionsEnabledHasBeenSet(false),
    m_oKActionsHasBeenSet(false),
    m_alarmActionsHasBeenSet(false),
    m_insufficientDataActionsHasBeenSet(false),
    m_stateValue(StateValue::NOT_SET),
    m_stateValueHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonDataHasBeenSet(false),
    m_stateUpdatedTimestampHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false)
{
}

MetricAlarm::MetricAlarm(const XmlNode& xmlNode) : 
    m_alarmNameHasBeenSet(false),
    m_alarmArnHasBeenSet(false),
    m_alarmDescriptionHasBeenSet(false),
    m_alarmConfigurationUpdatedTimestampHasBeenSet(false),
    m_actionsEnabled(false),
    m_actionsEnabledHasBeenSet(false),
    m_oKActionsHasBeenSet(false),
    m_alarmActionsHasBeenSet(false),
    m_insufficientDataActionsHasBeenSet(false),
    m_stateValue(StateValue::NOT_SET),
    m_stateValueHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonDataHasBeenSet(false),
    m_stateUpdatedTimestampHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false)
{
  *this = xmlNode;
}

MetricAlarm& MetricAlarm::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode alarmNameNode = resultNode.FirstChild("AlarmName");
    if(!alarmNameNode.IsNull())
    {
      m_alarmName = StringUtils::Trim(alarmNameNode.GetText().c_str());
      m_alarmNameHasBeenSet = true;
    }
    XmlNode alarmArnNode = resultNode.FirstChild("AlarmArn");
    if(!alarmArnNode.IsNull())
    {
      m_alarmArn = StringUtils::Trim(alarmArnNode.GetText().c_str());
      m_alarmArnHasBeenSet = true;
    }
    XmlNode alarmDescriptionNode = resultNode.FirstChild("AlarmDescription");
    if(!alarmDescriptionNode.IsNull())
    {
      m_alarmDescription = StringUtils::Trim(alarmDescriptionNode.GetText().c_str());
      m_alarmDescriptionHasBeenSet = true;
    }
    XmlNode alarmConfigurationUpdatedTimestampNode = resultNode.FirstChild("AlarmConfigurationUpdatedTimestamp");
    if(!alarmConfigurationUpdatedTimestampNode.IsNull())
    {
      m_alarmConfigurationUpdatedTimestamp = DateTime(StringUtils::Trim(alarmConfigurationUpdatedTimestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_alarmConfigurationUpdatedTimestampHasBeenSet = true;
    }
    XmlNode actionsEnabledNode = resultNode.FirstChild("ActionsEnabled");
    if(!actionsEnabledNode.IsNull())
    {
      m_actionsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(actionsEnabledNode.GetText().c_str()).c_str());
      m_actionsEnabledHasBeenSet = true;
    }
    XmlNode oKActionsNode = resultNode.FirstChild("OKActions");
    if(!oKActionsNode.IsNull())
    {
      XmlNode oKActionsMember = oKActionsNode.FirstChild("member");
      while(!oKActionsMember.IsNull())
      {
        m_oKActions.push_back(StringUtils::Trim(oKActionsMember.GetText().c_str()));
        oKActionsMember = oKActionsMember.NextNode("member");
      }

      m_oKActionsHasBeenSet = true;
    }
    XmlNode alarmActionsNode = resultNode.FirstChild("AlarmActions");
    if(!alarmActionsNode.IsNull())
    {
      XmlNode alarmActionsMember = alarmActionsNode.FirstChild("member");
      while(!alarmActionsMember.IsNull())
      {
        m_alarmActions.push_back(StringUtils::Trim(alarmActionsMember.GetText().c_str()));
        alarmActionsMember = alarmActionsMember.NextNode("member");
      }

      m_alarmActionsHasBeenSet = true;
    }
    XmlNode insufficientDataActionsNode = resultNode.FirstChild("InsufficientDataActions");
    if(!insufficientDataActionsNode.IsNull())
    {
      XmlNode insufficientDataActionsMember = insufficientDataActionsNode.FirstChild("member");
      while(!insufficientDataActionsMember.IsNull())
      {
        m_insufficientDataActions.push_back(StringUtils::Trim(insufficientDataActionsMember.GetText().c_str()));
        insufficientDataActionsMember = insufficientDataActionsMember.NextNode("member");
      }

      m_insufficientDataActionsHasBeenSet = true;
    }
    XmlNode stateValueNode = resultNode.FirstChild("StateValue");
    if(!stateValueNode.IsNull())
    {
      m_stateValue = StateValueMapper::GetStateValueForName(StringUtils::Trim(stateValueNode.GetText().c_str()).c_str());
      m_stateValueHasBeenSet = true;
    }
    XmlNode stateReasonNode = resultNode.FirstChild("StateReason");
    if(!stateReasonNode.IsNull())
    {
      m_stateReason = StringUtils::Trim(stateReasonNode.GetText().c_str());
      m_stateReasonHasBeenSet = true;
    }
    XmlNode stateReasonDataNode = resultNode.FirstChild("StateReasonData");
    if(!stateReasonDataNode.IsNull())
    {
      m_stateReasonData = StringUtils::Trim(stateReasonDataNode.GetText().c_str());
      m_stateReasonDataHasBeenSet = true;
    }
    XmlNode stateUpdatedTimestampNode = resultNode.FirstChild("StateUpdatedTimestamp");
    if(!stateUpdatedTimestampNode.IsNull())
    {
      m_stateUpdatedTimestamp = DateTime(StringUtils::Trim(stateUpdatedTimestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_stateUpdatedTimestampHasBeenSet = true;
    }
    XmlNode metricNameNode = resultNode.FirstChild("MetricName");
    if(!metricNameNode.IsNull())
    {
      m_metricName = StringUtils::Trim(metricNameNode.GetText().c_str());
      m_metricNameHasBeenSet = true;
    }
    XmlNode namespaceNode = resultNode.FirstChild("Namespace");
    if(!namespaceNode.IsNull())
    {
      m_namespace = StringUtils::Trim(namespaceNode.GetText().c_str());
      m_namespaceHasBeenSet = true;
    }
    XmlNode statisticNode = resultNode.FirstChild("Statistic");
    if(!statisticNode.IsNull())
    {
      m_statistic = StatisticMapper::GetStatisticForName(StringUtils::Trim(statisticNode.GetText().c_str()).c_str());
      m_statisticHasBeenSet = true;
    }
    XmlNode dimensionsNode = resultNode.FirstChild("Dimensions");
    if(!dimensionsNode.IsNull())
    {
      XmlNode dimensionsMember = dimensionsNode.FirstChild("member");
      while(!dimensionsMember.IsNull())
      {
        m_dimensions.push_back(dimensionsMember);
        dimensionsMember = dimensionsMember.NextNode("member");
      }

      m_dimensionsHasBeenSet = true;
    }
    XmlNode periodNode = resultNode.FirstChild("Period");
    if(!periodNode.IsNull())
    {
      m_period = StringUtils::ConvertToInt32(StringUtils::Trim(periodNode.GetText().c_str()).c_str());
      m_periodHasBeenSet = true;
    }
    XmlNode unitNode = resultNode.FirstChild("Unit");
    if(!unitNode.IsNull())
    {
      m_unit = StandardUnitMapper::GetStandardUnitForName(StringUtils::Trim(unitNode.GetText().c_str()).c_str());
      m_unitHasBeenSet = true;
    }
    XmlNode evaluationPeriodsNode = resultNode.FirstChild("EvaluationPeriods");
    if(!evaluationPeriodsNode.IsNull())
    {
      m_evaluationPeriods = StringUtils::ConvertToInt32(StringUtils::Trim(evaluationPeriodsNode.GetText().c_str()).c_str());
      m_evaluationPeriodsHasBeenSet = true;
    }
    XmlNode thresholdNode = resultNode.FirstChild("Threshold");
    if(!thresholdNode.IsNull())
    {
      m_threshold = StringUtils::ConvertToDouble(StringUtils::Trim(thresholdNode.GetText().c_str()).c_str());
      m_thresholdHasBeenSet = true;
    }
    XmlNode comparisonOperatorNode = resultNode.FirstChild("ComparisonOperator");
    if(!comparisonOperatorNode.IsNull())
    {
      m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(StringUtils::Trim(comparisonOperatorNode.GetText().c_str()).c_str());
      m_comparisonOperatorHasBeenSet = true;
    }
  }

  return *this;
}

void MetricAlarm::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_alarmArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmArn=" << StringUtils::URLEncode(m_alarmArn.c_str()) << "&";
  }

  if(m_alarmDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmDescription=" << StringUtils::URLEncode(m_alarmDescription.c_str()) << "&";
  }

  if(m_alarmConfigurationUpdatedTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmConfigurationUpdatedTimestamp=" << StringUtils::URLEncode(m_alarmConfigurationUpdatedTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_actionsEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionsEnabled=" << m_actionsEnabled << "&";
  }

  if(m_oKActionsHasBeenSet)
  {
      unsigned oKActionsIdx = 1;
      for(auto& item : m_oKActions)
      {
        oStream << location << index << locationValue << ".OKActions.member." << oKActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_alarmActionsHasBeenSet)
  {
      unsigned alarmActionsIdx = 1;
      for(auto& item : m_alarmActions)
      {
        oStream << location << index << locationValue << ".AlarmActions.member." << alarmActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_insufficientDataActionsHasBeenSet)
  {
      unsigned insufficientDataActionsIdx = 1;
      for(auto& item : m_insufficientDataActions)
      {
        oStream << location << index << locationValue << ".InsufficientDataActions.member." << insufficientDataActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_stateValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateValue=" << StateValueMapper::GetNameForStateValue(m_stateValue) << "&";
  }

  if(m_stateReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }

  if(m_stateReasonDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateReasonData=" << StringUtils::URLEncode(m_stateReasonData.c_str()) << "&";
  }

  if(m_stateUpdatedTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateUpdatedTimestamp=" << StringUtils::URLEncode(m_stateUpdatedTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_metricNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_namespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_statisticHasBeenSet)
  {
      oStream << location << index << locationValue << ".Statistic=" << StatisticMapper::GetNameForStatistic(m_statistic) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
      unsigned dimensionsIdx = 1;
      for(auto& item : m_dimensions)
      {
        Aws::StringStream dimensionsSs;
        dimensionsSs << location << index << locationValue << ".Dimensions.member." << dimensionsIdx++;
        item.OutputToStream(oStream, dimensionsSs.str().c_str());
      }
  }

  if(m_periodHasBeenSet)
  {
      oStream << location << index << locationValue << ".Period=" << m_period << "&";
  }

  if(m_unitHasBeenSet)
  {
      oStream << location << index << locationValue << ".Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }

  if(m_evaluationPeriodsHasBeenSet)
  {
      oStream << location << index << locationValue << ".EvaluationPeriods=" << m_evaluationPeriods << "&";
  }

  if(m_thresholdHasBeenSet)
  {
        oStream << location << index << locationValue << ".Threshold=" << StringUtils::URLEncode(m_threshold) << "&";
  }

  if(m_comparisonOperatorHasBeenSet)
  {
      oStream << location << index << locationValue << ".ComparisonOperator=" << ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator) << "&";
  }

}

void MetricAlarm::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }
  if(m_alarmArnHasBeenSet)
  {
      oStream << location << ".AlarmArn=" << StringUtils::URLEncode(m_alarmArn.c_str()) << "&";
  }
  if(m_alarmDescriptionHasBeenSet)
  {
      oStream << location << ".AlarmDescription=" << StringUtils::URLEncode(m_alarmDescription.c_str()) << "&";
  }
  if(m_alarmConfigurationUpdatedTimestampHasBeenSet)
  {
      oStream << location << ".AlarmConfigurationUpdatedTimestamp=" << StringUtils::URLEncode(m_alarmConfigurationUpdatedTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_actionsEnabledHasBeenSet)
  {
      oStream << location << ".ActionsEnabled=" << m_actionsEnabled << "&";
  }
  if(m_oKActionsHasBeenSet)
  {
      unsigned oKActionsIdx = 1;
      for(auto& item : m_oKActions)
      {
        oStream << location << ".OKActions.member." << oKActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_alarmActionsHasBeenSet)
  {
      unsigned alarmActionsIdx = 1;
      for(auto& item : m_alarmActions)
      {
        oStream << location << ".AlarmActions.member." << alarmActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_insufficientDataActionsHasBeenSet)
  {
      unsigned insufficientDataActionsIdx = 1;
      for(auto& item : m_insufficientDataActions)
      {
        oStream << location << ".InsufficientDataActions.member." << insufficientDataActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_stateValueHasBeenSet)
  {
      oStream << location << ".StateValue=" << StateValueMapper::GetNameForStateValue(m_stateValue) << "&";
  }
  if(m_stateReasonHasBeenSet)
  {
      oStream << location << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }
  if(m_stateReasonDataHasBeenSet)
  {
      oStream << location << ".StateReasonData=" << StringUtils::URLEncode(m_stateReasonData.c_str()) << "&";
  }
  if(m_stateUpdatedTimestampHasBeenSet)
  {
      oStream << location << ".StateUpdatedTimestamp=" << StringUtils::URLEncode(m_stateUpdatedTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_metricNameHasBeenSet)
  {
      oStream << location << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }
  if(m_namespaceHasBeenSet)
  {
      oStream << location << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }
  if(m_statisticHasBeenSet)
  {
      oStream << location << ".Statistic=" << StatisticMapper::GetNameForStatistic(m_statistic) << "&";
  }
  if(m_dimensionsHasBeenSet)
  {
      unsigned dimensionsIdx = 1;
      for(auto& item : m_dimensions)
      {
        Aws::StringStream dimensionsSs;
        dimensionsSs << location <<  ".Dimensions.member." << dimensionsIdx++;
        item.OutputToStream(oStream, dimensionsSs.str().c_str());
      }
  }
  if(m_periodHasBeenSet)
  {
      oStream << location << ".Period=" << m_period << "&";
  }
  if(m_unitHasBeenSet)
  {
      oStream << location << ".Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }
  if(m_evaluationPeriodsHasBeenSet)
  {
      oStream << location << ".EvaluationPeriods=" << m_evaluationPeriods << "&";
  }
  if(m_thresholdHasBeenSet)
  {
        oStream << location << ".Threshold=" << StringUtils::URLEncode(m_threshold) << "&";
  }
  if(m_comparisonOperatorHasBeenSet)
  {
      oStream << location << ".ComparisonOperator=" << ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
