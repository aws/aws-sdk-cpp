/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/model/CreateEnvironmentResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateEnvironmentResult::CreateEnvironmentResult() : 
    m_dateCreated(0.0),
    m_dateUpdated(0.0),
    m_abortableOperationInProgress(false)
{
}

CreateEnvironmentResult::CreateEnvironmentResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_dateCreated(0.0),
    m_dateUpdated(0.0),
    m_abortableOperationInProgress(false)
{
  *this = result;
}

CreateEnvironmentResult& CreateEnvironmentResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("CreateEnvironmentResult");

  if(!resultNode.IsNull())
  {
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    m_environmentName = StringUtils::Trim(environmentNameNode.GetText().c_str());
    XmlNode environmentIdNode = resultNode.FirstChild("EnvironmentId");
    m_environmentId = StringUtils::Trim(environmentIdNode.GetText().c_str());
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    m_applicationName = StringUtils::Trim(applicationNameNode.GetText().c_str());
    XmlNode versionLabelNode = resultNode.FirstChild("VersionLabel");
    m_versionLabel = StringUtils::Trim(versionLabelNode.GetText().c_str());
    XmlNode solutionStackNameNode = resultNode.FirstChild("SolutionStackName");
    m_solutionStackName = StringUtils::Trim(solutionStackNameNode.GetText().c_str());
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    m_templateName = StringUtils::Trim(templateNameNode.GetText().c_str());
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
    XmlNode endpointURLNode = resultNode.FirstChild("EndpointURL");
    m_endpointURL = StringUtils::Trim(endpointURLNode.GetText().c_str());
    XmlNode cNAMENode = resultNode.FirstChild("CNAME");
    m_cNAME = StringUtils::Trim(cNAMENode.GetText().c_str());
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    m_dateCreated = StringUtils::ConvertToDouble(StringUtils::Trim(dateCreatedNode.GetText().c_str()).c_str());
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    m_dateUpdated = StringUtils::ConvertToDouble(StringUtils::Trim(dateUpdatedNode.GetText().c_str()).c_str());
    XmlNode statusNode = resultNode.FirstChild("Status");
    m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
    XmlNode abortableOperationInProgressNode = resultNode.FirstChild("AbortableOperationInProgress");
    m_abortableOperationInProgress = StringUtils::ConvertToBool(StringUtils::Trim(abortableOperationInProgressNode.GetText().c_str()).c_str());
    XmlNode healthNode = resultNode.FirstChild("Health");
    m_health = EnvironmentHealthMapper::GetEnvironmentHealthForName(StringUtils::Trim(healthNode.GetText().c_str()).c_str());
    XmlNode resourcesNode = resultNode.FirstChild("Resources");
    m_resources = resourcesNode;
    XmlNode tierNode = resultNode.FirstChild("Tier");
    m_tier = tierNode;
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
