﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/AnycastIpList.h>
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

AnycastIpList::AnycastIpList() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_anycastIpsHasBeenSet(false),
    m_ipCount(0),
    m_ipCountHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

AnycastIpList::AnycastIpList(const XmlNode& xmlNode)
  : AnycastIpList()
{
  *this = xmlNode;
}

AnycastIpList& AnycastIpList::operator =(const XmlNode& xmlNode)
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
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
    XmlNode anycastIpsNode = resultNode.FirstChild("AnycastIps");
    if(!anycastIpsNode.IsNull())
    {
      XmlNode anycastIpsMember = anycastIpsNode.FirstChild("AnycastIp");
      while(!anycastIpsMember.IsNull())
      {
        m_anycastIps.push_back(anycastIpsMember.GetText());
        anycastIpsMember = anycastIpsMember.NextNode("AnycastIp");
      }

      m_anycastIpsHasBeenSet = true;
    }
    XmlNode ipCountNode = resultNode.FirstChild("IpCount");
    if(!ipCountNode.IsNull())
    {
      m_ipCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipCountNode.GetText()).c_str()).c_str());
      m_ipCountHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
  }

  return *this;
}

void AnycastIpList::AddToNode(XmlNode& parentNode) const
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

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(m_status);
  }

  if(m_arnHasBeenSet)
  {
   XmlNode arnNode = parentNode.CreateChildElement("Arn");
   arnNode.SetText(m_arn);
  }

  if(m_anycastIpsHasBeenSet)
  {
   XmlNode anycastIpsParentNode = parentNode.CreateChildElement("AnycastIps");
   for(const auto& item : m_anycastIps)
   {
     XmlNode anycastIpsNode = anycastIpsParentNode.CreateChildElement("AnycastIp");
     anycastIpsNode.SetText(item);
   }
  }

  if(m_ipCountHasBeenSet)
  {
   XmlNode ipCountNode = parentNode.CreateChildElement("IpCount");
   ss << m_ipCount;
   ipCountNode.SetText(ss.str());
   ss.str("");
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
