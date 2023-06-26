/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/KGKeyPairIds.h>
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

KGKeyPairIds::KGKeyPairIds() : 
    m_keyGroupIdHasBeenSet(false),
    m_keyPairIdsHasBeenSet(false)
{
}

KGKeyPairIds::KGKeyPairIds(const XmlNode& xmlNode) : 
    m_keyGroupIdHasBeenSet(false),
    m_keyPairIdsHasBeenSet(false)
{
  *this = xmlNode;
}

KGKeyPairIds& KGKeyPairIds::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyGroupIdNode = resultNode.FirstChild("KeyGroupId");
    if(!keyGroupIdNode.IsNull())
    {
      m_keyGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(keyGroupIdNode.GetText());
      m_keyGroupIdHasBeenSet = true;
    }
    XmlNode keyPairIdsNode = resultNode.FirstChild("KeyPairIds");
    if(!keyPairIdsNode.IsNull())
    {
      m_keyPairIds = keyPairIdsNode;
      m_keyPairIdsHasBeenSet = true;
    }
  }

  return *this;
}

void KGKeyPairIds::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_keyGroupIdHasBeenSet)
  {
   XmlNode keyGroupIdNode = parentNode.CreateChildElement("KeyGroupId");
   keyGroupIdNode.SetText(m_keyGroupId);
  }

  if(m_keyPairIdsHasBeenSet)
  {
   XmlNode keyPairIdsNode = parentNode.CreateChildElement("KeyPairIds");
   m_keyPairIds.AddToNode(keyPairIdsNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
