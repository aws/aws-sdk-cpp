/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/UpdateSAMLProviderResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

UpdateSAMLProviderResult::UpdateSAMLProviderResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

UpdateSAMLProviderResult& UpdateSAMLProviderResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "UpdateSAMLProviderResult"))
  {
    resultNode = rootNode.FirstChild("UpdateSAMLProviderResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode sAMLProviderArnNode = resultNode.FirstChild("SAMLProviderArn");
    if(!sAMLProviderArnNode.IsNull())
    {
      m_sAMLProviderArn = Aws::Utils::Xml::DecodeEscapedXmlText(sAMLProviderArnNode.GetText());
      m_sAMLProviderArnHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::UpdateSAMLProviderResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
