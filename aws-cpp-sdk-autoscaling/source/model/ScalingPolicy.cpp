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

#include <aws/autoscaling/model/ScalingPolicy.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

ScalingPolicy::ScalingPolicy() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyARNHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_adjustmentTypeHasBeenSet(false),
    m_minAdjustmentStep(0),
    m_minAdjustmentStepHasBeenSet(false),
    m_minAdjustmentMagnitude(0),
    m_minAdjustmentMagnitudeHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false),
    m_cooldown(0),
    m_cooldownHasBeenSet(false),
    m_stepAdjustmentsHasBeenSet(false),
    m_metricAggregationTypeHasBeenSet(false),
    m_estimatedInstanceWarmup(0),
    m_estimatedInstanceWarmupHasBeenSet(false),
    m_alarmsHasBeenSet(false),
    m_targetTrackingConfigurationHasBeenSet(false)
{
}

ScalingPolicy::ScalingPolicy(const XmlNode& xmlNode) : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyARNHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_adjustmentTypeHasBeenSet(false),
    m_minAdjustmentStep(0),
    m_minAdjustmentStepHasBeenSet(false),
    m_minAdjustmentMagnitude(0),
    m_minAdjustmentMagnitudeHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false),
    m_cooldown(0),
    m_cooldownHasBeenSet(false),
    m_stepAdjustmentsHasBeenSet(false),
    m_metricAggregationTypeHasBeenSet(false),
    m_estimatedInstanceWarmup(0),
    m_estimatedInstanceWarmupHasBeenSet(false),
    m_alarmsHasBeenSet(false),
    m_targetTrackingConfigurationHasBeenSet(false)
{
  *this = xmlNode;
}

