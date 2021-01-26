/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBClusterSnapshotAttributesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBClusterSnapshotAttributesResult::DBClusterSnapshotAttributesResult() : 
    m_dBClusterSnapshotIdentifierHasBeenSet(false),
    m_dBClusterSnapshotAttributesHasBeenSet(false)
{
}

DBClusterSnapshotAttributesResult::DBClusterSnapshotAttributesResult(const XmlNode& xmlNode) : 
    m_dBClusterSnapshotIdentifierHasBeenSet(false),
    m_dBClusterSnapshotAttributesHasBeenSet(false)
{
  *this = xmlNode;
}

DBClusterSnapshotAttributesResult& DBClusterSnapshotAttributesResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterSnapshotIdentifierNode = resultNode.FirstChild("DBClusterSnapshotIdentifier");
    if(!dBClusterSnapshotIdentifierNode.IsNull())
    {
      m_dBClusterSnapshotIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterSnapshotIdentifierNode.GetText());
      m_dBClusterSnapshotIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterSnapshotAttributesNode = resultNode.FirstChild("DBClusterSnapshotAttributes");
    if(!dBClusterSnapshotAttributesNode.IsNull())
    {
      XmlNode dBClusterSnapshotAttributesMember = dBClusterSnapshotAttributesNode.FirstChild("DBClusterSnapshotAttribute");
      while(!dBClusterSnapshotAttributesMember.IsNull())
      {
        m_dBClusterSnapshotAttributes.push_back(dBClusterSnapshotAttributesMember);
        dBClusterSnapshotAttributesMember = dBClusterSnapshotAttributesMember.NextNode("DBClusterSnapshotAttribute");
      }

      m_dBClusterSnapshotAttributesHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterSnapshotAttributesResult::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBClusterSnapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_dBClusterSnapshotIdentifier.c_str()) << "&";
  }

  if(m_dBClusterSnapshotAttributesHasBeenSet)
  {
      unsigned dBClusterSnapshotAttributesIdx = 1;
      for(auto& item : m_dBClusterSnapshotAttributes)
      {
        Aws::StringStream dBClusterSnapshotAttributesSs;
        dBClusterSnapshotAttributesSs << location << index << locationValue << ".DBClusterSnapshotAttribute." << dBClusterSnapshotAttributesIdx++;
        item.OutputToStream(oStream, dBClusterSnapshotAttributesSs.str().c_str());
      }
  }

}

void DBClusterSnapshotAttributesResult::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBClusterSnapshotIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_dBClusterSnapshotIdentifier.c_str()) << "&";
  }
  if(m_dBClusterSnapshotAttributesHasBeenSet)
  {
      unsigned dBClusterSnapshotAttributesIdx = 1;
      for(auto& item : m_dBClusterSnapshotAttributes)
      {
        Aws::StringStream dBClusterSnapshotAttributesSs;
        dBClusterSnapshotAttributesSs << location <<  ".DBClusterSnapshotAttribute." << dBClusterSnapshotAttributesIdx++;
        item.OutputToStream(oStream, dBClusterSnapshotAttributesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
