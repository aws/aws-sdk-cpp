/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PredictiveScalingConfiguration.h>
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

PredictiveScalingConfiguration::PredictiveScalingConfiguration() : 
    m_metricSpecificationsHasBeenSet(false),
    m_mode(PredictiveScalingMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_schedulingBufferTime(0),
    m_schedulingBufferTimeHasBeenSet(false),
    m_maxCapacityBreachBehavior(PredictiveScalingMaxCapacityBreachBehavior::NOT_SET),
    m_maxCapacityBreachBehaviorHasBeenSet(false),
    m_maxCapacityBuffer(0),
    m_maxCapacityBufferHasBeenSet(false)
{
}

PredictiveScalingConfiguration::PredictiveScalingConfiguration(const XmlNode& xmlNode) : 
    m_metricSpecificationsHasBeenSet(false),
    m_mode(PredictiveScalingMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_schedulingBufferTime(0),
    m_schedulingBufferTimeHasBeenSet(false),
    m_maxCapacityBreachBehavior(PredictiveScalingMaxCapacityBreachBehavior::NOT_SET),
    m_maxCapacityBreachBehaviorHasBeenSet(false),
    m_maxCapacityBuffer(0),
    m_maxCapacityBufferHasBeenSet(false)
{
  *this = xmlNode;
}

PredictiveScalingConfiguration& PredictiveScalingConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metricSpecificationsNode = resultNode.FirstChild("MetricSpecifications");
    if(!metricSpecificationsNode.IsNull())
    {
      XmlNode metricSpecificationsMember = metricSpecificationsNode.FirstChild("member");
      while(!metricSpecificationsMember.IsNull())
      {
        m_metricSpecifications.push_back(metricSpecificationsMember);
        metricSpecificationsMember = metricSpecificationsMember.NextNode("member");
      }

      m_metricSpecificationsHasBeenSet = true;
    }
    XmlNode modeNode = resultNode.FirstChild("Mode");
    if(!modeNode.IsNull())
    {
      m_mode = PredictiveScalingModeMapper::GetPredictiveScalingModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText()).c_str()).c_str());
      m_modeHasBeenSet = true;
    }
    XmlNode schedulingBufferTimeNode = resultNode.FirstChild("SchedulingBufferTime");
    if(!schedulingBufferTimeNode.IsNull())
    {
      m_schedulingBufferTime = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(schedulingBufferTimeNode.GetText()).c_str()).c_str());
      m_schedulingBufferTimeHasBeenSet = true;
    }
    XmlNode maxCapacityBreachBehaviorNode = resultNode.FirstChild("MaxCapacityBreachBehavior");
    if(!maxCapacityBreachBehaviorNode.IsNull())
    {
      m_maxCapacityBreachBehavior = PredictiveScalingMaxCapacityBreachBehaviorMapper::GetPredictiveScalingMaxCapacityBreachBehaviorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxCapacityBreachBehaviorNode.GetText()).c_str()).c_str());
      m_maxCapacityBreachBehaviorHasBeenSet = true;
    }
    XmlNode maxCapacityBufferNode = resultNode.FirstChild("MaxCapacityBuffer");
    if(!maxCapacityBufferNode.IsNull())
    {
      m_maxCapacityBuffer = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxCapacityBufferNode.GetText()).c_str()).c_str());
      m_maxCapacityBufferHasBeenSet = true;
    }
  }

  return *this;
}

void PredictiveScalingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metricSpecificationsHasBeenSet)
  {
      unsigned metricSpecificationsIdx = 1;
      for(auto& item : m_metricSpecifications)
      {
        Aws::StringStream metricSpecificationsSs;
        metricSpecificationsSs << location << index << locationValue << ".MetricSpecifications.member." << metricSpecificationsIdx++;
        item.OutputToStream(oStream, metricSpecificationsSs.str().c_str());
      }
  }

  if(m_modeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Mode=" << PredictiveScalingModeMapper::GetNameForPredictiveScalingMode(m_mode) << "&";
  }

  if(m_schedulingBufferTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SchedulingBufferTime=" << m_schedulingBufferTime << "&";
  }

  if(m_maxCapacityBreachBehaviorHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxCapacityBreachBehavior=" << PredictiveScalingMaxCapacityBreachBehaviorMapper::GetNameForPredictiveScalingMaxCapacityBreachBehavior(m_maxCapacityBreachBehavior) << "&";
  }

  if(m_maxCapacityBufferHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxCapacityBuffer=" << m_maxCapacityBuffer << "&";
  }

}

void PredictiveScalingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metricSpecificationsHasBeenSet)
  {
      unsigned metricSpecificationsIdx = 1;
      for(auto& item : m_metricSpecifications)
      {
        Aws::StringStream metricSpecificationsSs;
        metricSpecificationsSs << location <<  ".MetricSpecifications.member." << metricSpecificationsIdx++;
        item.OutputToStream(oStream, metricSpecificationsSs.str().c_str());
      }
  }
  if(m_modeHasBeenSet)
  {
      oStream << location << ".Mode=" << PredictiveScalingModeMapper::GetNameForPredictiveScalingMode(m_mode) << "&";
  }
  if(m_schedulingBufferTimeHasBeenSet)
  {
      oStream << location << ".SchedulingBufferTime=" << m_schedulingBufferTime << "&";
  }
  if(m_maxCapacityBreachBehaviorHasBeenSet)
  {
      oStream << location << ".MaxCapacityBreachBehavior=" << PredictiveScalingMaxCapacityBreachBehaviorMapper::GetNameForPredictiveScalingMaxCapacityBreachBehavior(m_maxCapacityBreachBehavior) << "&";
  }
  if(m_maxCapacityBufferHasBeenSet)
  {
      oStream << location << ".MaxCapacityBuffer=" << m_maxCapacityBuffer << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
