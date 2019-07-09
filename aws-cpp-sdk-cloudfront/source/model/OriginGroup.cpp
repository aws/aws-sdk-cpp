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

#include <aws/cloudfront/model/OriginGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

OriginGroup::OriginGroup() : 
    m_idHasBeenSet(false),
    m_failoverCriteriaHasBeenSet(false),
    m_membersHasBeenSet(false)
{
}

OriginGroup::OriginGroup(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_failoverCriteriaHasBeenSet(false),
    m_membersHasBeenSet(false)
{
  *this = xmlNode;
}

OriginGroup& OriginGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = idNode.GetText();
      m_idHasBeenSet = true;
    }
    XmlNode failoverCriteriaNode = resultNode.FirstChild("FailoverCriteria");
    if(!failoverCriteriaNode.IsNull())
    {
      m_failoverCriteria = failoverCriteriaNode;
      m_failoverCriteriaHasBeenSet = true;
    }
    XmlNode membersNode = resultNode.FirstChild("Members");
    if(!membersNode.IsNull())
    {
      m_members = membersNode;
      m_membersHasBeenSet = true;
    }
  }

  return *this;
}

void OriginGroup::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_failoverCriteriaHasBeenSet)
  {
   XmlNode failoverCriteriaNode = parentNode.CreateChildElement("FailoverCriteria");
   m_failoverCriteria.AddToNode(failoverCriteriaNode);
  }

  if(m_membersHasBeenSet)
  {
   XmlNode membersNode = parentNode.CreateChildElement("Members");
   m_members.AddToNode(membersNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
