/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/UpdateTrustStore2020_05_31Request.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String UpdateTrustStore2020_05_31Request::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CaCertificatesBundleSource");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  m_caCertificatesBundleSource.AddToNode(parentNode);
  if (parentNode.HasChildren()) {
    return payloadDoc.ConvertToString();
  }

  return {};
}

Aws::Http::HeaderValueCollection UpdateTrustStore2020_05_31Request::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_ifMatchHasBeenSet) {
    ss << m_ifMatch;
    headers.emplace("if-match", ss.str());
    ss.str("");
  }

  return headers;
}
