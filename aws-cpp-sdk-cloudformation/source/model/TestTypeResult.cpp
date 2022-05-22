/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TestTypeResult.h>
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

TestTypeResult::TestTypeResult()
{
}

TestTypeResult::TestTypeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

TestTypeResult& TestTypeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "TestTypeResult"))
  {
    resultNode = rootNode.FirstChild("TestTypeResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode typeVersionArnNode = resultNode.FirstChild("TypeVersionArn");
    if(!typeVersionArnNode.IsNull())
    {
      m_typeVersionArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeVersionArnNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::TestTypeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
