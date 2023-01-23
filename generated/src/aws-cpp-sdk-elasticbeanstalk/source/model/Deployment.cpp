/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/Deployment.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

Deployment::Deployment() : 
    m_versionLabelHasBeenSet(false),
    m_deploymentId(0),
    m_deploymentIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_deploymentTimeHasBeenSet(false)
{
}

Deployment::Deployment(const XmlNode& xmlNode) : 
    m_versionLabelHasBeenSet(false),
    m_deploymentId(0),
    m_deploymentIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_deploymentTimeHasBeenSet(false)
{
  *this = xmlNode;
}

Deployment& Deployment::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode versionLabelNode = resultNode.FirstChild("VersionLabel");
    if(!versionLabelNode.IsNull())
    {
      m_versionLabel = Aws::Utils::Xml::DecodeEscapedXmlText(versionLabelNode.GetText());
      m_versionLabelHasBeenSet = true;
    }
    XmlNode deploymentIdNode = resultNode.FirstChild("DeploymentId");
    if(!deploymentIdNode.IsNull())
    {
      m_deploymentId = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deploymentIdNode.GetText()).c_str()).c_str());
      m_deploymentIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode deploymentTimeNode = resultNode.FirstChild("DeploymentTime");
    if(!deploymentTimeNode.IsNull())
    {
      m_deploymentTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deploymentTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_deploymentTimeHasBeenSet = true;
    }
  }

  return *this;
}

void Deployment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_versionLabelHasBeenSet)
  {
      oStream << location << index << locationValue << ".VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_deploymentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeploymentId=" << m_deploymentId << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_deploymentTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeploymentTime=" << StringUtils::URLEncode(m_deploymentTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void Deployment::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_versionLabelHasBeenSet)
  {
      oStream << location << ".VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }
  if(m_deploymentIdHasBeenSet)
  {
      oStream << location << ".DeploymentId=" << m_deploymentId << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_deploymentTimeHasBeenSet)
  {
      oStream << location << ".DeploymentTime=" << StringUtils::URLEncode(m_deploymentTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
