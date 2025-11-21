/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/ListDelegationRequestsResult.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListDelegationRequestsResult::ListDelegationRequestsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

ListDelegationRequestsResult& ListDelegationRequestsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListDelegationRequestsResult")) {
    resultNode = rootNode.FirstChild("ListDelegationRequestsResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode delegationRequestsNode = resultNode.FirstChild("DelegationRequests");
    if (!delegationRequestsNode.IsNull()) {
      XmlNode delegationRequestsMember = delegationRequestsNode.FirstChild("member");
      m_delegationRequestsHasBeenSet = !delegationRequestsMember.IsNull();
      while (!delegationRequestsMember.IsNull()) {
        m_delegationRequests.push_back(delegationRequestsMember);
        delegationRequestsMember = delegationRequestsMember.NextNode("member");
      }

      m_delegationRequestsHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if (!markerNode.IsNull()) {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("isTruncated");
    if (!isTruncatedNode.IsNull()) {
      m_isTruncated =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::ListDelegationRequestsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
