/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeGeneratedTemplateResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeGeneratedTemplateResult::DescribeGeneratedTemplateResult() : 
    m_status(GeneratedTemplateStatus::NOT_SET),
    m_totalWarnings(0)
{
}

DescribeGeneratedTemplateResult::DescribeGeneratedTemplateResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(GeneratedTemplateStatus::NOT_SET),
    m_totalWarnings(0)
{
  *this = result;
}

DescribeGeneratedTemplateResult& DescribeGeneratedTemplateResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeGeneratedTemplateResult"))
  {
    resultNode = rootNode.FirstChild("DescribeGeneratedTemplateResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode generatedTemplateIdNode = resultNode.FirstChild("GeneratedTemplateId");
    if(!generatedTemplateIdNode.IsNull())
    {
      m_generatedTemplateId = Aws::Utils::Xml::DecodeEscapedXmlText(generatedTemplateIdNode.GetText());
    }
    XmlNode generatedTemplateNameNode = resultNode.FirstChild("GeneratedTemplateName");
    if(!generatedTemplateNameNode.IsNull())
    {
      m_generatedTemplateName = Aws::Utils::Xml::DecodeEscapedXmlText(generatedTemplateNameNode.GetText());
    }
    XmlNode resourcesNode = resultNode.FirstChild("Resources");
    if(!resourcesNode.IsNull())
    {
      XmlNode resourcesMember = resourcesNode.FirstChild("member");
      while(!resourcesMember.IsNull())
      {
        m_resources.push_back(resourcesMember);
        resourcesMember = resourcesMember.NextNode("member");
      }

    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = GeneratedTemplateStatusMapper::GetGeneratedTemplateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
    }
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode lastUpdatedTimeNode = resultNode.FirstChild("LastUpdatedTime");
    if(!lastUpdatedTimeNode.IsNull())
    {
      m_lastUpdatedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode progressNode = resultNode.FirstChild("Progress");
    if(!progressNode.IsNull())
    {
      m_progress = progressNode;
    }
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = Aws::Utils::Xml::DecodeEscapedXmlText(stackIdNode.GetText());
    }
    XmlNode templateConfigurationNode = resultNode.FirstChild("TemplateConfiguration");
    if(!templateConfigurationNode.IsNull())
    {
      m_templateConfiguration = templateConfigurationNode;
    }
    XmlNode totalWarningsNode = resultNode.FirstChild("TotalWarnings");
    if(!totalWarningsNode.IsNull())
    {
      m_totalWarnings = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalWarningsNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeGeneratedTemplateResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
