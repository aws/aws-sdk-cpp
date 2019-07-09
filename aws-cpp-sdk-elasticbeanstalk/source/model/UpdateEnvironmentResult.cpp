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

#include <aws/elasticbeanstalk/model/UpdateEnvironmentResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

UpdateEnvironmentResult::UpdateEnvironmentResult() : 
    m_status(EnvironmentStatus::NOT_SET),
    m_abortableOperationInProgress(false),
    m_health(EnvironmentHealth::NOT_SET),
    m_healthStatus(EnvironmentHealthStatus::NOT_SET)
{
}

UpdateEnvironmentResult::UpdateEnvironmentResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(EnvironmentStatus::NOT_SET),
    m_abortableOperationInProgress(false),
    m_health(EnvironmentHealth::NOT_SET),
    m_healthStatus(EnvironmentHealthStatus::NOT_SET)
{
  *this = result;
}

UpdateEnvironmentResult& UpdateEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "UpdateEnvironmentResult"))
  {
    resultNode = rootNode.FirstChild("UpdateEnvironmentResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(!environmentNameNode.IsNull())
    {
      m_environmentName = environmentNameNode.GetText();
    }
    XmlNode environmentIdNode = resultNode.FirstChild("EnvironmentId");
    if(!environmentIdNode.IsNull())
    {
      m_environmentId = environmentIdNode.GetText();
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(!applicationNameNode.IsNull())
    {
      m_applicationName = applicationNameNode.GetText();
    }
    XmlNode versionLabelNode = resultNode.FirstChild("VersionLabel");
    if(!versionLabelNode.IsNull())
    {
      m_versionLabel = versionLabelNode.GetText();
    }
    XmlNode solutionStackNameNode = resultNode.FirstChild("SolutionStackName");
    if(!solutionStackNameNode.IsNull())
    {
      m_solutionStackName = solutionStackNameNode.GetText();
    }
    XmlNode platformArnNode = resultNode.FirstChild("PlatformArn");
    if(!platformArnNode.IsNull())
    {
      m_platformArn = platformArnNode.GetText();
    }
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = templateNameNode.GetText();
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
    }
    XmlNode endpointURLNode = resultNode.FirstChild("EndpointURL");
    if(!endpointURLNode.IsNull())
    {
      m_endpointURL = endpointURLNode.GetText();
    }
    XmlNode cNAMENode = resultNode.FirstChild("CNAME");
    if(!cNAMENode.IsNull())
    {
      m_cNAME = cNAMENode.GetText();
    }
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    if(!dateCreatedNode.IsNull())
    {
      m_dateCreated = DateTime(StringUtils::Trim(dateCreatedNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    if(!dateUpdatedNode.IsNull())
    {
      m_dateUpdated = DateTime(StringUtils::Trim(dateUpdatedNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
    }
    XmlNode abortableOperationInProgressNode = resultNode.FirstChild("AbortableOperationInProgress");
    if(!abortableOperationInProgressNode.IsNull())
    {
      m_abortableOperationInProgress = StringUtils::ConvertToBool(StringUtils::Trim(abortableOperationInProgressNode.GetText().c_str()).c_str());
    }
    XmlNode healthNode = resultNode.FirstChild("Health");
    if(!healthNode.IsNull())
    {
      m_health = EnvironmentHealthMapper::GetEnvironmentHealthForName(StringUtils::Trim(healthNode.GetText().c_str()).c_str());
    }
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    if(!healthStatusNode.IsNull())
    {
      m_healthStatus = EnvironmentHealthStatusMapper::GetEnvironmentHealthStatusForName(StringUtils::Trim(healthStatusNode.GetText().c_str()).c_str());
    }
    XmlNode resourcesNode = resultNode.FirstChild("Resources");
    if(!resourcesNode.IsNull())
    {
      m_resources = resourcesNode;
    }
    XmlNode tierNode = resultNode.FirstChild("Tier");
    if(!tierNode.IsNull())
    {
      m_tier = tierNode;
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

    }
    XmlNode environmentArnNode = resultNode.FirstChild("EnvironmentArn");
    if(!environmentArnNode.IsNull())
    {
      m_environmentArn = environmentArnNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::UpdateEnvironmentResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
