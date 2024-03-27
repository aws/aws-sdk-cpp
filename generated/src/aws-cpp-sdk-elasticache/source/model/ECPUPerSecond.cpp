/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ECPUPerSecond.h>
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

ECPUPerSecond::ECPUPerSecond() : 
    m_maximum(0),
    m_maximumHasBeenSet(false),
    m_minimum(0),
    m_minimumHasBeenSet(false)
{
}

ECPUPerSecond::ECPUPerSecond(const XmlNode& xmlNode) : 
    m_maximum(0),
    m_maximumHasBeenSet(false),
    m_minimum(0),
    m_minimumHasBeenSet(false)
{
  *this = xmlNode;
}

ECPUPerSecond& ECPUPerSecond::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maximumNode = resultNode.FirstChild("Maximum");
    if(!maximumNode.IsNull())
    {
      m_maximum = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumNode.GetText()).c_str()).c_str());
      m_maximumHasBeenSet = true;
    }
    XmlNode minimumNode = resultNode.FirstChild("Minimum");
    if(!minimumNode.IsNull())
    {
      m_minimum = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minimumNode.GetText()).c_str()).c_str());
      m_minimumHasBeenSet = true;
    }
  }

  return *this;
}

void ECPUPerSecond::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maximumHasBeenSet)
  {
      oStream << location << index << locationValue << ".Maximum=" << m_maximum << "&";
  }

  if(m_minimumHasBeenSet)
  {
      oStream << location << index << locationValue << ".Minimum=" << m_minimum << "&";
  }

}

void ECPUPerSecond::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maximumHasBeenSet)
  {
      oStream << location << ".Maximum=" << m_maximum << "&";
  }
  if(m_minimumHasBeenSet)
  {
      oStream << location << ".Minimum=" << m_minimum << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
