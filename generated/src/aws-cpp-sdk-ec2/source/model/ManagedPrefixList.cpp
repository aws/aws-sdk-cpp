/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ManagedPrefixList.h>
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

ManagedPrefixList::ManagedPrefixList() : 
    m_prefixListIdHasBeenSet(false),
    m_addressFamilyHasBeenSet(false),
    m_state(PrefixListState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateMessageHasBeenSet(false),
    m_prefixListArnHasBeenSet(false),
    m_prefixListNameHasBeenSet(false),
    m_maxEntries(0),
    m_maxEntriesHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ownerIdHasBeenSet(false)
{
}

ManagedPrefixList::ManagedPrefixList(const XmlNode& xmlNode) : 
    m_prefixListIdHasBeenSet(false),
    m_addressFamilyHasBeenSet(false),
    m_state(PrefixListState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateMessageHasBeenSet(false),
    m_prefixListArnHasBeenSet(false),
    m_prefixListNameHasBeenSet(false),
    m_maxEntries(0),
    m_maxEntriesHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ownerIdHasBeenSet(false)
{
  *this = xmlNode;
}

ManagedPrefixList& ManagedPrefixList::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode prefixListIdNode = resultNode.FirstChild("prefixListId");
    if(!prefixListIdNode.IsNull())
    {
      m_prefixListId = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListIdNode.GetText());
      m_prefixListIdHasBeenSet = true;
    }
    XmlNode addressFamilyNode = resultNode.FirstChild("addressFamily");
    if(!addressFamilyNode.IsNull())
    {
      m_addressFamily = Aws::Utils::Xml::DecodeEscapedXmlText(addressFamilyNode.GetText());
      m_addressFamilyHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = PrefixListStateMapper::GetPrefixListStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode stateMessageNode = resultNode.FirstChild("stateMessage");
    if(!stateMessageNode.IsNull())
    {
      m_stateMessage = Aws::Utils::Xml::DecodeEscapedXmlText(stateMessageNode.GetText());
      m_stateMessageHasBeenSet = true;
    }
    XmlNode prefixListArnNode = resultNode.FirstChild("prefixListArn");
    if(!prefixListArnNode.IsNull())
    {
      m_prefixListArn = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListArnNode.GetText());
      m_prefixListArnHasBeenSet = true;
    }
    XmlNode prefixListNameNode = resultNode.FirstChild("prefixListName");
    if(!prefixListNameNode.IsNull())
    {
      m_prefixListName = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListNameNode.GetText());
      m_prefixListNameHasBeenSet = true;
    }
    XmlNode maxEntriesNode = resultNode.FirstChild("maxEntries");
    if(!maxEntriesNode.IsNull())
    {
      m_maxEntries = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxEntriesNode.GetText()).c_str()).c_str());
      m_maxEntriesHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("version");
    if(!versionNode.IsNull())
    {
      m_version = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(versionNode.GetText()).c_str()).c_str());
      m_versionHasBeenSet = true;
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
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
  }

  return *this;
}

void ManagedPrefixList::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_addressFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".AddressFamily=" << StringUtils::URLEncode(m_addressFamily.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << PrefixListStateMapper::GetNameForPrefixListState(m_state) << "&";
  }

  if(m_stateMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }

  if(m_prefixListArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListArn=" << StringUtils::URLEncode(m_prefixListArn.c_str()) << "&";
  }

  if(m_prefixListNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListName=" << StringUtils::URLEncode(m_prefixListName.c_str()) << "&";
  }

  if(m_maxEntriesHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxEntries=" << m_maxEntries << "&";
  }

  if(m_versionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Version=" << m_version << "&";
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

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

}

void ManagedPrefixList::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }
  if(m_addressFamilyHasBeenSet)
  {
      oStream << location << ".AddressFamily=" << StringUtils::URLEncode(m_addressFamily.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << PrefixListStateMapper::GetNameForPrefixListState(m_state) << "&";
  }
  if(m_stateMessageHasBeenSet)
  {
      oStream << location << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
  if(m_prefixListArnHasBeenSet)
  {
      oStream << location << ".PrefixListArn=" << StringUtils::URLEncode(m_prefixListArn.c_str()) << "&";
  }
  if(m_prefixListNameHasBeenSet)
  {
      oStream << location << ".PrefixListName=" << StringUtils::URLEncode(m_prefixListName.c_str()) << "&";
  }
  if(m_maxEntriesHasBeenSet)
  {
      oStream << location << ".MaxEntries=" << m_maxEntries << "&";
  }
  if(m_versionHasBeenSet)
  {
      oStream << location << ".Version=" << m_version << "&";
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
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
