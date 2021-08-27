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
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_statHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_stateValue(AnomalyDetectorStateValue::NOT_SET),
    m_stateValueHasBeenSet(false)
{
}

AnomalyDetector::AnomalyDetector(const XmlNode& xmlNode) : 
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_statHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_stateValue(AnomalyDetectorStateValue::NOT_SET),
    m_stateValueHasBeenSet(false)
{
  *this = xmlNode;
}

AnomalyDetector& AnomalyDetector::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode namespaceNode = resultNode.FirstChild("Namespace");
    if(!namespaceNode.IsNull())
    {
      m_namespace = Aws::Utils::Xml::DecodeEscapedXmlText(namespaceNode.GetText());
      m_namespaceHasBeenSet = true;
    }
    XmlNode metricNameNode = resultNode.FirstChild("MetricName");
    if(!metricNameNode.IsNull())
    {
      m_metricName = Aws::Utils::Xml::DecodeEscapedXmlText(metricNameNode.GetText());
      m_metricNameHasBeenSet = true;
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
    XmlNode statNode = resultNode.FirstChild("Stat");
    if(!statNode.IsNull())
    {
      m_stat = Aws::Utils::Xml::DecodeEscapedXmlText(statNode.GetText());
      m_statHasBeenSet = true;
    }
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
  }

  return *this;
}

void AnomalyDetector::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_namespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_metricNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
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

  if(m_statHasBeenSet)
  {
      oStream << location << index << locationValue << ".Stat=" << StringUtils::URLEncode(m_stat.c_str()) << "&";
  }

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

}

void AnomalyDetector::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_namespaceHasBeenSet)
  {
      oStream << location << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }
  if(m_metricNameHasBeenSet)
  {
      oStream << location << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
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
  if(m_statHasBeenSet)
  {
      oStream << location << ".Stat=" << StringUtils::URLEncode(m_stat.c_str()) << "&";
  }
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
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
