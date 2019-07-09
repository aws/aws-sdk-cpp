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

#include <aws/ec2/model/NetworkAclAssociation.h>
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

NetworkAclAssociation::NetworkAclAssociation() : 
    m_networkAclAssociationIdHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

NetworkAclAssociation::NetworkAclAssociation(const XmlNode& xmlNode) : 
    m_networkAclAssociationIdHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkAclAssociation& NetworkAclAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkAclAssociationIdNode = resultNode.FirstChild("networkAclAssociationId");
    if(!networkAclAssociationIdNode.IsNull())
    {
      m_networkAclAssociationId = networkAclAssociationIdNode.GetText();
      m_networkAclAssociationIdHasBeenSet = true;
    }
    XmlNode networkAclIdNode = resultNode.FirstChild("networkAclId");
    if(!networkAclIdNode.IsNull())
    {
      m_networkAclId = networkAclIdNode.GetText();
      m_networkAclIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = subnetIdNode.GetText();
      m_subnetIdHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkAclAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkAclAssociationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkAclAssociationId=" << StringUtils::URLEncode(m_networkAclAssociationId.c_str()) << "&";
  }

  if(m_networkAclIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkAclId=" << StringUtils::URLEncode(m_networkAclId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

}

void NetworkAclAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkAclAssociationIdHasBeenSet)
  {
      oStream << location << ".NetworkAclAssociationId=" << StringUtils::URLEncode(m_networkAclAssociationId.c_str()) << "&";
  }
  if(m_networkAclIdHasBeenSet)
  {
      oStream << location << ".NetworkAclId=" << StringUtils::URLEncode(m_networkAclId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
