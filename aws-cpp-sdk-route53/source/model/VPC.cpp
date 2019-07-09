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

#include <aws/route53/model/VPC.h>
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

VPC::VPC() : 
    m_vPCRegion(VPCRegion::NOT_SET),
    m_vPCRegionHasBeenSet(false),
    m_vPCIdHasBeenSet(false)
{
}

VPC::VPC(const XmlNode& xmlNode) : 
    m_vPCRegion(VPCRegion::NOT_SET),
    m_vPCRegionHasBeenSet(false),
    m_vPCIdHasBeenSet(false)
{
  *this = xmlNode;
}

VPC& VPC::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vPCRegionNode = resultNode.FirstChild("VPCRegion");
    if(!vPCRegionNode.IsNull())
    {
      m_vPCRegion = VPCRegionMapper::GetVPCRegionForName(StringUtils::Trim(vPCRegionNode.GetText().c_str()).c_str());
      m_vPCRegionHasBeenSet = true;
    }
    XmlNode vPCIdNode = resultNode.FirstChild("VPCId");
    if(!vPCIdNode.IsNull())
    {
      m_vPCId = vPCIdNode.GetText();
      m_vPCIdHasBeenSet = true;
    }
  }

  return *this;
}

void VPC::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_vPCRegionHasBeenSet)
  {
   XmlNode vPCRegionNode = parentNode.CreateChildElement("VPCRegion");
   vPCRegionNode.SetText(VPCRegionMapper::GetNameForVPCRegion(m_vPCRegion));
  }

  if(m_vPCIdHasBeenSet)
  {
   XmlNode vPCIdNode = parentNode.CreateChildElement("VPCId");
   vPCIdNode.SetText(m_vPCId);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
