/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CloudWatchDimensionConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

CloudWatchDimensionConfiguration::CloudWatchDimensionConfiguration() : 
    m_dimensionNameHasBeenSet(false),
    m_dimensionValueSource(DimensionValueSource::NOT_SET),
    m_dimensionValueSourceHasBeenSet(false),
    m_defaultDimensionValueHasBeenSet(false)
{
}

CloudWatchDimensionConfiguration::CloudWatchDimensionConfiguration(const XmlNode& xmlNode) : 
    m_dimensionNameHasBeenSet(false),
    m_dimensionValueSource(DimensionValueSource::NOT_SET),
    m_dimensionValueSourceHasBeenSet(false),
    m_defaultDimensionValueHasBeenSet(false)
{
  *this = xmlNode;
}

CloudWatchDimensionConfiguration& CloudWatchDimensionConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dimensionNameNode = resultNode.FirstChild("DimensionName");
    if(!dimensionNameNode.IsNull())
    {
      m_dimensionName = Aws::Utils::Xml::DecodeEscapedXmlText(dimensionNameNode.GetText());
      m_dimensionNameHasBeenSet = true;
    }
    XmlNode dimensionValueSourceNode = resultNode.FirstChild("DimensionValueSource");
    if(!dimensionValueSourceNode.IsNull())
    {
      m_dimensionValueSource = DimensionValueSourceMapper::GetDimensionValueSourceForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dimensionValueSourceNode.GetText()).c_str()).c_str());
      m_dimensionValueSourceHasBeenSet = true;
    }
    XmlNode defaultDimensionValueNode = resultNode.FirstChild("DefaultDimensionValue");
    if(!defaultDimensionValueNode.IsNull())
    {
      m_defaultDimensionValue = Aws::Utils::Xml::DecodeEscapedXmlText(defaultDimensionValueNode.GetText());
      m_defaultDimensionValueHasBeenSet = true;
    }
  }

  return *this;
}

void CloudWatchDimensionConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dimensionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DimensionName=" << StringUtils::URLEncode(m_dimensionName.c_str()) << "&";
  }

  if(m_dimensionValueSourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".DimensionValueSource=" << DimensionValueSourceMapper::GetNameForDimensionValueSource(m_dimensionValueSource) << "&";
  }

  if(m_defaultDimensionValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultDimensionValue=" << StringUtils::URLEncode(m_defaultDimensionValue.c_str()) << "&";
  }

}

void CloudWatchDimensionConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dimensionNameHasBeenSet)
  {
      oStream << location << ".DimensionName=" << StringUtils::URLEncode(m_dimensionName.c_str()) << "&";
  }
  if(m_dimensionValueSourceHasBeenSet)
  {
      oStream << location << ".DimensionValueSource=" << DimensionValueSourceMapper::GetNameForDimensionValueSource(m_dimensionValueSource) << "&";
  }
  if(m_defaultDimensionValueHasBeenSet)
  {
      oStream << location << ".DefaultDimensionValue=" << StringUtils::URLEncode(m_defaultDimensionValue.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
