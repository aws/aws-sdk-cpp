﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

LaunchTemplateInstanceMarketOptionsRequest::LaunchTemplateInstanceMarketOptionsRequest() : 
    m_marketType(MarketType::NOT_SET),
    m_marketTypeHasBeenSet(false),
    m_spotOptionsHasBeenSet(false)
{
}

LaunchTemplateInstanceMarketOptionsRequest::LaunchTemplateInstanceMarketOptionsRequest(const XmlNode& xmlNode) : 
    m_marketType(MarketType::NOT_SET),
    m_marketTypeHasBeenSet(false),
    m_spotOptionsHasBeenSet(false)
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
      m_marketType = MarketTypeMapper::GetMarketTypeForName(StringUtils::Trim(marketTypeNode.GetText().c_str()).c_str());
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
      oStream << location << index << locationValue << ".MarketType=" << MarketTypeMapper::GetNameForMarketType(m_marketType) << "&";
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
      oStream << location << ".MarketType=" << MarketTypeMapper::GetNameForMarketType(m_marketType) << "&";
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
