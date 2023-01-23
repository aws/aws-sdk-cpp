/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ViewerCertificate.h>
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

ViewerCertificate::ViewerCertificate() : 
    m_cloudFrontDefaultCertificate(false),
    m_cloudFrontDefaultCertificateHasBeenSet(false),
    m_iAMCertificateIdHasBeenSet(false),
    m_aCMCertificateArnHasBeenSet(false),
    m_sSLSupportMethod(SSLSupportMethod::NOT_SET),
    m_sSLSupportMethodHasBeenSet(false),
    m_minimumProtocolVersion(MinimumProtocolVersion::NOT_SET),
    m_minimumProtocolVersionHasBeenSet(false)
{
}

ViewerCertificate::ViewerCertificate(const XmlNode& xmlNode) : 
    m_cloudFrontDefaultCertificate(false),
    m_cloudFrontDefaultCertificateHasBeenSet(false),
    m_iAMCertificateIdHasBeenSet(false),
    m_aCMCertificateArnHasBeenSet(false),
    m_sSLSupportMethod(SSLSupportMethod::NOT_SET),
    m_sSLSupportMethodHasBeenSet(false),
    m_minimumProtocolVersion(MinimumProtocolVersion::NOT_SET),
    m_minimumProtocolVersionHasBeenSet(false)
{
  *this = xmlNode;
}

ViewerCertificate& ViewerCertificate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cloudFrontDefaultCertificateNode = resultNode.FirstChild("CloudFrontDefaultCertificate");
    if(!cloudFrontDefaultCertificateNode.IsNull())
    {
      m_cloudFrontDefaultCertificate = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(cloudFrontDefaultCertificateNode.GetText()).c_str()).c_str());
      m_cloudFrontDefaultCertificateHasBeenSet = true;
    }
    XmlNode iAMCertificateIdNode = resultNode.FirstChild("IAMCertificateId");
    if(!iAMCertificateIdNode.IsNull())
    {
      m_iAMCertificateId = Aws::Utils::Xml::DecodeEscapedXmlText(iAMCertificateIdNode.GetText());
      m_iAMCertificateIdHasBeenSet = true;
    }
    XmlNode aCMCertificateArnNode = resultNode.FirstChild("ACMCertificateArn");
    if(!aCMCertificateArnNode.IsNull())
    {
      m_aCMCertificateArn = Aws::Utils::Xml::DecodeEscapedXmlText(aCMCertificateArnNode.GetText());
      m_aCMCertificateArnHasBeenSet = true;
    }
    XmlNode sSLSupportMethodNode = resultNode.FirstChild("SSLSupportMethod");
    if(!sSLSupportMethodNode.IsNull())
    {
      m_sSLSupportMethod = SSLSupportMethodMapper::GetSSLSupportMethodForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sSLSupportMethodNode.GetText()).c_str()).c_str());
      m_sSLSupportMethodHasBeenSet = true;
    }
    XmlNode minimumProtocolVersionNode = resultNode.FirstChild("MinimumProtocolVersion");
    if(!minimumProtocolVersionNode.IsNull())
    {
      m_minimumProtocolVersion = MinimumProtocolVersionMapper::GetMinimumProtocolVersionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minimumProtocolVersionNode.GetText()).c_str()).c_str());
      m_minimumProtocolVersionHasBeenSet = true;
    }
  }

  return *this;
}

void ViewerCertificate::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_cloudFrontDefaultCertificateHasBeenSet)
  {
   XmlNode cloudFrontDefaultCertificateNode = parentNode.CreateChildElement("CloudFrontDefaultCertificate");
   ss << std::boolalpha << m_cloudFrontDefaultCertificate;
   cloudFrontDefaultCertificateNode.SetText(ss.str());
   ss.str("");
  }

  if(m_iAMCertificateIdHasBeenSet)
  {
   XmlNode iAMCertificateIdNode = parentNode.CreateChildElement("IAMCertificateId");
   iAMCertificateIdNode.SetText(m_iAMCertificateId);
  }

  if(m_aCMCertificateArnHasBeenSet)
  {
   XmlNode aCMCertificateArnNode = parentNode.CreateChildElement("ACMCertificateArn");
   aCMCertificateArnNode.SetText(m_aCMCertificateArn);
  }

  if(m_sSLSupportMethodHasBeenSet)
  {
   XmlNode sSLSupportMethodNode = parentNode.CreateChildElement("SSLSupportMethod");
   sSLSupportMethodNode.SetText(SSLSupportMethodMapper::GetNameForSSLSupportMethod(m_sSLSupportMethod));
  }

  if(m_minimumProtocolVersionHasBeenSet)
  {
   XmlNode minimumProtocolVersionNode = parentNode.CreateChildElement("MinimumProtocolVersion");
   minimumProtocolVersionNode.SetText(MinimumProtocolVersionMapper::GetNameForMinimumProtocolVersion(m_minimumProtocolVersion));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
