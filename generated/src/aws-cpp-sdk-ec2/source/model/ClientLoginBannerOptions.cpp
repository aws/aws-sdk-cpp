﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientLoginBannerOptions.h>
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

ClientLoginBannerOptions::ClientLoginBannerOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ClientLoginBannerOptions& ClientLoginBannerOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode bannerTextNode = resultNode.FirstChild("BannerText");
    if(!bannerTextNode.IsNull())
    {
      m_bannerText = Aws::Utils::Xml::DecodeEscapedXmlText(bannerTextNode.GetText());
      m_bannerTextHasBeenSet = true;
    }
  }

  return *this;
}

void ClientLoginBannerOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_bannerTextHasBeenSet)
  {
      oStream << location << index << locationValue << ".BannerText=" << StringUtils::URLEncode(m_bannerText.c_str()) << "&";
  }

}

void ClientLoginBannerOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_bannerTextHasBeenSet)
  {
      oStream << location << ".BannerText=" << StringUtils::URLEncode(m_bannerText.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
