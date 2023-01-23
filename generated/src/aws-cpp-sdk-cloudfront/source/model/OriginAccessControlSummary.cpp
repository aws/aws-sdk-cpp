/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginAccessControlSummary.h>
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

OriginAccessControlSummary::OriginAccessControlSummary() : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_signingProtocol(OriginAccessControlSigningProtocols::NOT_SET),
    m_signingProtocolHasBeenSet(false),
    m_signingBehavior(OriginAccessControlSigningBehaviors::NOT_SET),
    m_signingBehaviorHasBeenSet(false),
    m_originAccessControlOriginType(OriginAccessControlOriginTypes::NOT_SET),
    m_originAccessControlOriginTypeHasBeenSet(false)
{
}

OriginAccessControlSummary::OriginAccessControlSummary(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_signingProtocol(OriginAccessControlSigningProtocols::NOT_SET),
    m_signingProtocolHasBeenSet(false),
    m_signingBehavior(OriginAccessControlSigningBehaviors::NOT_SET),
    m_signingBehaviorHasBeenSet(false),
    m_originAccessControlOriginType(OriginAccessControlOriginTypes::NOT_SET),
    m_originAccessControlOriginTypeHasBeenSet(false)
{
  *this = xmlNode;
}

OriginAccessControlSummary& OriginAccessControlSummary::operator =(const XmlNode& xmlNode)
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
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode signingProtocolNode = resultNode.FirstChild("SigningProtocol");
    if(!signingProtocolNode.IsNull())
    {
      m_signingProtocol = OriginAccessControlSigningProtocolsMapper::GetOriginAccessControlSigningProtocolsForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(signingProtocolNode.GetText()).c_str()).c_str());
      m_signingProtocolHasBeenSet = true;
    }
    XmlNode signingBehaviorNode = resultNode.FirstChild("SigningBehavior");
    if(!signingBehaviorNode.IsNull())
    {
      m_signingBehavior = OriginAccessControlSigningBehaviorsMapper::GetOriginAccessControlSigningBehaviorsForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(signingBehaviorNode.GetText()).c_str()).c_str());
      m_signingBehaviorHasBeenSet = true;
    }
    XmlNode originAccessControlOriginTypeNode = resultNode.FirstChild("OriginAccessControlOriginType");
    if(!originAccessControlOriginTypeNode.IsNull())
    {
      m_originAccessControlOriginType = OriginAccessControlOriginTypesMapper::GetOriginAccessControlOriginTypesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originAccessControlOriginTypeNode.GetText()).c_str()).c_str());
      m_originAccessControlOriginTypeHasBeenSet = true;
    }
  }

  return *this;
}

void OriginAccessControlSummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_descriptionHasBeenSet)
  {
   XmlNode descriptionNode = parentNode.CreateChildElement("Description");
   descriptionNode.SetText(m_description);
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_signingProtocolHasBeenSet)
  {
   XmlNode signingProtocolNode = parentNode.CreateChildElement("SigningProtocol");
   signingProtocolNode.SetText(OriginAccessControlSigningProtocolsMapper::GetNameForOriginAccessControlSigningProtocols(m_signingProtocol));
  }

  if(m_signingBehaviorHasBeenSet)
  {
   XmlNode signingBehaviorNode = parentNode.CreateChildElement("SigningBehavior");
   signingBehaviorNode.SetText(OriginAccessControlSigningBehaviorsMapper::GetNameForOriginAccessControlSigningBehaviors(m_signingBehavior));
  }

  if(m_originAccessControlOriginTypeHasBeenSet)
  {
   XmlNode originAccessControlOriginTypeNode = parentNode.CreateChildElement("OriginAccessControlOriginType");
   originAccessControlOriginTypeNode.SetText(OriginAccessControlOriginTypesMapper::GetNameForOriginAccessControlOriginTypes(m_originAccessControlOriginType));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
