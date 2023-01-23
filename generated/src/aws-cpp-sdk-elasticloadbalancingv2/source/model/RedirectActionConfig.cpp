/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/RedirectActionConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

RedirectActionConfig::RedirectActionConfig() : 
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_statusCode(RedirectActionStatusCodeEnum::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
}

RedirectActionConfig::RedirectActionConfig(const XmlNode& xmlNode) : 
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_statusCode(RedirectActionStatusCodeEnum::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
  *this = xmlNode;
}

RedirectActionConfig& RedirectActionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText());
      m_portHasBeenSet = true;
    }
    XmlNode hostNode = resultNode.FirstChild("Host");
    if(!hostNode.IsNull())
    {
      m_host = Aws::Utils::Xml::DecodeEscapedXmlText(hostNode.GetText());
      m_hostHasBeenSet = true;
    }
    XmlNode pathNode = resultNode.FirstChild("Path");
    if(!pathNode.IsNull())
    {
      m_path = Aws::Utils::Xml::DecodeEscapedXmlText(pathNode.GetText());
      m_pathHasBeenSet = true;
    }
    XmlNode queryNode = resultNode.FirstChild("Query");
    if(!queryNode.IsNull())
    {
      m_query = Aws::Utils::Xml::DecodeEscapedXmlText(queryNode.GetText());
      m_queryHasBeenSet = true;
    }
    XmlNode statusCodeNode = resultNode.FirstChild("StatusCode");
    if(!statusCodeNode.IsNull())
    {
      m_statusCode = RedirectActionStatusCodeEnumMapper::GetRedirectActionStatusCodeEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusCodeNode.GetText()).c_str()).c_str());
      m_statusCodeHasBeenSet = true;
    }
  }

  return *this;
}

void RedirectActionConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << StringUtils::URLEncode(m_port.c_str()) << "&";
  }

  if(m_hostHasBeenSet)
  {
      oStream << location << index << locationValue << ".Host=" << StringUtils::URLEncode(m_host.c_str()) << "&";
  }

  if(m_pathHasBeenSet)
  {
      oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }

  if(m_queryHasBeenSet)
  {
      oStream << location << index << locationValue << ".Query=" << StringUtils::URLEncode(m_query.c_str()) << "&";
  }

  if(m_statusCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusCode=" << RedirectActionStatusCodeEnumMapper::GetNameForRedirectActionStatusCodeEnum(m_statusCode) << "&";
  }

}

void RedirectActionConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << StringUtils::URLEncode(m_port.c_str()) << "&";
  }
  if(m_hostHasBeenSet)
  {
      oStream << location << ".Host=" << StringUtils::URLEncode(m_host.c_str()) << "&";
  }
  if(m_pathHasBeenSet)
  {
      oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }
  if(m_queryHasBeenSet)
  {
      oStream << location << ".Query=" << StringUtils::URLEncode(m_query.c_str()) << "&";
  }
  if(m_statusCodeHasBeenSet)
  {
      oStream << location << ".StatusCode=" << RedirectActionStatusCodeEnumMapper::GetNameForRedirectActionStatusCodeEnum(m_statusCode) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
