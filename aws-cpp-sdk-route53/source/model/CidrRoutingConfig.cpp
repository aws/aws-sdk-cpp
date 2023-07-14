/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CidrRoutingConfig.h>
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

CidrRoutingConfig::CidrRoutingConfig() : 
    m_collectionIdHasBeenSet(false),
    m_locationNameHasBeenSet(false)
{
}

CidrRoutingConfig::CidrRoutingConfig(const XmlNode& xmlNode) : 
    m_collectionIdHasBeenSet(false),
    m_locationNameHasBeenSet(false)
{
  *this = xmlNode;
}

CidrRoutingConfig& CidrRoutingConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode collectionIdNode = resultNode.FirstChild("CollectionId");
    if(!collectionIdNode.IsNull())
    {
      m_collectionId = Aws::Utils::Xml::DecodeEscapedXmlText(collectionIdNode.GetText());
      m_collectionIdHasBeenSet = true;
    }
    XmlNode locationNameNode = resultNode.FirstChild("LocationName");
    if(!locationNameNode.IsNull())
    {
      m_locationName = Aws::Utils::Xml::DecodeEscapedXmlText(locationNameNode.GetText());
      m_locationNameHasBeenSet = true;
    }
  }

  return *this;
}

void CidrRoutingConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_collectionIdHasBeenSet)
  {
   XmlNode collectionIdNode = parentNode.CreateChildElement("CollectionId");
   collectionIdNode.SetText(m_collectionId);
  }

  if(m_locationNameHasBeenSet)
  {
   XmlNode locationNameNode = parentNode.CreateChildElement("LocationName");
   locationNameNode.SetText(m_locationName);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
