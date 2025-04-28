/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ConnectionGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

ConnectionGroup::ConnectionGroup(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ConnectionGroup& ConnectionGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!createdTimeNode.IsNull())
    {
      m_createdTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      m_tags = tagsNode;
      m_tagsHasBeenSet = true;
    }
    XmlNode ipv6EnabledNode = resultNode.FirstChild("Ipv6Enabled");
    if(!ipv6EnabledNode.IsNull())
    {
      m_ipv6Enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv6EnabledNode.GetText()).c_str()).c_str());
      m_ipv6EnabledHasBeenSet = true;
    }
    XmlNode routingEndpointNode = resultNode.FirstChild("RoutingEndpoint");
    if(!routingEndpointNode.IsNull())
    {
      m_routingEndpoint = Aws::Utils::Xml::DecodeEscapedXmlText(routingEndpointNode.GetText());
      m_routingEndpointHasBeenSet = true;
    }
    XmlNode anycastIpListIdNode = resultNode.FirstChild("AnycastIpListId");
    if(!anycastIpListIdNode.IsNull())
    {
      m_anycastIpListId = Aws::Utils::Xml::DecodeEscapedXmlText(anycastIpListIdNode.GetText());
      m_anycastIpListIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("IsDefault");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultNode.GetText()).c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionGroup::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_arnHasBeenSet)
  {
   XmlNode arnNode = parentNode.CreateChildElement("Arn");
   arnNode.SetText(m_arn);
  }

  if(m_createdTimeHasBeenSet)
  {
   XmlNode createdTimeNode = parentNode.CreateChildElement("CreatedTime");
   createdTimeNode.SetText(m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_tagsHasBeenSet)
  {
   XmlNode tagsNode = parentNode.CreateChildElement("Tags");
   m_tags.AddToNode(tagsNode);
  }

  if(m_ipv6EnabledHasBeenSet)
  {
   XmlNode ipv6EnabledNode = parentNode.CreateChildElement("Ipv6Enabled");
   ss << std::boolalpha << m_ipv6Enabled;
   ipv6EnabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_routingEndpointHasBeenSet)
  {
   XmlNode routingEndpointNode = parentNode.CreateChildElement("RoutingEndpoint");
   routingEndpointNode.SetText(m_routingEndpoint);
  }

  if(m_anycastIpListIdHasBeenSet)
  {
   XmlNode anycastIpListIdNode = parentNode.CreateChildElement("AnycastIpListId");
   anycastIpListIdNode.SetText(m_anycastIpListId);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(m_status);
  }

  if(m_enabledHasBeenSet)
  {
   XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
   ss << std::boolalpha << m_enabled;
   enabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_isDefaultHasBeenSet)
  {
   XmlNode isDefaultNode = parentNode.CreateChildElement("IsDefault");
   ss << std::boolalpha << m_isDefault;
   isDefaultNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
