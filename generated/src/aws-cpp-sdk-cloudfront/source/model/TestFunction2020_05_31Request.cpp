/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/TestFunction2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

TestFunction2020_05_31Request::TestFunction2020_05_31Request() : 
    m_nameHasBeenSet(false),
    m_ifMatchHasBeenSet(false),
    m_stage(FunctionStage::NOT_SET),
    m_stageHasBeenSet(false),
    m_eventObjectHasBeenSet(false)
{
}

Aws::String TestFunction2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("TestFunctionRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if(m_stageHasBeenSet)
  {
   XmlNode stageNode = parentNode.CreateChildElement("Stage");
   stageNode.SetText(FunctionStageMapper::GetNameForFunctionStage(m_stage));
  }

  if(m_eventObjectHasBeenSet)
  {
   XmlNode eventObjectNode = parentNode.CreateChildElement("EventObject");
   eventObjectNode.SetText(HashingUtils::Base64Encode(m_eventObject));
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection TestFunction2020_05_31Request::GetRequestSpecificHeaders() const
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
