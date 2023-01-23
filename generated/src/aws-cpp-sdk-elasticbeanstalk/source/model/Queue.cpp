/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/Queue.h>
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

Queue::Queue() : 
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
}

Queue::Queue(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
  *this = xmlNode;
}

Queue& Queue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode uRLNode = resultNode.FirstChild("URL");
    if(!uRLNode.IsNull())
    {
      m_uRL = Aws::Utils::Xml::DecodeEscapedXmlText(uRLNode.GetText());
      m_uRLHasBeenSet = true;
    }
  }

  return *this;
}

void Queue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_uRLHasBeenSet)
  {
      oStream << location << index << locationValue << ".URL=" << StringUtils::URLEncode(m_uRL.c_str()) << "&";
  }

}

void Queue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_uRLHasBeenSet)
  {
      oStream << location << ".URL=" << StringUtils::URLEncode(m_uRL.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
