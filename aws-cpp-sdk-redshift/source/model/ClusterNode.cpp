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

#include <aws/redshift/model/ClusterNode.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ClusterNode::ClusterNode() : 
    m_nodeRoleHasBeenSet(false),
    m_privateIPAddressHasBeenSet(false),
    m_publicIPAddressHasBeenSet(false)
{
}

ClusterNode::ClusterNode(const XmlNode& xmlNode) : 
    m_nodeRoleHasBeenSet(false),
    m_privateIPAddressHasBeenSet(false),
    m_publicIPAddressHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterNode& ClusterNode::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nodeRoleNode = resultNode.FirstChild("NodeRole");
    if(!nodeRoleNode.IsNull())
    {
      m_nodeRole = nodeRoleNode.GetText();
      m_nodeRoleHasBeenSet = true;
    }
    XmlNode privateIPAddressNode = resultNode.FirstChild("PrivateIPAddress");
    if(!privateIPAddressNode.IsNull())
    {
      m_privateIPAddress = privateIPAddressNode.GetText();
      m_privateIPAddressHasBeenSet = true;
    }
    XmlNode publicIPAddressNode = resultNode.FirstChild("PublicIPAddress");
    if(!publicIPAddressNode.IsNull())
    {
      m_publicIPAddress = publicIPAddressNode.GetText();
      m_publicIPAddressHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterNode::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nodeRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeRole=" << StringUtils::URLEncode(m_nodeRole.c_str()) << "&";
  }

  if(m_privateIPAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIPAddress=" << StringUtils::URLEncode(m_privateIPAddress.c_str()) << "&";
  }

  if(m_publicIPAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIPAddress=" << StringUtils::URLEncode(m_publicIPAddress.c_str()) << "&";
  }

}

void ClusterNode::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nodeRoleHasBeenSet)
  {
      oStream << location << ".NodeRole=" << StringUtils::URLEncode(m_nodeRole.c_str()) << "&";
  }
  if(m_privateIPAddressHasBeenSet)
  {
      oStream << location << ".PrivateIPAddress=" << StringUtils::URLEncode(m_privateIPAddress.c_str()) << "&";
  }
  if(m_publicIPAddressHasBeenSet)
  {
      oStream << location << ".PublicIPAddress=" << StringUtils::URLEncode(m_publicIPAddress.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
