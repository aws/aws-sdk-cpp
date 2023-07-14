/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/IPRange.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

IPRange::IPRange() : 
    m_statusHasBeenSet(false),
    m_cIDRIPHasBeenSet(false)
{
}

IPRange::IPRange(const XmlNode& xmlNode) : 
    m_statusHasBeenSet(false),
    m_cIDRIPHasBeenSet(false)
{
  *this = xmlNode;
}

IPRange& IPRange::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode cIDRIPNode = resultNode.FirstChild("CIDRIP");
    if(!cIDRIPNode.IsNull())
    {
      m_cIDRIP = Aws::Utils::Xml::DecodeEscapedXmlText(cIDRIPNode.GetText());
      m_cIDRIPHasBeenSet = true;
    }
  }

  return *this;
}

void IPRange::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_cIDRIPHasBeenSet)
  {
      oStream << location << index << locationValue << ".CIDRIP=" << StringUtils::URLEncode(m_cIDRIP.c_str()) << "&";
  }

}

void IPRange::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_cIDRIPHasBeenSet)
  {
      oStream << location << ".CIDRIP=" << StringUtils::URLEncode(m_cIDRIP.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
