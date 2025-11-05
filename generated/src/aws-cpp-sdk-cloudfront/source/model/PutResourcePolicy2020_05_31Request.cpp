/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/PutResourcePolicy2020_05_31Request.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String PutResourcePolicy2020_05_31Request::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("PutResourcePolicyRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if (m_resourceArnHasBeenSet) {
    XmlNode resourceArnNode = parentNode.CreateChildElement("ResourceArn");
    resourceArnNode.SetText(m_resourceArn);
  }

  if (m_policyDocumentHasBeenSet) {
    XmlNode policyDocumentNode = parentNode.CreateChildElement("PolicyDocument");
    policyDocumentNode.SetText(m_policyDocument);
  }

  return payloadDoc.ConvertToString();
}
