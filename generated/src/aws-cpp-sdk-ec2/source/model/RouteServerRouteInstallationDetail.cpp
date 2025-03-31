/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerRouteInstallationDetail.h>
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

RouteServerRouteInstallationDetail::RouteServerRouteInstallationDetail(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RouteServerRouteInstallationDetail& RouteServerRouteInstallationDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode routeTableIdNode = resultNode.FirstChild("routeTableId");
    if(!routeTableIdNode.IsNull())
    {
      m_routeTableId = Aws::Utils::Xml::DecodeEscapedXmlText(routeTableIdNode.GetText());
      m_routeTableIdHasBeenSet = true;
    }
    XmlNode routeInstallationStatusNode = resultNode.FirstChild("routeInstallationStatus");
    if(!routeInstallationStatusNode.IsNull())
    {
      m_routeInstallationStatus = RouteServerRouteInstallationStatusMapper::GetRouteServerRouteInstallationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(routeInstallationStatusNode.GetText()).c_str()));
      m_routeInstallationStatusHasBeenSet = true;
    }
    XmlNode routeInstallationStatusReasonNode = resultNode.FirstChild("routeInstallationStatusReason");
    if(!routeInstallationStatusReasonNode.IsNull())
    {
      m_routeInstallationStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(routeInstallationStatusReasonNode.GetText());
      m_routeInstallationStatusReasonHasBeenSet = true;
    }
  }

  return *this;
}

void RouteServerRouteInstallationDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_routeTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }

  if(m_routeInstallationStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteInstallationStatus=" << StringUtils::URLEncode(RouteServerRouteInstallationStatusMapper::GetNameForRouteServerRouteInstallationStatus(m_routeInstallationStatus)) << "&";
  }

  if(m_routeInstallationStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteInstallationStatusReason=" << StringUtils::URLEncode(m_routeInstallationStatusReason.c_str()) << "&";
  }

}

void RouteServerRouteInstallationDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_routeTableIdHasBeenSet)
  {
      oStream << location << ".RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }
  if(m_routeInstallationStatusHasBeenSet)
  {
      oStream << location << ".RouteInstallationStatus=" << StringUtils::URLEncode(RouteServerRouteInstallationStatusMapper::GetNameForRouteServerRouteInstallationStatus(m_routeInstallationStatus)) << "&";
  }
  if(m_routeInstallationStatusReasonHasBeenSet)
  {
      oStream << location << ".RouteInstallationStatusReason=" << StringUtils::URLEncode(m_routeInstallationStatusReason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
