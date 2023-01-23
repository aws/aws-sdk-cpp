/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ResourceQuota.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

ResourceQuota::ResourceQuota() : 
    m_maximum(0),
    m_maximumHasBeenSet(false)
{
}

ResourceQuota::ResourceQuota(const XmlNode& xmlNode) : 
    m_maximum(0),
    m_maximumHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceQuota& ResourceQuota::operator =(const XmlNode& xmlNode)
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
  }

  return *this;
}

void ResourceQuota::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maximumHasBeenSet)
  {
      oStream << location << index << locationValue << ".Maximum=" << m_maximum << "&";
  }

}

void ResourceQuota::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maximumHasBeenSet)
  {
      oStream << location << ".Maximum=" << m_maximum << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
