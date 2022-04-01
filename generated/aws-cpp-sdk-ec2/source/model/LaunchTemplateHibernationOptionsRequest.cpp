/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateHibernationOptionsRequest.h>
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

LaunchTemplateHibernationOptionsRequest::LaunchTemplateHibernationOptionsRequest() : 
    m_configured(false),
    m_configuredHasBeenSet(false)
{
}

LaunchTemplateHibernationOptionsRequest::LaunchTemplateHibernationOptionsRequest(const XmlNode& xmlNode) : 
    m_configured(false),
    m_configuredHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateHibernationOptionsRequest& LaunchTemplateHibernationOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode configuredNode = resultNode.FirstChild("Configured");
    if(!configuredNode.IsNull())
    {
      m_configured = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(configuredNode.GetText()).c_str()).c_str());
      m_configuredHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateHibernationOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_configuredHasBeenSet)
  {
      oStream << location << index << locationValue << ".Configured=" << std::boolalpha << m_configured << "&";
  }

}

void LaunchTemplateHibernationOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_configuredHasBeenSet)
  {
      oStream << location << ".Configured=" << std::boolalpha << m_configured << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
