/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerBgpStatus.h>
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

RouteServerBgpStatus::RouteServerBgpStatus(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RouteServerBgpStatus& RouteServerBgpStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = RouteServerBgpStateMapper::GetRouteServerBgpStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void RouteServerBgpStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(RouteServerBgpStateMapper::GetNameForRouteServerBgpState(m_status)) << "&";
  }

}

void RouteServerBgpStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(RouteServerBgpStateMapper::GetNameForRouteServerBgpState(m_status)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
