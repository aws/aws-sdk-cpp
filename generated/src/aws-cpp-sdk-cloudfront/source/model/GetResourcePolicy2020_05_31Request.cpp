/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/GetResourcePolicy2020_05_31Request.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String GetResourcePolicy2020_05_31Request::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("GetResourcePolicyRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if (m_resourceArnHasBeenSet) {
    XmlNode resourceArnNode = parentNode.CreateChildElement("ResourceArn");
    resourceArnNode.SetText(m_resourceArn);
  }

  return payloadDoc.ConvertToString();
}
