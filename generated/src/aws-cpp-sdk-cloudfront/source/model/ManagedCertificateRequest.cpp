/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ManagedCertificateRequest.h>
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

ManagedCertificateRequest::ManagedCertificateRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ManagedCertificateRequest& ManagedCertificateRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode validationTokenHostNode = resultNode.FirstChild("ValidationTokenHost");
    if(!validationTokenHostNode.IsNull())
    {
      m_validationTokenHost = ValidationTokenHostMapper::GetValidationTokenHostForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validationTokenHostNode.GetText()).c_str()));
      m_validationTokenHostHasBeenSet = true;
    }
    XmlNode primaryDomainNameNode = resultNode.FirstChild("PrimaryDomainName");
    if(!primaryDomainNameNode.IsNull())
    {
      m_primaryDomainName = Aws::Utils::Xml::DecodeEscapedXmlText(primaryDomainNameNode.GetText());
      m_primaryDomainNameHasBeenSet = true;
    }
    XmlNode certificateTransparencyLoggingPreferenceNode = resultNode.FirstChild("CertificateTransparencyLoggingPreference");
    if(!certificateTransparencyLoggingPreferenceNode.IsNull())
    {
      m_certificateTransparencyLoggingPreference = CertificateTransparencyLoggingPreferenceMapper::GetCertificateTransparencyLoggingPreferenceForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(certificateTransparencyLoggingPreferenceNode.GetText()).c_str()));
      m_certificateTransparencyLoggingPreferenceHasBeenSet = true;
    }
  }

  return *this;
}

void ManagedCertificateRequest::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_validationTokenHostHasBeenSet)
  {
   XmlNode validationTokenHostNode = parentNode.CreateChildElement("ValidationTokenHost");
   validationTokenHostNode.SetText(ValidationTokenHostMapper::GetNameForValidationTokenHost(m_validationTokenHost));
  }

  if(m_primaryDomainNameHasBeenSet)
  {
   XmlNode primaryDomainNameNode = parentNode.CreateChildElement("PrimaryDomainName");
   primaryDomainNameNode.SetText(m_primaryDomainName);
  }

  if(m_certificateTransparencyLoggingPreferenceHasBeenSet)
  {
   XmlNode certificateTransparencyLoggingPreferenceNode = parentNode.CreateChildElement("CertificateTransparencyLoggingPreference");
   certificateTransparencyLoggingPreferenceNode.SetText(CertificateTransparencyLoggingPreferenceMapper::GetNameForCertificateTransparencyLoggingPreference(m_certificateTransparencyLoggingPreference));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
