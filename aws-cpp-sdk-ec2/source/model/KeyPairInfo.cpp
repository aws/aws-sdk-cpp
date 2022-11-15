/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/KeyPairInfo.h>
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

KeyPairInfo::KeyPairInfo() : 
    m_keyPairIdHasBeenSet(false),
    m_keyFingerprintHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_keyType(KeyType::NOT_SET),
    m_keyTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

KeyPairInfo::KeyPairInfo(const XmlNode& xmlNode) : 
    m_keyPairIdHasBeenSet(false),
    m_keyFingerprintHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_keyType(KeyType::NOT_SET),
    m_keyTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
  *this = xmlNode;
}

KeyPairInfo& KeyPairInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyPairIdNode = resultNode.FirstChild("keyPairId");
    if(!keyPairIdNode.IsNull())
    {
      m_keyPairId = Aws::Utils::Xml::DecodeEscapedXmlText(keyPairIdNode.GetText());
      m_keyPairIdHasBeenSet = true;
    }
    XmlNode keyFingerprintNode = resultNode.FirstChild("keyFingerprint");
    if(!keyFingerprintNode.IsNull())
    {
      m_keyFingerprint = Aws::Utils::Xml::DecodeEscapedXmlText(keyFingerprintNode.GetText());
      m_keyFingerprintHasBeenSet = true;
    }
    XmlNode keyNameNode = resultNode.FirstChild("keyName");
    if(!keyNameNode.IsNull())
    {
      m_keyName = Aws::Utils::Xml::DecodeEscapedXmlText(keyNameNode.GetText());
      m_keyNameHasBeenSet = true;
    }
    XmlNode keyTypeNode = resultNode.FirstChild("keyType");
    if(!keyTypeNode.IsNull())
    {
      m_keyType = KeyTypeMapper::GetKeyTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(keyTypeNode.GetText()).c_str()).c_str());
      m_keyTypeHasBeenSet = true;
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
    XmlNode publicKeyNode = resultNode.FirstChild("publicKey");
    if(!publicKeyNode.IsNull())
    {
      m_publicKey = Aws::Utils::Xml::DecodeEscapedXmlText(publicKeyNode.GetText());
      m_publicKeyHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
  }

  return *this;
}

void KeyPairInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_keyPairIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KeyPairId=" << StringUtils::URLEncode(m_keyPairId.c_str()) << "&";
  }

  if(m_keyFingerprintHasBeenSet)
  {
      oStream << location << index << locationValue << ".KeyFingerprint=" << StringUtils::URLEncode(m_keyFingerprint.c_str()) << "&";
  }

  if(m_keyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }

  if(m_keyTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".KeyType=" << KeyTypeMapper::GetNameForKeyType(m_keyType) << "&";
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

  if(m_publicKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicKey=" << StringUtils::URLEncode(m_publicKey.c_str()) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void KeyPairInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_keyPairIdHasBeenSet)
  {
      oStream << location << ".KeyPairId=" << StringUtils::URLEncode(m_keyPairId.c_str()) << "&";
  }
  if(m_keyFingerprintHasBeenSet)
  {
      oStream << location << ".KeyFingerprint=" << StringUtils::URLEncode(m_keyFingerprint.c_str()) << "&";
  }
  if(m_keyNameHasBeenSet)
  {
      oStream << location << ".KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }
  if(m_keyTypeHasBeenSet)
  {
      oStream << location << ".KeyType=" << KeyTypeMapper::GetNameForKeyType(m_keyType) << "&";
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
  if(m_publicKeyHasBeenSet)
  {
      oStream << location << ".PublicKey=" << StringUtils::URLEncode(m_publicKey.c_str()) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
