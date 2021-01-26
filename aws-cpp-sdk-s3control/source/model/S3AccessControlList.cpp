/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3AccessControlList.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

S3AccessControlList::S3AccessControlList() : 
    m_ownerHasBeenSet(false),
    m_grantsHasBeenSet(false)
{
}

S3AccessControlList::S3AccessControlList(const XmlNode& xmlNode) : 
    m_ownerHasBeenSet(false),
    m_grantsHasBeenSet(false)
{
  *this = xmlNode;
}

S3AccessControlList& S3AccessControlList::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerNode = resultNode.FirstChild("Owner");
    if(!ownerNode.IsNull())
    {
      m_owner = ownerNode;
      m_ownerHasBeenSet = true;
    }
    XmlNode grantsNode = resultNode.FirstChild("Grants");
    if(!grantsNode.IsNull())
    {
      XmlNode grantsMember = grantsNode.FirstChild("member");
      while(!grantsMember.IsNull())
      {
        m_grants.push_back(grantsMember);
        grantsMember = grantsMember.NextNode("member");
      }

      m_grantsHasBeenSet = true;
    }
  }

  return *this;
}

void S3AccessControlList::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_ownerHasBeenSet)
  {
   XmlNode ownerNode = parentNode.CreateChildElement("Owner");
   m_owner.AddToNode(ownerNode);
  }

  if(m_grantsHasBeenSet)
  {
   XmlNode grantsParentNode = parentNode.CreateChildElement("Grants");
   for(const auto& item : m_grants)
   {
     XmlNode grantsNode = grantsParentNode.CreateChildElement("S3Grant");
     item.AddToNode(grantsNode);
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
