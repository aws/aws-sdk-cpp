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
