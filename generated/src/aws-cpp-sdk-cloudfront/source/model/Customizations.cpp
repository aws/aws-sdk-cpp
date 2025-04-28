/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/Customizations.h>
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

Customizations::Customizations(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Customizations& Customizations::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode webAclNode = resultNode.FirstChild("WebAcl");
    if(!webAclNode.IsNull())
    {
      m_webAcl = webAclNode;
      m_webAclHasBeenSet = true;
    }
    XmlNode certificateNode = resultNode.FirstChild("Certificate");
    if(!certificateNode.IsNull())
    {
      m_certificate = certificateNode;
      m_certificateHasBeenSet = true;
    }
    XmlNode geoRestrictionsNode = resultNode.FirstChild("GeoRestrictions");
    if(!geoRestrictionsNode.IsNull())
    {
      m_geoRestrictions = geoRestrictionsNode;
      m_geoRestrictionsHasBeenSet = true;
    }
  }

  return *this;
}

void Customizations::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_webAclHasBeenSet)
  {
   XmlNode webAclNode = parentNode.CreateChildElement("WebAcl");
   m_webAcl.AddToNode(webAclNode);
  }

  if(m_certificateHasBeenSet)
  {
   XmlNode certificateNode = parentNode.CreateChildElement("Certificate");
   m_certificate.AddToNode(certificateNode);
  }

  if(m_geoRestrictionsHasBeenSet)
  {
   XmlNode geoRestrictionsNode = parentNode.CreateChildElement("GeoRestrictions");
   m_geoRestrictions.AddToNode(geoRestrictionsNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
