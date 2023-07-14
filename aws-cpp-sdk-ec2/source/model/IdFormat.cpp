﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IdFormat.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

IdFormat::IdFormat() : 
    m_deadlineHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_useLongIds(false),
    m_useLongIdsHasBeenSet(false)
{
}

IdFormat::IdFormat(const XmlNode& xmlNode) : 
    m_deadlineHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_useLongIds(false),
    m_useLongIdsHasBeenSet(false)
{
  *this = xmlNode;
}

IdFormat& IdFormat::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deadlineNode = resultNode.FirstChild("deadline");
    if(!deadlineNode.IsNull())
    {
      m_deadline = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deadlineNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_deadlineHasBeenSet = true;
    }
    XmlNode resourceNode = resultNode.FirstChild("resource");
    if(!resourceNode.IsNull())
    {
      m_resource = Aws::Utils::Xml::DecodeEscapedXmlText(resourceNode.GetText());
      m_resourceHasBeenSet = true;
    }
    XmlNode useLongIdsNode = resultNode.FirstChild("useLongIds");
    if(!useLongIdsNode.IsNull())
    {
      m_useLongIds = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(useLongIdsNode.GetText()).c_str()).c_str());
      m_useLongIdsHasBeenSet = true;
    }
  }

  return *this;
}

void IdFormat::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deadlineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Deadline=" << StringUtils::URLEncode(m_deadline.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_resourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Resource=" << StringUtils::URLEncode(m_resource.c_str()) << "&";
  }

  if(m_useLongIdsHasBeenSet)
  {
      oStream << location << index << locationValue << ".UseLongIds=" << std::boolalpha << m_useLongIds << "&";
  }

}

void IdFormat::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deadlineHasBeenSet)
  {
      oStream << location << ".Deadline=" << StringUtils::URLEncode(m_deadline.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_resourceHasBeenSet)
  {
      oStream << location << ".Resource=" << StringUtils::URLEncode(m_resource.c_str()) << "&";
  }
  if(m_useLongIdsHasBeenSet)
  {
      oStream << location << ".UseLongIds=" << std::boolalpha << m_useLongIds << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
