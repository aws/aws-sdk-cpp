/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ProvisionedBandwidth.h>
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

ProvisionedBandwidth::ProvisionedBandwidth() : 
    m_provisionTimeHasBeenSet(false),
    m_provisionedHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_requestedHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ProvisionedBandwidth::ProvisionedBandwidth(const XmlNode& xmlNode) : 
    m_provisionTimeHasBeenSet(false),
    m_provisionedHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_requestedHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

ProvisionedBandwidth& ProvisionedBandwidth::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode provisionTimeNode = resultNode.FirstChild("provisionTime");
    if(!provisionTimeNode.IsNull())
    {
      m_provisionTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(provisionTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_provisionTimeHasBeenSet = true;
    }
    XmlNode provisionedNode = resultNode.FirstChild("provisioned");
    if(!provisionedNode.IsNull())
    {
      m_provisioned = Aws::Utils::Xml::DecodeEscapedXmlText(provisionedNode.GetText());
      m_provisionedHasBeenSet = true;
    }
    XmlNode requestTimeNode = resultNode.FirstChild("requestTime");
    if(!requestTimeNode.IsNull())
    {
      m_requestTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requestTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_requestTimeHasBeenSet = true;
    }
    XmlNode requestedNode = resultNode.FirstChild("requested");
    if(!requestedNode.IsNull())
    {
      m_requested = Aws::Utils::Xml::DecodeEscapedXmlText(requestedNode.GetText());
      m_requestedHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void ProvisionedBandwidth::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_provisionTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProvisionTime=" << StringUtils::URLEncode(m_provisionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_provisionedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Provisioned=" << StringUtils::URLEncode(m_provisioned.c_str()) << "&";
  }

  if(m_requestTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequestTime=" << StringUtils::URLEncode(m_requestTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_requestedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Requested=" << StringUtils::URLEncode(m_requested.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void ProvisionedBandwidth::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_provisionTimeHasBeenSet)
  {
      oStream << location << ".ProvisionTime=" << StringUtils::URLEncode(m_provisionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_provisionedHasBeenSet)
  {
      oStream << location << ".Provisioned=" << StringUtils::URLEncode(m_provisioned.c_str()) << "&";
  }
  if(m_requestTimeHasBeenSet)
  {
      oStream << location << ".RequestTime=" << StringUtils::URLEncode(m_requestTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_requestedHasBeenSet)
  {
      oStream << location << ".Requested=" << StringUtils::URLEncode(m_requested.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