ScalingPolicy& ScalingPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    if(!autoScalingGroupNameNode.IsNull())
    {
      m_autoScalingGroupName = autoScalingGroupNameNode.GetText();
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode policyNameNode = resultNode.FirstChild("PolicyName");
    if(!policyNameNode.IsNull())
    {
      m_policyName = policyNameNode.GetText();
      m_policyNameHasBeenSet = true;
    }
    XmlNode policyARNNode = resultNode.FirstChild("PolicyARN");
    if(!policyARNNode.IsNull())
    {
      m_policyARN = policyARNNode.GetText();
      m_policyARNHasBeenSet = true;
    }
    XmlNode policyTypeNode = resultNode.FirstChild("PolicyType");
    if(!policyTypeNode.IsNull())
    {
      m_policyType = policyTypeNode.GetText();
      m_policyTypeHasBeenSet = true;
    }
    XmlNode adjustmentTypeNode = resultNode.FirstChild("AdjustmentType");
    if(!adjustmentTypeNode.IsNull())
    {
      m_adjustmentType = adjustmentTypeNode.GetText();
      m_adjustmentTypeHasBeenSet = true;
    }
    XmlNode minAdjustmentStepNode = resultNode.FirstChild("MinAdjustmentStep");
    if(!minAdjustmentStepNode.IsNull())
    {
      m_minAdjustmentStep = StringUtils::ConvertToInt32(StringUtils::Trim(minAdjustmentStepNode.GetText().c_str()).c_str());
      m_minAdjustmentStepHasBeenSet = true;
    }
    XmlNode minAdjustmentMagnitudeNode = resultNode.FirstChild("MinAdjustmentMagnitude");
    if(!minAdjustmentMagnitudeNode.IsNull())
    {
      m_minAdjustmentMagnitude = StringUtils::ConvertToInt32(StringUtils::Trim(minAdjustmentMagnitudeNode.GetText().c_str()).c_str());
      m_minAdjustmentMagnitudeHasBeenSet = true;
    }
    XmlNode scalingAdjustmentNode = resultNode.FirstChild("ScalingAdjustment");
    if(!scalingAdjustmentNode.IsNull())
    {
      m_scalingAdjustment = StringUtils::ConvertToInt32(StringUtils::Trim(scalingAdjustmentNode.GetText().c_str()).c_str());
      m_scalingAdjustmentHasBeenSet = true;
    }
    XmlNode cooldownNode = resultNode.FirstChild("Cooldown");
    if(!cooldownNode.IsNull())
    {
      m_cooldown = StringUtils::ConvertToInt32(StringUtils::Trim(cooldownNode.GetText().c_str()).c_str());
      m_cooldownHasBeenSet = true;
    }
    XmlNode stepAdjustmentsNode = resultNode.FirstChild("StepAdjustments");
    if(!stepAdjustmentsNode.IsNull())
    {
      XmlNode stepAdjustmentsMember = stepAdjustmentsNode.FirstChild("member");
      while(!stepAdjustmentsMember.IsNull())
      {
        m_stepAdjustments.push_back(stepAdjustmentsMember);
        stepAdjustmentsMember = stepAdjustmentsMember.NextNode("member");
      }

      m_stepAdjustmentsHasBeenSet = true;
    }
    XmlNode metricAggregationTypeNode = resultNode.FirstChild("MetricAggregationType");
    if(!metricAggregationTypeNode.IsNull())
    {
      m_metricAggregationType = metricAggregationTypeNode.GetText();
      m_metricAggregationTypeHasBeenSet = true;
    }
    XmlNode estimatedInstanceWarmupNode = resultNode.FirstChild("EstimatedInstanceWarmup");
    if(!estimatedInstanceWarmupNode.IsNull())
    {
      m_estimatedInstanceWarmup = StringUtils::ConvertToInt32(StringUtils::Trim(estimatedInstanceWarmupNode.GetText().c_str()).c_str());
      m_estimatedInstanceWarmupHasBeenSet = true;
    }
    XmlNode alarmsNode = resultNode.FirstChild("Alarms");
    if(!alarmsNode.IsNull())
    {
      XmlNode alarmsMember = alarmsNode.FirstChild("member");
      while(!alarmsMember.IsNull())
      {
        m_alarms.push_back(alarmsMember);
        alarmsMember = alarmsMember.NextNode("member");
      }

      m_alarmsHasBeenSet = true;
    }
    XmlNode targetTrackingConfigurationNode = resultNode.FirstChild("TargetTrackingConfiguration");
    if(!targetTrackingConfigurationNode.IsNull())
    {
      m_targetTrackingConfiguration = targetTrackingConfigurationNode;
      m_targetTrackingConfigurationHasBeenSet = true;
    }
  }

  return *this;
}

void ScalingPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_policyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_policyARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyARN=" << StringUtils::URLEncode(m_policyARN.c_str()) << "&";
  }

  if(m_policyTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyType=" << StringUtils::URLEncode(m_policyType.c_str()) << "&";
  }

  if(m_adjustmentTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AdjustmentType=" << StringUtils::URLEncode(m_adjustmentType.c_str()) << "&";
  }

  if(m_minAdjustmentStepHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinAdjustmentStep=" << m_minAdjustmentStep << "&";
  }

  if(m_minAdjustmentMagnitudeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinAdjustmentMagnitude=" << m_minAdjustmentMagnitude << "&";
  }

  if(m_scalingAdjustmentHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScalingAdjustment=" << m_scalingAdjustment << "&";
  }

  if(m_cooldownHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cooldown=" << m_cooldown << "&";
  }

  if(m_stepAdjustmentsHasBeenSet)
  {
      unsigned stepAdjustmentsIdx = 1;
      for(auto& item : m_stepAdjustments)
      {
        Aws::StringStream stepAdjustmentsSs;
        stepAdjustmentsSs << location << index << locationValue << ".StepAdjustments.member." << stepAdjustmentsIdx++;
        item.OutputToStream(oStream, stepAdjustmentsSs.str().c_str());
      }
  }

  if(m_metricAggregationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MetricAggregationType=" << StringUtils::URLEncode(m_metricAggregationType.c_str()) << "&";
  }

  if(m_estimatedInstanceWarmupHasBeenSet)
  {
      oStream << location << index << locationValue << ".EstimatedInstanceWarmup=" << m_estimatedInstanceWarmup << "&";
  }

  if(m_alarmsHasBeenSet)
  {
      unsigned alarmsIdx = 1;
      for(auto& item : m_alarms)
      {
        Aws::StringStream alarmsSs;
        alarmsSs << location << index << locationValue << ".Alarms.member." << alarmsIdx++;
        item.OutputToStream(oStream, alarmsSs.str().c_str());
      }
  }

  if(m_targetTrackingConfigurationHasBeenSet)
  {
      Aws::StringStream targetTrackingConfigurationLocationAndMemberSs;
      targetTrackingConfigurationLocationAndMemberSs << location << index << locationValue << ".TargetTrackingConfiguration";
      m_targetTrackingConfiguration.OutputToStream(oStream, targetTrackingConfigurationLocationAndMemberSs.str().c_str());
  }

}

void ScalingPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }
  if(m_policyNameHasBeenSet)
  {
      oStream << location << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if(m_policyARNHasBeenSet)
  {
      oStream << location << ".PolicyARN=" << StringUtils::URLEncode(m_policyARN.c_str()) << "&";
  }
  if(m_policyTypeHasBeenSet)
  {
      oStream << location << ".PolicyType=" << StringUtils::URLEncode(m_policyType.c_str()) << "&";
  }
  if(m_adjustmentTypeHasBeenSet)
  {
      oStream << location << ".AdjustmentType=" << StringUtils::URLEncode(m_adjustmentType.c_str()) << "&";
  }
  if(m_minAdjustmentStepHasBeenSet)
  {
      oStream << location << ".MinAdjustmentStep=" << m_minAdjustmentStep << "&";
  }
  if(m_minAdjustmentMagnitudeHasBeenSet)
  {
      oStream << location << ".MinAdjustmentMagnitude=" << m_minAdjustmentMagnitude << "&";
  }
  if(m_scalingAdjustmentHasBeenSet)
  {
      oStream << location << ".ScalingAdjustment=" << m_scalingAdjustment << "&";
  }
  if(m_cooldownHasBeenSet)
  {
      oStream << location << ".Cooldown=" << m_cooldown << "&";
  }
  if(m_stepAdjustmentsHasBeenSet)
  {
      unsigned stepAdjustmentsIdx = 1;
      for(auto& item : m_stepAdjustments)
      {
        Aws::StringStream stepAdjustmentsSs;
        stepAdjustmentsSs << location <<  ".StepAdjustments.member." << stepAdjustmentsIdx++;
        item.OutputToStream(oStream, stepAdjustmentsSs.str().c_str());
      }
  }
  if(m_metricAggregationTypeHasBeenSet)
  {
      oStream << location << ".MetricAggregationType=" << StringUtils::URLEncode(m_metricAggregationType.c_str()) << "&";
  }
  if(m_estimatedInstanceWarmupHasBeenSet)
  {
      oStream << location << ".EstimatedInstanceWarmup=" << m_estimatedInstanceWarmup << "&";
  }
  if(m_alarmsHasBeenSet)
  {
      unsigned alarmsIdx = 1;
      for(auto& item : m_alarms)
      {
        Aws::StringStream alarmsSs;
        alarmsSs << location <<  ".Alarms.member." << alarmsIdx++;
        item.OutputToStream(oStream, alarmsSs.str().c_str());
      }
  }
  if(m_targetTrackingConfigurationHasBeenSet)
  {
      Aws::String targetTrackingConfigurationLocationAndMember(location);
      targetTrackingConfigurationLocationAndMember += ".TargetTrackingConfiguration";
      m_targetTrackingConfiguration.OutputToStream(oStream, targetTrackingConfigurationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
