/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GetGeneratedTemplateResult.h>
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

GetGeneratedTemplateResult::GetGeneratedTemplateResult() : 
    m_status(GeneratedTemplateStatus::NOT_SET)
{
}

GetGeneratedTemplateResult::GetGeneratedTemplateResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(GeneratedTemplateStatus::NOT_SET)
{
  *this = result;
}

GetGeneratedTemplateResult& GetGeneratedTemplateResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetGeneratedTemplateResult"))
  {
    resultNode = rootNode.FirstChild("GetGeneratedTemplateResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = GeneratedTemplateStatusMapper::GetGeneratedTemplateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode templateBodyNode = resultNode.FirstChild("TemplateBody");
    if(!templateBodyNode.IsNull())
    {
      m_templateBody = Aws::Utils::Xml::DecodeEscapedXmlText(templateBodyNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::GetGeneratedTemplateResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
