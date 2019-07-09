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

#include <aws/elasticbeanstalk/model/EnvironmentDescription.h>
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

EnvironmentDescription::EnvironmentDescription() : 
    m_environmentNameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_solutionStackNameHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointURLHasBeenSet(false),
    m_cNAMEHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_status(EnvironmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_abortableOperationInProgress(false),
    m_abortableOperationInProgressHasBeenSet(false),
    m_health(EnvironmentHealth::NOT_SET),
    m_healthHasBeenSet(false),
    m_healthStatus(EnvironmentHealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_tierHasBeenSet(false),
    m_environmentLinksHasBeenSet(false),
    m_environmentArnHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

EnvironmentDescription::EnvironmentDescription(const XmlNode& xmlNode) : 
    m_environmentNameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_solutionStackNameHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointURLHasBeenSet(false),
    m_cNAMEHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_status(EnvironmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_abortableOperationInProgress(false),
    m_abortableOperationInProgressHasBeenSet(false),
    m_health(EnvironmentHealth::NOT_SET),
    m_healthHasBeenSet(false),
    m_healthStatus(EnvironmentHealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_tierHasBeenSet(false),
    m_environmentLinksHasBeenSet(false),
    m_environmentArnHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

EnvironmentDescription& EnvironmentDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(!environmentNameNode.IsNull())
    {
      m_environmentName = environmentNameNode.GetText();
      m_environmentNameHasBeenSet = true;
    }
    XmlNode environmentIdNode = resultNode.FirstChild("EnvironmentId");
    if(!environmentIdNode.IsNull())
    {
      m_environmentId = environmentIdNode.GetText();
      m_environmentIdHasBeenSet = true;
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(!applicationNameNode.IsNull())
    {
      m_applicationName = applicationNameNode.GetText();
      m_applicationNameHasBeenSet = true;
    }
    XmlNode versionLabelNode = resultNode.FirstChild("VersionLabel");
    if(!versionLabelNode.IsNull())
    {
      m_versionLabel = versionLabelNode.GetText();
      m_versionLabelHasBeenSet = true;
    }
    XmlNode solutionStackNameNode = resultNode.FirstChild("SolutionStackName");
    if(!solutionStackNameNode.IsNull())
    {
      m_solutionStackName = solutionStackNameNode.GetText();
      m_solutionStackNameHasBeenSet = true;
    }
    XmlNode platformArnNode = resultNode.FirstChild("PlatformArn");
    if(!platformArnNode.IsNull())
    {
      m_platformArn = platformArnNode.GetText();
      m_platformArnHasBeenSet = true;
    }
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = templateNameNode.GetText();
      m_templateNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode endpointURLNode = resultNode.FirstChild("EndpointURL");
    if(!endpointURLNode.IsNull())
    {
      m_endpointURL = endpointURLNode.GetText();
      m_endpointURLHasBeenSet = true;
    }
    XmlNode cNAMENode = resultNode.FirstChild("CNAME");
    if(!cNAMENode.IsNull())
    {
      m_cNAME = cNAMENode.GetText();
      m_cNAMEHasBeenSet = true;
    }
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    if(!dateCreatedNode.IsNull())
    {
      m_dateCreated = DateTime(StringUtils::Trim(dateCreatedNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_dateCreatedHasBeenSet = true;
    }
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    if(!dateUpdatedNode.IsNull())
    {
      m_dateUpdated = DateTime(StringUtils::Trim(dateUpdatedNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_dateUpdatedHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode abortableOperationInProgressNode = resultNode.FirstChild("AbortableOperationInProgress");
    if(!abortableOperationInProgressNode.IsNull())
    {
      m_abortableOperationInProgress = StringUtils::ConvertToBool(StringUtils::Trim(abortableOperationInProgressNode.GetText().c_str()).c_str());
      m_abortableOperationInProgressHasBeenSet = true;
    }
    XmlNode healthNode = resultNode.FirstChild("Health");
    if(!healthNode.IsNull())
    {
      m_health = EnvironmentHealthMapper::GetEnvironmentHealthForName(StringUtils::Trim(healthNode.GetText().c_str()).c_str());
      m_healthHasBeenSet = true;
    }
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    if(!healthStatusNode.IsNull())
    {
      m_healthStatus = EnvironmentHealthStatusMapper::GetEnvironmentHealthStatusForName(StringUtils::Trim(healthStatusNode.GetText().c_str()).c_str());
      m_healthStatusHasBeenSet = true;
    }
    XmlNode resourcesNode = resultNode.FirstChild("Resources");
    if(!resourcesNode.IsNull())
    {
      m_resources = resourcesNode;
      m_resourcesHasBeenSet = true;
    }
    XmlNode tierNode = resultNode.FirstChild("Tier");
    if(!tierNode.IsNull())
    {
      m_tier = tierNode;
      m_tierHasBeenSet = true;
    }
    XmlNode environmentLinksNode = resultNode.FirstChild("EnvironmentLinks");
    if(!environmentLinksNode.IsNull())
    {
      XmlNode environmentLinksMember = environmentLinksNode.FirstChild("member");
      while(!environmentLinksMember.IsNull())
      {
        m_environmentLinks.push_back(environmentLinksMember);
        environmentLinksMember = environmentLinksMember.NextNode("member");
      }

      m_environmentLinksHasBeenSet = true;
    }
    XmlNode environmentArnNode = resultNode.FirstChild("EnvironmentArn");
    if(!environmentArnNode.IsNull())
    {
      m_environmentArn = environmentArnNode.GetText();
      m_environmentArnHasBeenSet = true;
    }
  }

  return *this;
}

void EnvironmentDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_environmentNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_environmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnvironmentId=" << StringUtils::URLEncode(m_environmentId.c_str()) << "&";
  }

  if(m_applicationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_versionLabelHasBeenSet)
  {
      oStream << location << index << locationValue << ".VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_solutionStackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SolutionStackName=" << StringUtils::URLEncode(m_solutionStackName.c_str()) << "&";
  }

  if(m_platformArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }

  if(m_templateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_endpointURLHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointURL=" << StringUtils::URLEncode(m_endpointURL.c_str()) << "&";
  }

  if(m_cNAMEHasBeenSet)
  {
      oStream << location << index << locationValue << ".CNAME=" << StringUtils::URLEncode(m_cNAME.c_str()) << "&";
  }

  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateCreated=" << StringUtils::URLEncode(m_dateCreated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateUpdated=" << StringUtils::URLEncode(m_dateUpdated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << EnvironmentStatusMapper::GetNameForEnvironmentStatus(m_status) << "&";
  }

  if(m_abortableOperationInProgressHasBeenSet)
  {
      oStream << location << index << locationValue << ".AbortableOperationInProgress=" << std::boolalpha << m_abortableOperationInProgress << "&";
  }

  if(m_healthHasBeenSet)
  {
      oStream << location << index << locationValue << ".Health=" << EnvironmentHealthMapper::GetNameForEnvironmentHealth(m_health) << "&";
  }

  if(m_healthStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthStatus=" << EnvironmentHealthStatusMapper::GetNameForEnvironmentHealthStatus(m_healthStatus) << "&";
  }

  if(m_resourcesHasBeenSet)
  {
      Aws::StringStream resourcesLocationAndMemberSs;
      resourcesLocationAndMemberSs << location << index << locationValue << ".Resources";
      m_resources.OutputToStream(oStream, resourcesLocationAndMemberSs.str().c_str());
  }

  if(m_tierHasBeenSet)
  {
      Aws::StringStream tierLocationAndMemberSs;
      tierLocationAndMemberSs << location << index << locationValue << ".Tier";
      m_tier.OutputToStream(oStream, tierLocationAndMemberSs.str().c_str());
  }

  if(m_environmentLinksHasBeenSet)
  {
      unsigned environmentLinksIdx = 1;
      for(auto& item : m_environmentLinks)
      {
        Aws::StringStream environmentLinksSs;
        environmentLinksSs << location << index << locationValue << ".EnvironmentLinks.member." << environmentLinksIdx++;
        item.OutputToStream(oStream, environmentLinksSs.str().c_str());
      }
  }

  if(m_environmentArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnvironmentArn=" << StringUtils::URLEncode(m_environmentArn.c_str()) << "&";
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void EnvironmentDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_environmentNameHasBeenSet)
  {
      oStream << location << ".EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }
  if(m_environmentIdHasBeenSet)
  {
      oStream << location << ".EnvironmentId=" << StringUtils::URLEncode(m_environmentId.c_str()) << "&";
  }
  if(m_applicationNameHasBeenSet)
  {
      oStream << location << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }
  if(m_versionLabelHasBeenSet)
  {
      oStream << location << ".VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }
  if(m_solutionStackNameHasBeenSet)
  {
      oStream << location << ".SolutionStackName=" << StringUtils::URLEncode(m_solutionStackName.c_str()) << "&";
  }
  if(m_platformArnHasBeenSet)
  {
      oStream << location << ".PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }
  if(m_templateNameHasBeenSet)
  {
      oStream << location << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_endpointURLHasBeenSet)
  {
      oStream << location << ".EndpointURL=" << StringUtils::URLEncode(m_endpointURL.c_str()) << "&";
  }
  if(m_cNAMEHasBeenSet)
  {
      oStream << location << ".CNAME=" << StringUtils::URLEncode(m_cNAME.c_str()) << "&";
  }
  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << ".DateCreated=" << StringUtils::URLEncode(m_dateCreated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << ".DateUpdated=" << StringUtils::URLEncode(m_dateUpdated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << EnvironmentStatusMapper::GetNameForEnvironmentStatus(m_status) << "&";
  }
  if(m_abortableOperationInProgressHasBeenSet)
  {
      oStream << location << ".AbortableOperationInProgress=" << std::boolalpha << m_abortableOperationInProgress << "&";
  }
  if(m_healthHasBeenSet)
  {
      oStream << location << ".Health=" << EnvironmentHealthMapper::GetNameForEnvironmentHealth(m_health) << "&";
  }
  if(m_healthStatusHasBeenSet)
  {
      oStream << location << ".HealthStatus=" << EnvironmentHealthStatusMapper::GetNameForEnvironmentHealthStatus(m_healthStatus) << "&";
  }
  if(m_resourcesHasBeenSet)
  {
      Aws::String resourcesLocationAndMember(location);
      resourcesLocationAndMember += ".Resources";
      m_resources.OutputToStream(oStream, resourcesLocationAndMember.c_str());
  }
  if(m_tierHasBeenSet)
  {
      Aws::String tierLocationAndMember(location);
      tierLocationAndMember += ".Tier";
      m_tier.OutputToStream(oStream, tierLocationAndMember.c_str());
  }
  if(m_environmentLinksHasBeenSet)
  {
      unsigned environmentLinksIdx = 1;
      for(auto& item : m_environmentLinks)
      {
        Aws::StringStream environmentLinksSs;
        environmentLinksSs << location <<  ".EnvironmentLinks.member." << environmentLinksIdx++;
        item.OutputToStream(oStream, environmentLinksSs.str().c_str());
      }
  }
  if(m_environmentArnHasBeenSet)
  {
      oStream << location << ".EnvironmentArn=" << StringUtils::URLEncode(m_environmentArn.c_str()) << "&";
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
