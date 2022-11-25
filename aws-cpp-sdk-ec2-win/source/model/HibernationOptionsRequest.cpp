/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/HibernationOptionsRequest.h>
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

HibernationOptionsRequest::HibernationOptionsRequest() : 
    m_configured(false),
    m_configuredHasBeenSet(false)
{
}

HibernationOptionsRequest::HibernationOptionsRequest(const XmlNode& xmlNode) : 
    m_configured(false),
    m_configuredHasBeenSet(false)
{
  *this = xmlNode;
}

HibernationOptionsRequest& HibernationOptionsRequest::operator =(const XmlNode& xmlNode)
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

void HibernationOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_configuredHasBeenSet)
  {
      oStream << location << index << locationValue << ".Configured=" << std::boolalpha << m_configured << "&";
  }

}

void HibernationOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_configuredHasBeenSet)
  {
      oStream << location << ".Configured=" << std::boolalpha << m_configured << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
