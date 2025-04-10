/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ScaleConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

ScaleConfig::ScaleConfig(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ScaleConfig& ScaleConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode scalePercentageNode = resultNode.FirstChild("ScalePercentage");
    if(!scalePercentageNode.IsNull())
    {
      m_scalePercentage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scalePercentageNode.GetText()).c_str()).c_str());
      m_scalePercentageHasBeenSet = true;
    }
    XmlNode scaleIntervalMinutesNode = resultNode.FirstChild("ScaleIntervalMinutes");
    if(!scaleIntervalMinutesNode.IsNull())
    {
      m_scaleIntervalMinutes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scaleIntervalMinutesNode.GetText()).c_str()).c_str());
      m_scaleIntervalMinutesHasBeenSet = true;
    }
  }

  return *this;
}

void ScaleConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_scalePercentageHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScalePercentage=" << m_scalePercentage << "&";
  }

  if(m_scaleIntervalMinutesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScaleIntervalMinutes=" << m_scaleIntervalMinutes << "&";
  }

}

void ScaleConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_scalePercentageHasBeenSet)
  {
      oStream << location << ".ScalePercentage=" << m_scalePercentage << "&";
  }
  if(m_scaleIntervalMinutesHasBeenSet)
  {
      oStream << location << ".ScaleIntervalMinutes=" << m_scaleIntervalMinutes << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
