/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicySecurityHeadersConfig.h>
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

ResponseHeadersPolicySecurityHeadersConfig::ResponseHeadersPolicySecurityHeadersConfig() : 
    m_xSSProtectionHasBeenSet(false),
    m_frameOptionsHasBeenSet(false),
    m_referrerPolicyHasBeenSet(false),
    m_contentSecurityPolicyHasBeenSet(false),
    m_contentTypeOptionsHasBeenSet(false),
    m_strictTransportSecurityHasBeenSet(false)
{
}

ResponseHeadersPolicySecurityHeadersConfig::ResponseHeadersPolicySecurityHeadersConfig(const XmlNode& xmlNode) : 
    m_xSSProtectionHasBeenSet(false),
    m_frameOptionsHasBeenSet(false),
    m_referrerPolicyHasBeenSet(false),
    m_contentSecurityPolicyHasBeenSet(false),
    m_contentTypeOptionsHasBeenSet(false),
    m_strictTransportSecurityHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseHeadersPolicySecurityHeadersConfig& ResponseHeadersPolicySecurityHeadersConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode xSSProtectionNode = resultNode.FirstChild("XSSProtection");
    if(!xSSProtectionNode.IsNull())
    {
      m_xSSProtection = xSSProtectionNode;
      m_xSSProtectionHasBeenSet = true;
    }
    XmlNode frameOptionsNode = resultNode.FirstChild("FrameOptions");
    if(!frameOptionsNode.IsNull())
    {
      m_frameOptions = frameOptionsNode;
      m_frameOptionsHasBeenSet = true;
    }
    XmlNode referrerPolicyNode = resultNode.FirstChild("ReferrerPolicy");
    if(!referrerPolicyNode.IsNull())
    {
      m_referrerPolicy = referrerPolicyNode;
      m_referrerPolicyHasBeenSet = true;
    }
    XmlNode contentSecurityPolicyNode = resultNode.FirstChild("ContentSecurityPolicy");
    if(!contentSecurityPolicyNode.IsNull())
    {
      m_contentSecurityPolicy = contentSecurityPolicyNode;
      m_contentSecurityPolicyHasBeenSet = true;
    }
    XmlNode contentTypeOptionsNode = resultNode.FirstChild("ContentTypeOptions");
    if(!contentTypeOptionsNode.IsNull())
    {
      m_contentTypeOptions = contentTypeOptionsNode;
      m_contentTypeOptionsHasBeenSet = true;
    }
    XmlNode strictTransportSecurityNode = resultNode.FirstChild("StrictTransportSecurity");
    if(!strictTransportSecurityNode.IsNull())
    {
      m_strictTransportSecurity = strictTransportSecurityNode;
      m_strictTransportSecurityHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicySecurityHeadersConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_xSSProtectionHasBeenSet)
  {
   XmlNode xSSProtectionNode = parentNode.CreateChildElement("XSSProtection");
   m_xSSProtection.AddToNode(xSSProtectionNode);
  }

  if(m_frameOptionsHasBeenSet)
  {
   XmlNode frameOptionsNode = parentNode.CreateChildElement("FrameOptions");
   m_frameOptions.AddToNode(frameOptionsNode);
  }

  if(m_referrerPolicyHasBeenSet)
  {
   XmlNode referrerPolicyNode = parentNode.CreateChildElement("ReferrerPolicy");
   m_referrerPolicy.AddToNode(referrerPolicyNode);
  }

  if(m_contentSecurityPolicyHasBeenSet)
  {
   XmlNode contentSecurityPolicyNode = parentNode.CreateChildElement("ContentSecurityPolicy");
   m_contentSecurityPolicy.AddToNode(contentSecurityPolicyNode);
  }

  if(m_contentTypeOptionsHasBeenSet)
  {
   XmlNode contentTypeOptionsNode = parentNode.CreateChildElement("ContentTypeOptions");
   m_contentTypeOptions.AddToNode(contentTypeOptionsNode);
  }

  if(m_strictTransportSecurityHasBeenSet)
  {
   XmlNode strictTransportSecurityNode = parentNode.CreateChildElement("StrictTransportSecurity");
   m_strictTransportSecurity.AddToNode(strictTransportSecurityNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
