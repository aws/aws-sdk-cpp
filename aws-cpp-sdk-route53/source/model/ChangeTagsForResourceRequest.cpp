/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/route53/model/ChangeTagsForResourceRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ChangeTagsForResourceRequest::ChangeTagsForResourceRequest() : 
    m_resourceType(TagResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_addTagsHasBeenSet(false),
    m_removeTagKeysHasBeenSet(false)
{
}

Aws::String ChangeTagsForResourceRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("ChangeTagsForResourceRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_addTagsHasBeenSet)
  {
   XmlNode addTagsParentNode = parentNode.CreateChildElement("AddTags");
   for(const auto& item : m_addTags)
   {
     XmlNode addTagsNode = addTagsParentNode.CreateChildElement("Tag");
     item.AddToNode(addTagsNode);
   }
  }

  if(m_removeTagKeysHasBeenSet)
  {
   XmlNode removeTagKeysParentNode = parentNode.CreateChildElement("RemoveTagKeys");
   for(const auto& item : m_removeTagKeys)
   {
     XmlNode removeTagKeysNode = removeTagKeysParentNode.CreateChildElement("TagKey");
     removeTagKeysNode.SetText(item);
   }
  }

  return payloadDoc.ConvertToString();
}


