/*
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

#include <aws/ec2/model/LicenseConfigurationRequest.h>
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

LicenseConfigurationRequest::LicenseConfigurationRequest() : 
    m_licenseConfigurationArnHasBeenSet(false)
{
}

LicenseConfigurationRequest::LicenseConfigurationRequest(const XmlNode& xmlNode) : 
    m_licenseConfigurationArnHasBeenSet(false)
{
  *this = xmlNode;
}

LicenseConfigurationRequest& LicenseConfigurationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode licenseConfigurationArnNode = resultNode.FirstChild("LicenseConfigurationArn");
    if(!licenseConfigurationArnNode.IsNull())
    {
      m_licenseConfigurationArn = licenseConfigurationArnNode.GetText();
      m_licenseConfigurationArnHasBeenSet = true;
    }
  }

  return *this;
}

void LicenseConfigurationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_licenseConfigurationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseConfigurationArn=" << StringUtils::URLEncode(m_licenseConfigurationArn.c_str()) << "&";
  }

}

void LicenseConfigurationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_licenseConfigurationArnHasBeenSet)
  {
      oStream << location << ".LicenseConfigurationArn=" << StringUtils::URLEncode(m_licenseConfigurationArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
