/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginRequestPolicy.h>
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

OriginRequestPolicy::OriginRequestPolicy() : 
    m_idHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_originRequestPolicyConfigHasBeenSet(false)
{
}

OriginRequestPolicy::OriginRequestPolicy(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_originRequestPolicyConfigHasBeenSet(false)
{
  *this = xmlNode;
}

OriginRequestPolicy& OriginRequestPolicy::operator =(const XmlNode& xmlNode)
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
      m_lastModifiedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode originRequestPolicyConfigNode = resultNode.FirstChild("OriginRequestPolicyConfig");
    if(!originRequestPolicyConfigNode.IsNull())
    {
      m_originRequestPolicyConfig = originRequestPolicyConfigNode;
      m_originRequestPolicyConfigHasBeenSet = true;
    }
  }

  return *this;
}

void OriginRequestPolicy::AddToNode(XmlNode& parentNode) const
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
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_originRequestPolicyConfigHasBeenSet)
  {
   XmlNode originRequestPolicyConfigNode = parentNode.CreateChildElement("OriginRequestPolicyConfig");
   m_originRequestPolicyConfig.AddToNode(originRequestPolicyConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
