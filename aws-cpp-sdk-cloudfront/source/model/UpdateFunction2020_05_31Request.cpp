/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/UpdateFunction2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

UpdateFunction2020_05_31Request::UpdateFunction2020_05_31Request() : 
    m_nameHasBeenSet(false),
    m_ifMatchHasBeenSet(false),
    m_functionConfigHasBeenSet(false),
    m_functionCodeHasBeenSet(false)
{
}

Aws::String UpdateFunction2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("UpdateFunctionRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if(m_functionConfigHasBeenSet)
  {
   XmlNode functionConfigNode = parentNode.CreateChildElement("FunctionConfig");
   m_functionConfig.AddToNode(functionConfigNode);
  }

  if(m_functionCodeHasBeenSet)
  {
   XmlNode functionCodeNode = parentNode.CreateChildElement("FunctionCode");
   functionCodeNode.SetText(HashingUtils::Base64Encode(m_functionCode));
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection UpdateFunction2020_05_31Request::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.emplace("if-match",  ss.str());
    ss.str("");
  }

  return headers;
}
