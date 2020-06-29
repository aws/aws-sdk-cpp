/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetLaunchTemplateSpecificationRequest.h>
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

FleetLaunchTemplateSpecificationRequest::FleetLaunchTemplateSpecificationRequest() : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

FleetLaunchTemplateSpecificationRequest::FleetLaunchTemplateSpecificationRequest(const XmlNode& xmlNode) : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = xmlNode;
}

FleetLaunchTemplateSpecificationRequest& FleetLaunchTemplateSpecificationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode launchTemplateIdNode = resultNode.FirstChild("LaunchTemplateId");
    if(!launchTemplateIdNode.IsNull())
    {
      m_launchTemplateId = Aws::Utils::Xml::DecodeEscapedXmlText(launchTemplateIdNode.GetText());
      m_launchTemplateIdHasBeenSet = true;
    }
    XmlNode launchTemplateNameNode = resultNode.FirstChild("LaunchTemplateName");
    if(!launchTemplateNameNode.IsNull())
    {
      m_launchTemplateName = Aws::Utils::Xml::DecodeEscapedXmlText(launchTemplateNameNode.GetText());
      m_launchTemplateNameHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("Version");
    if(!versionNode.IsNull())
    {
      m_version = Aws::Utils::Xml::DecodeEscapedXmlText(versionNode.GetText());
      m_versionHasBeenSet = true;
    }
  }

  return *this;
}

void FleetLaunchTemplateSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }

  if(m_launchTemplateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }

  if(m_versionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Version=" << StringUtils::URLEncode(m_version.c_str()) << "&";
  }

}

void FleetLaunchTemplateSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateIdHasBeenSet)
  {
      oStream << location << ".LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }
  if(m_launchTemplateNameHasBeenSet)
  {
      oStream << location << ".LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }
  if(m_versionHasBeenSet)
  {
      oStream << location << ".Version=" << StringUtils::URLEncode(m_version.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
