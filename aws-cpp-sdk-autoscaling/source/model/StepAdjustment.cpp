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
#include <aws/autoscaling/model/StepAdjustment.h>
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

StepAdjustment::StepAdjustment() : 
    m_metricIntervalLowerBound(0.0),
    m_metricIntervalLowerBoundHasBeenSet(false),
    m_metricIntervalUpperBound(0.0),
    m_metricIntervalUpperBoundHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false)
{
}

StepAdjustment::StepAdjustment(const XmlNode& xmlNode) : 
    m_metricIntervalLowerBound(0.0),
    m_metricIntervalLowerBoundHasBeenSet(false),
    m_metricIntervalUpperBound(0.0),
    m_metricIntervalUpperBoundHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false)
{
  *this = xmlNode;
}

StepAdjustment& StepAdjustment::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metricIntervalLowerBoundNode = resultNode.FirstChild("MetricIntervalLowerBound");
    if(!metricIntervalLowerBoundNode.IsNull())
    {
      m_metricIntervalLowerBound = StringUtils::ConvertToDouble(StringUtils::Trim(metricIntervalLowerBoundNode.GetText().c_str()).c_str());
      m_metricIntervalLowerBoundHasBeenSet = true;
    }
    XmlNode metricIntervalUpperBoundNode = resultNode.FirstChild("MetricIntervalUpperBound");
    if(!metricIntervalUpperBoundNode.IsNull())
    {
      m_metricIntervalUpperBound = StringUtils::ConvertToDouble(StringUtils::Trim(metricIntervalUpperBoundNode.GetText().c_str()).c_str());
      m_metricIntervalUpperBoundHasBeenSet = true;
    }
    XmlNode scalingAdjustmentNode = resultNode.FirstChild("ScalingAdjustment");
    if(!scalingAdjustmentNode.IsNull())
    {
      m_scalingAdjustment = StringUtils::ConvertToInt32(StringUtils::Trim(scalingAdjustmentNode.GetText().c_str()).c_str());
      m_scalingAdjustmentHasBeenSet = true;
    }
  }

  return *this;
}

void StepAdjustment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metricIntervalLowerBoundHasBeenSet)
  {
        oStream << location << index << locationValue << ".MetricIntervalLowerBound=" << StringUtils::URLEncode(m_metricIntervalLowerBound) << "&";
  }

  if(m_metricIntervalUpperBoundHasBeenSet)
  {
        oStream << location << index << locationValue << ".MetricIntervalUpperBound=" << StringUtils::URLEncode(m_metricIntervalUpperBound) << "&";
  }

  if(m_scalingAdjustmentHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScalingAdjustment=" << m_scalingAdjustment << "&";
  }

}

void StepAdjustment::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metricIntervalLowerBoundHasBeenSet)
  {
        oStream << location << ".MetricIntervalLowerBound=" << StringUtils::URLEncode(m_metricIntervalLowerBound) << "&";
  }
  if(m_metricIntervalUpperBoundHasBeenSet)
  {
        oStream << location << ".MetricIntervalUpperBound=" << StringUtils::URLEncode(m_metricIntervalUpperBound) << "&";
  }
  if(m_scalingAdjustmentHasBeenSet)
  {
      oStream << location << ".ScalingAdjustment=" << m_scalingAdjustment << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
