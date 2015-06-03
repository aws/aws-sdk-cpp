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
#include <aws/elasticloadbalancing/model/HealthCheck.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

HealthCheck::HealthCheck() : 
    m_interval(0),
    m_timeout(0),
    m_unhealthyThreshold(0),
    m_healthyThreshold(0)
{
}

HealthCheck::HealthCheck(const XmlNode& xmlNode) : 
    m_interval(0),
    m_timeout(0),
    m_unhealthyThreshold(0),
    m_healthyThreshold(0)
{
  *this = xmlNode;
}

HealthCheck& HealthCheck::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetNode = resultNode.FirstChild("Target");
    m_target = StringUtils::Trim(targetNode.GetText().c_str());
    XmlNode intervalNode = resultNode.FirstChild("Interval");
    m_interval = StringUtils::ConvertToInt32(StringUtils::Trim(intervalNode.GetText().c_str()).c_str());
    XmlNode timeoutNode = resultNode.FirstChild("Timeout");
    m_timeout = StringUtils::ConvertToInt32(StringUtils::Trim(timeoutNode.GetText().c_str()).c_str());
    XmlNode unhealthyThresholdNode = resultNode.FirstChild("UnhealthyThreshold");
    m_unhealthyThreshold = StringUtils::ConvertToInt32(StringUtils::Trim(unhealthyThresholdNode.GetText().c_str()).c_str());
    XmlNode healthyThresholdNode = resultNode.FirstChild("HealthyThreshold");
    m_healthyThreshold = StringUtils::ConvertToInt32(StringUtils::Trim(healthyThresholdNode.GetText().c_str()).c_str());
  }

  return *this;
}

void HealthCheck::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Target=" << StringUtils::URLEncode(m_target.c_str()) << "&";
  oStream << location << index << locationValue << ".Interval=" << m_interval << "&";
  oStream << location << index << locationValue << ".Timeout=" << m_timeout << "&";
  oStream << location << index << locationValue << ".UnhealthyThreshold=" << m_unhealthyThreshold << "&";
  oStream << location << index << locationValue << ".HealthyThreshold=" << m_healthyThreshold << "&";
}

void HealthCheck::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Target=" << StringUtils::URLEncode(m_target.c_str()) << "&";
  oStream << location << ".Interval=" << m_interval << "&";
  oStream << location << ".Timeout=" << m_timeout << "&";
  oStream << location << ".UnhealthyThreshold=" << m_unhealthyThreshold << "&";
  oStream << location << ".HealthyThreshold=" << m_healthyThreshold << "&";
}
