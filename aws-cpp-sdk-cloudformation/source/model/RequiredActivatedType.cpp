/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RequiredActivatedType.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

RequiredActivatedType::RequiredActivatedType() : 
    m_typeNameAliasHasBeenSet(false),
    m_originalTypeNameHasBeenSet(false),
    m_publisherIdHasBeenSet(false),
    m_supportedMajorVersionsHasBeenSet(false)
{
}

RequiredActivatedType::RequiredActivatedType(const XmlNode& xmlNode) : 
    m_typeNameAliasHasBeenSet(false),
    m_originalTypeNameHasBeenSet(false),
    m_publisherIdHasBeenSet(false),
    m_supportedMajorVersionsHasBeenSet(false)
{
  *this = xmlNode;
}

RequiredActivatedType& RequiredActivatedType::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNameAliasNode = resultNode.FirstChild("TypeNameAlias");
    if(!typeNameAliasNode.IsNull())
    {
      m_typeNameAlias = Aws::Utils::Xml::DecodeEscapedXmlText(typeNameAliasNode.GetText());
      m_typeNameAliasHasBeenSet = true;
    }
    XmlNode originalTypeNameNode = resultNode.FirstChild("OriginalTypeName");
    if(!originalTypeNameNode.IsNull())
    {
      m_originalTypeName = Aws::Utils::Xml::DecodeEscapedXmlText(originalTypeNameNode.GetText());
      m_originalTypeNameHasBeenSet = true;
    }
    XmlNode publisherIdNode = resultNode.FirstChild("PublisherId");
    if(!publisherIdNode.IsNull())
    {
      m_publisherId = Aws::Utils::Xml::DecodeEscapedXmlText(publisherIdNode.GetText());
      m_publisherIdHasBeenSet = true;
    }
    XmlNode supportedMajorVersionsNode = resultNode.FirstChild("SupportedMajorVersions");
    if(!supportedMajorVersionsNode.IsNull())
    {
      XmlNode supportedMajorVersionsMember = supportedMajorVersionsNode.FirstChild("member");
      while(!supportedMajorVersionsMember.IsNull())
      {
         m_supportedMajorVersions.push_back(StringUtils::ConvertToInt32(StringUtils::Trim(supportedMajorVersionsMember.GetText().c_str()).c_str()));
        supportedMajorVersionsMember = supportedMajorVersionsMember.NextNode("member");
      }

      m_supportedMajorVersionsHasBeenSet = true;
    }
  }

  return *this;
}

void RequiredActivatedType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeNameAliasHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeNameAlias=" << StringUtils::URLEncode(m_typeNameAlias.c_str()) << "&";
  }

  if(m_originalTypeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OriginalTypeName=" << StringUtils::URLEncode(m_originalTypeName.c_str()) << "&";
  }

  if(m_publisherIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublisherId=" << StringUtils::URLEncode(m_publisherId.c_str()) << "&";
  }

  if(m_supportedMajorVersionsHasBeenSet)
  {
      unsigned supportedMajorVersionsIdx = 1;
      for(auto& item : m_supportedMajorVersions)
      {
        oStream << location << index << locationValue << ".SupportedMajorVersions.member." << supportedMajorVersionsIdx++ << "=" << item << "&";
      }
  }

}

void RequiredActivatedType::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeNameAliasHasBeenSet)
  {
      oStream << location << ".TypeNameAlias=" << StringUtils::URLEncode(m_typeNameAlias.c_str()) << "&";
  }
  if(m_originalTypeNameHasBeenSet)
  {
      oStream << location << ".OriginalTypeName=" << StringUtils::URLEncode(m_originalTypeName.c_str()) << "&";
  }
  if(m_publisherIdHasBeenSet)
  {
      oStream << location << ".PublisherId=" << StringUtils::URLEncode(m_publisherId.c_str()) << "&";
  }
  if(m_supportedMajorVersionsHasBeenSet)
  {
      unsigned supportedMajorVersionsIdx = 1;
      for(auto& item : m_supportedMajorVersions)
      {
        oStream << location << ".SupportedMajorVersions.member." << supportedMajorVersionsIdx++ << "=" << item << "&";
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
