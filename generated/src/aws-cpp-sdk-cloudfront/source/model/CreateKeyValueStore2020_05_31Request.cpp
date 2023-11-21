/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CreateKeyValueStore2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateKeyValueStore2020_05_31Request::CreateKeyValueStore2020_05_31Request() : 
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_importSourceHasBeenSet(false)
{
}

Aws::String CreateKeyValueStore2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateKeyValueStoreRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_importSourceHasBeenSet)
  {
   XmlNode importSourceNode = parentNode.CreateChildElement("ImportSource");
   m_importSource.AddToNode(importSourceNode);
  }

  return payloadDoc.ConvertToString();
}


