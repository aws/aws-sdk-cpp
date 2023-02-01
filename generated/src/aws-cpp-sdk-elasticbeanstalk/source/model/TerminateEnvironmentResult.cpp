/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/TerminateEnvironmentResult.h>
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

TerminateEnvironmentResult::TerminateEnvironmentResult() : 
    m_status(EnvironmentStatus::NOT_SET),
    m_abortableOperationInProgress(false),
    m_health(EnvironmentHealth::NOT_SET),
    m_healthStatus(EnvironmentHealthStatus::NOT_SET)
{
}

TerminateEnvironmentResult::TerminateEnvironmentResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(EnvironmentStatus::NOT_SET),
    m_abortableOperationInProgress(false),
    m_health(EnvironmentHealth::NOT_SET),
    m_healthStatus(EnvironmentHealthStatus::NOT_SET)
{
  *this = result;
}

TerminateEnvironmentResult& TerminateEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "TerminateEnvironmentResult"))
  {
    resultNode = rootNode.FirstChild("TerminateEnvironmentResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(!environmentNameNode.IsNull())
    {
      m_environmentName = Aws::Utils::Xml::DecodeEscapedXmlText(environmentNameNode.GetText());
    }
    XmlNode environmentIdNode = resultNode.FirstChild("EnvironmentId");
    if(!environmentIdNode.IsNull())
    {
      m_environmentId = Aws::Utils::Xml::DecodeEscapedXmlText(environmentIdNode.GetText());
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(!applicationNameNode.IsNull())
    {
      m_applicationName = Aws::Utils::Xml::DecodeEscapedXmlText(applicationNameNode.GetText());
    }
    XmlNode versionLabelNode = resultNode.FirstChild("VersionLabel");
    if(!versionLabelNode.IsNull())
    {
      m_versionLabel = Aws::Utils::Xml::DecodeEscapedXmlText(versionLabelNode.GetText());
    }
    XmlNode solutionStackNameNode = resultNode.FirstChild("SolutionStackName");
    if(!solutionStackNameNode.IsNull())
    {
      m_solutionStackName = Aws::Utils::Xml::DecodeEscapedXmlText(solutionStackNameNode.GetText());
    }
    XmlNode platformArnNode = resultNode.FirstChild("PlatformArn");
    if(!platformArnNode.IsNull())
    {
      m_platformArn = Aws::Utils::Xml::DecodeEscapedXmlText(platformArnNode.GetText());
    }
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = Aws::Utils::Xml::DecodeEscapedXmlText(templateNameNode.GetText());
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode endpointURLNode = resultNode.FirstChild("EndpointURL");
    if(!endpointURLNode.IsNull())
    {
      m_endpointURL = Aws::Utils::Xml::DecodeEscapedXmlText(endpointURLNode.GetText());
    }
    XmlNode cNAMENode = resultNode.FirstChild("CNAME");
    if(!cNAMENode.IsNull())
    {
      m_cNAME = Aws::Utils::Xml::DecodeEscapedXmlText(cNAMENode.GetText());
    }
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    if(!dateCreatedNode.IsNull())
    {
      m_dateCreated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateCreatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    if(!dateUpdatedNode.IsNull())
    {
      m_dateUpdated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateUpdatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode abortableOperationInProgressNode = resultNode.FirstChild("AbortableOperationInProgress");
    if(!abortableOperationInProgressNode.IsNull())
    {
      m_abortableOperationInProgress = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(abortableOperationInProgressNode.GetText()).c_str()).c_str());
    }
    XmlNode healthNode = resultNode.FirstChild("Health");
    if(!healthNode.IsNull())
    {
      m_health = EnvironmentHealthMapper::GetEnvironmentHealthForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(healthNode.GetText()).c_str()).c_str());
    }
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    if(!healthStatusNode.IsNull())
    {
      m_healthStatus = EnvironmentHealthStatusMapper::GetEnvironmentHealthStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(healthStatusNode.GetText()).c_str()).c_str());
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
      m_environmentArn = Aws::Utils::Xml::DecodeEscapedXmlText(environmentArnNode.GetText());
    }
    XmlNode operationsRoleNode = resultNode.FirstChild("OperationsRole");
    if(!operationsRoleNode.IsNull())
    {
      m_operationsRole = Aws::Utils::Xml::DecodeEscapedXmlText(operationsRoleNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::TerminateEnvironmentResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
