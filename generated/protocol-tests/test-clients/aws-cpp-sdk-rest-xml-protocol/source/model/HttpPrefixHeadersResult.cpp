/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpPrefixHeadersResult.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

HttpPrefixHeadersResult::HttpPrefixHeadersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

HttpPrefixHeadersResult& HttpPrefixHeadersResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& fooIter = headers.find("x-foo");
  if (fooIter != headers.end()) {
    m_foo = fooIter->second;
    m_fooHasBeenSet = true;
  }

  std::size_t prefixSize = sizeof("x-foo-") - 1;  // subtract the NULL terminator out
  for (const auto& item : headers) {
    std::size_t foundPrefix = item.first.find("x-foo-");

    if (foundPrefix != std::string::npos) {
      m_fooMap[item.first.substr(prefixSize)] = item.second;
      m_fooMapHasBeenSet = true;
    }
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
