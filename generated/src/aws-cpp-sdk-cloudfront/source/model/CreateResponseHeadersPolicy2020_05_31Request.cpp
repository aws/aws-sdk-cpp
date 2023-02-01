/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CreateResponseHeadersPolicy2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateResponseHeadersPolicy2020_05_31Request::CreateResponseHeadersPolicy2020_05_31Request() : 
    m_responseHeadersPolicyConfigHasBeenSet(false)
{
}

Aws::String CreateResponseHeadersPolicy2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("ResponseHeadersPolicyConfig");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  m_responseHeadersPolicyConfig.AddToNode(parentNode);
  if(parentNode.HasChildren())
  {
    return payloadDoc.ConvertToString();
  }

  return {};
}


