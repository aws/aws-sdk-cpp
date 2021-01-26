/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PrincipalIdFormat.h>
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

PrincipalIdFormat::PrincipalIdFormat() : 
    m_arnHasBeenSet(false),
    m_statusesHasBeenSet(false)
{
}

PrincipalIdFormat::PrincipalIdFormat(const XmlNode& xmlNode) : 
    m_arnHasBeenSet(false),
    m_statusesHasBeenSet(false)
{
  *this = xmlNode;
}

PrincipalIdFormat& PrincipalIdFormat::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode arnNode = resultNode.FirstChild("arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
    XmlNode statusesNode = resultNode.FirstChild("statusSet");
    if(!statusesNode.IsNull())
    {
      XmlNode statusesMember = statusesNode.FirstChild("item");
      while(!statusesMember.IsNull())
      {
        m_statuses.push_back(statusesMember);
        statusesMember = statusesMember.NextNode("item");
      }

      m_statusesHasBeenSet = true;
    }
  }

  return *this;
}

void PrincipalIdFormat::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

  if(m_statusesHasBeenSet)
  {
      unsigned statusesIdx = 1;
      for(auto& item : m_statuses)
      {
        Aws::StringStream statusesSs;
        statusesSs << location << index << locationValue << ".StatusSet." << statusesIdx++;
        item.OutputToStream(oStream, statusesSs.str().c_str());
      }
  }

}

void PrincipalIdFormat::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_statusesHasBeenSet)
  {
      unsigned statusesIdx = 1;
      for(auto& item : m_statuses)
      {
        Aws::StringStream statusesSs;
        statusesSs << location <<  ".StatusSet." << statusesIdx++;
        item.OutputToStream(oStream, statusesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
