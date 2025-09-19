/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/PutWithContentEncodingRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String PutWithContentEncodingRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("PutWithContentEncodingRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if (m_dataHasBeenSet) {
    XmlNode dataNode = parentNode.CreateChildElement("data");
    dataNode.SetText(m_data);
  }

  return payloadDoc.ConvertToString();
}

Aws::Http::HeaderValueCollection PutWithContentEncodingRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_encodingHasBeenSet) {
    ss << m_encoding;
    headers.emplace("content-encoding", ss.str());
    ss.str("");
  }

  return headers;
}

#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
Aws::Client::CompressionAlgorithm PutWithContentEncodingRequest::GetSelectedCompressionAlgorithm(
    Aws::Client::RequestCompressionConfig config) const {
  if (config.useRequestCompression == Aws::Client::UseRequestCompression::DISABLE) {
    return Aws::Client::CompressionAlgorithm::NONE;
  }

  const auto& body = AmazonSerializableWebServiceRequest::GetBody();
  body->seekg(0, body->end);
  size_t bodySize = body->tellg();
  body->seekg(0, body->beg);
  if (bodySize < config.requestMinCompressionSizeBytes) {
    return Aws::Client::CompressionAlgorithm::NONE;
  } else {
    return Aws::Client::CompressionAlgorithm::GZIP;
  }
}
#endif
