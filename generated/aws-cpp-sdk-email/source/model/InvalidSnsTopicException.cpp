/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/InvalidSnsTopicException.h>
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

InvalidSnsTopicException::InvalidSnsTopicException() : 
    m_topicHasBeenSet(false)
{
}

InvalidSnsTopicException::InvalidSnsTopicException(const XmlNode& xmlNode) : 
    m_topicHasBeenSet(false)
{
  *this = xmlNode;
}

InvalidSnsTopicException& InvalidSnsTopicException::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode topicNode = resultNode.FirstChild("Topic");
    if(!topicNode.IsNull())
    {
      m_topic = Aws::Utils::Xml::DecodeEscapedXmlText(topicNode.GetText());
      m_topicHasBeenSet = true;
    }
  }

  return *this;
}

void InvalidSnsTopicException::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_topicHasBeenSet)
  {
      oStream << location << index << locationValue << ".Topic=" << StringUtils::URLEncode(m_topic.c_str()) << "&";
  }

}

void InvalidSnsTopicException::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_topicHasBeenSet)
  {
      oStream << location << ".Topic=" << StringUtils::URLEncode(m_topic.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
