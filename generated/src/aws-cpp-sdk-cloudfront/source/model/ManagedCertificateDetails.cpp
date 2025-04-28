/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ManagedCertificateDetails.h>
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

ManagedCertificateDetails::ManagedCertificateDetails(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ManagedCertificateDetails& ManagedCertificateDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode certificateArnNode = resultNode.FirstChild("CertificateArn");
    if(!certificateArnNode.IsNull())
    {
      m_certificateArn = Aws::Utils::Xml::DecodeEscapedXmlText(certificateArnNode.GetText());
      m_certificateArnHasBeenSet = true;
    }
    XmlNode certificateStatusNode = resultNode.FirstChild("CertificateStatus");
    if(!certificateStatusNode.IsNull())
    {
      m_certificateStatus = ManagedCertificateStatusMapper::GetManagedCertificateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(certificateStatusNode.GetText()).c_str()));
      m_certificateStatusHasBeenSet = true;
    }
    XmlNode validationTokenHostNode = resultNode.FirstChild("ValidationTokenHost");
    if(!validationTokenHostNode.IsNull())
    {
      m_validationTokenHost = ValidationTokenHostMapper::GetValidationTokenHostForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validationTokenHostNode.GetText()).c_str()));
      m_validationTokenHostHasBeenSet = true;
    }
    XmlNode validationTokenDetailsNode = resultNode.FirstChild("ValidationTokenDetails");
    if(!validationTokenDetailsNode.IsNull())
    {
      XmlNode validationTokenDetailsMember = validationTokenDetailsNode.FirstChild("member");
      m_validationTokenDetailsHasBeenSet = !validationTokenDetailsMember.IsNull();
      while(!validationTokenDetailsMember.IsNull())
      {
        m_validationTokenDetails.push_back(validationTokenDetailsMember);
        validationTokenDetailsMember = validationTokenDetailsMember.NextNode("member");
      }

      m_validationTokenDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void ManagedCertificateDetails::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_certificateArnHasBeenSet)
  {
   XmlNode certificateArnNode = parentNode.CreateChildElement("CertificateArn");
   certificateArnNode.SetText(m_certificateArn);
  }

  if(m_certificateStatusHasBeenSet)
  {
   XmlNode certificateStatusNode = parentNode.CreateChildElement("CertificateStatus");
   certificateStatusNode.SetText(ManagedCertificateStatusMapper::GetNameForManagedCertificateStatus(m_certificateStatus));
  }

  if(m_validationTokenHostHasBeenSet)
  {
   XmlNode validationTokenHostNode = parentNode.CreateChildElement("ValidationTokenHost");
   validationTokenHostNode.SetText(ValidationTokenHostMapper::GetNameForValidationTokenHost(m_validationTokenHost));
  }

  if(m_validationTokenDetailsHasBeenSet)
  {
   XmlNode validationTokenDetailsParentNode = parentNode.CreateChildElement("ValidationTokenDetails");
   for(const auto& item : m_validationTokenDetails)
   {
     XmlNode validationTokenDetailsNode = validationTokenDetailsParentNode.CreateChildElement("ValidationTokenDetail");
     item.AddToNode(validationTokenDetailsNode);
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
