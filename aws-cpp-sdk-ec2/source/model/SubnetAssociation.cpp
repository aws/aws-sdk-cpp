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

#include <aws/ec2/model/SubnetAssociation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

SubnetAssociation::SubnetAssociation() : 
    m_subnetIdHasBeenSet(false),
    m_state(TransitGatewayMulitcastDomainAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

SubnetAssociation::SubnetAssociation(const XmlNode& xmlNode) : 
    m_subnetIdHasBeenSet(false),
    m_state(TransitGatewayMulitcastDomainAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

SubnetAssociation& SubnetAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayMulitcastDomainAssociationStateMapper::GetTransitGatewayMulitcastDomainAssociationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void SubnetAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayMulitcastDomainAssociationStateMapper::GetNameForTransitGatewayMulitcastDomainAssociationState(m_state) << "&";
  }

}

void SubnetAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayMulitcastDomainAssociationStateMapper::GetNameForTransitGatewayMulitcastDomainAssociationState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
