/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/Warnings.h>
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

Warnings::Warnings() : 
    m_unrecognizedResourceTypesHasBeenSet(false)
{
}

Warnings::Warnings(const XmlNode& xmlNode) : 
    m_unrecognizedResourceTypesHasBeenSet(false)
{
  *this = xmlNode;
}

Warnings& Warnings::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode unrecognizedResourceTypesNode = resultNode.FirstChild("UnrecognizedResourceTypes");
    if(!unrecognizedResourceTypesNode.IsNull())
    {
      XmlNode unrecognizedResourceTypesMember = unrecognizedResourceTypesNode.FirstChild("member");
      while(!unrecognizedResourceTypesMember.IsNull())
      {
        m_unrecognizedResourceTypes.push_back(unrecognizedResourceTypesMember.GetText());
        unrecognizedResourceTypesMember = unrecognizedResourceTypesMember.NextNode("member");
      }

      m_unrecognizedResourceTypesHasBeenSet = true;
    }
  }

  return *this;
}

void Warnings::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_unrecognizedResourceTypesHasBeenSet)
  {
      unsigned unrecognizedResourceTypesIdx = 1;
      for(auto& item : m_unrecognizedResourceTypes)
      {
        oStream << location << index << locationValue << ".UnrecognizedResourceTypes.member." << unrecognizedResourceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void Warnings::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_unrecognizedResourceTypesHasBeenSet)
  {
      unsigned unrecognizedResourceTypesIdx = 1;
      for(auto& item : m_unrecognizedResourceTypes)
      {
        oStream << location << ".UnrecognizedResourceTypes.member." << unrecognizedResourceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
