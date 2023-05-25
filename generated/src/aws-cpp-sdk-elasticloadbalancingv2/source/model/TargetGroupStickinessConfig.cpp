/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TargetGroupStickinessConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

TargetGroupStickinessConfig::TargetGroupStickinessConfig() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false)
{
}

TargetGroupStickinessConfig::TargetGroupStickinessConfig(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false)
{
  *this = xmlNode;
}

TargetGroupStickinessConfig& TargetGroupStickinessConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode durationSecondsNode = resultNode.FirstChild("DurationSeconds");
    if(!durationSecondsNode.IsNull())
    {
      m_durationSeconds = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(durationSecondsNode.GetText()).c_str()).c_str());
      m_durationSecondsHasBeenSet = true;
    }
  }

  return *this;
}

void TargetGroupStickinessConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_durationSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".DurationSeconds=" << m_durationSeconds << "&";
  }

}

void TargetGroupStickinessConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_durationSecondsHasBeenSet)
  {
      oStream << location << ".DurationSeconds=" << m_durationSeconds << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
