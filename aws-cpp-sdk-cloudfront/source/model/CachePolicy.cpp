﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CachePolicy.h>
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

CachePolicy::CachePolicy() : 
    m_idHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_cachePolicyConfigHasBeenSet(false)
{
}

CachePolicy::CachePolicy(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_cachePolicyConfigHasBeenSet(false)
{
  *this = xmlNode;
}

CachePolicy& CachePolicy::operator =(const XmlNode& xmlNode)
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
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedTimeNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode cachePolicyConfigNode = resultNode.FirstChild("CachePolicyConfig");
    if(!cachePolicyConfigNode.IsNull())
    {
      m_cachePolicyConfig = cachePolicyConfigNode;
      m_cachePolicyConfigHasBeenSet = true;
    }
  }

  return *this;
}

void CachePolicy::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_cachePolicyConfigHasBeenSet)
  {
   XmlNode cachePolicyConfigNode = parentNode.CreateChildElement("CachePolicyConfig");
   m_cachePolicyConfig.AddToNode(cachePolicyConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
