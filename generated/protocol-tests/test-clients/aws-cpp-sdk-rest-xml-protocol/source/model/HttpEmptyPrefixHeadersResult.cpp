/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpEmptyPrefixHeadersResult.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

HttpEmptyPrefixHeadersResult::HttpEmptyPrefixHeadersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

HttpEmptyPrefixHeadersResult& HttpEmptyPrefixHeadersResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
  }

  const auto& headers = result.GetHeaderValueCollection();
  std::size_t prefixSize = sizeof("") - 1;  // subtract the NULL terminator out
  for (const auto& item : headers) {
    std::size_t foundPrefix = item.first.find("");

    if (foundPrefix != std::string::npos) {
      m_prefixHeaders[item.first.substr(prefixSize)] = item.second;
      m_prefixHeadersHasBeenSet = true;
    }
  }

  const auto& specificHeaderIter = headers.find("hello");
  if (specificHeaderIter != headers.end()) {
    m_specificHeader = specificHeaderIter->second;
    m_specificHeaderHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
