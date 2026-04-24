/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersServerResult.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

NullAndEmptyHeadersServerResult::NullAndEmptyHeadersServerResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

NullAndEmptyHeadersServerResult& NullAndEmptyHeadersServerResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& aIter = headers.find("x-a");
  if (aIter != headers.end()) {
    m_a = aIter->second;
    m_aHasBeenSet = true;
  }

  const auto& bIter = headers.find("x-b");
  if (bIter != headers.end()) {
    m_b = bIter->second;
    m_bHasBeenSet = true;
  }

  const auto& cIter = headers.find("x-c");
  if (cIter != headers.end()) {
    m_cHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
