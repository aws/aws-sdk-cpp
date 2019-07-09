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

#include <aws/ec2/model/AssociatedTargetNetwork.h>
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

AssociatedTargetNetwork::AssociatedTargetNetwork() : 
    m_networkIdHasBeenSet(false),
    m_networkType(AssociatedNetworkType::NOT_SET),
    m_networkTypeHasBeenSet(false)
{
}

AssociatedTargetNetwork::AssociatedTargetNetwork(const XmlNode& xmlNode) : 
    m_networkIdHasBeenSet(false),
    m_networkType(AssociatedNetworkType::NOT_SET),
    m_networkTypeHasBeenSet(false)
{
  *this = xmlNode;
}

AssociatedTargetNetwork& AssociatedTargetNetwork::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkIdNode = resultNode.FirstChild("networkId");
    if(!networkIdNode.IsNull())
    {
      m_networkId = networkIdNode.GetText();
      m_networkIdHasBeenSet = true;
    }
    XmlNode networkTypeNode = resultNode.FirstChild("networkType");
    if(!networkTypeNode.IsNull())
    {
      m_networkType = AssociatedNetworkTypeMapper::GetAssociatedNetworkTypeForName(StringUtils::Trim(networkTypeNode.GetText().c_str()).c_str());
      m_networkTypeHasBeenSet = true;
    }
  }

  return *this;
}

void AssociatedTargetNetwork::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkId=" << StringUtils::URLEncode(m_networkId.c_str()) << "&";
  }

  if(m_networkTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkType=" << AssociatedNetworkTypeMapper::GetNameForAssociatedNetworkType(m_networkType) << "&";
  }

}

void AssociatedTargetNetwork::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkIdHasBeenSet)
  {
      oStream << location << ".NetworkId=" << StringUtils::URLEncode(m_networkId.c_str()) << "&";
  }
  if(m_networkTypeHasBeenSet)
  {
      oStream << location << ".NetworkType=" << AssociatedNetworkTypeMapper::GetNameForAssociatedNetworkType(m_networkType) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
