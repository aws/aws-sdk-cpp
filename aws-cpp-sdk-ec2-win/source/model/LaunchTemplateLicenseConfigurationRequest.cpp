/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateLicenseConfigurationRequest.h>
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

LaunchTemplateLicenseConfigurationRequest::LaunchTemplateLicenseConfigurationRequest() : 
    m_licenseConfigurationArnHasBeenSet(false)
{
}

LaunchTemplateLicenseConfigurationRequest::LaunchTemplateLicenseConfigurationRequest(const XmlNode& xmlNode) : 
    m_licenseConfigurationArnHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateLicenseConfigurationRequest& LaunchTemplateLicenseConfigurationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode licenseConfigurationArnNode = resultNode.FirstChild("LicenseConfigurationArn");
    if(!licenseConfigurationArnNode.IsNull())
    {
      m_licenseConfigurationArn = Aws::Utils::Xml::DecodeEscapedXmlText(licenseConfigurationArnNode.GetText());
      m_licenseConfigurationArnHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateLicenseConfigurationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_licenseConfigurationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseConfigurationArn=" << StringUtils::URLEncode(m_licenseConfigurationArn.c_str()) << "&";
  }

}

void LaunchTemplateLicenseConfigurationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_licenseConfigurationArnHasBeenSet)
  {
      oStream << location << ".LicenseConfigurationArn=" << StringUtils::URLEncode(m_licenseConfigurationArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
