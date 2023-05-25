/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PredictiveScalingPredefinedScalingMetric.h>
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

PredictiveScalingPredefinedScalingMetric::PredictiveScalingPredefinedScalingMetric() : 
    m_predefinedMetricType(PredefinedScalingMetricType::NOT_SET),
    m_predefinedMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
}

PredictiveScalingPredefinedScalingMetric::PredictiveScalingPredefinedScalingMetric(const XmlNode& xmlNode) : 
    m_predefinedMetricType(PredefinedScalingMetricType::NOT_SET),
    m_predefinedMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
  *this = xmlNode;
}

PredictiveScalingPredefinedScalingMetric& PredictiveScalingPredefinedScalingMetric::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode predefinedMetricTypeNode = resultNode.FirstChild("PredefinedMetricType");
    if(!predefinedMetricTypeNode.IsNull())
    {
      m_predefinedMetricType = PredefinedScalingMetricTypeMapper::GetPredefinedScalingMetricTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(predefinedMetricTypeNode.GetText()).c_str()).c_str());
      m_predefinedMetricTypeHasBeenSet = true;
    }
    XmlNode resourceLabelNode = resultNode.FirstChild("ResourceLabel");
    if(!resourceLabelNode.IsNull())
    {
      m_resourceLabel = Aws::Utils::Xml::DecodeEscapedXmlText(resourceLabelNode.GetText());
      m_resourceLabelHasBeenSet = true;
    }
  }

  return *this;
}

void PredictiveScalingPredefinedScalingMetric::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_predefinedMetricTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".PredefinedMetricType=" << PredefinedScalingMetricTypeMapper::GetNameForPredefinedScalingMetricType(m_predefinedMetricType) << "&";
  }

  if(m_resourceLabelHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceLabel=" << StringUtils::URLEncode(m_resourceLabel.c_str()) << "&";
  }

}

void PredictiveScalingPredefinedScalingMetric::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_predefinedMetricTypeHasBeenSet)
  {
      oStream << location << ".PredefinedMetricType=" << PredefinedScalingMetricTypeMapper::GetNameForPredefinedScalingMetricType(m_predefinedMetricType) << "&";
  }
  if(m_resourceLabelHasBeenSet)
  {
      oStream << location << ".ResourceLabel=" << StringUtils::URLEncode(m_resourceLabel.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
