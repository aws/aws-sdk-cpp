/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/AnomalyDetector.h>
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

AnomalyDetector::AnomalyDetector() : 
    m_configurationHasBeenSet(false),
    m_stateValue(AnomalyDetectorStateValue::NOT_SET),
    m_stateValueHasBeenSet(false),
    m_singleMetricAnomalyDetectorHasBeenSet(false),
    m_metricMathAnomalyDetectorHasBeenSet(false)
{
}

AnomalyDetector::AnomalyDetector(const XmlNode& xmlNode) : 
    m_configurationHasBeenSet(false),
    m_stateValue(AnomalyDetectorStateValue::NOT_SET),
    m_stateValueHasBeenSet(false),
    m_singleMetricAnomalyDetectorHasBeenSet(false),
    m_metricMathAnomalyDetectorHasBeenSet(false)
{
  *this = xmlNode;
}

AnomalyDetector& AnomalyDetector::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode configurationNode = resultNode.FirstChild("Configuration");
    if(!configurationNode.IsNull())
    {
      m_configuration = configurationNode;
      m_configurationHasBeenSet = true;
    }
    XmlNode stateValueNode = resultNode.FirstChild("StateValue");
    if(!stateValueNode.IsNull())
    {
      m_stateValue = AnomalyDetectorStateValueMapper::GetAnomalyDetectorStateValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateValueNode.GetText()).c_str()).c_str());
      m_stateValueHasBeenSet = true;
    }
    XmlNode singleMetricAnomalyDetectorNode = resultNode.FirstChild("SingleMetricAnomalyDetector");
    if(!singleMetricAnomalyDetectorNode.IsNull())
    {
      m_singleMetricAnomalyDetector = singleMetricAnomalyDetectorNode;
      m_singleMetricAnomalyDetectorHasBeenSet = true;
    }
    XmlNode metricMathAnomalyDetectorNode = resultNode.FirstChild("MetricMathAnomalyDetector");
    if(!metricMathAnomalyDetectorNode.IsNull())
    {
      m_metricMathAnomalyDetector = metricMathAnomalyDetectorNode;
      m_metricMathAnomalyDetectorHasBeenSet = true;
    }
  }

  return *this;
}

void AnomalyDetector::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_configurationHasBeenSet)
  {
      Aws::StringStream configurationLocationAndMemberSs;
      configurationLocationAndMemberSs << location << index << locationValue << ".Configuration";
      m_configuration.OutputToStream(oStream, configurationLocationAndMemberSs.str().c_str());
  }

  if(m_stateValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateValue=" << AnomalyDetectorStateValueMapper::GetNameForAnomalyDetectorStateValue(m_stateValue) << "&";
  }

  if(m_singleMetricAnomalyDetectorHasBeenSet)
  {
      Aws::StringStream singleMetricAnomalyDetectorLocationAndMemberSs;
      singleMetricAnomalyDetectorLocationAndMemberSs << location << index << locationValue << ".SingleMetricAnomalyDetector";
      m_singleMetricAnomalyDetector.OutputToStream(oStream, singleMetricAnomalyDetectorLocationAndMemberSs.str().c_str());
  }

  if(m_metricMathAnomalyDetectorHasBeenSet)
  {
      Aws::StringStream metricMathAnomalyDetectorLocationAndMemberSs;
      metricMathAnomalyDetectorLocationAndMemberSs << location << index << locationValue << ".MetricMathAnomalyDetector";
      m_metricMathAnomalyDetector.OutputToStream(oStream, metricMathAnomalyDetectorLocationAndMemberSs.str().c_str());
  }

}

void AnomalyDetector::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_configurationHasBeenSet)
  {
      Aws::String configurationLocationAndMember(location);
      configurationLocationAndMember += ".Configuration";
      m_configuration.OutputToStream(oStream, configurationLocationAndMember.c_str());
  }
  if(m_stateValueHasBeenSet)
  {
      oStream << location << ".StateValue=" << AnomalyDetectorStateValueMapper::GetNameForAnomalyDetectorStateValue(m_stateValue) << "&";
  }
  if(m_singleMetricAnomalyDetectorHasBeenSet)
  {
      Aws::String singleMetricAnomalyDetectorLocationAndMember(location);
      singleMetricAnomalyDetectorLocationAndMember += ".SingleMetricAnomalyDetector";
      m_singleMetricAnomalyDetector.OutputToStream(oStream, singleMetricAnomalyDetectorLocationAndMember.c_str());
  }
  if(m_metricMathAnomalyDetectorHasBeenSet)
  {
      Aws::String metricMathAnomalyDetectorLocationAndMember(location);
      metricMathAnomalyDetectorLocationAndMember += ".MetricMathAnomalyDetector";
      m_metricMathAnomalyDetector.OutputToStream(oStream, metricMathAnomalyDetectorLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
