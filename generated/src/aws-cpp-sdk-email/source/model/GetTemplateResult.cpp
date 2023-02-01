/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetTemplateResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetTemplateResult::GetTemplateResult()
{
}

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
    XmlNode templateNode = resultNode.FirstChild("Template");
    if(!templateNode.IsNull())
    {
      m_template = templateNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetTemplateResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
