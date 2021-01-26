/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CacheParameterGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

CacheParameterGroup::CacheParameterGroup() : 
    m_cacheParameterGroupNameHasBeenSet(false),
    m_cacheParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isGlobal(false),
    m_isGlobalHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
}

CacheParameterGroup::CacheParameterGroup(const XmlNode& xmlNode) : 
    m_cacheParameterGroupNameHasBeenSet(false),
    m_cacheParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isGlobal(false),
    m_isGlobalHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
  *this = xmlNode;
}

CacheParameterGroup& CacheParameterGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheParameterGroupNameNode = resultNode.FirstChild("CacheParameterGroupName");
    if(!cacheParameterGroupNameNode.IsNull())
    {
      m_cacheParameterGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(cacheParameterGroupNameNode.GetText());
      m_cacheParameterGroupNameHasBeenSet = true;
    }
    XmlNode cacheParameterGroupFamilyNode = resultNode.FirstChild("CacheParameterGroupFamily");
    if(!cacheParameterGroupFamilyNode.IsNull())
    {
      m_cacheParameterGroupFamily = Aws::Utils::Xml::DecodeEscapedXmlText(cacheParameterGroupFamilyNode.GetText());
      m_cacheParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode isGlobalNode = resultNode.FirstChild("IsGlobal");
    if(!isGlobalNode.IsNull())
    {
      m_isGlobal = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isGlobalNode.GetText()).c_str()).c_str());
      m_isGlobalHasBeenSet = true;
    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
  }

  return *this;
}

void CacheParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheParameterGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }

  if(m_cacheParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheParameterGroupFamily=" << StringUtils::URLEncode(m_cacheParameterGroupFamily.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_isGlobalHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsGlobal=" << std::boolalpha << m_isGlobal << "&";
  }

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

}

void CacheParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheParameterGroupNameHasBeenSet)
  {
      oStream << location << ".CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }
  if(m_cacheParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".CacheParameterGroupFamily=" << StringUtils::URLEncode(m_cacheParameterGroupFamily.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_isGlobalHasBeenSet)
  {
      oStream << location << ".IsGlobal=" << std::boolalpha << m_isGlobal << "&";
  }
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
