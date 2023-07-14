/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DetectStackDriftResult.h>
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

DetectStackDriftResult::DetectStackDriftResult()
{
}

DetectStackDriftResult::DetectStackDriftResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DetectStackDriftResult& DetectStackDriftResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DetectStackDriftResult"))
  {
    resultNode = rootNode.FirstChild("DetectStackDriftResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode stackDriftDetectionIdNode = resultNode.FirstChild("StackDriftDetectionId");
    if(!stackDriftDetectionIdNode.IsNull())
    {
      m_stackDriftDetectionId = Aws::Utils::Xml::DecodeEscapedXmlText(stackDriftDetectionIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DetectStackDriftResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
