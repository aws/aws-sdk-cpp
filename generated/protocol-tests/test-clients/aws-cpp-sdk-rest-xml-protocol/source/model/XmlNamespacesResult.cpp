/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlNamespacesResult.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

XmlNamespacesResult::XmlNamespacesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlNamespacesResult& XmlNamespacesResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode nestedNode = resultNode.FirstChild("nested");
    if (!nestedNode.IsNull()) {
      m_nested = nestedNode;
      m_nestedHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
