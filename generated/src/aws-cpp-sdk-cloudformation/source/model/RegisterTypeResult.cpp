/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RegisterTypeResult.h>
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

RegisterTypeResult::RegisterTypeResult()
{
}

RegisterTypeResult::RegisterTypeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RegisterTypeResult& RegisterTypeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RegisterTypeResult"))
  {
    resultNode = rootNode.FirstChild("RegisterTypeResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode registrationTokenNode = resultNode.FirstChild("RegistrationToken");
    if(!registrationTokenNode.IsNull())
    {
      m_registrationToken = Aws::Utils::Xml::DecodeEscapedXmlText(registrationTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::RegisterTypeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
