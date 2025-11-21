/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeEventsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeEventsResult::DescribeEventsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

DescribeEventsResult& DescribeEventsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeEventsResult")) {
    resultNode = rootNode.FirstChild("DescribeEventsResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode operationEventsNode = resultNode.FirstChild("OperationEvents");
    if (!operationEventsNode.IsNull()) {
      XmlNode operationEventsMember = operationEventsNode.FirstChild("member");
      m_operationEventsHasBeenSet = !operationEventsMember.IsNull();
      while (!operationEventsMember.IsNull()) {
        m_operationEvents.push_back(operationEventsMember);
        operationEventsMember = operationEventsMember.NextNode("member");
      }

      m_operationEventsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeEventsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
