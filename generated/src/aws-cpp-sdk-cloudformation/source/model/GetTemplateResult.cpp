﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GetTemplateResult.h>
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

GetTemplateResult::GetTemplateResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetTemplateResult& GetTemplateResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetTemplateResult"))
  {
    resultNode = rootNode.FirstChild("GetTemplateResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode templateBodyNode = resultNode.FirstChild("TemplateBody");
    if(!templateBodyNode.IsNull())
    {
      m_templateBody = Aws::Utils::Xml::DecodeEscapedXmlText(templateBodyNode.GetText());
      m_templateBodyHasBeenSet = true;
    }
    XmlNode stagesAvailableNode = resultNode.FirstChild("StagesAvailable");
    if(!stagesAvailableNode.IsNull())
    {
      XmlNode stagesAvailableMember = stagesAvailableNode.FirstChild("member");
      m_stagesAvailableHasBeenSet = !stagesAvailableMember.IsNull();
      while(!stagesAvailableMember.IsNull())
      {
        m_stagesAvailable.push_back(TemplateStageMapper::GetTemplateStageForName(StringUtils::Trim(stagesAvailableMember.GetText().c_str())));
        stagesAvailableMember = stagesAvailableMember.NextNode("member");
      }

      m_stagesAvailableHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::GetTemplateResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
