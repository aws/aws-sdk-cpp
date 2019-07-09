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

#include <aws/rds/model/DBClusterSnapshotAttribute.h>
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

DBClusterSnapshotAttribute::DBClusterSnapshotAttribute() : 
    m_attributeNameHasBeenSet(false),
    m_attributeValuesHasBeenSet(false)
{
}

DBClusterSnapshotAttribute::DBClusterSnapshotAttribute(const XmlNode& xmlNode) : 
    m_attributeNameHasBeenSet(false),
    m_attributeValuesHasBeenSet(false)
{
  *this = xmlNode;
}

DBClusterSnapshotAttribute& DBClusterSnapshotAttribute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNameNode = resultNode.FirstChild("AttributeName");
    if(!attributeNameNode.IsNull())
    {
      m_attributeName = attributeNameNode.GetText();
      m_attributeNameHasBeenSet = true;
    }
    XmlNode attributeValuesNode = resultNode.FirstChild("AttributeValues");
    if(!attributeValuesNode.IsNull())
    {
      XmlNode attributeValuesMember = attributeValuesNode.FirstChild("AttributeValue");
      while(!attributeValuesMember.IsNull())
      {
        m_attributeValues.push_back(attributeValuesMember.GetText());
        attributeValuesMember = attributeValuesMember.NextNode("AttributeValue");
      }

      m_attributeValuesHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterSnapshotAttribute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }

  if(m_attributeValuesHasBeenSet)
  {
      unsigned attributeValuesIdx = 1;
      for(auto& item : m_attributeValues)
      {
        oStream << location << index << locationValue << ".AttributeValue." << attributeValuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void DBClusterSnapshotAttribute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }
  if(m_attributeValuesHasBeenSet)
  {
      unsigned attributeValuesIdx = 1;
      for(auto& item : m_attributeValues)
      {
        oStream << location << ".AttributeValue." << attributeValuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
