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

#include <aws/ec2/model/NetworkAcl.h>
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

NetworkAcl::NetworkAcl() : 
    m_associationsHasBeenSet(false),
    m_entriesHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false)
{
}

NetworkAcl::NetworkAcl(const XmlNode& xmlNode) : 
    m_associationsHasBeenSet(false),
    m_entriesHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkAcl& NetworkAcl::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associationsNode = resultNode.FirstChild("associationSet");
    if(!associationsNode.IsNull())
    {
      XmlNode associationsMember = associationsNode.FirstChild("item");
      while(!associationsMember.IsNull())
      {
        m_associations.push_back(associationsMember);
        associationsMember = associationsMember.NextNode("item");
      }

      m_associationsHasBeenSet = true;
    }
    XmlNode entriesNode = resultNode.FirstChild("entrySet");
    if(!entriesNode.IsNull())
    {
      XmlNode entriesMember = entriesNode.FirstChild("item");
      while(!entriesMember.IsNull())
      {
        m_entries.push_back(entriesMember);
        entriesMember = entriesMember.NextNode("item");
      }

      m_entriesHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("default");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(isDefaultNode.GetText().c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
    XmlNode networkAclIdNode = resultNode.FirstChild("networkAclId");
    if(!networkAclIdNode.IsNull())
    {
      m_networkAclId = networkAclIdNode.GetText();
      m_networkAclIdHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkAcl::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associationsHasBeenSet)
  {
      unsigned associationsIdx = 1;
      for(auto& item : m_associations)
      {
        Aws::StringStream associationsSs;
        associationsSs << location << index << locationValue << ".AssociationSet." << associationsIdx++;
        item.OutputToStream(oStream, associationsSs.str().c_str());
      }
  }

  if(m_entriesHasBeenSet)
  {
      unsigned entriesIdx = 1;
      for(auto& item : m_entries)
      {
        Aws::StringStream entriesSs;
        entriesSs << location << index << locationValue << ".EntrySet." << entriesIdx++;
        item.OutputToStream(oStream, entriesSs.str().c_str());
      }
  }

  if(m_isDefaultHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }

  if(m_networkAclIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkAclId=" << StringUtils::URLEncode(m_networkAclId.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

}

void NetworkAcl::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associationsHasBeenSet)
  {
      unsigned associationsIdx = 1;
      for(auto& item : m_associations)
      {
        Aws::StringStream associationsSs;
        associationsSs << location <<  ".AssociationSet." << associationsIdx++;
        item.OutputToStream(oStream, associationsSs.str().c_str());
      }
  }
  if(m_entriesHasBeenSet)
  {
      unsigned entriesIdx = 1;
      for(auto& item : m_entries)
      {
        Aws::StringStream entriesSs;
        entriesSs << location <<  ".EntrySet." << entriesIdx++;
        item.OutputToStream(oStream, entriesSs.str().c_str());
      }
  }
  if(m_isDefaultHasBeenSet)
  {
      oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
  if(m_networkAclIdHasBeenSet)
  {
      oStream << location << ".NetworkAclId=" << StringUtils::URLEncode(m_networkAclId.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
