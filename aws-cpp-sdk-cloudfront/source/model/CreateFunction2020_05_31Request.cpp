/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CreateFunction2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateFunction2020_05_31Request::CreateFunction2020_05_31Request() : 
    m_nameHasBeenSet(false),
    m_functionConfigHasBeenSet(false),
    m_functionCodeHasBeenSet(false)
{
}

Aws::String CreateFunction2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateFunctionRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

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


