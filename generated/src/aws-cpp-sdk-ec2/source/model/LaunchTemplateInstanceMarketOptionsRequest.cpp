﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateInstanceMarketOptionsRequest.h>
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

LaunchTemplateInstanceMarketOptionsRequest::LaunchTemplateInstanceMarketOptionsRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LaunchTemplateInstanceMarketOptionsRequest& LaunchTemplateInstanceMarketOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode marketTypeNode = resultNode.FirstChild("MarketType");
    if(!marketTypeNode.IsNull())
    {
      m_marketType = MarketTypeMapper::GetMarketTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(marketTypeNode.GetText()).c_str()));
      m_marketTypeHasBeenSet = true;
    }
    XmlNode spotOptionsNode = resultNode.FirstChild("SpotOptions");
    if(!spotOptionsNode.IsNull())
    {
      m_spotOptions = spotOptionsNode;
      m_spotOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateInstanceMarketOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_marketTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MarketType=" << StringUtils::URLEncode(MarketTypeMapper::GetNameForMarketType(m_marketType)) << "&";
  }

  if(m_spotOptionsHasBeenSet)
  {
      Aws::StringStream spotOptionsLocationAndMemberSs;
      spotOptionsLocationAndMemberSs << location << index << locationValue << ".SpotOptions";
      m_spotOptions.OutputToStream(oStream, spotOptionsLocationAndMemberSs.str().c_str());
  }

}

void LaunchTemplateInstanceMarketOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_marketTypeHasBeenSet)
  {
      oStream << location << ".MarketType=" << StringUtils::URLEncode(MarketTypeMapper::GetNameForMarketType(m_marketType)) << "&";
  }
  if(m_spotOptionsHasBeenSet)
  {
      Aws::String spotOptionsLocationAndMember(location);
      spotOptionsLocationAndMember += ".SpotOptions";
      m_spotOptions.OutputToStream(oStream, spotOptionsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
