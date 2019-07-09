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
    m_configurationHasBeenSet(false)
{
}

AnomalyDetector::AnomalyDetector(const XmlNode& xmlNode) : 
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_statHasBeenSet(false),
    m_configurationHasBeenSet(false)
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
      m_namespace = namespaceNode.GetText();
      m_namespaceHasBeenSet = true;
    }
    XmlNode metricNameNode = resultNode.FirstChild("MetricName");
    if(!metricNameNode.IsNull())
    {
      m_metricName = metricNameNode.GetText();
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
      m_stat = statNode.GetText();
      m_statHasBeenSet = true;
    }
    XmlNode configurationNode = resultNode.FirstChild("Configuration");
    if(!configurationNode.IsNull())
    {
      m_configuration = configurationNode;
      m_configurationHasBeenSet = true;
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
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
