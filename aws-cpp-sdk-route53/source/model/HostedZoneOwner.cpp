/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/HostedZoneOwner.h>
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

HostedZoneOwner::HostedZoneOwner() : 
    m_owningAccountHasBeenSet(false),
    m_owningServiceHasBeenSet(false)
{
}

HostedZoneOwner::HostedZoneOwner(const XmlNode& xmlNode) : 
    m_owningAccountHasBeenSet(false),
    m_owningServiceHasBeenSet(false)
{
  *this = xmlNode;
}

HostedZoneOwner& HostedZoneOwner::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode owningAccountNode = resultNode.FirstChild("OwningAccount");
    if(!owningAccountNode.IsNull())
    {
      m_owningAccount = Aws::Utils::Xml::DecodeEscapedXmlText(owningAccountNode.GetText());
      m_owningAccountHasBeenSet = true;
    }
    XmlNode owningServiceNode = resultNode.FirstChild("OwningService");
    if(!owningServiceNode.IsNull())
    {
      m_owningService = Aws::Utils::Xml::DecodeEscapedXmlText(owningServiceNode.GetText());
      m_owningServiceHasBeenSet = true;
    }
  }

  return *this;
}

void HostedZoneOwner::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_owningAccountHasBeenSet)
  {
   XmlNode owningAccountNode = parentNode.CreateChildElement("OwningAccount");
   owningAccountNode.SetText(m_owningAccount);
  }

  if(m_owningServiceHasBeenSet)
  {
   XmlNode owningServiceNode = parentNode.CreateChildElement("OwningService");
   owningServiceNode.SetText(m_owningService);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
