/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/NotificationConfiguration.h>
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

NotificationConfiguration::NotificationConfiguration() : 
    m_topicArnHasBeenSet(false),
    m_topicStatusHasBeenSet(false)
{
}

NotificationConfiguration::NotificationConfiguration(const XmlNode& xmlNode) : 
    m_topicArnHasBeenSet(false),
    m_topicStatusHasBeenSet(false)
{
  *this = xmlNode;
}

NotificationConfiguration& NotificationConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = Aws::Utils::Xml::DecodeEscapedXmlText(topicArnNode.GetText());
      m_topicArnHasBeenSet = true;
    }
    XmlNode topicStatusNode = resultNode.FirstChild("TopicStatus");
    if(!topicStatusNode.IsNull())
    {
      m_topicStatus = Aws::Utils::Xml::DecodeEscapedXmlText(topicStatusNode.GetText());
      m_topicStatusHasBeenSet = true;
    }
  }

  return *this;
}

void NotificationConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_topicStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicStatus=" << StringUtils::URLEncode(m_topicStatus.c_str()) << "&";
  }

}

void NotificationConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
  if(m_topicStatusHasBeenSet)
  {
      oStream << location << ".TopicStatus=" << StringUtils::URLEncode(m_topicStatus.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
