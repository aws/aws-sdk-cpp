/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/HealthCheck.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

HealthCheck::HealthCheck() : 
    m_targetHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_unhealthyThreshold(0),
    m_unhealthyThresholdHasBeenSet(false),
    m_healthyThreshold(0),
    m_healthyThresholdHasBeenSet(false)
{
}

HealthCheck::HealthCheck(const XmlNode& xmlNode) : 
    m_targetHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_unhealthyThreshold(0),
    m_unhealthyThresholdHasBeenSet(false),
    m_healthyThreshold(0),
    m_healthyThresholdHasBeenSet(false)
{
  *this = xmlNode;
}

HealthCheck& HealthCheck::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetNode = resultNode.FirstChild("Target");
    if(!targetNode.IsNull())
    {
      m_target = Aws::Utils::Xml::DecodeEscapedXmlText(targetNode.GetText());
      m_targetHasBeenSet = true;
    }
    XmlNode intervalNode = resultNode.FirstChild("Interval");
    if(!intervalNode.IsNull())
    {
      m_interval = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(intervalNode.GetText()).c_str()).c_str());
      m_intervalHasBeenSet = true;
    }
    XmlNode timeoutNode = resultNode.FirstChild("Timeout");
    if(!timeoutNode.IsNull())
    {
      m_timeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timeoutNode.GetText()).c_str()).c_str());
      m_timeoutHasBeenSet = true;
    }
    XmlNode unhealthyThresholdNode = resultNode.FirstChild("UnhealthyThreshold");
    if(!unhealthyThresholdNode.IsNull())
    {
      m_unhealthyThreshold = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(unhealthyThresholdNode.GetText()).c_str()).c_str());
      m_unhealthyThresholdHasBeenSet = true;
    }
    XmlNode healthyThresholdNode = resultNode.FirstChild("HealthyThreshold");
    if(!healthyThresholdNode.IsNull())
    {
      m_healthyThreshold = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(healthyThresholdNode.GetText()).c_str()).c_str());
      m_healthyThresholdHasBeenSet = true;
    }
  }

  return *this;
}

void HealthCheck::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetHasBeenSet)
  {
      oStream << location << index << locationValue << ".Target=" << StringUtils::URLEncode(m_target.c_str()) << "&";
  }

  if(m_intervalHasBeenSet)
  {
      oStream << location << index << locationValue << ".Interval=" << m_interval << "&";
  }

  if(m_timeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timeout=" << m_timeout << "&";
  }

  if(m_unhealthyThresholdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UnhealthyThreshold=" << m_unhealthyThreshold << "&";
  }

  if(m_healthyThresholdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthyThreshold=" << m_healthyThreshold << "&";
  }

}

void HealthCheck::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetHasBeenSet)
  {
      oStream << location << ".Target=" << StringUtils::URLEncode(m_target.c_str()) << "&";
  }
  if(m_intervalHasBeenSet)
  {
      oStream << location << ".Interval=" << m_interval << "&";
  }
  if(m_timeoutHasBeenSet)
  {
      oStream << location << ".Timeout=" << m_timeout << "&";
  }
  if(m_unhealthyThresholdHasBeenSet)
  {
      oStream << location << ".UnhealthyThreshold=" << m_unhealthyThreshold << "&";
  }
  if(m_healthyThresholdHasBeenSet)
  {
      oStream << location << ".HealthyThreshold=" << m_healthyThreshold << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
