/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DBClusterMember.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDB
{
namespace Model
{

DBClusterMember::DBClusterMember() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_isClusterWriter(false),
    m_isClusterWriterHasBeenSet(false),
    m_dBClusterParameterGroupStatusHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false)
{
}

DBClusterMember::DBClusterMember(const XmlNode& xmlNode) : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_isClusterWriter(false),
    m_isClusterWriterHasBeenSet(false),
    m_dBClusterParameterGroupStatusHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false)
{
  *this = xmlNode;
}

DBClusterMember& DBClusterMember::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBInstanceIdentifierNode = resultNode.FirstChild("DBInstanceIdentifier");
    if(!dBInstanceIdentifierNode.IsNull())
    {
      m_dBInstanceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceIdentifierNode.GetText());
      m_dBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode isClusterWriterNode = resultNode.FirstChild("IsClusterWriter");
    if(!isClusterWriterNode.IsNull())
    {
      m_isClusterWriter = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isClusterWriterNode.GetText()).c_str()).c_str());
      m_isClusterWriterHasBeenSet = true;
    }
    XmlNode dBClusterParameterGroupStatusNode = resultNode.FirstChild("DBClusterParameterGroupStatus");
    if(!dBClusterParameterGroupStatusNode.IsNull())
    {
      m_dBClusterParameterGroupStatus = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterParameterGroupStatusNode.GetText());
      m_dBClusterParameterGroupStatusHasBeenSet = true;
    }
    XmlNode promotionTierNode = resultNode.FirstChild("PromotionTier");
    if(!promotionTierNode.IsNull())
    {
      m_promotionTier = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(promotionTierNode.GetText()).c_str()).c_str());
      m_promotionTierHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterMember::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_isClusterWriterHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsClusterWriter=" << std::boolalpha << m_isClusterWriter << "&";
  }

  if(m_dBClusterParameterGroupStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterParameterGroupStatus=" << StringUtils::URLEncode(m_dBClusterParameterGroupStatus.c_str()) << "&";
  }

  if(m_promotionTierHasBeenSet)
  {
      oStream << location << index << locationValue << ".PromotionTier=" << m_promotionTier << "&";
  }

}

void DBClusterMember::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }
  if(m_isClusterWriterHasBeenSet)
  {
      oStream << location << ".IsClusterWriter=" << std::boolalpha << m_isClusterWriter << "&";
  }
  if(m_dBClusterParameterGroupStatusHasBeenSet)
  {
      oStream << location << ".DBClusterParameterGroupStatus=" << StringUtils::URLEncode(m_dBClusterParameterGroupStatus.c_str()) << "&";
  }
  if(m_promotionTierHasBeenSet)
  {
      oStream << location << ".PromotionTier=" << m_promotionTier << "&";
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
