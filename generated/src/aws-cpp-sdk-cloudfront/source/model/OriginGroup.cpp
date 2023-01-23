/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
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
