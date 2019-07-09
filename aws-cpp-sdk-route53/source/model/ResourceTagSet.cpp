/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/route53/model/ResourceTagSet.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

ResourceTagSet::ResourceTagSet() : 
    m_resourceType(TagResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ResourceTagSet::ResourceTagSet(const XmlNode& xmlNode) : 
    m_resourceType(TagResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceTagSet& ResourceTagSet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = TagResourceTypeMapper::GetTagResourceTypeForName(StringUtils::Trim(resourceTypeNode.GetText().c_str()).c_str());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("ResourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = resourceIdNode.GetText();
      m_resourceIdHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceTagSet::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_resourceTypeHasBeenSet)
  {
   XmlNode resourceTypeNode = parentNode.CreateChildElement("ResourceType");
   resourceTypeNode.SetText(TagResourceTypeMapper::GetNameForTagResourceType(m_resourceType));
  }

  if(m_resourceIdHasBeenSet)
  {
   XmlNode resourceIdNode = parentNode.CreateChildElement("ResourceId");
   resourceIdNode.SetText(m_resourceId);
  }

  if(m_tagsHasBeenSet)
  {
   XmlNode tagsParentNode = parentNode.CreateChildElement("Tags");
   for(const auto& item : m_tags)
   {
     XmlNode tagsNode = tagsParentNode.CreateChildElement("Tag");
     item.AddToNode(tagsNode);
   }
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
