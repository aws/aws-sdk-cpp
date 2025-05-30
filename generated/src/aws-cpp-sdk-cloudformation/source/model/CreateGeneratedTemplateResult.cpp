﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/CreateGeneratedTemplateResult.h>
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

CreateGeneratedTemplateResult::CreateGeneratedTemplateResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateGeneratedTemplateResult& CreateGeneratedTemplateResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateGeneratedTemplateResult"))
  {
    resultNode = rootNode.FirstChild("CreateGeneratedTemplateResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode generatedTemplateIdNode = resultNode.FirstChild("GeneratedTemplateId");
    if(!generatedTemplateIdNode.IsNull())
    {
      m_generatedTemplateId = Aws::Utils::Xml::DecodeEscapedXmlText(generatedTemplateIdNode.GetText());
      m_generatedTemplateIdHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::CreateGeneratedTemplateResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
