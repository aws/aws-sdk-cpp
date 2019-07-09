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

#include <aws/rds/model/DBSnapshotAttributesResult.h>
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

DBSnapshotAttributesResult::DBSnapshotAttributesResult() : 
    m_dBSnapshotIdentifierHasBeenSet(false),
    m_dBSnapshotAttributesHasBeenSet(false)
{
}

DBSnapshotAttributesResult::DBSnapshotAttributesResult(const XmlNode& xmlNode) : 
    m_dBSnapshotIdentifierHasBeenSet(false),
    m_dBSnapshotAttributesHasBeenSet(false)
{
  *this = xmlNode;
}

DBSnapshotAttributesResult& DBSnapshotAttributesResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBSnapshotIdentifierNode = resultNode.FirstChild("DBSnapshotIdentifier");
    if(!dBSnapshotIdentifierNode.IsNull())
    {
      m_dBSnapshotIdentifier = dBSnapshotIdentifierNode.GetText();
      m_dBSnapshotIdentifierHasBeenSet = true;
    }
    XmlNode dBSnapshotAttributesNode = resultNode.FirstChild("DBSnapshotAttributes");
    if(!dBSnapshotAttributesNode.IsNull())
    {
      XmlNode dBSnapshotAttributesMember = dBSnapshotAttributesNode.FirstChild("DBSnapshotAttribute");
      while(!dBSnapshotAttributesMember.IsNull())
      {
        m_dBSnapshotAttributes.push_back(dBSnapshotAttributesMember);
        dBSnapshotAttributesMember = dBSnapshotAttributesMember.NextNode("DBSnapshotAttribute");
      }

      m_dBSnapshotAttributesHasBeenSet = true;
    }
  }

  return *this;
}

void DBSnapshotAttributesResult::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_dBSnapshotAttributesHasBeenSet)
  {
      unsigned dBSnapshotAttributesIdx = 1;
      for(auto& item : m_dBSnapshotAttributes)
      {
        Aws::StringStream dBSnapshotAttributesSs;
        dBSnapshotAttributesSs << location << index << locationValue << ".DBSnapshotAttribute." << dBSnapshotAttributesIdx++;
        item.OutputToStream(oStream, dBSnapshotAttributesSs.str().c_str());
      }
  }

}

void DBSnapshotAttributesResult::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
      oStream << location << ".DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }
  if(m_dBSnapshotAttributesHasBeenSet)
  {
      unsigned dBSnapshotAttributesIdx = 1;
      for(auto& item : m_dBSnapshotAttributes)
      {
        Aws::StringStream dBSnapshotAttributesSs;
        dBSnapshotAttributesSs << location <<  ".DBSnapshotAttribute." << dBSnapshotAttributesIdx++;
        item.OutputToStream(oStream, dBSnapshotAttributesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
