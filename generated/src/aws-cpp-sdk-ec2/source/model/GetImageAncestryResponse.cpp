/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetImageAncestryResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetImageAncestryResponse::GetImageAncestryResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetImageAncestryResponse& GetImageAncestryResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetImageAncestryResponse")) {
    resultNode = rootNode.FirstChild("GetImageAncestryResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode imageAncestryEntriesNode = resultNode.FirstChild("imageAncestryEntrySet");
    if (!imageAncestryEntriesNode.IsNull()) {
      XmlNode imageAncestryEntriesMember = imageAncestryEntriesNode.FirstChild("item");
      m_imageAncestryEntriesHasBeenSet = !imageAncestryEntriesMember.IsNull();
      while (!imageAncestryEntriesMember.IsNull()) {
        m_imageAncestryEntries.push_back(imageAncestryEntriesMember);
        imageAncestryEntriesMember = imageAncestryEntriesMember.NextNode("item");
      }

      m_imageAncestryEntriesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetImageAncestryResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
